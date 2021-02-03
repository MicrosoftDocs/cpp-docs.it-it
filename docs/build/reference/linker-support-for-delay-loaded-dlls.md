---
description: 'Altre informazioni su: supporto del linker per le dll a caricamento ritardato'
title: Supporto per le DLL a caricamento ritardato nel linker
ms.date: 01/19/2021
helpviewer_keywords:
- delayed loading of DLLs, linker support
ms.openlocfilehash: 02991d6ac409ef301e326eea63ece8c5c7775010
ms.sourcegitcommit: c20734f18d3d49bb38b1628c68b53b54b3eeeb03
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2021
ms.locfileid: "99522417"
---
# <a name="linker-support-for-delay-loaded-dlls"></a>Supporto per le DLL a caricamento ritardato nel linker

Il linker MSVC supporta il caricamento ritardato delle dll. Questa funzionalità consente di evitare la necessità di utilizzare le funzioni di Windows SDK [`LoadLibrary`](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryw) e [`GetProcAddress`](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress) di implementare il caricamento ritardato delle dll.

Senza il caricamento posticipato, l'unico modo per caricare una DLL in fase di esecuzione è tramite `LoadLibrary` e `GetProcAddress` ; il sistema operativo carica la dll quando viene caricato il file eseguibile o la dll che lo utilizza.

Con il caricamento ritardato, quando si collega in modo implicito una DLL, il linker fornisce le opzioni per ritardare il caricamento della DLL fino a quando il programma non chiama una funzione in tale DLL.

Un'applicazione può ritardare il caricamento di una DLL usando l'opzione del linker [ `/DELAYLOAD` (importazione a caricamento ritardato)](delayload-delay-load-import.md) con una funzione helper. (L'implementazione di una funzione di supporto predefinita viene fornita da Microsoft). La funzione helper carica la DLL su richiesta in fase di esecuzione chiamando `LoadLibrary` e `GetProcAddress` per l'utente.

Provare a ritardare il caricamento di una DLL se:

- È possibile che il programma non chiami una funzione nella DLL.

- Una funzione nella DLL potrebbe non essere chiamata fino alla fine dell'esecuzione del programma.

Il caricamento ritardato di una DLL può essere specificato durante la compilazione di un progetto EXE o DLL. Un progetto di DLL che ritarda il caricamento di una o più dll non deve chiamare un punto di ingresso a caricamento ritardato in `DllMain` .

## <a name="specify-dlls-to-delay-load"></a><a name="specify-dlls-to-delay-load"></a> Specificare le dll per ritardare il caricamento

È possibile specificare le DLL di cui ritardare il caricamento utilizzando l' [`/delayload:`*`dllname`*](delayload-delay-load-import.md) opzione del linker. Se non si prevede di usare la propria versione di una funzione di supporto, è necessario collegare anche il programma a *`delayimp.lib`* (per le applicazioni desktop) o *`dloadhelper.lib`* (per le app UWP).

Ecco un semplice esempio di caricamento ritardato di una DLL:

```cpp
// cl t.cpp user32.lib delayimp.lib  /link /DELAYLOAD:user32.dll
#include <windows.h>
// uncomment these lines to remove .libs from command line
// #pragma comment(lib, "delayimp")
// #pragma comment(lib, "user32")

int main() {
   // user32.dll will load at this point
   MessageBox(NULL, "Hello", "Hello", MB_OK);
}
```

Compilare la versione DEBUG del progetto. Eseguire il codice un'istruzione alla volta utilizzando il debugger. si noterà che *`user32.dll`* viene caricato solo quando si effettua la chiamata a `MessageBox` .

## <a name="explicitly-unload-a-delay-loaded-dll"></a><a name="explicitly-unload-a-delay-loaded-dll"></a> Scarica in modo esplicito una DLL a caricamento ritardato

L' [`/delay:unload`](delay-delay-load-import-settings.md) opzione del linker consente al codice di scaricare in modo esplicito una dll a caricamento ritardato. Per impostazione predefinita, le importazioni a caricamento ritardato rimangono nella tabella di indirizzi di importazione (IAT). Tuttavia, se si usa **`/delay:unload`** nella riga di comando del linker, la funzione helper supporta lo scaricamento esplicito della dll tramite una `__FUnloadDelayLoadedDLL2` chiamata e reimposta la tabella IAT sul formato originale. I puntatori Now-non validi vengono sovrascritti. La tabella IAT è un campo della [`ImgDelayDescr`](understanding-the-helper-function.md#calling-conventions-parameters-and-return-type) struttura che contiene l'indirizzo di una copia della IAT originale, se disponibile.

### <a name="example-of-unloading-a-delay-loaded-dll"></a>Esempio di scaricamento di una DLL a caricamento ritardato

In questo esempio viene illustrato come scaricare in modo esplicito una DLL, *`MyDll.dll`* , che contiene una funzione `fnMyDll` :

```C
// link with /link /DELAYLOAD:MyDLL.dll /DELAY:UNLOAD
#include <windows.h>
#include <delayimp.h>
#include "MyDll.h"
#include <stdio.h>

#pragma comment(lib, "delayimp")
#pragma comment(lib, "MyDll")
int main()
{
    BOOL TestReturn;
    // MyDLL.DLL will load at this point
    fnMyDll();

    //MyDLL.dll will unload at this point
    TestReturn = __FUnloadDelayLoadedDLL2("MyDll.dll");

    if (TestReturn)
        printf_s("\nDLL was unloaded");
    else
        printf_s("\nDLL was not unloaded");
}
```

Note importanti per lo scaricamento di una DLL a caricamento ritardato:

- È possibile trovare l'implementazione della `__FUnloadDelayLoadedDLL2` funzione nel file *`delayhlp.cpp`* , nella *`include`* directory MSVC Per altre informazioni, vedere [comprendere la funzione di supporto per il caricamento ritardato](understanding-the-helper-function.md).

- Il *`name`* parametro della `__FUnloadDelayLoadedDLL2` funzione deve corrispondere esattamente a quello contenuto nella libreria di importazione. (Tale stringa si trova anche nella tabella Import dell'immagine). È possibile visualizzare il contenuto della libreria di importazione usando [`DUMPBIN /DEPENDENTS`](dependents.md) . Se si preferisce una corrispondenza di stringa senza distinzione tra maiuscole e minuscole, è possibile `__FUnloadDelayLoadedDLL2` eseguire l'aggiornamento per usare una delle funzioni stringa CRT senza distinzione tra maiuscole e minuscole o una chiamata API Windows.

## <a name="bind-delay-loaded-imports"></a><a name="bind-delay-loaded-imports"></a> Associare le importazioni a caricamento ritardato

Il comportamento predefinito del linker consiste nel creare una tabella di indirizzi di importazione (IAT) associabile per la DLL a caricamento ritardato. Se la DLL è associata, la funzione helper tenta di utilizzare le informazioni relative al limite anziché chiamare `GetProcAddress` su ognuna delle importazioni a cui si fa riferimento. Se il timestamp o l'indirizzo preferito non corrisponde a quello della DLL caricata, la funzione di supporto presuppone che la tabella degli indirizzi di importazione associata non sia aggiornata. Continua come se la tabella IAT non esiste.

Se non si intende associare le importazioni a caricamento ritardato di una DLL, specificare [`/delay:nobind`](delay-delay-load-import-settings.md) nella riga di comando del linker. Il linker non genererà la tabella di indirizzi di importazione associata, che consente di risparmiare spazio nel file di immagine.

## <a name="load-all-imports-for-a-delay-loaded-dll"></a><a name="load-all-imports-for-a-delay-loaded-dll"></a> Carica tutte le importazioni per una DLL a caricamento ritardato

La `__HrLoadAllImportsForDll` funzione, definita in *`delayhlp.cpp`* , indica al linker di caricare tutte le importazioni da una DLL specificata con l' [`/delayload`](delayload-delay-load-import.md) opzione del linker.

Quando si caricano tutte le importazioni contemporaneamente, è possibile centralizzare la gestione degli errori in un'unica posizione. È possibile evitare la gestione strutturata delle eccezioni per tutte le chiamate effettive alle importazioni. Viene inoltre evitata una situazione in cui l'applicazione ha esito negativo in un processo: ad esempio, se il codice di supporto non riesce a caricare un'importazione, dopo il caricamento di altri utenti.

`__HrLoadAllImportsForDll`La chiamata di non comporta la modifica del comportamento degli hook e della gestione degli errori. Per ulteriori informazioni, vedere la pagina [relativa alla gestione degli errori e alla notifica](error-handling-and-notification.md).

`__HrLoadAllImportsForDll` esegue un confronto con distinzione tra maiuscole e minuscole e il nome archiviato all'interno della DLL.

Di seguito è riportato un esempio che usa `__HrLoadAllImportsForDll` in una funzione chiamata `TryDelayLoadAllImports` per tentare di caricare una DLL denominata. Usa una funzione, `CheckDelayException` , per determinare il comportamento dell'eccezione.

```C
int CheckDelayException(int exception_value)
{
    if (exception_value == VcppException(ERROR_SEVERITY_ERROR, ERROR_MOD_NOT_FOUND) ||
        exception_value == VcppException(ERROR_SEVERITY_ERROR, ERROR_PROC_NOT_FOUND))
    {
        // This example just executes the handler.
        return EXCEPTION_EXECUTE_HANDLER;
    }
    // Don't attempt to handle other errors
    return EXCEPTION_CONTINUE_SEARCH;
}

bool TryDelayLoadAllImports(LPCSTR szDll)
{
    __try
    {
        HRESULT hr = __HrLoadAllImportsForDll(szDll);
        if (FAILED(hr))
        {
            // printf_s("Failed to delay load functions from %s\n", szDll);
            return false;
        }
    }
    __except (CheckDelayException(GetExceptionCode()))
    {
        // printf_s("Delay load exception for %s\n", szDll);
        return false;
    }
    // printf_s("Delay load completed for %s\n", szDll);
    return true;
}
```

È possibile utilizzare il risultato di `TryDelayLoadAllImports` per controllare se le funzioni di importazione vengono chiamate o meno.

## <a name="error-handling-and-notification"></a>Gestione e notifica degli errori

Se il programma usa dll a caricamento ritardato, deve gestire gli errori in tutta affidabilità. Gli errori che si verificano durante l'esecuzione del programma provocheranno eccezioni non gestite. Per ulteriori informazioni sulla gestione e sulla notifica degli errori di caricamento ritardato della DLL, vedere [gestione e notifica degli errori](error-handling-and-notification.md).

## <a name="dump-delay-loaded-imports"></a><a name="dump-delay-loaded-imports"></a> Dump di importazioni a caricamento ritardato

È possibile scaricare le importazioni a caricamento ritardato utilizzando [`DUMPBIN /IMPORTS`](imports-dumpbin.md) . Queste importazioni vengono visualizzate con informazioni leggermente diverse rispetto alle importazioni standard. Sono separate nella relativa sezione dell' `/imports` elenco e sono etichettate in modo esplicito come importazioni a caricamento ritardato. Se le informazioni di scaricamento sono presenti nell'immagine, questo è indicato. Se sono presenti informazioni di binding, l'indicatore di data e ora della DLL di destinazione viene segnalato insieme agli indirizzi associati delle importazioni.

## <a name="constraints-on-delay-load-dlls"></a><a name="constraints-on-delay-load-dlls"></a> Vincoli per le dll a caricamento ritardato

Il caricamento ritardato delle importazioni DLL presenta diversi vincoli.

- Non è possibile supportare le importazioni di dati. Una soluzione alternativa consiste nell'gestire in modo esplicito l'importazione dei dati usando `LoadLibrary` (oppure usando [`GetModuleHandle`](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulehandlew) dopo aver caricato la dll dal supporto per il caricamento ritardato) e `GetProcAddress` .

- Il caricamento ritardato *`Kernel32.dll`* non è supportato. Per il corretto funzionamento delle routine di supporto del caricamento ritardato, è necessario caricare questa DLL.

- Il [Binding](#bind-delay-loaded-imports) dei punti di ingresso non è supportato.

- Un processo può avere un comportamento diverso se una DLL viene caricata in ritardo, anziché caricata all'avvio. Si può notare se sono presenti inizializzazioni per processo che si verificano nel punto di ingresso della DLL a caricamento ritardato. Altri casi includono TLS statico (archiviazione thread-local), dichiarata con [`__declspec(thread)`](../../cpp/thread.md) , che non viene gestita quando la dll viene caricata tramite `LoadLibrary` . Il protocollo TLS dinamico [`TlsAlloc`](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsalloc) , [`TlsFree`](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsfree) che utilizza,, [`TlsGetValue`](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsgetvalue) e [`TlsSetValue`](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlssetvalue) , è ancora disponibile per l'utilizzo in DLL statiche o a caricamento ritardato.

- Reinizializza i puntatori a funzioni globali statiche alle funzioni importate dopo la prima chiamata di ogni funzione. Questo è necessario perché il primo utilizzo di un puntatore a funzione punta al thunk, non alla funzione caricata.

- Attualmente non è possibile ritardare il caricamento di solo procedure specifiche da una DLL usando il meccanismo di importazione normale.

- Le convenzioni di chiamata personalizzate, ad esempio l'uso di codici di condizione nelle architetture x86, non sono supportate. Inoltre, i registri a virgola mobile non vengono salvati su alcuna piattaforma. Prestare attenzione se la routine di helper personalizzata o le routine hook usano tipi a virgola mobile: le routine devono salvare e ripristinare lo stato completo a virgola mobile nei computer che usano le convenzioni di chiamata del registro con i parametri a virgola mobile. Prestare attenzione al caricamento ritardato della DLL CRT, in particolare se si chiamano funzioni CRT che accettano parametri a virgola mobile in uno stack di elaborazione dati numerici (NDP) nella funzione Help.

## <a name="understand-the-delay-load-helper-function"></a>Informazioni sulla funzione di supporto del caricamento ritardato

La funzione di supporto per il caricamento ritardato supportato dal linker è quella che carica effettivamente la DLL in fase di esecuzione. È possibile modificare la funzione helper per personalizzarne il comportamento. Anziché utilizzare la funzione helper fornita in *`delayimp.lib`* , scrivere una funzione personalizzata e collegarla al programma. Una funzione helper serve tutte le dll a caricamento ritardato. Per altre informazioni, vedere [comprendere la funzione di supporto per il caricamento ritardato](understanding-the-helper-function.md) e [sviluppare una funzione di supporto personalizzata](understanding-the-helper-function.md#develop-your-own-helper-function).

## <a name="see-also"></a>Vedi anche

[Creare DLL C/C++ in Visual Studio](../dlls-in-visual-cpp.md)<br/>
[Informazioni di riferimento sul linker MSVC](linking.md)
