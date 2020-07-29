---
title: Inizializzazione di assembly misti
ms.date: 03/09/2018
helpviewer_keywords:
- mixed assemblies [C++], loader lock
- loader lock [C++]
- initializing mixed assemblies
- deadlocks [C++]
- .cctor [C++]
- custom locales [C++]
- mixed assemblies [C++], initilizing
ms.assetid: bfab7d9e-f323-4404-bcb8-712b15f831eb
ms.openlocfilehash: c0f84474e86f0287469a31c310ab0e7e70c8a22c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225644"
---
# <a name="initialization-of-mixed-assemblies"></a>Inizializzazione di assembly misti

Quando si esegue il codice durante, gli sviluppatori Windows devono sempre prestare attenzione al blocco del caricatore `DllMain` . Tuttavia, esistono alcuni aspetti aggiuntivi da considerare quando si gestiscono assembly in modalità mista C++/CLR.

Il codice all'interno di [DllMain](/windows/win32/Dlls/dllmain) non deve accedere a .NET Common Language Runtime (CLR). Ciò significa che non `DllMain` deve effettuare chiamate a funzioni gestite, direttamente o indirettamente, nessun codice gestito deve essere dichiarato o implementato in `DllMain` e non deve essere eseguito alcun Garbage Collection o il caricamento automatico della libreria all'interno di `DllMain` .

## <a name="causes-of-loader-lock"></a>Cause del blocco del caricatore

Con l'introduzione della piattaforma .NET, sono disponibili due meccanismi distinti per il caricamento di un modulo di esecuzione (EXE o DLL): uno per Windows, che viene usato per i moduli non gestiti e uno per CLR, che carica gli assembly .NET. Il problema del caricamento delle DLL miste verte intorno al caricatore del sistema operativo Microsoft Windows.

Quando in un processo viene caricato un assembly contenente solo costrutti .NET, il caricatore CLR stesso può eseguire tutte le necessarie attività di inizializzazione e caricamento. Tuttavia, per assembly misti è necessario usare anche il caricatore di Windows, dal momento che gli assembly possono contenere codice e dati nativi.

Il caricatore di Windows garantisce che nessun codice possa accedere al codice o ai dati nella DLL prima che sia stato inizializzato e che nessun codice possa caricare in modo ridondante la DLL mentre è parzialmente inizializzata. A tale scopo, il caricatore di Windows usa una sezione processo-globale critica (spesso chiamata "blocco del caricatore") che impedisce l'accesso non sicuro durante l'inizializzazione del modulo. Ne deriva che il processo di caricamento è vulnerabile a molti classici scenari di deadlock. Per gli assembly misti, i due scenari seguenti aumentano il rischio di deadlock:

- Prima di tutto, se gli utenti tentano di eseguire funzioni compilate in Microsoft Intermediate Language (MSIL) quando il blocco del caricatore viene mantenuto ( `DllMain` ad esempio, da o in inizializzatori statici) può causare un deadlock. Si consideri il caso in cui la funzione MSIL fa riferimento a un tipo in un assembly che non è stato caricato. CLR tenterà di caricare automaticamente l'assembly, il quale potrebbe richiedere al caricatore di Windows di attivare il blocco sul blocco del caricatore. Si verifica un deadlock, perché il blocco del caricatore è già stato utilizzato dal codice in precedenza nella sequenza di chiamate. Tuttavia, l'esecuzione di codice MSIL con il blocco del caricatore non garantisce che si verifichi un deadlock, rendendo difficile la diagnosi e la correzione di questo scenario. In alcune circostanze, ad esempio quando la DLL del tipo a cui si fa riferimento non contiene costrutti nativi e tutte le relative dipendenze non contengono costrutti nativi, il caricatore di Windows non è necessario per caricare l'assembly .NET del tipo a cui si fa riferimento. Inoltre, l'assembly richiesto o le relative dipendenze .NET/native miste possono essere già state caricate da altro codice. Di conseguenza, il verificarsi di un deadlock può essere difficile da prevedere e può variare a seconda della configurazione della macchina di destinazione.

- In secondo luogo, quando si caricano le dll nelle versioni 1,0 e 1,1 del .NET Framework, CLR presuppone che il blocco del caricatore non sia stato mantenuto e che siano state eseguite diverse azioni che non sono valide con il blocco del caricatore. Supponendo che il blocco del caricatore non venga mantenuto è un presupposto valido per le DLL puramente .NET, ma, poiché le DLL miste eseguono routine di inizializzazione native, richiedono il caricatore di Windows nativo e quindi il blocco del caricatore. Di conseguenza, anche se lo sviluppatore non tentava di eseguire funzioni MSIL durante l'inizializzazione delle DLL, esisteva comunque una piccola possibilità che si verificasse un deadlock non deterministico con le versioni 1.0 e 1.1 di .NET Framework.

Questo comportamento non deterministico è stato quasi totalmente rimosso dal processo di caricamento delle DLL miste. Questa operazione è stata eseguita con queste modifiche:

- CLR non si basa più su falsi presupposti durante il caricamento di DLL miste.

- L'inizializzazione gestita e non gestita viene eseguita in due fasi separate e distinte. L'inizializzazione non gestita viene eseguita prima (tramite DllMain) e l'inizializzazione gestita viene eseguita in un secondo momento, tramite un. Costrutto supportato da NET `.cctor` . L'inizializzazione gestita è completamente trasparente all'utente, a meno che non si usi **/Zl** o **/NODEFAULTLIB** . Per altre informazioni, vedere[/NODEFAULTLIB (Ignore Libraries)](../build/reference/nodefaultlib-ignore-libraries.md) e [/Zl (Omit Default Library Name)](../build/reference/zl-omit-default-library-name.md) .

Il blocco del caricatore può comunque ancora verificarsi, ma avviene in modo riproducibile e pertanto è individuabile. Se `DllMain` contiene istruzioni MSIL, il compilatore genera un avviso di avviso [del compilatore (livello 1) C4747](../error-messages/compiler-warnings/compiler-warning-level-1-c4747.md). Inoltre, CRT o CLR tenteranno di rilevare e segnalare gli eventuali tentativi di eseguire codice MSIL con il blocco del caricatore attivo. Il rilevamento di CRT genererà l'errore R6033 di runtime del linguaggio C.

Di seguito vengono descritti altri scenari nei quali il codice MSIL può essere eseguito con il blocco del caricatore attivo. Vengono anche fornite le soluzioni possibili per ciascun scenario e le tecniche di debug.

## <a name="scenarios-and-workarounds"></a>Scenari e soluzioni alternative

Ci sono diverse situazioni in cui il codice utente può eseguire codice MSIL con il blocco del caricatore attivo. Lo sviluppatore deve garantire che l'implementazione del codice utente non tenti di eseguire istruzioni MSIL in nessuna di queste circostanze. Nelle seguenti sottosezioni vengono descritte tutte le possibilità e viene indicato come risolvere i problemi nei casi più frequenti.

### <a name="dllmain"></a>DllMain

La `DllMain` funzione è un punto di ingresso definito dall'utente per una dll. Salvo diversamente specificato dall'utente, la funzione `DllMain` viene richiamata ogni volta che un processo o un thread si connette o si disconnette dalla DLL che lo contiene. Poiché questa chiamata può verificarsi mentre il blocco del caricatore è attivo, in MSIL non deve essere compilata nessuna funzione `DllMain` fornita dall'utente. Inoltre, nessuna funzione nella struttura ad albero delle chiamate che ha origine nella funzione `DllMain` può essere compilata in MSIL. Per risolvere questi problemi, il blocco di codice che definisce `DllMain` deve essere modificato con un blocco #pragma `unmanaged`. Lo stesso vale per ciascuna funzione chiamata da `DllMain` .

Nei casi in cui queste funzioni devono chiamare una funzione che richiede un'implementazione MSIL per altri contesti di chiamata, è possibile usare una strategia di duplicazione in cui vengono create sia una versione .NET che una versione nativa della stessa funzione.

In alternativa, se la funzione `DllMain` non è necessaria o non richiede l'esecuzione con il blocco del caricatore attivo, è possibile rimuovere l'implementazione di `DllMain` fornita dall'utente, risolvendo così il problema.

Se la funzione DllMain tenta di eseguire codice MSIL direttamente, verrà restituito un [Compiler Warning (level 1) C4747](../error-messages/compiler-warnings/compiler-warning-level-1-c4747.md) . Il compilatore, tuttavia, non rileva i casi in cui DllMain chiama una funzione in un altro modulo che a sua volta tenta di eseguire codice MSIL.

Per ulteriori informazioni su questo scenario, vedere la pagina relativa [agli ostacoli alla diagnosi](#impediments-to-diagnosis).

### <a name="initializing-static-objects"></a>Inizializzazione di oggetti statici

L'inizializzazione di oggetti statici può determinare un deadlock se è richiesto un inizializzatore dinamico. Per i casi più semplici, ad esempio quando una variabile statica viene assegnata a un valore noto in fase di compilazione, non è necessaria alcuna inizializzazione dinamica, quindi non esiste alcun rischio di deadlock. Per le variabili statiche inizializzate da chiamate di funzioni, chiamate di costruttore o espressioni che non possono essere calcolate in fase di compilazione è tuttavia necessario disporre del codice da eseguire durante l'inizializzazione del modulo.

Nel codice riportato di seguito vengono illustrati esempi di inizializzatori statici che richiedono l'inizializzazione dinamica: una chiamata di funzione, una costruzione di oggetto e l'inizializzazione di un puntatore. (Questi esempi non sono statici, ma si presuppone che siano definiti nell'ambito globale, che ha lo stesso effetto).

```cpp
// dynamic initializer function generated
int a = init();
CObject o(arg1, arg2);
CObject* op = new CObject(arg1, arg2);
```

Un deadlock si verifica con maggiori probabilità se il modulo contenente viene compilato con **/clr** e se verrà eseguito codice MSIL. In particolare, se la variabile statica viene compilata senza **/clr** (o risiede in un blocco #pragma `unmanaged` ) e l'inizializzatore dinamico richiesto per inizializzarla determina l'esecuzione di istruzioni MSIL, è possibile che si verifichi il deadlock. Questo perché, per i moduli compilati senza **/CLR**, l'inizializzazione di variabili statiche viene eseguita da DllMain. Al contrario, le variabili statiche compilate con **/CLR** vengono inizializzate da `.cctor` , dopo il completamento della fase di inizializzazione non gestita e il rilascio del blocco del caricatore.

Esistono numerose soluzioni per il deadlock causato dall'inizializzazione dinamica di variabili statiche (elencate indicativamente in ordine di tempo richiesto per correggere il problema):

- Il file di origine contenente la variabile statica può essere compilato con **/clr**.

- Tutte le funzioni chiamate dalla variabile statica possono essere compilate in codice nativo usando la direttiva #pragma `unmanaged` .

- È possibile clonare manualmente il codice da cui dipende la variabile statica, fornendo sia una versione .NET sia una versione nativa con nomi diversi. Gli sviluppatori possono quindi chiamare la versione nativa dagli inizializzatori statici nativi e la versione .NET da altri punti.

### <a name="user-supplied-functions-affecting-startup"></a>Funzioni fornite dall'utente che influiscono sull'avvio

Esistono numerose funzioni fornite dall'utente da cui dipendono le librerie per l'inizializzazione durante l'avvio. Ad esempio, in caso di overload globale di operatori in C++, ad esempio **`new`** gli **`delete`** operatori e, le versioni fornite dall'utente vengono usate ovunque, incluse le funzioni di inizializzazione e distruzione della libreria standard c++. Di conseguenza, la libreria standard C++ e gli inizializzatori statici forniti dall'utente richiameranno qualsiasi versione fornita dall'utente di questi operatori.

Se le versioni fornite dall'utente sono compilate in MSIL, questi inizializzatori tenteranno di eseguire le istruzioni MSIL mentre il blocco del caricatore è attivo. Un oggetto fornito dall'utente `malloc` ha le stesse conseguenze. Per risolvere il problema, tutti questi overload o tutte queste definizioni fornite dall'utente devono essere implementate come codice nativo usando la direttiva il #pragma `unmanaged` .

Per ulteriori informazioni su questo scenario, vedere la pagina relativa [agli ostacoli alla diagnosi](#impediments-to-diagnosis).

### <a name="custom-locales"></a>Impostazioni locali personalizzate

Se l'utente fornisce impostazioni locali globali personalizzate, queste impostazioni locali verranno usate per l'inizializzazione di tutti i flussi I/O futuri, inclusi i flussi che vengono inizializzati in modo statico. Se l'oggetto impostazioni locali globali viene compilato in codice MSIL, è possibile che le funzioni membro dell'oggetto impostazioni locali compilate in MSIL siano richiamate mentre il blocco del caricatore è attivo.

Esistono tre soluzioni a questo problema:

I file di origine contenenti tutte le definizioni globali di flusso I/O possono essere compilati usando l'opzione **/clr** . Impedisce l'esecuzione degli inizializzatori statici con il blocco del caricatore.

Le definizioni di funzione impostazioni locali personalizzate possono essere compilate in codice nativo usando la direttiva il #pragma `unmanaged` .

Si consiglia di non impostare le impostazioni locali personalizzate come impostazioni locali globali fintato che il blocco del caricatore non viene rilasciato. Configurare quindi in modo esplicito i flussi I/O creati durante l'inizializzazione con le impostazioni locali personalizzate.

## <a name="impediments-to-diagnosis"></a>Limiti alla diagnosi

In alcuni casi, è difficile rilevare l'origine dei deadlock. Nelle sottosezioni riportate di seguito vengono descritti questi scenari e i modi per ovviare ai problemi.

### <a name="implementation-in-headers"></a>Implementazione nei file di intestazione

In certi casi, le implementazioni delle funzioni all'interno dei file di intestazione possono complicare la diagnostica. Le funzioni inline e il codice di modello richiedono entrambi la specifica di funzioni in un file di intestazione.  Il linguaggio C++ specifica la regola di definizione unica, in base alla quale tutte le implementazioni di funzioni con lo stesso nome si equivalgono a livello semantico. Di conseguenza, per il linker di C++ non sono necessarie considerazioni speciali quando si esegue l'unione di file oggetto per i quali sono disponibili implementazioni duplicate di una data funzione.

Prima di Visual Studio 2005, il linker sceglie semplicemente la più grande tra le definizioni semanticamente equivalenti, per gestire le dichiarazioni e gli scenari in cui vengono usate opzioni di ottimizzazione differenti per file di origine diversi. Viene creato un problema per le DLL miste native/. NET.

Poiché la stessa intestazione può essere inclusa sia da file C++ con **/CLR** abilitato che disabilitato, oppure è possibile eseguire il wrapper di un #include all'interno di un `#pragma unmanaged` blocco, è possibile che siano presenti sia le versioni MSIL che quelle native di funzioni che forniscono implementazioni nelle intestazioni. Le implementazioni MSIL e native hanno una semantica differente in relazione all'inizializzazione con il blocco del caricatore attivo. Questo viola effettivamente la regola di definizione unica. Di conseguenza, quando il linker sceglie l'implementazione più lunga, è possibile che adotti la versione MSIL di una funzione, anche se è stata compilata in modo esplicito in codice nativo in un altro punto usando la direttiva #pragma non gestita. Per assicurarsi che una versione MSIL di una funzione modello o inline non sia mai chiamata con il blocco del caricatore, ogni definizione di tale funzione chiamata con il blocco del caricatore deve essere modificata con la `#pragma unmanaged` direttiva. Se il file di intestazione è di terze parti, il modo più semplice per apportare questa modifica consiste nel push e nella pop della `#pragma unmanaged` direttiva intorno alla direttiva #include per il file di intestazione che causa il problema. (Per un esempio [, vedere Managed, unmanaged](../preprocessor/managed-unmanaged.md) ). Tuttavia, questa strategia non funzionerà per le intestazioni che contengono altro codice che deve chiamare direttamente le API .NET.

Per facilitare la gestione del blocco del caricatore da parte degli utenti, il linker sceglierà l'implementazione nativa invece dell'implementazione gestita, se presenti entrambe. Questa impostazione predefinita evita i problemi precedenti. In questa versione ci sono tuttavia due eccezioni a questa regola a causa di due problemi irrisolti con il compilatore:

- La chiamata a una funzione inline avviene tramite un puntatore a funzione statico globale. Questo scenario è rilevante perché le funzioni virtuali vengono chiamate tramite puntatori a funzione globali. ad esempio:

```cpp
#include "definesmyObject.h"
#include "definesclassC.h"

typedef void (*function_pointer_t)();

function_pointer_t myObject_p = &myObject;

#pragma unmanaged
void DuringLoaderlock(C & c)
{
    // Either of these calls could resolve to a managed implementation,
    // at link-time, even if a native implementation also exists.
    c.VirtualMember();
    myObject_p();
}
```

### <a name="diagnosing-in-debug-mode"></a>Diagnosi in modalità di debug

Tutte le diagnosi di problemi di blocco del caricatore devono essere eseguite con build di debug. È possibile che le build di rilascio non producano informazioni utili per la diagnostica e che le ottimizzazioni eseguite in modalità di rilascio mascherino codice MSIL in presenza di scenari di blocco del caricatore.

## <a name="how-to-debug-loader-lock-issues"></a>Come eseguire il debug dei problemi di blocco del caricatore

La diagnostica generata da CLR quando viene richiamata una funzione MSIL causa la sospensione dell'esecuzione di CLR. A sua volta, il debugger in modalità mista Visual C++ viene sospeso anche quando si esegue il debug in-process. Tuttavia, quando ci si connette al processo, non è possibile ottenere un stack gestito per l'oggetto del debug usando il debugger misto.

Per identificare la funzione MSIL specifica chiamata con il blocco del caricatore attivato, gli sviluppatori devono effettuare quanto riportato di seguito:

1. Assicurarsi che siano disponibili simboli per mscoree.dll e mscorwks.dll.

   È possibile rendere i simboli disponibili in due modi. È innanzitutto possibile aggiungere i PDB per mscoree.dll e mscorwks.dll al percorso di ricerca dei simboli. Per aggiungerli, aprire la finestra di dialogo Opzioni percorso di ricerca simboli. Scegliere **Opzioni**dal menu **strumenti** . Nel riquadro sinistro della finestra di dialogo **Opzioni** aprire il nodo **debug** e scegliere **simboli**. Aggiungere il percorso dei file mscoree.dll e PDB mscorwks.dll all'elenco di ricerca. Questi file PDB sono installati in %VSINSTALLDIR%\SDK\v2.0\symbols. Scegliere **OK**.

   È anche possibile scaricare i file PDB per mscoree.dll e mscorwks.dll da Microsoft Symbol Server. Per configurare Microsoft Symbol Server, aprire la finestra di dialogo contenente le opzioni del percorso di ricerca dei simboli. Scegliere **Opzioni**dal menu **strumenti** . Nel riquadro sinistro della finestra di dialogo **Opzioni** aprire il nodo **debug** e scegliere **simboli**. Aggiungere questo percorso di ricerca all'elenco di ricerca: `https://msdl.microsoft.com/download/symbols` . Aggiungere una directory cache per i simboli nella casella di testo relativa alla cache del server di simboli. Scegliere **OK**.

1. Impostare la modalità del debugger sulla modalità solo nativa.

   Aprire la griglia delle **Proprietà** per il progetto di avvio nella soluzione. Selezionare **proprietà di configurazione**  >  **debug**. Impostare il **tipo di debugger** su **solo nativo**.

1. Avviare il debugger (F5).

1. Quando viene generata la diagnostica **/CLR** , scegliere **Riprova** , quindi scegliere **Interrompi**.

1. Aprire la finestra dello stack di chiamate Sulla barra dei menu scegliere debug. **Debug**  >  **Windows**  >  **Stack di chiamate**.) L' `DllMain` inizializzatore statico o offensivo viene identificato con una freccia verde. Se la funzione che crea il problema non viene identificata, è necessario eseguire la procedura riportata di seguito per trovarla.

1. Aprire la finestra di **controllo immediato** (sulla barra dei menu scegliere **debug**  >  **Windows**  >  **immediate**).

1. Immettere `.load sos.dll` nella finestra di **controllo immediato** per caricare il servizio di debug SOS.

1. Immettere `!dumpstack` nella finestra di **controllo immediato** per ottenere un elenco completo dello stack **/CLR** interno.

1. Individuare la prima istanza (più vicina alla fine dello stack) di _CorDllMain (se `DllMain` causa il problema) o _VTableBootstrapThunkInitHelperStub o GetTargetForVTableEntry (se un inizializzatore statico causa il problema). La voce riportata sotto questa chiamata corrisponde alla chiamata della funzione implementata MSIL che ha tentato l'esecuzione con il blocco del caricatore attivo.

1. Passare al file di origine e al numero di riga identificato nel passaggio precedente e correggere il problema usando gli scenari e le soluzioni descritti nella sezione scenari.

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

Nell'esempio seguente viene illustrato come evitare il blocco del caricatore spostando `DllMain` il codice da nel costruttore di un oggetto globale.

In questo esempio è presente un oggetto gestito globale il cui costruttore contiene l'oggetto gestito originariamente in `DllMain` . La seconda parte di questo esempio fa riferimento all'assembly, creando un'istanza dell'oggetto gestito per richiamare il costruttore del modulo che esegue l'inizializzazione.

### <a name="code"></a>Codice

```cpp
// initializing_mixed_assemblies.cpp
// compile with: /clr /LD
#pragma once
#include <stdio.h>
#include <windows.h>
struct __declspec(dllexport) A {
   A() {
      System::Console::WriteLine("Module ctor initializing based on global instance of class.\n");
   }

   void Test() {
      printf_s("Test called so linker does not throw away unused object.\n");
   }
};

#pragma unmanaged
// Global instance of object
A obj;

extern "C"
BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved) {
   // Remove all managed code from here and put it in constructor of A.
   return true;
}
```

In questo esempio vengono illustrati i problemi di inizializzazione degli assembly misti:

```cpp
// initializing_mixed_assemblies_2.cpp
// compile with: /clr initializing_mixed_assemblies.lib
#include <windows.h>
using namespace System;
#include <stdio.h>
#using "initializing_mixed_assemblies.dll"
struct __declspec(dllimport) A {
   void Test();
};

int main() {
   A obj;
   obj.Test();
}
```

Questo codice genera l'output seguente:

```Output
Module ctor initializing based on global instance of class.

Test called so linker does not throw away unused object.
```

## <a name="see-also"></a>Vedere anche

[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)
