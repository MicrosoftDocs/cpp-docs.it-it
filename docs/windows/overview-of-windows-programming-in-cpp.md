---
title: Cenni preliminari sulla programmazione Windows in C++
ms.date: 04/06/2018
ms.assetid: efc691d7-21f3-47ae-ae56-cab999ccf59d
ms.openlocfilehash: 6ec12428b090d2317a6f2e5cc493d1e4f9392ff4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50494406"
---
# <a name="overview-of-windows-programming-in-c"></a>Cenni preliminari sulla programmazione Windows in C++

È possibile usare Visual C++ per scrivere vari tipi di programmi in esecuzione su un PC Windows (x x86, x64 o ARM), in un server di Windows, nel cloud o in Xbox. I programmi in C++ ben scritti sono queste qualità:

- efficiente nel caso di requisiti di memoria
- conveniente in termini di consumo di energia
- in grado di sfruttare al meglio dei dispositivi multicore o many-core
- in grado di eseguire attività generali di elaborazione nell'unità di elaborazione grafica (GPGPU)
- è possibile sfruttare altri recenti progressi nell'hardware.

Esistono molte ampie categorie di app di Windows che è possibile sviluppare con Visual C++. Queste categorie hanno modelli di programmazione diversi o modelli di app, che sono state introdotte nel corso degli anni. Ogni modello Usa diverse librerie e API per fornire l'accesso alla piattaforma e creare interfacce utente, ad esempio le finestre di dialogo. La libreria standard C++ nonché librerie di terze parti sono utilizzabile in una qualsiasi di queste categorie, con alcune restrizioni per la piattaforma UWP.

- [App universali di Windows](#BK_WindowsUniversal). La terza categoria di app di Windows è stata introdotta con Windows 8 e il supporto per questa categoria di app continua anche in Windows 10. Queste app sono in genere chiamate semplicemente "app di Windows" e includono app desktop e per dispositivi mobili destinate a svariati dispositivi. È possibile scrivere queste app in C++/CX, un dialetto di C++ che include il supporto per lo sviluppo di Windows Runtime, oppure in C++ standard con COM usando la libreria di Windows Runtime (WRL). Queste app sono state originariamente progettate per l'esecuzione a schermo intero, ma gli utenti di Windows 10 possono scegliere di eseguirle in una finestra desktop. Benché queste app siano orientate al tocco, è facile usarle con il mouse se gli utenti lo preferiscono o se non è disponibile un touch screen. Queste App vengono distribuite di Microsoft Store, questo motivo vengono ora chiamate "Store" app.

Le app UWP sono in grado di eseguire in tutti i dispositivi Windows 10, come Tablet e telefoni cellulari, nonché sul desktop. Sul desktop possono essere eseguite come finestra desktop invece che a schermo intero. Queste app possono essere eseguite anche in Xbox e sui dispositivi futuri.  Le app UWP vengono eseguite nel Runtime di Windows, che fornisce un'interfaccia per i diversi dispositivi hardware che sono supportati in Windows, servizi e gli elementi dell'interfaccia utente.

È possibile scrivere le app UWP in C + + c++ /CX, un dialetto di C++, è possibile usare la [C + c++ /CLI libreria WinRT](https://moderncpp.com/) per alcuni scenari. Le app UWP compilate in codice nativo e hanno un'interfaccia utente XAML oppure usano DirectX. Componenti Windows Runtime scritte in codice nativo che possono utilizzare le app UWP scritte in altri linguaggi. Per altre informazioni, vedere [creare un'app della piattaforma universale di Windows in C++](http://go.microsoft.com/fwlink/?LinkID=534976), [creare il tuo primo gioco UWP con DirectX](http://go.microsoft.com/fwlink/p/?LinkId=244656), e [componenti di creazione di Windows Runtime in C++](http://go.microsoft.com/fwlink/p/?LinkId=244658).

   Questa categoria include anche l'uso di C++ per componenti di base e codice di calcolo nel contesto della programmazione server e cloud. Talvolta il codice a prestazioni intensive alla base di un'applicazione server o cloud viene scritto in C++ per ottimizzare le prestazioni. È possibile compilare questo codice in una DLL e usarlo da C# o Visual Basic.

- **Applicazioni .NET Framework**. La maggior parte delle applicazioni .NET Framework sono scritti in c# o Visual Basic, ma è possibile usare anche c++ /CLI CLI (il `/clr` opzione del compilatore in Visual C++). È consigliabile usare C++/CLI per un livello minimo di interoperabilità in un'applicazione di grandi dimensioni che include codice gestito e nativo.

##  <a name="BK_WindowsUniversal"></a> Windows Universal Apps

Con Windows 10, le app possono essere eseguite su tutti i dispositivi Windows 10, tra cui tablet e telefoni cellulari, nonché sul desktop. Sul desktop possono essere eseguite come finestra desktop invece che a schermo intero. Queste app possono essere eseguite anche in Xbox e sui dispositivi futuri.  Il modello di programmazione per i due tipi di app è diverso da quello delle applicazioni desktop Win32. Queste app di Windows vengono eseguite in Windows Runtime, che fornisce gli elementi dell'interfaccia utente, i servizi essenziali per le app e un'interfaccia per i diversi dispositivi hardware supportati. Queste app vengono compilate in codice nativo e hanno un'interfaccia utente XAML oppure usano DirectX. È anche possibile scrivere componenti Windows Runtime in codice nativo utilizzabili da altre app di Windows, sono incluse le app scritte in c#, Visual Basic o JavaScript. Per altre informazioni, vedere [creare un'app "Hello world" UWP in C++](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp), [creare un semplice gioco UWP con DirectX](/windows/uwp/gaming/tutorial--create-your-first-uwp-directx-game), e [componenti di creazione di Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp).

> [!TIP]
> Per Windows 10, è possibile utilizzare il Desktop App Converter per creare il pacchetto dell'applicazione desktop esistente per la distribuzione tramite il Microsoft Store. Per altre informazioni, vedere i post relativi all'[uso del runtime di Visual C++ nel progetto Centennial](https://blogs.msdn.microsoft.com/vcblog/2016/07/07/using-visual-c-runtime-in-centennial-project) e al [trasferimento dell'app desktop sulla piattaforma UWP con Desktop Bridge](https://msdn.microsoft.com/windows/uwp/porting/desktop-to-uwp-root).

Per alcuni esempi della piattaforma UWP (Universal Windows Platform), vedere [Windows Universal Samples on GitHub](https://github.com/Microsoft/Windows-universal-samples)(Esempi per la piattaforma universale di Windows su GitHub).

Se si dispone di un progetto Windows 8.1 esistente e si vuole convertirlo per Windows 10, vedere [Porting alla piattaforma Windows Universal](../porting/porting-to-the-universal-windows-platform-cpp.md). Se si dispongono di esistente le librerie desktop Win32 classici e di codice che si desidera integrare in un'app UWP, vedere [procedura: usare codice C++ esistente in un'App della piattaforma Windows Universal](../porting/how-to-use-existing-cpp-code-in-a-universal-windows-platform-app.md).

Per altre informazioni sulla piattaforma UWP in generale, vedere [che cos'è un'app Universal Windows Platform (UWP)?](/windows/uwp/get-started/whats-a-uwp).

Per altre informazioni su tutti questi concetti, vedere [Guida alle app UWP (Universal Windows Platform)](http://go.microsoft.com/fwlink/p/?linkid=534605).

##  <a name="BK_Native"></a> Applicazioni desktop e Server

Per apprendere le nozioni fondamentali di scrittura di applicazioni client Windows per il desktop, vedere [Developing Windows Applications in C++](https://msdn.microsoft.com/vstudio//hh304489) (Sviluppo di applicazioni Windows in C++) e [Introduction to Windows Programming in C++](https://msdn.microsoft.com/library/windows/desktop/ff381398)(Introduzione alla programmazione Windows in C++).

In Windows 10, è possibile usare Visual C++ per creare molti tipi di applicazioni desktop:

- App e utilità della riga di comando. Per altre informazioni, vedere [applicazioni Console](../windows/console-applications-in-visual-cpp.md).

- Applicazioni consumer con interfacce utente grafiche sofisticate. Per altre informazioni, vedere [Hilo: Developing C++ Applications for Windows](http://go.microsoft.com/fwlink/p/?LinkId=256417)(Hilo: sviluppo di applicazioni C++ per Windows).

- App aziendali e line-of-business eseguite su .NET Framework. La maggior parte delle applicazioni .NET Framework sono scritti in c# o Visual Basic. È possibile usare C + + / interfaccia della riga di comando per creare livelli di interoperabilità che consentono al codice .NET utilizzare le librerie C++ native. Per altre informazioni, vedere [programmazione .NET con c++ /CLI CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

- Client del database SQL eseguiti in codice nativo. Per altre informazioni, vedere [SQL Server Native Client](/sql/relational-databases/native-client/odbc/sql-server-native-client-odbc).

- Componenti aggiuntivi per applicazioni Microsoft Office Per altre informazioni, vedere [Building a C++ Add-in for Outlook 2010](http://go.microsoft.com/fwlink/p/?LinkId=256420)(Creazione di un componente aggiuntivo C++ per Outlook 2010).

- Driver di dispositivo. Per altre informazioni, vedere [Windows Driver Kit (WDK)](http://go.microsoft.com/fwlink/p/?LinkId=256421).

- Servizi Windows. Per altre informazioni, vedere [Introduction to Windows Service Applications](/dotnet/framework/windows-services/introduction-to-windows-service-applications).

È possibile usare Visual C++ per comprimere qualsiasi tipo di funzionalità personalizzata a elevate prestazioni nelle DLL Win32 o COM utilizzabili da app C++ o scritte in altri linguaggi, ad esempio C# o Visual Basic. Per altre informazioni sulle DLL Win32, vedere [DLLs in Visual C++](../build/dlls-in-visual-cpp.md). Per altre informazioni sullo sviluppo COM, vedere [Component Object Model (COM)](/windows/desktop/com/component-object-model--com--portal).

## <a name="games"></a>Giochi

Giochi DirectX eseguibili nel PC o su Xbox. Per altre informazioni, visitare il [Centro per sviluppatori DirectX](http://go.microsoft.com/fwlink/p/?LinkId=256418).

## <a name="sdks-libraries-and-header-files"></a>Gli SDK, librerie e i file di intestazione

Visual C++ include la libreria di Runtime C (CRT), la libreria Standard C++ e altre librerie specifiche di Microsoft. Le cartelle di inclusione che contengono i file di intestazione per queste librerie si trovano nella directory di installazione di Visual Studio nella cartella \VC\ o, nel caso di CRT, nella cartella di installazione Windows SDK.

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

## <a name="related-articles"></a>Articoli correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[Visual C++](../visual-cpp-in-visual-studio.md)|Argomento principale per il contenuto per gli sviluppatori di Visual C++.|
