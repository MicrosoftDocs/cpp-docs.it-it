---
title: Cenni preliminari sulla programmazione Windows in C++
ms.date: 03/28/2019
ms.assetid: efc691d7-21f3-47ae-ae56-cab999ccf59d
ms.openlocfilehash: 35842ae73e59685946afe31e88729a36a6431768
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "58772904"
---
# <a name="overview-of-windows-programming-in-c"></a>Cenni preliminari sulla programmazione Windows in C++

Esistono molte ampie categorie di applicazioni di Windows che è possibile creare con C++. Ognuno ha il proprio modello di programmazione e set di librerie di classi specifiche di Windows, ma la libreria standard C++ nonché librerie di C++ di terze parti sono utilizzabili in uno di essi. 

## <a name="command-line-console-applications"></a>Applicazioni della riga di comando (console)

Applicazioni console C++ eseguito dalla riga di comando nella finestra della console e visualizzare solo un output di testo. Per altre informazioni, vedere [applicazioni Console](console-applications-in-visual-cpp.md).
 
## <a name="native-desktop-client-applications"></a>Applicazioni client desktop native

Il termine *applicazione client per desktop nativi* fa riferimento a un'applicazione a finestre C o C++ che usa l'oggetto nativo originale [API C di Windows e/o COM APIs](/windows/desktop/apiindex/windows-api-list) per accedere al sistema operativo. Tali API sono scritti principalmente in C. Quando si crea questo tipo di applicazione, è possibile scegliere di programmare direttamente da un ciclo di messaggi di tipo C che elabora eventi del sistema operativo o utilizzando *Microsoft Foundation Classes* (MFC), una libreria di C++ che esegue il wrapping di Win32 in modo che è un po' orientate a oggetti. Nessuno dei due approcci viene considerato "modern" rispetto a Universal Windows Platform (vedere sotto), ma entrambi sono ancora completamente supportati e hanno milioni di righe di codice in esecuzione in tutto il mondo oggi stesso. Un'applicazione Win32 che viene eseguito in una finestra richiede allo sviluppatore di utilizzare in modo esplicito i messaggi di Windows all'interno di una funzione routine di Windows. Nonostante il nome, un'applicazione Win32 può essere compilata come una (x86) 32 bit o 64 bit (x64) binario. Nell'IDE di Visual Studio, i termini x86 e Win32 sono sinonimi.

Per iniziare a usare tradizionale di programmazione C++ di Windows, vedere [Introduzione a C++ e Win32](/windows/desktop/LearnWin32/learn-to-program-for-windows). Dopo aver ottenuto una buona conoscenza di Win32, sarà più facile da apprendere [MFC Desktop Applications](/mfc/mfc-desktop-applications). Per un esempio di un'applicazione desktop tradizionale C++ che usa grafiche sofisticate, vedere [Hilo: Sviluppo di applicazioni C++ per Windows](https://msdn.microsoft.com/library/windows/desktop/ff708696.aspx).

### <a name="c-or-net"></a>C++ o .NET? 

Per scenari di applicazioni desktop (in altre parole, non targeting UWP), è consigliabile usare C# per creare l'interfaccia utente. Infatti, programmazione .NET è in genere meno complessa, meno soggetto a errori e ha un'API orientata agli oggetti più moderna di Win32 o MFC. Nella maggior parte dei casi, le prestazioni sono più che sufficiente. Le funzionalità .NET Windows Presentation Foundation (WPF) per migliorare la grafica, ed è possibile utilizzare Win32, nonché Windows moderne API di Runtime (vedere la piattaforma UWP riportato di seguito). Come regola generale, è consigliabile usare C++ per le applicazioni desktop quando è necessario:

- controllo preciso sull'utilizzo della memoria
- per un'economia nel consumo di energia elettrica
- utilizzo della GPU per il calcolo generale
- l'accesso a DirectX
- utilizzo intenso di librerie standard C++

È possibile creare un'interfaccia utente in C# e usare C + + / CLI per abilitare l'applicazione può usare le librerie C++ native. Per altre informazioni, vedere [programmazione .NET con c++ /CLI CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

## <a name="com-components"></a>Componenti COM

Il [modello COM (Component Object)](/windows/desktop/com/the-component-object-model) è una specifica che consente ai programmi scritti in linguaggi diversi per comunicare tra loro. Windows molti componenti vengono implementati come oggetti COM e seguire le regole COM standard per la creazione di oggetti, la distruzione di individuazione e l'oggetto di interfaccia.  Uso di oggetti COM da applicazioni desktop C++ è relativamente semplice, ma si scrive il proprio oggetto COM è più avanzata. Il [libreria ATL (Active Template)](../atl/atl-com-desktop-components.md) fornisce le macro e funzioni di supporto che semplificano lo sviluppo COM. Per altre informazioni, vedere [componenti desktop COM ATL](../atl/atl-com-desktop-components.md).

## <a name="windows-universal-apps"></a>App universali di Windows

Universal Windows Platform (UWP) è l'API Windows moderna. Le app UWP eseguiti su qualsiasi dispositivo Windows 10, usano XAML per l'interfaccia utente e sono completamente abilitati per il tocco. Per altre informazioni sulla piattaforma UWP, vedere [che cos'è un'app Universal Windows Platform (UWP)?](/windows/uwp/get-started/whats-a-uwp) e [Guida alle App universali di Windows](/windows/uwp/get-started/universal-application-platform-guide).

Il supporto C++ originale per la piattaforma UWP contava di (1) C + + c++ /CX, un dialetto di C++ con le estensioni di sintassi o (2) di Windows libreria Runtime (WRL) basata su standard C++ e COM. Entrambi C + + c++ /CX e WRL sono ancora supportati. Per i nuovi progetti è consigliabile [C + + / WinRT](/windows/uwp/cpp-and-winrt-apis/intro-to-using-cpp-with-winrt) che è interamente basato su standard di C++ e fornisce prestazioni più veloci. 

## <a name="desktop-bridge"></a>Desktop Bridge

In Windows 10 è possibile creare un pacchetto di applicazione desktop esistente o un oggetto COM come un'app UWP e aggiungere le funzionalità di piattaforma UWP, ad esempio tocco o chiamare le API dal set di API Windows moderno. È anche possibile aggiungere un'app UWP a una soluzione desktop in Visual Studio e pacchetto uno a altro in un singolo pacchetto e usare le API di Windows per comunicare tra loro.

In Visual Studio 2017 versione 15.4 e versioni successive, è possibile creare un progetto di pacchetto di applicazione Windows per semplificare notevolmente il lavoro di creazione del pacchetto dell'applicazione desktop esistente. Si applicano alcune restrizioni rispetto al quale registro chiama o Usa le API dell'applicazione desktop, ma in molti casi è possibile creare percorsi di codice alternativo per ottenere funzionalità simili durante l'esecuzione in un pacchetto dell'app. Per altre informazioni, vedere [Desktop Bridge](/windows-uwp/porting/desktop-to-uwp-root).

## <a name="games"></a>Giochi

Giochi DirectX eseguibili nel PC o su Xbox. Per altre informazioni, vedere [grafica e giochi DirectX](/windows/desktop/directx).

## <a name="sql-server-database-clients"></a>Client del database SQL Server

Per accedere a database di SQL Server da codice nativo, utilizzare ODBC o OLE DB. Per altre informazioni, vedere [SQL Server Native Client](/sql/relational-databases/native-client/odbc/sql-server-native-client-odbc).

## <a name="windows-device-drivers"></a>Driver di dispositivo Windows

I driver sono componenti di basso livello che rendono i dati dai dispositivi hardware accessibile alle applicazioni e altri componenti del sistema operativo. Per altre informazioni, vedere [Windows Driver Kit (WDK)](/windows-hardware/drivers/index).

## <a name="windows-services"></a>Servizi Windows

Un Windows *servizio* è un programma che possono essere eseguiti in background senza alcuna interazione da parte dell'utente. In UNIX dette *daemon*. Per altre informazioni, vedere [Services](/windows/desktop/services/services).

## <a name="sdks-libraries-and-header-files"></a>Gli SDK, librerie e i file di intestazione

Visual Studio include la libreria di Runtime C (CRT), la libreria Standard C++ e altre librerie specifiche di Microsoft. Le cartelle di inclusione che contengono i file di intestazione per queste librerie si trovano nella directory di installazione di Visual Studio nella cartella \VC\ o, nel caso di CRT, nella cartella di installazione Windows SDK.

È possibile usare la [di gestione pacchetti Vcpkg](../build/vcpkg.md) facilmente installare centinaia di librerie open source di terze parti per Windows.

Le librerie Microsoft includono:

- Microsoft Foundation Classes (MFC): Un framework orientata agli oggetti per la creazione di programmi Windows tradizionali, in particolare applicazioni aziendali, che hanno interfacce utente avanzate dotate di pulsanti, caselle di riepilogo, visualizzazioni dell'albero e altri controlli. Per altre informazioni, vedere [MFC Desktop Applications](../mfc/mfc-desktop-applications.md).

- Active Template Library (ATL): Una libreria helper efficace per la creazione di componenti COM. Per altre informazioni, vedere [ATL COM Desktop Components](../atl/atl-com-desktop-components.md).

- C++ AMP (C++ Accelerated Massive Parallelism): Una libreria che consente attività di elaborazione generale ad alte prestazioni nella GPU. Per altre informazioni, vedere [C++ AMP (C++ Accelerated Massive Parallelism)](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md).

- Runtime di concorrenza: Una libreria che semplifica le attività di programmazione parallela e asincrona per i dispositivi multicore o many-core. Per altre informazioni, vedere [Concurrency Runtime](../parallel/concrt/concurrency-runtime.md).

Anche molti scenari di programmazione Windows richiedono Windows SDK, che include i file di intestazione che garantiscono l'accesso ai componenti del sistema operativo Windows. Per impostazione predefinita, Visual Studio installa il SDK di Windows come componente del carico di lavoro Desktop C++, che permette lo sviluppo di App di Windows universale. Per sviluppare le app UWP, è necessaria la versione di Windows 10 di Windows SDK. Per informazioni, vedere [Windows 10 SDK](https://dev.windows.com/downloads/windows-10-sdk). (Per altre informazioni su Windows SDK per versioni precedenti di Windows, vedere la [archivio SDK Windows](https://developer.microsoft.com/windows/downloads/sdk-archive)).

**Programmare file (x86) \Windows Kit** è il percorso predefinito per tutte le versioni del SDK di Windows installate.

Altre piattaforme quali Xbox e Azure dispongono di SDK specifiche, che potrebbe essere necessario installare. Per altre informazioni, vedere il Centro per sviluppatori DirectX e Azure.

## <a name="development-tools"></a>Strumenti di sviluppo

Visual Studio include un potente debugger per codice nativo, strumenti di analisi statica, strumenti di debug grafico, un editor di codice completo, supporto per unit test e molti altri strumenti ed utilità. Per altre informazioni, vedere [iniziare a sviluppare con Visual Studio](/visualstudio/ide/get-started-developing-with-visual-studio), e [sviluppo Panoramica di C++ in Visual Studio](../overview/overview-of-cpp-development.md).

## <a name="in-this-section"></a>Contenuto della sezione
|Titolo|Descrizione|
|-----------|-----------------|
|[Procedura dettagliata: Creazione di un programma C++ Standard](walkthrough-creating-a-standard-cpp-program-cpp.md)| Creare un'applicazione console di Windows.|
|[Procedura dettagliata: Creazione di applicazioni Desktop di Windows (C++)](walkthrough-creating-windows-desktop-applications-cpp.md)|Creare una semplice applicazione desktop di Windows.|
|[Creazione guidata applicazione desktop di Windows](windows-desktop-wizard.md)|Usare la procedura guidata per creare nuovi progetti di Windows.|
|[Active Template Library (ATL)](../atl/TOC.md)|Usare la libreria ATL per creare componenti COM in C++.|
|[Microsoft Foundation Classes (MFC)](../mfc/TOC.md)|Usare MFC per creare grandi o piccole applicazioni di Windows con finestre di dialogo e controlli|
|[Classi condivise ATL e MFC](../atl-mfc-shared/TOC.md)|Usare le classi, ad esempio CString che vengono condivisi in ATL e MFC.|
|[Accesso ai dati](../data/data-access-in-cpp.md)| OLE DB e ODBC|
|[Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)|Vari tipi di stringhe in Windows.|
|[Risorse per la creazione di un gioco con DirectX](resources-for-creating-a-game-using-directx.md)
|[Procedura: Usare Windows 10 SDK in un'applicazione Desktop di Windows](how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md)|Windows SDK|
|[Utilizzo di file di risorse](working-with-resource-files.md)|Come aggiungere immagini, icone, le tabelle di stringhe e altre risorse in un'applicazione desktop.|
|[Risorse per la creazione di un gioco con DirectX (C++)](resources-for-creating-a-game-using-directx.md)|Collegamenti al contenuto per la creazione di giochi in C++.|
|[Procedura: Usare Windows 10 SDK in un'applicazione Desktop di Windows](how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md)|Contiene i passaggi per configurare il progetto da compilare mediante Windows 10 SDK.|
|[Distribuzione di applicazioni Desktop Native](deploying-native-desktop-applications-visual-cpp.md)|Distribuire applicazioni native su Windows.|


## <a name="related-articles"></a>Articoli correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[Visual C++](../overview/visual-cpp-in-visual-studio.md)|Argomento principale per il contenuto per gli sviluppatori di Visual C++.|
[Sviluppo per .NET con c++ /CLI CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)|Creare wrapper per le librerie C++ native che ne consentono la comunicazione con componenti e le applicazioni .NET.|
|[Estensioni componenti per .NET e UWP](../extensions/component-extensions-for-runtime-platforms.md)|Informazioni di riferimento per gli elementi della sintassi condivisi da C + + c++ /CX e c++ /CLI CLI.|
|[App di Windows universale (C++)](universal-windows-apps-cpp.md)|Scrivere le applicazioni UWP usando C + + c++ /CX o libreria di modelli di Windows Runtime (WRL).|
|[Attributi di C++ per COM e .NET](attributes/cpp-attributes-com-net.md)|Attributi non standard per la programmazione solo Windows tramite .NET o COM.|

