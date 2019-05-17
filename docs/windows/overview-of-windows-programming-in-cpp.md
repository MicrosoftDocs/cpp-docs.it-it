---
title: Cenni preliminari sulla programmazione Windows in C++
ms.date: 05/06/2019
ms.assetid: efc691d7-21f3-47ae-ae56-cab999ccf59d
ms.openlocfilehash: 036da87c24eef38f3c88bb5f73808a434b9da6a1
ms.sourcegitcommit: a10c9390413978d36b8096b684d5ed4cf1553bc8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/17/2019
ms.locfileid: "65837554"
---
# <a name="overview-of-windows-programming-in-c"></a>Cenni preliminari sulla programmazione Windows in C++

Esistono molte ampie categorie di applicazioni di Windows che è possibile creare con C++. Ognuno ha il proprio modello di programmazione e serie di librerie di Windows specifici, ma il C++ libreria standard e terze parti C++ le librerie sono utilizzabili in uno di essi.

## <a name="command-line-console-applications"></a>Applicazioni della riga di comando (console)

Applicazioni console C++ eseguito dalla riga di comando nella finestra della console e visualizzare solo un output di testo. Per altre informazioni, vedere [applicazioni Console](console-applications-in-visual-cpp.md).

## <a name="native-desktop-client-applications"></a>Applicazioni client desktop native

Oggetto *applicazione client nativa desktop* è un C o C++ a finestre dell'applicazione che usa l'oggetto nativo originale [Windows C API o modello COM (Component Object) API](/windows/desktop/apiindex/windows-api-list) per accedere al sistema operativo. Tali API sono scritti principalmente in C. È presente più di un modo per creare un'applicazione desktop nativa: È possibile programmare usando le API Win32 direttamente, usando un ciclo di messaggi di tipo C che elabora eventi del sistema operativo. In alternativa, è possibile programmare usando *Microsoft Foundation Classes* (MFC), una leggera orientata agli oggetti C++ libreria che esegue il wrapping di Win32. Né approccio viene considerato "modern" rispetto a Universal Windows Platform (UWP), ma entrambi sono ancora completamente supportati e avere milioni di righe di codice in esecuzione in tutto il mondo oggi stesso. Un'applicazione Win32 che viene eseguito in una finestra richiede allo sviluppatore di utilizzare in modo esplicito i messaggi di Windows all'interno di una funzione routine di Windows. Nonostante il nome, un'applicazione Win32 può essere compilata come una (x86) 32 bit o 64 bit (x64) binario. Nell'IDE di Visual Studio, i termini x86 e Win32 sono sinonimi.

Per iniziare a usare tradizionale di programmazione C++ di Windows, vedere [Introduzione a C++ e Win32](/windows/desktop/LearnWin32/learn-to-program-for-windows). Dopo aver ottenuto una buona conoscenza di Win32, sarà più facile da apprendere [MFC Desktop Applications](../mfc/mfc-desktop-applications.md). Per un esempio di un'applicazione desktop tradizionale C++ che usa grafiche sofisticate, vedere [Hilo: Sviluppo di applicazioni C++ per Windows](https://msdn.microsoft.com/library/windows/desktop/ff708696.aspx).

### <a name="c-or-net"></a>C++ o .NET?

In generale, programmazione .NET in C# è meno complesso e meno soggetta a errori e ha un'API orientata agli oggetti più moderna di Win32 o MFC. Nella maggior parte dei casi, le prestazioni sono più che sufficiente. Le funzionalità .NET Windows Presentation Foundation (WPF) per migliorare la grafica, ed è possibile utilizzare sia Win32 e l'API di Runtime Windows moderni. Come regola generale, è consigliabile usare C++ per le applicazioni desktop quando è necessario:

- controllo preciso sull'utilizzo della memoria
- per un'economia nel consumo di energia elettrica
- utilizzo della GPU per il calcolo generale
- l'accesso a DirectX
- utilizzo intenso di librerie standard C++

È anche possibile combinare la potenza e l'efficienza di C++ con la programmazione di .NET. È possibile creare un'interfaccia utente in C# e usare C++per abilitare l'applicazione può usare native /CLI C++ librerie. Per altre informazioni, vedere [programmazione .NET con c++ /CLI CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

## <a name="com-components"></a>Componenti COM

Il [modello COM (Component Object)](/windows/desktop/com/the-component-object-model) è una specifica che consente ai programmi scritti in linguaggi diversi per comunicare tra loro. Molti componenti di Windows vengono implementati come oggetti COM e seguono le regole COM standard per la creazione di oggetti, l'individuazione di interfaccia e la distruzione di oggetti.  Uso di oggetti COM da applicazioni desktop C++ è relativamente semplice, ma si scrive il proprio oggetto COM è più avanzata. Il [libreria ATL (Active Template)](../atl/atl-com-desktop-components.md) fornisce le macro e funzioni di supporto che semplificano lo sviluppo COM. Per altre informazioni, vedere [componenti desktop COM ATL](../atl/atl-com-desktop-components.md).

## <a name="universal-windows-platform-apps"></a>App della piattaforma UWP (Universal Windows Platform)

Universal Windows Platform (UWP) è l'API Windows moderna. Le app UWP eseguiti su qualsiasi dispositivo Windows 10, usano XAML per l'interfaccia utente e sono completamente abilitati per il tocco. Per altre informazioni sulla piattaforma UWP, vedere [che cos'è un'app Universal Windows Platform (UWP)?](/windows/uwp/get-started/whats-a-uwp) e [Guida alle App universali di Windows](/windows/uwp/get-started/universal-application-platform-guide).

L'originale C++ il supporto per UWP è costituita da (1) C++/CX, un dialetto di C++ con le estensioni di sintassi o (2) la libreria di Runtime (WRL) Windows, che si basa sullo standard C++ e COM. Sia C++/CX e WRL sono ancora supportati. Per i nuovi progetti, è consigliabile [ C++/WinRT](/windows/uwp/cpp-and-winrt-apis/intro-to-using-cpp-with-winrt), che si basa interamente sullo standard C++ e fornisce prestazioni più veloci.

## <a name="desktop-bridge"></a>Desktop Bridge

In Windows 10, è possibile creare un pacchetto di applicazione desktop esistente o un oggetto COM come app UWP e aggiungere le funzionalità di piattaforma UWP, ad esempio tocco o chiamare le API dal set di API Windows moderno. È anche possibile aggiungere un'app UWP a una soluzione desktop in Visual Studio e pacchetto uno a altro in un singolo pacchetto e usare le API di Windows per comunicare tra loro.

Visual Studio 2017 versione 15.4 e versioni successive consente di creare un progetto di pacchetto di applicazione di Windows per semplificare notevolmente il lavoro di creazione del pacchetto dell'applicazione desktop esistente. Si applicano alcune restrizioni per le API può usare l'applicazione desktop o le chiamate del Registro di sistema. In molti casi, tuttavia, è possibile creare percorsi di codice alternativo per ottenere funzionalità simili durante l'esecuzione in un pacchetto dell'app. Per altre informazioni, vedere [Desktop Bridge](/windows/uwp/porting/desktop-to-uwp-root).

## <a name="games"></a>Giochi

Giochi DirectX eseguibili nel PC o su Xbox. Per altre informazioni, vedere [grafica e giochi DirectX](/windows/desktop/directx).

## <a name="sql-server-database-clients"></a>Client del database SQL Server

Per accedere a database di SQL Server da codice nativo, utilizzare ODBC o OLE DB. Per altre informazioni, vedere [SQL Server Native Client](/sql/relational-databases/native-client/odbc/sql-server-native-client-odbc).

## <a name="windows-device-drivers"></a>Driver di dispositivo Windows

I driver sono componenti di basso livello che rendono i dati dai dispositivi hardware accessibile alle applicazioni e altri componenti del sistema operativo. Per altre informazioni, vedere [Windows Driver Kit (WDK)](/windows-hardware/drivers/index).

## <a name="windows-services"></a>Servizi Windows

Un Windows *servizio* è un programma che possono essere eseguiti in background senza alcuna interazione da parte dell'utente. Questi programmi sono detti *daemon* nei sistemi UNIX. Per altre informazioni, vedere [Services](/windows/desktop/services/services).

## <a name="sdks-libraries-and-header-files"></a>Gli SDK, librerie e i file di intestazione

Visual Studio include la libreria di Runtime C (CRT), la libreria Standard C++ e altre librerie specifiche di Microsoft. La maggior parte delle cartelle di inclusione che contengono i file di intestazione per queste librerie si trovano nella directory di installazione di Visual Studio nella cartella \VC\. I file di intestazione CRT e Windows sono disponibili nella cartella di installazione Windows SDK.

Il [di gestione pacchetti Vcpkg](../build/vcpkg.md) consente di installare facilmente centinaia di librerie open source di terze parti per Windows.

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
|[Procedura dettagliata: Creazione di un programma C++ standard](walkthrough-creating-a-standard-cpp-program-cpp.md)| Creare un'applicazione console di Windows.|
|[Procedura dettagliata: Creazione di applicazioni desktop di Windows (C++)](walkthrough-creating-windows-desktop-applications-cpp.md)|Creare un'applicazione desktop di Windows nativa.|
|[Creazione guidata applicazione desktop di Windows](windows-desktop-wizard.md)|Usare la procedura guidata per creare nuovi progetti di Windows.|
|[Active Template Library (ATL)](../atl/atl-com-desktop-components.md)|Usare la libreria ATL per creare componenti COM in C++.|
|[Microsoft Foundation Classes (MFC)](../mfc/TOC.md)|Usare MFC per creare grandi o piccole applicazioni di Windows con finestre di dialogo e controlli|
|[Classi condivise ATL e MFC](../atl-mfc-shared/TOC.md)|Usare le classi, ad esempio CString che vengono condivisi in ATL e MFC.|
|[Accesso ai dati](../data/data-access-in-cpp.md)| OLE DB e ODBC|
|[Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)|Vari tipi di stringhe in Windows.|
|[Risorse per la creazione di un gioco con DirectX](resources-for-creating-a-game-using-directx.md)
|[Procedura: Usare Windows 10 SDK in un'applicazione di Windows Desktop](how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md)|Windows SDK|
|[Uso di file di risorse](working-with-resource-files.md)|Come aggiungere immagini, icone, le tabelle di stringhe e altre risorse in un'applicazione desktop.|
|[Risorse per la creazione di un gioco con DirectX (C++)](resources-for-creating-a-game-using-directx.md)|Collegamenti al contenuto per la creazione di giochi in C++.|
|[Procedura: Usare Windows 10 SDK in un'applicazione di Windows Desktop](how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md)|Contiene i passaggi per configurare il progetto da compilare mediante Windows 10 SDK.|
|[Distribuzione di applicazioni desktop native](deploying-native-desktop-applications-visual-cpp.md)|Distribuire applicazioni native su Windows.|

## <a name="related-articles"></a>Articoli correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md)|Argomento principale per il contenuto per gli sviluppatori di Visual C++.|
[Sviluppo in .NET con C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)|Creare wrapper per le librerie C++ native che ne consentono la comunicazione con componenti e le applicazioni .NET.|
|[Estensioni componenti per .NET e UWP](../extensions/component-extensions-for-runtime-platforms.md)|Informazioni di riferimento per gli elementi della sintassi condivise da C++/CX e C++/CLI.|
|[App di Windows universale (C++)](universal-windows-apps-cpp.md)|Scrivere le applicazioni UWP usando C++/CX o libreria di modelli di Windows Runtime (WRL).|
|[Attributi di C++ per COM e .NET](attributes/cpp-attributes-com-net.md)|Attributi non standard per la programmazione solo Windows tramite .NET o COM.|
