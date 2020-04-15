---
title: Cenni preliminari sulla programmazione Windows in C++
ms.date: 09/17/2019
ms.assetid: efc691d7-21f3-47ae-ae56-cab999ccf59d
ms.openlocfilehash: 8ab7fbf7c955b1c828ef583aa639eda7409cf167
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81359937"
---
# <a name="overview-of-windows-programming-in-c"></a>Cenni preliminari sulla programmazione Windows in C++

Ci sono diverse ampie categorie di applicazioni di Windows che è possibile creare con C . Ognuna dispone di un proprio modello di programmazione e di un set di librerie specifiche di Windows, ma è possibile utilizzare la libreria standard di C, una e le librerie di terze parti, in ognuna di esse.

In questa sezione viene illustrato come utilizzare Visual Studio e le librerie wrapper MFC/ATL per creare programmi Windows. Per la documentazione sulla piattaforma Windows stessa, vedere la [documentazione di Windows](/windows/index).

## <a name="command-line-console-applications"></a>Applicazioni da riga di comando (console)

Le applicazioni di console di C, vengono eseguite dalla riga di comando in una finestra della console e possono visualizzare solo l'output di testo. Per ulteriori informazioni, vedere Creazione di un progetto di [app per console di C.](../get-started/tutorial-console-cpp.md)

## <a name="native-desktop-client-applications"></a>Applicazioni client desktop native

Un'applicazione client desktop nativa è *un'applicazione* con finestre C o C, che utilizza le API Windows C native originali o le [API COM (Component Object Model)](/windows/win32/apiindex/windows-api-list) per accedere al sistema operativo. Tali API sono scritte per lo più in C. Esiste più di un modo per creare un'app desktop nativa: è possibile programmare utilizzando direttamente le API Win32, usando un ciclo di messaggi di tipo C che elabora gli eventi del sistema operativo. In alternativa, è possibile programmare utilizzando *Microsoft Foundation Classes* (MFC), una libreria c'è leggermente orientata agli oggetti che esegue il wrapping di Win32. Nessuno dei due approcci è considerato "moderno" rispetto alla piattaforma UWP (Universal Windows Platform), ma entrambi sono ancora completamente supportati e hanno milioni di righe di codice in esecuzione nel mondo di oggi. Un'applicazione Win32 che viene eseguita in una finestra richiede allo sviluppatore di lavorare in modo esplicito con i messaggi di Windows all'interno di una funzione di routine di Windows.A Win32 application that runs in a window requires the developer to work explicitly with Windows messages inside a Windows procedure function. Nonostante il nome, un'applicazione Win32 può essere compilata come binario a 32 bit (x86) o a 64 bit (x64). Nell'IDE di Visual Studio, i termini x86 e Win32 sono sinonimi.

Per iniziare a usare la programmazione tradizionale di Windows C, vedere [Introduzione a Win32 e .NET.](/windows/win32/LearnWin32/learn-to-program-for-windows) Dopo aver ottenuto una certa conoscenza di Win32, sarà più facile ottenere informazioni sulle [applicazioni desktop MFC](../mfc/mfc-desktop-applications.md). Per un esempio di un'applicazione desktop tradizionale di C, che utilizza una grafica sofisticata, vedere [Hilo: Sviluppo di applicazioni in linguaggio C, per Windows.](https://msdn.microsoft.com/library/windows/desktop/ff708696.aspx)

### <a name="c-or-net"></a>C'è o .NET?

In generale, la programmazione .NET in Cè è meno complessa, meno soggetta a errori e dispone di un'API orientata agli oggetti più moderna rispetto a Win32 o MFC. Nella maggior parte dei casi, le sue prestazioni sono più che adeguate. .NET offre Windows Presentation Foundation (WPF) per la grafica avanzata ed è possibile utilizzare sia Win32 che l'API di Windows Runtime moderna. Come regola generale, si consiglia di utilizzare il c. per le applicazioni desktop quando è necessario:

- controllo preciso sull'utilizzo della memoria
- la massima economia nel consumo di energia
- utilizzo della GPU per l'informatica generale
- accesso a DirectX
- l'uso intensivo delle librerie standard di C

E 'anche possibile combinare la potenza e l'efficienza di C . È possibile creare un'interfaccia utente in C, quindi usare c'è/CLI per consentire all'applicazione di utilizzare le librerie Native di C. Per ulteriori informazioni, vedere [Programmazione .NET con C.NET/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

## <a name="com-components"></a>Componenti COM

Il [modello COM (Component Object Model)](/windows/win32/com/the-component-object-model) è una specifica che consente ai programmi scritti in linguaggi diversi di comunicare tra loro. Molti componenti di Windows vengono implementati come oggetti COM e seguono le regole COM standard per la creazione di oggetti, l'individuazione dell'interfaccia e la distruzione degli oggetti.  L'utilizzo di oggetti COM da applicazioni desktop C , è relativamente semplice, ma la scrittura di un oggetto COM è più avanzata. La [libreria ATL (Active Template Library)](../atl/atl-com-desktop-components.md) fornisce macro e funzioni di supporto che semplificano lo sviluppo COM. Per ulteriori informazioni, vedere [Componenti desktop COM ATL](../atl/atl-com-desktop-components.md).

## <a name="universal-windows-platform-apps"></a>App della piattaforma UWP (Universal Windows Platform)

La piattaforma UWP (Universal Windows) è l'API windows moderna. Le app UWP vengono eseguite su qualsiasi dispositivo Windows 10, usano XAML per l'interfaccia utente e sono completamente abilitate per il tocco. Per ulteriori informazioni sulla piattaforma UWP, vedere [Che cos'è un'app UWP (Universal Windows Platform)](/windows/uwp/get-started/whats-a-uwp) e [Guida alle app universali](/windows/uwp/get-started/universal-application-platform-guide)di Windows .

Il supporto originale di C, c'è, basato su (1) C , C , C , un dialetto di C , con le estensioni della sintassi, o (2) la libreria di Runtime di Windows (WRL), che si basa su c'è e COM standard. Sono ancora supportate sia la lingua di c/cX che la funzionalità WRL. Per i nuovi progetti, si consiglia di utilizzare il linguaggio [C,](/windows/uwp/cpp-and-winrt-apis/intro-to-using-cpp-with-winrt)che è interamente basato sul linguaggio standard di C, e di ottenere prestazioni più veloci.

## <a name="desktop-bridge"></a>Desktop Bridge

In Windows 10 puoi creare un pacchetto dell'applicazione desktop o dell'oggetto COM esistente come app UWP e aggiungere funzionalità UWP come il tocco o chiamare le API dal set di API Di Windows moderno. Puoi anche aggiungere un'app UWP a una soluzione desktop in Visual Studio e creare un pacchetto in un unico pacchetto e usare le API di Windows per comunicare tra di esse.

Visual Studio 2017 versione 15.4 e successive consente di creare un progetto di pacchetto dell'applicazione Windows per semplificare notevolmente il lavoro di creazione del pacchetto dell'applicazione desktop esistente. Alcune restrizioni si applicano alle chiamate del Registro di sistema o alle API che possono essere usate dall'applicazione desktop. Tuttavia, in molti casi puoi creare percorsi di codice alternativi per ottenere funzionalità simili durante l'esecuzione in un pacchetto dell'app. Per altre informazioni, vedere [Desktop Bridge](/windows/uwp/porting/desktop-to-uwp-root).

## <a name="games"></a>Giochi

I giochi DirectX possono essere eseguiti sul PC o su Xbox. Per ulteriori informazioni, consultate [Grafica e giochi DirectX.](/windows/win32/directx)

## <a name="sql-server-database-clients"></a>Client di database di SQL Server

Per accedere ai database di SQL Server dal codice nativo, utilizzare ODBC o OLE DB. Per altre informazioni, vedere [SQL Server Native Client](/sql/relational-databases/native-client/odbc/sql-server-native-client-odbc).

## <a name="windows-device-drivers"></a>Driver di dispositivo Windows

I driver sono componenti di basso livello che rendono i dati dei dispositivi hardware accessibili alle applicazioni e ad altri componenti del sistema operativo. Per ulteriori informazioni, vedere [Windows Driver Kit (WDK)](/windows-hardware/drivers/index).

## <a name="windows-services"></a>Servizi Windows

Un *servizio* Windows è un programma che può essere eseguito in background con poca o nessuna interazione da parte dell'utente. Questi programmi sono chiamati *daemons* sui sistemi UNIX. Per altre informazioni, vedere [Servizi](/windows/win32/services/services).

## <a name="sdks-libraries-and-header-files"></a>SDK, librerie e file di intestazione

Visual Studio include la libreria di runtime C (CRT), la libreria standard di C , e altre librerie specifiche di Microsoft. La maggior parte delle cartelle di inclusione che contengono i file di intestazione per queste librerie si trovano nella directory di installazione di Visual Studio nella cartella .VC. I file di intestazione di Windows e CRT si trovano nella cartella di installazione di Windows SDK.

Il gestore di [pacchetti Vcpkg](../build/vcpkg.md) consente di installare comodamente centinaia di librerie open source di terze parti per Windows.

Le librerie Microsoft includono:

- Microsoft Foundation Classes (MFC): un framework orientato a oggetti per la creazione di programmi Windows tradizionali, in particolare applicazioni aziendali, con interfacce utente avanzate dotate di pulsanti, caselle di riepilogo, visualizzazioni albero e altri controlli. Per altre informazioni, vedere [MFC Desktop Applications](../mfc/mfc-desktop-applications.md).

- Active Template Library (ATL): una libreria helper efficace per la creazione di componenti COM. Per altre informazioni, vedere [ATL COM Desktop Components](../atl/atl-com-desktop-components.md).

- C++ AMP (C++ Accelerated Massive Parallelism): una libreria che consente attività di elaborazione generale a elevate prestazioni nella GPU. Per altre informazioni, vedere [C++ AMP (C++ Accelerated Massive Parallelism)](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md).

- Runtime di concorrenza: una libreria che semplifica le attività di programmazione asincrona e in parallelo per dispositivi multicore e many-core. Per altre informazioni, vedere [Concurrency Runtime](../parallel/concrt/concurrency-runtime.md).

Anche molti scenari di programmazione Windows richiedono Windows SDK, che include i file di intestazione che garantiscono l'accesso ai componenti del sistema operativo Windows. Per impostazione predefinita, Visual Studio installa Windows SDK come componente del carico di lavoro del desktop di C, che consente lo sviluppo di app di Windows universali. Per sviluppare app UWP, è necessaria la versione windows 10 di Windows SDK. Per informazioni, vedere [Windows 10 SDK](https://dev.windows.com/downloads/windows-10-sdk). Per ulteriori informazioni sugli SDK di Windows per le versioni precedenti di Windows, vedere [l'archivio](https://developer.microsoft.com/windows/downloads/sdk-archive)di Windows SDK .

**Programmi (x86): Windows Kit** è il percorso predefinito per tutte le versioni di Windows SDK installate.

Altre piattaforme quali Xbox e Azure dispongono di SDK specifiche, che potrebbe essere necessario installare. Per altre informazioni, vedere il Centro per sviluppatori DirectX e Azure.

## <a name="development-tools"></a>Strumenti di sviluppo

Visual Studio include un potente debugger per codice nativo, strumenti di analisi statica, strumenti di debug grafico, un editor di codice completo, supporto per unit test e molti altri strumenti ed utilità. Per ulteriori informazioni, vedere [Introduzione allo sviluppo con Visual Studio](/visualstudio/ide/get-started-developing-with-visual-studio)e [Cenni preliminari relativi allo sviluppo in Visual Studio.](../overview/overview-of-cpp-development.md)

## <a name="in-this-section"></a>Contenuto della sezione

|Titolo|Descrizione|
|-----------|-----------------|
|[Procedura dettagliata: creazione di un programma standard di C](walkthrough-creating-a-standard-cpp-program-cpp.md)| Creare un'applicazione console di Windows.Create a Windows console application.|
|[Procedura dettagliata: creazione di applicazioni desktop di Windows (C++)](walkthrough-creating-windows-desktop-applications-cpp.md)|Creare un'applicazione desktop Windows nativa.|
|[Creazione guidata applicazione desktop di Windows](windows-desktop-wizard.md)|Utilizzare la procedura guidata per creare nuovi progetti Windows.|
|[Active Template Library (ATL)](../atl/atl-com-desktop-components.md)|Utilizzare la libreria ATL per creare i componenti COM in C .|
|[Microsoft Foundation Classes (MFC)](../mfc/mfc-desktop-applications.md)|Utilizzare MFC per creare applicazioni Windows di grandi o piccole dimensioni con finestre di dialogo e controlliUse MFC to create large or small Windows applications with dialogs and controls|
|[Classi condivise ATL e MFC](../atl-mfc-shared/atl-mfc-shared-classes.md)|Utilizzare classi quali CString condivise in ATL e MFC.|
|[Accesso ai dati](../data/data-access-in-cpp.md)| OLE DB e ODBC|
|[Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)|Vari tipi di stringa in Windows.|
|[Risorse per la creazione di un gioco tramite DirectX](resources-for-creating-a-game-using-directx.md)
|[Procedura: Usare Windows 10 SDK in un'applicazione di Windows Desktop](how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md)|Windows SDK|
|[Uso di file di risorse](working-with-resource-files.md)|Come aggiungere immagini, icone, tabelle di stringhe e altre risorse a un'applicazione desktop.|
|[Risorse per la creazione di un gioco con DirectX (C++)](resources-for-creating-a-game-using-directx.md)|Collegamenti a contenuti per la creazione di giochi in C .|
|[Procedura: Usare Windows 10 SDK in un'applicazione di Windows Desktop](how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md)|Contiene i passaggi per configurare il progetto da compilare mediante Windows 10 SDK.|
|[Distribuzione di applicazioni desktop native](deploying-native-desktop-applications-visual-cpp.md)|Distribuire applicazioni native in Windows.Deploy native applications on Windows.|

## <a name="related-articles"></a>Articoli correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[C'è in Visual Studio](../overview/visual-cpp-in-visual-studio.md)|Argomento dell'elemento padre per i contenuti per sviluppatori di Visual C.|
[Sviluppo di .NET con C](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)|Creare wrapper per le librerie native di C, che consentono la comunicazione con applicazioni e componenti .NET.|
|[Estensioni dei componenti per .NET e UWP](../extensions/component-extensions-for-runtime-platforms.md)|Riferimento per gli elementi della sintassi condivisi da C .|
|[App di Windows universale (C++)](../cppcx/universal-windows-apps-cpp.md)|Scrivere le applicazioni UWP utilizzando c'è / CX o Windows Runtime Template Library (WRL).|
|[Attributi di C++ per COM e .NET](attributes/cpp-attributes-com-net.md)|Attributi non standard per la programmazione solo Windows tramite .NET o COM.|
