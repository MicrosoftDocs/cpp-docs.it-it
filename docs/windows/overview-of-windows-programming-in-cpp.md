---
title: Cenni preliminari sulla programmazione Windows in C++
ms.date: 09/17/2019
ms.assetid: efc691d7-21f3-47ae-ae56-cab999ccf59d
ms.openlocfilehash: 0aa667168f88f48458ae3a9b3541d4944f7530cc
ms.sourcegitcommit: 6b3d793f0ef3bbb7eefaf9f372ba570fdfe61199
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/15/2020
ms.locfileid: "86404987"
---
# <a name="overview-of-windows-programming-in-c"></a>Cenni preliminari sulla programmazione Windows in C++

Sono disponibili diverse categorie di applicazioni Windows che è possibile creare con C++. Ognuno ha un proprio modello di programmazione e un set di librerie specifiche di Windows, ma è possibile usare la libreria standard C++ e le librerie C++ di terze parti.

In questa sezione viene illustrato come utilizzare Visual Studio e le librerie di wrapper MFC/ATL per creare programmi di Windows. Per la documentazione sulla piattaforma Windows, vedere la [documentazione di Windows](/windows/index).

## <a name="command-line-console-applications"></a>Applicazioni della riga di comando (console)

Le applicazioni console C++ vengono eseguite dalla riga di comando in una finestra della console e possono visualizzare solo l'output di testo. Per altre informazioni, vedere [creare una console di calcolo in C++](../get-started/tutorial-console-cpp.md).

## <a name="native-desktop-client-applications"></a>Applicazioni client desktop native

Un' *applicazione client desktop nativa* è un'applicazione con finestra c o C++ che usa le API native di [Windows c o Component Object Model (com)](/windows/win32/apiindex/windows-api-list) originali per accedere al sistema operativo. Queste API vengono scritte principalmente in C. Esistono più modi per creare un'app desktop nativa: è possibile programmare usando direttamente le API Win32, usando un ciclo di messaggi di tipo C che elabora gli eventi del sistema operativo. In alternativa, è possibile programmare utilizzando *Microsoft Foundation Classes* (MFC), una libreria C++ orientata a oggetti leggera che esegue il wrapping di Win32. Nessuno dei due approcci è considerato "moderno" rispetto al piattaforma UWP (Universal Windows Platform) (UWP), ma entrambi sono ancora completamente supportati e includono milioni di righe di codice in esecuzione nel mondo. Un'applicazione Win32 eseguita in una finestra richiede che lo sviluppatore funzioni in modo esplicito con i messaggi di Windows all'interno di una funzione di routine di Windows. Nonostante il nome, un'applicazione Win32 può essere compilata come un file binario a 32 bit (x86) o a 64 bit (x64). Nell'IDE di Visual Studio i termini x86 e Win32 sono sinonimi.

Per iniziare a usare la programmazione tradizionale di Windows C++, vedere [Introduzione a Win32 e C++](/windows/win32/LearnWin32/learn-to-program-for-windows). Una volta acquisite informazioni su Win32, sarà più facile ottenere informazioni sulle [applicazioni desktop MFC](../mfc/mfc-desktop-applications.md). Per un esempio di applicazione desktop C++ tradizionale che usa grafica sofisticata, vedere [Hilo: sviluppo di applicazioni c++ per Windows](/previous-versions/msdn10/ff708696(v=msdn.10)).

### <a name="c-or-net"></a>C++ o .NET?

In generale, la programmazione .NET in C# è meno complessa, meno soggetta a errori e ha un'API più moderna orientata a oggetti rispetto a Win32 o MFC. Nella maggior parte dei casi, le prestazioni sono più che sufficienti. .NET offre il Windows Presentation Foundation (WPF) per la grafica avanzata ed è possibile utilizzare sia Win32 che l'API Windows Runtime moderna. Come regola generale, è consigliabile usare C++ per le applicazioni desktop quando è necessario:

- controllo preciso sull'utilizzo della memoria
- la massima economia al consumo energetico
- uso della GPU per l'elaborazione generale
- accesso a DirectX
- utilizzo intensivo di librerie C++ standard

È anche possibile combinare la potenza e l'efficienza di C++ con la programmazione .NET. È possibile creare un'interfaccia utente in C# e utilizzare C++/CLI per consentire all'applicazione di utilizzare le librerie C++ native. Per altre informazioni, vedere [programmazione .NET con C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

## <a name="com-components"></a>Componenti COM

Il [Component Object Model (com)](/windows/win32/com/the-component-object-model) è una specifica che consente ai programmi scritti in linguaggi diversi di comunicare tra loro. Molti componenti di Windows sono implementati come oggetti COM e seguono regole COM standard per la creazione di oggetti, l'individuazione dell'interfaccia e la distruzione di oggetti.  L'utilizzo di oggetti COM da applicazioni desktop C++ è relativamente semplice, ma la scrittura di un oggetto COM è più avanzata. Il [Active Template Library (ATL)](../atl/atl-com-desktop-components.md) fornisce le macro e le funzioni di supporto che semplificano lo sviluppo com. Per ulteriori informazioni, vedere [ATL com Desktop Components](../atl/atl-com-desktop-components.md).

## <a name="universal-windows-platform-apps"></a>App della piattaforma UWP (Universal Windows Platform)

Il piattaforma UWP (Universal Windows Platform) (UWP) è l'API Windows moderna. Le app UWP vengono eseguite in qualsiasi dispositivo Windows 10, usano XAML per l'interfaccia utente e sono completamente abilitate per il tocco. Per altre informazioni su UWP, vedere [che cos'è un'app piattaforma UWP (Universal Windows Platform) (UWP)](/windows/uwp/get-started/whats-a-uwp) e [Guida alle app universali di Windows](/windows/uwp/get-started/universal-application-platform-guide).

Il supporto C++ originale per UWP era costituito da (1) C++/CX, un dialetto di C++ con estensioni della sintassi o (2) la libreria Windows Runtime (WRL), che si basa su C++ standard e COM. C++/CX e WRL sono ancora supportati. Per i nuovi progetti, è consigliabile usare [c++/WinRT](/windows/uwp/cpp-and-winrt-apis/intro-to-using-cpp-with-winrt), interamente basato sul linguaggio c++ standard, che offre prestazioni più veloci.

## <a name="desktop-bridge"></a>Desktop Bridge

In Windows 10 è possibile creare un pacchetto dell'applicazione desktop o dell'oggetto COM esistente come app UWP e aggiungere le funzionalità di UWP, ad esempio il tocco, o chiamare le API dal set di API Windows moderno. È anche possibile aggiungere un'app UWP a una soluzione desktop in Visual Studio e assemblarli insieme in un unico pacchetto e usare le API di Windows per comunicare tra di essi.

Visual Studio 2017 versione 15,4 e successive consente di creare un progetto di pacchetto di applicazioni Windows per semplificare notevolmente il lavoro di creazione del pacchetto dell'applicazione desktop esistente. Alcune restrizioni si applicano alle chiamate al registro di sistema o alle API che l'applicazione desktop può usare. Tuttavia, in molti casi è possibile creare percorsi di codice alternativi per ottenere funzionalità simili durante l'esecuzione in un pacchetto dell'app. Per altre informazioni, vedere [Desktop Bridge](/windows/uwp/porting/desktop-to-uwp-root).

## <a name="games"></a>Giochi

I giochi DirectX possono essere eseguiti sul PC o su Xbox. Per altre informazioni, vedere [grafica e giochi DirectX](/windows/win32/directx).

## <a name="sql-server-database-clients"></a>Client di database SQL Server

Per accedere ai database SQL Server dal codice nativo, utilizzare ODBC o OLE DB. Per altre informazioni, vedere [SQL Server Native Client](/sql/relational-databases/native-client/odbc/sql-server-native-client-odbc).

## <a name="windows-device-drivers"></a>Driver di dispositivo Windows

I driver sono componenti di basso livello che rendono i dati dai dispositivi hardware accessibili alle applicazioni e ad altri componenti del sistema operativo. Per ulteriori informazioni, vedere [Windows Driver Kit (WDK)](/windows-hardware/drivers/index).

## <a name="windows-services"></a>Servizi Windows

Un *servizio* di Windows è un programma che può essere eseguito in background con un'interazione utente minima o nulla. Questi programmi sono detti *daemon* nei sistemi UNIX. Per altre informazioni, vedere [Servizi](/windows/win32/services/services).

## <a name="sdks-libraries-and-header-files"></a>SDK, librerie e file di intestazione

Visual Studio include la libreria di runtime C (CRT), la libreria standard C++ e altre librerie specifiche di Microsoft. La maggior parte delle cartelle di inclusione che contengono i file di intestazione per queste librerie si trova nella directory di installazione di Visual Studio nella cartella \VC\ I file di intestazione di Windows e CRT si trovano nella cartella di installazione di Windows SDK.

[Gestione pacchetti vcpkg](../build/vcpkg.md) consente di installare comodamente centinaia di librerie open source di terze parti per Windows.

Le librerie Microsoft includono:

- Microsoft Foundation Classes (MFC): un framework orientato a oggetti per la creazione di programmi Windows tradizionali, in particolare applicazioni aziendali, con interfacce utente avanzate dotate di pulsanti, caselle di riepilogo, visualizzazioni albero e altri controlli. Per altre informazioni, vedere [MFC Desktop Applications](../mfc/mfc-desktop-applications.md).

- Active Template Library (ATL): una libreria helper efficace per la creazione di componenti COM. Per altre informazioni, vedere [ATL COM Desktop Components](../atl/atl-com-desktop-components.md).

- C++ AMP (C++ Accelerated Massive Parallelism): una libreria che consente attività di elaborazione generale a elevate prestazioni nella GPU. Per altre informazioni, vedere [C++ AMP (C++ Accelerated Massive Parallelism)](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md).

- Runtime di concorrenza: una libreria che semplifica le attività di programmazione asincrona e in parallelo per dispositivi multicore e many-core. Per altre informazioni, vedere [Concurrency Runtime](../parallel/concrt/concurrency-runtime.md).

Anche molti scenari di programmazione Windows richiedono Windows SDK, che include i file di intestazione che garantiscono l'accesso ai componenti del sistema operativo Windows. Per impostazione predefinita, Visual Studio installa il Windows SDK come componente del carico di lavoro desktop C++, che consente lo sviluppo di app di Windows universale. Per sviluppare app UWP, è necessaria la versione di Windows 10 del Windows SDK. Per informazioni, vedere [Windows 10 SDK](https://dev.windows.com/downloads/windows-10-sdk). Per ulteriori informazioni su Windows SDK per le versioni precedenti di Windows, vedere l' [archivio Windows SDK](https://developer.microsoft.com/windows/downloads/sdk-archive).

**Program Files (x86) \Windows Kit** è il percorso predefinito per tutte le versioni del Windows SDK installato.

Altre piattaforme quali Xbox e Azure dispongono di SDK specifiche, che potrebbe essere necessario installare. Per altre informazioni, vedere il Centro per sviluppatori DirectX e Azure.

## <a name="development-tools"></a>Strumenti di sviluppo

Visual Studio include un potente debugger per codice nativo, strumenti di analisi statica, strumenti di debug grafico, un editor di codice completo, supporto per unit test e molti altri strumenti ed utilità. Per altre informazioni, vedere Introduzione allo [sviluppo con Visual Studio](/visualstudio/ide/get-started-developing-with-visual-studio)e [Panoramica dello sviluppo in C++ in Visual Studio](../overview/overview-of-cpp-development.md).

## <a name="in-this-section"></a>Contenuto della sezione

|Titolo|Descrizione|
|-----------|-----------------|
|[Procedura dettagliata: creazione di un programma C++ standard](walkthrough-creating-a-standard-cpp-program-cpp.md)| Creare un'applicazione console di Windows.|
|[Procedura dettagliata: creazione di applicazioni desktop di Windows (C++)](walkthrough-creating-windows-desktop-applications-cpp.md)|Creare un'applicazione desktop di Windows nativa.|
|[Creazione guidata desktop di Windows](windows-desktop-wizard.md)|Utilizzare la procedura guidata per creare nuovi progetti Windows.|
|[Active Template Library (ATL)](../atl/atl-com-desktop-components.md)|Utilizzare la libreria ATL per creare componenti COM in C++.|
|[Microsoft Foundation Classes (MFC)](../mfc/mfc-desktop-applications.md)|Usare MFC per creare applicazioni Windows di grandi dimensioni o piccole con finestre di dialogo e controlli|
|[Classi condivise ATL e MFC](../atl-mfc-shared/atl-mfc-shared-classes.md)|Utilizzare classi come CString condivise in ATL e MFC.|
|[Accesso ai dati](../data/data-access-in-cpp.md)| OLE DB e ODBC|
|[Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)|Vari tipi di stringa in Windows.|
|[Risorse per la creazione di un gioco con DirectX](resources-for-creating-a-game-using-directx.md)
|[Procedura: usare Windows 10 SDK in un'applicazione desktop di Windows](how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md)|Windows SDK|
|[Uso di file di risorse](working-with-resource-files.md)|Come aggiungere immagini, icone, tabelle di stringhe e altre risorse a un'applicazione desktop.|
|[Risorse per la creazione di un gioco con DirectX (C++)](resources-for-creating-a-game-using-directx.md)|Collegamenti al contenuto per la creazione di giochi in C++.|
|[Procedura: usare Windows 10 SDK in un'applicazione desktop di Windows](how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md)|Contiene i passaggi per configurare il progetto da compilare mediante Windows 10 SDK.|
|[Distribuzione di applicazioni desktop native](deploying-native-desktop-applications-visual-cpp.md)|Distribuire applicazioni native in Windows.|

## <a name="related-articles"></a>Articoli correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md)|Argomento padre per Visual C++ contenuto dello sviluppatore.|
[Sviluppo di .NET con C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)|Creare wrapper per le librerie C++ native che consentono la comunicazione con le applicazioni e i componenti .NET.|
|[Estensioni del componente per .NET e UWP](../extensions/component-extensions-for-runtime-platforms.md)|Riferimento per gli elementi della sintassi condivisi da C++/CX e C++/CLI.|
|[App di Windows universale (C++)](../cppcx/universal-windows-apps-cpp.md)|Scrivere applicazioni UWP con C++/CX o Windows Runtime Template Library (WRL).|
|[Attributi di C++ per COM e .NET](attributes/cpp-attributes-com-net.md)|Attributi non standard per la programmazione solo per Windows con .NET o COM.|
