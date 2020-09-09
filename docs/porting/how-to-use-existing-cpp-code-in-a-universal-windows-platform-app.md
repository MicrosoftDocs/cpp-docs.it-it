---
title: "Procedura: Usare codice C++ esistente in un'app UWP (Universal Windows Platform)"
description: Modi per usare le app e le librerie di codice esistenti in app piattaforma UWP (Universal Windows Platform).
ms.date: 09/04/2020
ms.assetid: 87e5818c-3081-42f3-a30d-3dca2cf0645c
ms.openlocfilehash: 1e946d588f1a14018ebb11a60b319c2d54658f25
ms.sourcegitcommit: 0df2b7ab4e81284c5248e4584767591dcc1950c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/09/2020
ms.locfileid: "89609137"
---
# <a name="how-to-use-existing-c-code-in-a-universal-windows-platform-app"></a>Procedura: Usare codice C++ esistente in un'app UWP (Universal Windows Platform)

Esistono diversi modi in cui è possibile utilizzare il codice C++ esistente in progetti piattaforma UWP (Universal Windows Platform) (UWP). Alcuni metodi non richiedono che il codice venga ricompilato con le estensioni del componente (C++/CX) abilitate (ovvero con l' `/ZW` opzione) e altre. Potrebbe essere necessario mantenere il codice in C++ standard o preservare un ambiente di compilazione Win32 classico per codice. È comunque possibile eseguire questa operazione con le scelte di architettura appropriate. Si consideri tutto il codice che contiene l'interfaccia utente e i tipi di UWP esposti a chiamanti C#, Visual Basic e JavaScript. Questo codice deve trovarsi nei progetti di app di Windows e nei progetti di componenti Windows Runtime. Il codice che viene chiamato solo da C++ (incluso C++/CX) può essere incluso in un progetto compilato con l' `/ZW` opzione o un progetto C++ standard. Il codice solo binario che non usa API non consentite può essere usato tramite il collegamento come libreria statica. In alternativa, è possibile creare un pacchetto con l'app come contenuto e caricarlo in una DLL.

Il modo più semplice per eseguire il programma desktop nell'ambiente UWP consiste probabilmente nell'usare le tecnologie Desktop Bridge, Includono il convertitore di app desktop, che consente di creare il pacchetto dell'applicazione esistente come app UWP senza dover apportare modifiche al codice. Per altre informazioni, vedere [Desktop Bridge](/windows/uwp/porting/desktop-to-uwp-root).

Nella parte restante di questo articolo viene illustrato come trasferire le librerie C++ (dll e librerie statiche) al piattaforma UWP (Universal Windows Platform). Potrebbe essere necessario trasferire il codice in modo che la logica C++ di base possa essere usata con più app UWP.

Le app UWP vengono eseguite in un ambiente protetto. Di conseguenza, molte chiamate API Win32, COM e CRT che potrebbero compromettere la sicurezza della piattaforma non sono consentite. L' `/ZW` opzione del compilatore può rilevare tali chiamate e generare un errore. È possibile usare il kit di certificazione app nell'applicazione per rilevare il codice che chiama le API non consentite. Per altre informazioni vedere[Kit di certificazione applicazioni Windows](/windows/uwp/debug-test-perf/windows-app-certification-kit).

Se il codice sorgente è disponibile per la libreria, è possibile provare a eliminare le chiamate API non consentite. Per un elenco di API non consentite, vedere [API Win32 e com per app UWP](/uwp/win32-and-com/win32-and-com-for-uwp-apps) e [funzioni CRT non supportate nelle app piattaforma UWP (Universal Windows Platform)](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md). Alcune alternative sono disponibili in [Alternatives to Windows APIs in UWP apps](/uwp/win32-and-com/alternatives-to-windows-apis-uwp) (Alternative alle API di Windows nelle app UWP).

Se si tenta semplicemente di aggiungere un riferimento da un progetto di Windows universale a una libreria desktop classica, viene visualizzato un messaggio di errore che indica che la libreria non è compatibile. Se si tratta di una libreria statica, è possibile collegarsi alla libreria aggiungendo la libreria ( *`.lib`* file) all'input del linker, nello stesso modo in cui si farebbe con un'applicazione Win32 classica. Se è disponibile solo una libreria binaria, è l'unica opzione. Una libreria statica è collegata all'eseguibile dell'app. Tuttavia, una DLL Win32 che si utilizza in un'app UWP deve essere assemblata nell'app, inserendola nel progetto e contrassegnando tale file come contenuto. Per caricare una DLL Win32 in un'app UWP, è anche necessario chiamare [`LoadPackagedLibrary`](/windows/win32/api/winbase/nf-winbase-loadpackagedlibrary) anziché `LoadLibrary` o `LoadLibraryEx` .

Se si dispone di codice sorgente per la DLL o la libreria statica, è possibile ricompilarla come progetto UWP usando l' `/ZW` opzione del compilatore. A questo punto è possibile aggiungere un riferimento ad esso usando il **Esplora soluzioni**e usarlo nelle app C++ UWP. Collegare la DLL tramite la libreria di esportazione.

Per esporre la funzionalità ai chiamanti in altre lingue, è possibile convertire la libreria in un componente Windows Runtime. Windows Runtime componenti si differenziano dalle DLL ordinarie perché includono i metadati sotto forma di *`.winmd`* file che descrivono il contenuto in modo che i consumer di .NET e JavaScript siano necessari.  Per esporre elementi API ad altre lingue, è possibile aggiungere costrutti C++/CX, ad esempio classi di riferimento, e renderli pubblici. In Windows 10 e versioni successive si consiglia la [libreria c++/WinRT](https://github.com/microsoft/cppwinrt) anziché c++/CX.

La discussione precedente non si applica ai componenti COM, che devono essere gestiti in modo diverso. Se si dispone di un server COM in un file EXE o DLL, è possibile utilizzarlo in un progetto di Windows universale. Assemblarlo come [componente COM senza registrazione](/windows/win32/sbscs/creating-registration-free-com-objects), aggiungerlo al progetto come file di contenuto e crearne un'istanza usando [`CoCreateInstanceFromApp`](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstancefromapp) . Per altre informazioni, vedere [Using Free-COM DLL in Windows Store C++ Project](/archive/blogs/win8devsupport/using-free-com-dll-in-windows-store-c-project) (Uso di DLL senza COM in progetti C++ di Windows Store).

Se si vuole trasferire una libreria COM esistente a UWP, è anche possibile convertirla in un componente Windows Runtime. Si consiglia la libreria C++/WinRT per queste porte, ma è anche possibile usare la libreria di [modelli c++ Windows Runtime (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md). WRL è deprecato e non supporta tutte le funzionalità di ATL e OLE. Il fatto che tale porta sia fattibile dipende dalle funzionalità di COM, ATL e OLE richieste dal componente.

Indipendentemente dagli scenari di sviluppo scelti, è necessario tenere presente una serie di definizioni di macro. È possibile usare queste macro nel codice per compilare il codice in modo condizionale in Win32 Desktop classico e in UWP.

```cpp
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PHONE_APP)
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
```

Queste istruzioni rispettivamente si applicano alle app UWP, Windows Phone Store, a entrambe o a nessuna delle due (solo la versione desktop classica Win32). Queste macro sono disponibili solo in Windows SDK 8,1 e versioni successive.

Questo articolo contiene le procedure seguenti:

- [Uso di una DLL Win32 in un'app UWP](#BK_Win32DLL)

- [Uso di una libreria statica C++ nativa in un'app UWP](#BK_StaticLib)

- [Porting di una libreria C++ a un componente Windows Runtime](#BK_WinRTComponent)

## <a name="using-a-win32-dll-in-a-uwp-app"></a><a name="BK_Win32DLL"></a> Uso di una DLL Win32 in un'app UWP

Per una maggiore sicurezza e affidabilità, le app di Windows universali vengono eseguite in un ambiente di runtime con restrizioni. Non è possibile usare solo DLL native come si farebbe in un'applicazione desktop Windows classica. Se si dispone di codice sorgente per una DLL, è possibile trasferire il codice in modo da poterlo utilizzare in UWP. È innanzitutto necessario modificare alcune impostazioni di progetto e i metadati del file di progetto per identificare il progetto come progetto UWP. Il codice della libreria verrà ricompilato usando l' `/ZW` opzione, che Abilita C++/CX. Alcune chiamate API non sono consentite nelle app UWP a causa di controlli più severi associati a tale ambiente. Per altre informazioni, vedere [API Win32 e com per le app UWP](/uwp/win32-and-com/win32-and-com-for-uwp-apps).

Se è presente una DLL nativa che consente di esportare funzioni tramite `__declspec(dllexport)`, è possibile chiamare tali funzioni da un'app della piattaforma UWP ricompilando la DLL come progetto della piattaforma UWP. Si supponga, ad esempio, di avere un progetto DLL Win32 denominato *giraffe* che esporta un paio di classi e i relativi metodi, con codice simile al file di intestazione seguente:

```cpp
// giraffe.h
// Define GIRAFFE_EXPORTS when building this DLL
#pragma once

#ifdef GIRAFFE_EXPORTS
#define GIRAFFE_API __declspec(dllexport)
#else
#define GIRAFFE_API
#endif

GIRAFFE_API int giraffeFunction();

class Giraffe
{
    int id;
        Giraffe(int id_in);
    friend class GiraffeFactory;

public:
    GIRAFFE_API int GetID();
};

class GiraffeFactory
{
    static int nextID;

public:
    GIRAFFE_API GiraffeFactory();
    GIRAFFE_API static int GetNextID();
    GIRAFFE_API static Giraffe* Create();
};
```

Aggiungere al file il codice seguente:

```cpp
// giraffe.cpp
#include "pch.h"
#include "giraffe.h"

Giraffe::Giraffe(int id_in) : id(id_in)
{
}

int Giraffe::GetID()
{
    return id;
}

int GiraffeFactory::nextID = 0;

GiraffeFactory::GiraffeFactory()
{
    nextID = 0;
}

int GiraffeFactory::GetNextID()
{
    return nextID;
}

Giraffe* GiraffeFactory::Create()
{
    return new Giraffe(nextID++);
}

int giraffeFunction();
```

Tutto il resto del progetto ( *`pch.h`* , *`dllmain.cpp`* ) fa parte del modello di progetto Win32 standard. Il codice definisce la macro `GIRAFFE_API` , che viene risolta in `__declspec(dllexport)` quando `GIRAFFE_EXPORTS` viene definito. Ciò significa che viene definito quando il progetto viene compilato come DLL, ma non quando un client usa l' *`giraffe.h`* intestazione. Questa DLL può essere usata in un progetto UWP senza modificare il codice sorgente. È necessario modificare solo alcune impostazioni e proprietà del progetto.

La procedura seguente si applica quando si dispone di una DLL nativa che espone le funzioni tramite `__declspec(dllexport)` .

### <a name="to-port-a-native-dll-to-the-uwp-without-creating-a-new-project"></a>Alla porta di una DLL nativa per UWP senza creare un nuovo progetto

1. Aprire il progetto di DLL in Visual Studio.

1. Aprire le **proprietà del progetto** per il progetto DLL e impostare la **configurazione** su **tutte le configurazioni**.

1. In **Proprietà progetto** della scheda **C/C++** > **Generale** impostare **Utilizza estensioni di Windows Runtime** su **Sì (/ZW)**. Questa proprietà Abilita le estensioni del componente (C++/CX).

1. In **Esplora soluzioni**selezionare il nodo del progetto, aprire il menu di scelta rapida e scegliere **Scarica progetto**. Quindi, aprire il menu di scelta rapida sul nodo del progetto scaricato e scegliere di modificare il file di progetto. Individuare l'elemento `WindowsTargetPlatformVersion` e sostituirlo con gli elementi seguenti.

    ```xml
    <AppContainerApplication>true</AppContainerApplication>
    <ApplicationType>Windows Store</ApplicationType>
    <WindowsTargetPlatformVersion>10.0.10156.0</WindowsTargetPlatformVersion>
    <WindowsTargetPlatformMinVersion>10.0.10156.0</WindowsTargetPlatformMinVersion>
    <ApplicationTypeRevision>10.0</ApplicationTypeRevision>
    ```

   Chiudere il *`.vcxproj`* file, aprire di nuovo il menu di scelta rapida e scegliere **Ricarica progetto**.

   **Esplora soluzioni** ora identifica il progetto come un progetto di Windows universale.

1. Assicurarsi che il nome del file di intestazione precompilato sia corretto. Nella sezione **intestazioni precompilate** , potrebbe essere necessario modificare il **file di intestazione precompilata** da *`pch.h`* o viceversa *`stdafx.h`* se viene visualizzato un errore simile al seguente:

   > errore C2857: l'istruzione ' #include ' specificata con l' **`/Ycpch.h`** opzione della riga di comando non è stata trovata nel file di origine

   Il problema è che i modelli di progetto precedenti utilizzano una convenzione di denominazione diversa per il file di intestazione precompilato. Visual Studio 2019 e i progetti successivi usano *`pch.h`* .

1. Compilare il progetto. È possibile che vengano visualizzati alcuni errori relativi alle opzioni della riga di comando incompatibili. Ad esempio l'opzione **Abilita ricompilazione minima (/Gm)**, ora deprecata ma usata di frequente, è configurata come impostazione predefinita in molti progetti C++ meno recenti e non è compatibile con `/ZW`.

   Alcune funzioni non sono disponibili quando si compila per la piattaforma UWP (Universal Windows Platform). Verranno visualizzati errori del compilatore relativi a eventuali problemi. Risolvere questi errori fino a quando non si dispone di una compilazione pulita.

1. Per usare la dll in un'app UWP nella stessa soluzione, aprire il menu di scelta rapida per il nodo del progetto UWP e scegliere **Aggiungi**  >  **riferimento**.

   In **progetti**  >  **soluzione**selezionare la casella di controllo accanto al progetto DLL e scegliere il pulsante **OK** .

1. Includere i file di intestazione della libreria nel file dell'app UWP *`pch.h`* .

    ```cpp
    #include "..\Giraffe\giraffe.h"
    ```

1. Aggiungere il codice come di consueto nel progetto UWP per richiamare le funzioni e creare tipi dalla DLL.

    ```cpp
    MainPage::MainPage()
    {
        InitializeComponent();
        GiraffeFactory gf;
        Giraffe* g = gf.Create();
        int id = g->GetID();
    }
    ```

## <a name="using-a-native-c-static-library-in-a-uwp-app"></a><a name="BK_StaticLib"></a> Uso di una libreria statica C++ nativa in un'app UWP

È possibile utilizzare una libreria statica C++ nativa in un progetto UWP, ma esistono alcune restrizioni e limitazioni da tenere presenti. Per prima cosa leggere le informazioni sulle [librerie statiche in C++/CX](../cppcx/static-libraries-c-cx.md). È possibile accedere al codice nativo nella libreria statica dall'app UWP, ma non è consigliabile creare tipi di riferimento pubblici nelle librerie statiche. Se si compila una libreria statica con l'opzione `/ZW`, Gestione librerie, in realtà il linker in formato non riconoscibile, invia un avviso:

> LNK4264: archiviazione del file oggetto compilato con /ZW in una libreria statica. Quando si creano tipi Windows Runtime, non è consigliabile eseguire il collegamento con una libreria statica che contiene metadati

Tuttavia, è possibile usare una libreria statica in un'app UWP senza ricompilarla con `/ZW` . La libreria non può dichiarare tipi di riferimento o usare costrutti C++/CX. Tuttavia, se lo scopo è semplicemente quello di usare una libreria di codice nativo, è possibile eseguire questa operazione seguendo questa procedura.

### <a name="to-use-a-native-c-static-library-in-a-uwp-project"></a>Per utilizzare una libreria statica C++ nativa in un progetto UWP

1. Nelle proprietà del progetto per il progetto UWP scegliere **proprietà di configurazione**  >  **Linker**  >  **input** del linker nel riquadro sinistro. Nel riquadro di destra aggiungere il percorso della libreria nella proprietà **Dipendenze aggiuntive**. Ad esempio, per una libreria del progetto che inserisce l'output in *`<SolutionFolder>\Debug\MyNativeLibrary\MyNativeLibrary.lib`* , aggiungere il percorso relativo *`Debug\MyNativeLibrary\MyNativeLibrary.lib`* .

1. Aggiungere un'istruzione di inclusione per fare riferimento al file di intestazione al *`pch.h`* file (se presente) o in qualsiasi *`.cpp`* file in base alle esigenze e iniziare ad aggiungere codice che usa la libreria.

   ```cpp
   #include "..\MyNativeLibrary\MyNativeLibrary.h"
   ```

   Non aggiungere un riferimento nel nodo **riferimenti** in **Esplora soluzioni**. Tale meccanismo funziona solo per i componenti Windows Runtime.

## <a name="porting-a-c-library-to-a-windows-runtime-component"></a><a name="BK_WinRTComponent"></a> Conversione di una libreria C++ in un componente Windows Runtime

Si supponga di voler utilizzare le API native in una libreria statica da un'app UWP. Se si dispone del codice sorgente per la libreria nativa, è possibile trasferire il codice in un componente Windows Runtime. Non sarà più una libreria statica; si trasformerà in una DLL che è possibile usare in qualsiasi app C++ UWP. In questa procedura viene descritto come creare un nuovo componente Windows Runtime che utilizza le estensioni C++/CX. Per informazioni sulla creazione di un componente che usa invece C++/WinRT, vedere [Windows Runtime Components with c++/WinRT](/windows/uwp/winrt-components/create-a-windows-runtime-component-in-cppwinrt).

Quando si usa C++/CX, è possibile aggiungere tipi di riferimento e altri costrutti C++/CX disponibili per i client in qualsiasi codice dell'app UWP. È possibile accedere a questi tipi da C#, Visual Basic o JavaScript. La procedura di base è la seguente:

- Creare un progetto di componente Windows Runtime (Windows universale),
- Copiare il codice per la libreria statica e
- risolvere gli eventuali errori del compilatore causati dall' `/ZW` opzione.

### <a name="to-port-a-c-library-to-a-windows-runtime-component"></a>Per trasferire una libreria C++ in un componente Windows Runtime

1. Creare un progetto di componente Windows Runtime (Windows universale).

1. Chiudere il progetto.

1. In **Esplora file di Windows**individuare il nuovo progetto. Individuare quindi il progetto di libreria C++ che contiene il codice che si desidera trasferire. Copiare i file di origine (file di intestazione, file di codice e qualsiasi altra risorsa, incluse le sottodirectory) dal progetto della libreria C++. Incollarli nella nuova cartella del progetto, assicurandosi di mantenere la stessa struttura di cartelle.

1. Riaprire il progetto componente Windows Runtime. Aprire il menu di scelta rapida per il nodo del progetto in **Esplora soluzioni**e scegliere **Aggiungi**  >  **elemento esistente**.

1. Selezionare tutti i file da aggiungere dal progetto originale e scegliere **OK**. Se necessario, ripetere la procedura per le sottocartelle.

1. È possibile ora avere codice duplicato. Se è presente più di un'intestazione precompilata (ad indicare sia *`stdafx.h`* che *`pch.h`* ), sceglierne una da memorizzare. Copiare il codice necessario, ad esempio le istruzioni include, in quella che si sta mantenendo. Eliminare quindi l'altra e, nelle proprietà del progetto, in **intestazioni precompilate**verificare che il nome del file di intestazione sia corretto.

   Se è stato modificato il file da utilizzare come intestazione precompilata, assicurarsi che le opzioni di intestazione precompilata siano corrette per ogni file. Selezionare *`.cpp`* a sua volta ogni file, aprire la finestra Proprietà e verificare che tutti siano impostati per l' **uso (/Yu)**, ad eccezione dell'intestazione precompilata, che deve essere impostata su **Crea (/YC)**.

1. Compilare il progetto e risolvere eventuali errori. Questi errori potrebbero essere causati dall'utilizzo dell' `/ZW` opzione oppure possono essere causati da una nuova versione del Windows SDK. In alternativa, potrebbero riflettere dipendenze, ad esempio file di intestazione da cui dipende la libreria o differenze nelle impostazioni del progetto tra il progetto precedente e quello nuovo.

1. Aggiungere tipi di riferimento pubblici al progetto o convertire i tipi comuni in tipi di riferimento. Usare questi tipi per esporre i punti di ingresso nella funzionalità che si vuole chiamare dalle app UWP.

1. Testare il componente aggiungendovi un riferimento da un progetto dell'app UWP e aggiungere codice per chiamare le API pubbliche create.

## <a name="see-also"></a>Vedi anche

[Porting to the Universal Windows Platform](../porting/porting-to-the-universal-windows-platform-cpp.md) (Conversione in Universal Windows Platform)
