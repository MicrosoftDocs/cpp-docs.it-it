---
title: Cenni preliminari sulla programmazione Windows in C++
ms.date: 11/15/2018
ms.assetid: efc691d7-21f3-47ae-ae56-cab999ccf59d
ms.openlocfilehash: b33236df6e4c7f679ff1dd9f9f8bc409c86e011a
ms.sourcegitcommit: b032daf81cb5fdb1f5a988277ee30201441c4945
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/15/2018
ms.locfileid: "51693861"
---
# <a name="overview-of-windows-programming-in-c"></a>Cenni preliminari sulla programmazione Windows in C++

Esistono molte ampie categorie di applicazioni di Windows che è possibile creare con C++. Ognuno ha il proprio modello di programmazione e set di librerie di classi specifiche di Windows, ma la libreria standard C++ nonché librerie di C++ di terze parti sono utilizzabili in uno di essi. 

## <a name="command-line-console-applications"></a>Applicazioni della riga di comando (console)

Applicazioni console C++ eseguito dalla riga di comando nella finestra della console e visualizzare solo un output di testo. Per altre informazioni, vedere [applicazioni Console](console-applications-in-visual-cpp.md).
 
## <a name="native-desktop-client-applications"></a>Applicazioni client desktop native

Il termine *applicazione client nativo desktop* fa riferimento a un'applicazione di funzioni C o C++ che usa le API di Win32 originale di Windows per accedere al sistema operativo. Tali API sono scritti principalmente in C. Quando si crea questo tipo di applicazione, è possibile scegliere di programmare direttamente da un ciclo di messaggi di tipo C che elabora eventi del sistema operativo o utilizzando *Microsoft Foundation Classes* (MFC), una libreria di C++ che esegue il wrapping di Win32 in modo che è un po' orientate a oggetti. Nessuno dei due approcci viene considerato "modern" rispetto a Universal Windows Platform (vedere sotto), ma entrambi sono ancora completamente supportati e hanno milioni di righe di codice in esecuzione in tutto il mondo oggi stesso.

Per iniziare a usare tradizionale di programmazione C++ di Windows, vedere [Introduzione a C++ e Win32](/windows/desktop/LearnWin32/learn-to-program-for-windows). Dopo aver ottenuto una buona conoscenza di Win32, sarà più facile da apprendere [MFC Desktop Applications](/mfc/mfc-desktop-applications). Per un esempio di un'applicazione desktop tradizionale C++ che usa grafiche sofisticate, vedere [Hilo: sviluppo di applicazioni C++ per Windows](https://msdn.microsoft.com/library/windows/desktop/ff708696.aspx).

### <a name="c-or-net"></a>C++ o .NET? 

Per scenari di applicazioni desktop (in altre parole, non targeting UWP), è consigliabile usare C# e .NET. Infatti, programmazione .NET è in genere meno complessa, meno soggetto a errori e ha un'API orientata agli oggetti più moderna di Win32 o MFC. Nella maggior parte dei casi, le prestazioni sono più che sufficiente. Le funzionalità .NET Windows Presentation Foundation (WPF) per migliorare la grafica, ed è possibile utilizzare Win32, nonché Windows moderne API di Runtime (vedere la piattaforma UWP riportato di seguito). Come regola generale, è consigliabile usare C++ per le applicazioni desktop quando è necessario:

- controllo preciso sull'utilizzo della memoria
- per un'economia nel consumo di energia elettrica
- utilizzo della GPU per il calcolo generale
- l'accesso a DirectX
- utilizzo intenso di librerie standard C++

## <a name="com-components"></a>Componenti COM

Molte parti del sistema operativo Windows sono basate sul modello COM (Component Object) che definisce uno standard binario che consente al componente devono essere usati dalle applicazioni client scritte in qualunque linguaggio di programmazione. In C++ è possibile usare la libreria ATL (Active Template) per semplificare il lavoro di creazione di componenti COM personalizzati. Per altre informazioni, vedere [modello COM (Component Object)](/windows/desktop/com/component-object-model--com--portal) e [componenti desktop COM ATL](../atl/atl-com-desktop-components.md).

## <a name="windows-universal-apps"></a>App universali di Windows

Universal Windows Platform (UWP) è l'API Windows moderna. Le app UWP eseguiti su qualsiasi dispositivo Windows 10, usano XAML per l'interfaccia utente e sono completamente abilitati per il tocco. Per altre informazioni sulla piattaforma UWP, vedere [che cos'è un'app Universal Windows Platform (UWP)?](/windows/uwp/get-started/whats-a-uwp) e [Guida alle App universali di Windows](/windows/uwp/get-started/universal-application-platform-guide).

Il supporto C++ originale per la piattaforma UWP contava di (1) C + + c++ /CX, un dialetto di C++ con le estensioni di sintassi o (2) di Windows libreria Runtime (WRL) basata su standard C++ e COM. Entrambi C + + c++ /CX e WRL sono ancora supportati. Per i nuovi progetti è consigliabile [C + + / WinRT](/windows/uwp/cpp-and-winrt-apis/intro-to-using-cpp-with-winrt) che è interamente basato su standard di C++ e fornisce prestazioni più veloci. 

Per Windows 10, è possibile creare un pacchetto dell'applicazione desktop C++ esistente come-sia per la distribuzione tramite il Microsoft Store. Per altre informazioni, vedere [pacchetto di applicazioni desktop (Desktop Bridge)](/windows/uwp/porting/desktop-to-uwp-root).

## <a name="games"></a>Giochi

Giochi DirectX eseguibili nel PC o su Xbox. Per altre informazioni, vedere [grafica e giochi DirectX](/windows/desktop/directx).

## <a name="net-wrappers-for-c-libraries"></a>Wrapper di .NET per le librerie di C++

È possibile usare C + + / interfaccia della riga di comando per creare un livello di interoperabilità che consente al codice .NET di usare le librerie C++ native. Per altre informazioni, vedere [programmazione .NET con c++ /CLI CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

## <a name="sql-server-database-clients"></a>Client del database SQL Server

Per accedere a database di SQL Server da codice nativo, utilizzare ODBC o OLE DB. Per altre informazioni, vedere [SQL Server Native Client](/sql/relational-databases/native-client/odbc/sql-server-native-client-odbc).

## <a name="windows-device-drivers"></a>Driver di dispositivo Windows

I driver sono componenti di basso livello che rendono i dati dai dispositivi hardware accessibile alle applicazioni e altri componenti del sistema operativo. Per altre informazioni, vedere [Windows Driver Kit (WDK)](/windows-hardware/drivers/index).

## <a name="windows-services"></a>Servizi Windows

Un Windows *servizio* è un programma che possono essere eseguiti in background senza alcuna interazione da parte dell'utente. In UNIX dette *daemon*. Per altre informazioni, vedere [Services](/windows/desktop/services/services).

## <a name="sdks-libraries-and-header-files"></a>Gli SDK, librerie e i file di intestazione

Visual Studio include la libreria di Runtime C (CRT), la libreria Standard C++ e altre librerie specifiche di Microsoft. Le cartelle di inclusione che contengono i file di intestazione per queste librerie si trovano nella directory di installazione di Visual Studio nella cartella \VC\ o, nel caso di CRT, nella cartella di installazione Windows SDK.

È possibile usare la [di gestione pacchetti Vcpkg](../vcpkg.md) facilmente installare centinaia di librerie open source di terze parti per Windows.

Le librerie Microsoft includono:

- Microsoft Foundation Classes (MFC): un framework orientato a oggetti per la creazione di programmi Windows tradizionali, in particolare applicazioni aziendali, con interfacce utente avanzate dotate di pulsanti, caselle di riepilogo, visualizzazioni albero e altri controlli. Per altre informazioni, vedere [MFC Desktop Applications](../mfc/mfc-desktop-applications.md).

- Active Template Library (ATL): una libreria helper efficace per la creazione di componenti COM. Per altre informazioni, vedere [ATL COM Desktop Components](../atl/atl-com-desktop-components.md).

- C++ AMP (C++ Accelerated Massive Parallelism): una libreria che consente attività di elaborazione generale a elevate prestazioni nella GPU. Per altre informazioni, vedere [C++ AMP (C++ Accelerated Massive Parallelism)](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md).

- Runtime di concorrenza: una libreria che semplifica le attività di programmazione asincrona e in parallelo per dispositivi multicore e many-core. Per altre informazioni, vedere [Concurrency Runtime](../parallel/concrt/concurrency-runtime.md).

Anche molti scenari di programmazione Windows richiedono Windows SDK, che include i file di intestazione che garantiscono l'accesso ai componenti del sistema operativo Windows. Per impostazione predefinita, Visual Studio installa il SDK di Windows come componente del carico di lavoro Desktop C++, che permette lo sviluppo di App di Windows universale. Per sviluppare le app UWP, è necessaria la versione di Windows 10 di Windows SDK. Per informazioni, vedere [Windows 10 SDK](https://dev.windows.com/downloads/windows-10-sdk). (Per altre informazioni su Windows SDK per versioni precedenti di Windows, vedere la [archivio SDK Windows](https://developer.microsoft.com/windows/downloads/sdk-archive)).

**Programmare file (x86) \Windows Kit** è il percorso predefinito per tutte le versioni del SDK di Windows installate.

Altre piattaforme quali Xbox e Azure dispongono di SDK specifiche, che potrebbe essere necessario installare. Per altre informazioni, vedere il Centro per sviluppatori DirectX e Azure.

## <a name="development-tools"></a>Strumenti di sviluppo

Visual Studio include un potente debugger per codice nativo, strumenti di analisi statica, strumenti di debug grafico, un editor di codice completo, supporto per unit test e molti altri strumenti ed utilità. Per altre informazioni, vedere [iniziare a sviluppare con Visual Studio](/visualstudio/ide/get-started-developing-with-visual-studio), e [IDE e strumenti di sviluppo](../ide/ide-and-tools-for-visual-cpp-development.md).

## <a name="in-this-section"></a>Contenuto della sezione
|Titolo|Descrizione|
|-----------|-----------------|
|[Applicazioni desktop di Windows in C++](desktop-applications-visual-cpp.md)| Come creare applicazioni desktop tradizionali.|
|[Active Template Library (ATL)](../atl/TOC.md)|Usare la libreria ATL per creare componenti COM in C++.|
|[Microsoft Foundation Classes (MFC)](../mfc/TOC.md)|Usare MFC per creare grandi o piccole applicazioni di Windows con finestre di dialogo e controlli|
|[Classi condivise ATL e MFC](../atl-mfc-shared/TOC.md)|Usare le classi, ad esempio CString che vengono condivisi in ATL e MFC.|
|[Sviluppo in .NET con C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)|Creare wrapper per le librerie C++ native che ne consentono la comunicazione con componenti e le applicazioni .NET.|
|[Estensioni componenti per .NET e UWP](component-extensions-for-runtime-platforms.md)|Informazioni di riferimento per gli elementi della sintassi condivisi da C + + c++ /CX e c++ /CLI CLI.|
|[App di Windows universale (C++)](universal-windows-apps-cpp.md)|Scrivere le applicazioni UWP usando C + + c++ /CX o libreria di modelli di Windows Runtime (WRL).|
|[Attributi di C++ per COM e .NET](attributes/cpp-attributes-com-net.md)|Attributi non standard per la programmazione solo Windows tramite .NET o COM.|

## <a name="related-articles"></a>Articoli correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[Visual C++](../visual-cpp-in-visual-studio.md)|Argomento principale per il contenuto per gli sviluppatori di Visual C++.|
