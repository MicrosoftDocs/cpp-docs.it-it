---
title: "Cenni preliminari sulla programmazione Windows in C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: efc691d7-21f3-47ae-ae56-cab999ccf59d
caps.latest.revision: 22
caps.handback.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Cenni preliminari sulla programmazione Windows in C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile usare Visual C\+\+ per scrivere un'ampia gamma di programmi eseguibili in un computer Windows \(x86, x64 o ARM\), in un server Windows, nel cloud oppure su Xbox I programmi in C\+\+ ben scritti sono veloci, efficienti, economici in termini di consumo energetico e permettono di usufruire appieno di dispositivi multicore o many\-core, elaborazione generale nelle GPU e altri recenti progressi nell'hardware.  
  
 Esistono molte ampie categorie di app di Windows che è possibile sviluppare con Visual C\+\+. Queste categorie hanno modelli di programmazione, o modelli di app, diversi, ovvero usano librerie e API diverse per fornire l'accesso alla piattaforma e l'interfaccia utente.  
  
-   [App universali di Windows](#BK_WindowsUniversal). La terza categoria di app di Windows è stata introdotta con Windows 8 e il supporto per questa categoria di app continua anche in Windows 10. Queste app sono in genere chiamate semplicemente "app di Windows" e includono app desktop e per dispositivi mobili destinate a svariati dispositivi. È possibile scrivere queste app in C\+\+\/CX, un dialetto di C\+\+ che include il supporto per lo sviluppo di Windows Runtime, oppure in C\+\+ standard con COM usando la libreria di Windows Runtime \(WRL\). Queste app sono state originariamente progettate per l'esecuzione a schermo intero, ma gli utenti di Windows 10 possono scegliere di eseguirle in una finestra desktop. Benché queste app siano orientate al tocco, è facile usarle con il mouse se gli utenti lo preferiscono o se non è disponibile un touch screen. Queste app vengono distribuite da Windows Store e per questo motivo vengono ora chiamate anche "app di Windows Store".  
  
-   [Applicazioni e giochi desktop, server e cloud](#BK_Native). Questa categoria include applicazioni desktop di Windows, talvolta chiamate applicazioni Win32 perché usavano l'API Win32. Prima di Windows 8, tutte le applicazioni di Windows appartenevano a questa categoria. Le applicazioni di questa categoria possono usare MFC per l'interfaccia utente e ATL per interagire con i componenti di Windows, che sono in genere oggetti COM.  
  
     Anche le applicazioni, le librerie o i componenti scritti in C\+\+ standard rientrano in questa categoria.  
  
     Questa categoria include anche l'uso di C\+\+ per componenti di base e codice di calcolo nel contesto della programmazione server e cloud. Talvolta il codice a prestazioni intensive alla base di un'applicazione server o cloud viene scritto in C\+\+ per ottimizzare le prestazioni. È possibile compilare questo codice in una DLL e usarlo da C\# o Visual Basic.  
  
-   **Applicazioni .NET Framework**. Benché la maggior parte delle applicazioni .NET Framework sia scritta in C\# o Visual Basic, è possibile usare anche C\+\+\/CLI \(l'opzione del compilatore \/clr in Visual C\+\+\). È consigliabile usare C\+\+\/CLI per un livello minimo di interoperabilità in un'applicazione di grandi dimensioni che include codice gestito e nativo.  
  
##  <a name="BK_WindowsUniversal"></a> App universali di Windows  
 Con Windows 10, le app possono essere eseguite su tutti i dispositivi Windows 10, tra cui tablet e telefoni cellulari, nonché sul desktop. Sul desktop possono essere eseguite come finestra desktop invece che a schermo intero. Queste app possono essere eseguite anche in Xbox e sui dispositivi futuri.  Il modello di programmazione per i due tipi di app è diverso da quello delle applicazioni desktop Win32. Queste app di Windows vengono eseguite in Windows Runtime, che fornisce gli elementi dell'interfaccia utente, i servizi essenziali per le app e un'interfaccia per i diversi dispositivi hardware supportati. Queste app vengono compilate in codice nativo e hanno un'interfaccia utente XAML oppure usano DirectX. È anche possibile scrivere componenti [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] in codice nativo utilizzabili da altre app di Windows, tra cui le app scritte in C\#, Visual Basic o JavaScript. Per altre informazioni, vedere [Create your first Windows Store app using C\+\+](http://go.microsoft.com/fwlink/?LinkID=534976) \(Creare la prima app di Windows Store con C\+\+\), [Creare la prima app di Windows Store con DirectX](http://go.microsoft.com/fwlink/p/?LinkId=244656) e [Creazione di componenti Windows Runtime in C\+\+](http://go.microsoft.com/fwlink/p/?LinkId=244658).  
  
 Per alcuni esempi della piattaforma UWP \(Universal Windows Platform\), vedere [Windows Universal Samples on GitHub](https://github.com/Microsoft/Windows-universal-samples) \(Esempi per la piattaforma universale di Windows su GitHub\).  
  
 Se è disponibile un progetto Windows 8.1 e si vuole convertirlo per Windows 10, vedere [Porting alla piattaforma Windows Universal](../porting/porting-to-the-universal-windows-platform-cpp.md). Se sono disponibili codice e librerie desktop Win32 classici da integrare in un'app UWP, vedere [Procedura: utilizzare codice C\+\+ esistente in un'app della piattaforma UWP \(Universal Windows Platform\)](../porting/how-to-use-existing-cpp-code-in-a-universal-windows-platform-app.md).  
  
 È anche possibile scrivere app, giochi e componenti universali di Windows senza [!INCLUDE[cppwrt](../build/reference/includes/cppwrt_md.md)] \([!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)]\), usando invece [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] \([!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)]\). Per altre informazioni, vedere [Libreria di modelli di Windows Runtime C\+\+ \(WRL\)](../windows/windows-runtime-cpp-template-library-wrl.md).  
  
 Con [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)] è possibile sviluppare app universali di Windows che possono essere eseguite su dispositivi mobili e desktop Windows 10. È anche possibile sviluppare app di Windows 8.1 e Windows Phone 8.1 in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)], ma a questo scopo è innanzitutto necessario installare Visual Studio 2013 nello stesso computer e quindi configurare il progetto per l'uso del set di strumenti di **Visual Studio 2013 \(v120\)**. Per configurare questa impostazione nel progetto, aprire le proprietà del progetto e nella sezione **Generale** impostare **Set strumenti della piattaforma** su **Visual Studio 2013 \(v120\)**.  
  
 Se si installano gli strumenti di Windows Phone 8.0 nell'installazione di Visual Studio, è anche possibile sviluppare applicazioni per Windows Phone 8.0.  
  
 Un nuovo concetto introdotto con Windows 10 chiamato contratti API sostituisce la vecchia pratica di sviluppare applicazioni per versioni di Windows specifiche. Ora è invece possibile scegliere i contratti API necessari per l'app perché questa possa essere eseguita su qualsiasi dispositivo Windows che li supporta. Un contratto API è un set di API stabili che fornisce accesso alle risorse di piattaforma e dispositivo. I contratti API possono essere inclusi come riferimenti nel sistema del progetto. Se in un progetto di Visual Studio si aggiunge un riferimento a un SDK di estensione specifico, Visual Studio aggiunge i contratti API appropriati.  
  
 Per altre informazioni su tutti questi concetti, vedere [Guida alle app UWP \(Universal Windows Platform\)](http://go.microsoft.com/fwlink/?LinkId=534605).  
  
##  <a name="BK_Win32"></a> App e giochi per desktop, server e cloud  
 Nel cloud è possibile scrivere assembly in codice nativo di Azure in C\+\+ ed eseguire chiamate al loro interno da ruoli Web creati in C\#. Per altre informazioni, vedere [Azure SDK](http://go.microsoft.com/fwlink/p/?LinkId=256416).  
  
 Per apprendere le nozioni fondamentali di scrittura di applicazioni client Windows per il desktop, vedere [Developing Windows Applications in C\+\+](http://msdn.microsoft.com/vstudio//hh304489) \(Sviluppo di applicazioni Windows in C\+\+\) e [Introduction to Windows Programming in C\+\+](http://msdn.microsoft.com/library/windows/desktop/ff381398\(v=vs.85\).aspx) \(Introduzione alla programmazione Windows in C\+\+\).  
  
 In Windows 10 è possibile usare Visual C\+\+ per creare molti tipi di programmi:  
  
-   App e utilità della riga di comando. Per altre informazioni, vedere [Applicazioni console](../windows/console-applications-in-visual-cpp.md).  
  
-   Giochi DirectX eseguiti nel PC o su Xbox. Per altre informazioni, visitare il [Centro per sviluppatori DirectX](http://go.microsoft.com/fwlink/p/?LinkId=256418).  
  
-   Applicazioni consumer con interfacce utente grafiche sofisticate. Per altre informazioni, vedere [Hilo: Developing C\+\+ Applications for Windows](http://go.microsoft.com/fwlink/p/?LinkId=256417) \(Hilo: sviluppo di applicazioni C\+\+ per Windows\).  
  
-   App aziendali e line\-of\-business in esecuzione in .NET Framework o che fungono da ponte tra app .NET Framework e app o componenti scritti in codice nativo. Per altre informazioni, vedere [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).  
  
-   Client del database SQL eseguiti in codice nativo. Per altre informazioni, vedere [SQL Server Native Client](http://go.microsoft.com/fwlink/p/?LinkId=256419).  
  
-   Componenti aggiuntivi per applicazioni Microsoft Office Per altre informazioni, vedere [Building a C\+\+ Add\-in for Outlook 2010](http://go.microsoft.com/fwlink/p/?LinkId=256420) \(Creazione di un componente aggiuntivo C\+\+ per Outlook 2010\).  
  
-   Driver di dispositivo. Per altre informazioni, vedere [Windows Driver Kit \(WDK\)](http://go.microsoft.com/fwlink/p/?LinkId=256421).  
  
-   Servizi Windows. Per altre informazioni, vedere [Introduction to Windows Service Applications](../Topic/Introduction%20to%20Windows%20Service%20Applications.md).  
  
 È possibile usare Visual C\+\+ per comprimere qualsiasi tipo di funzionalità personalizzata a elevate prestazioni nelle DLL Win32 o COM utilizzabili da app C\+\+ o scritte in altri linguaggi, ad esempio C\# o Visual Basic. Per altre informazioni sulle DLL Win32, vedere [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md). Per altre informazioni sullo sviluppo COM, vedere [Component Object Model \(COM\)](http://msdn.microsoft.com/it-it/375d29a7-a1f3-4bd8-8621-bad7a049b2aa).  
  
## SDK e file di intestazione  
 Visual C\+\+ include librerie standard C e C\+\+, STL \(Standard Template Library\) e altre librerie specifiche di Microsoft. Le cartelle di inclusione che contengono i file di intestazione per tali librerie si trovano nella cartella \\VC\\ o, nel caso della libreria di runtime C \(CRT\), nella cartella di installazione di Windows SDK, ad esempio Windows Kits\\10 nella cartella Programmi per Windows 10 SDK.  Le librerie Microsoft includono:  
  
-   Microsoft Foundation Classes \(MFC\): un framework orientato a oggetti per la creazione di programmi Windows tradizionali, in particolare applicazioni aziendali, con interfacce utente avanzate dotate di pulsanti, caselle di riepilogo, visualizzazioni albero e altri controlli. Per altre informazioni, vedere [Applicazioni desktop MFC](../mfc/mfc-desktop-applications.md).  
  
-   Active Template Library \(ATL\): una libreria helper efficace per la creazione di componenti COM. Per altre informazioni, vedere [ATL COM Desktop Components](../atl/atl-com-desktop-components.md).  
  
-   C\+\+ AMP \(C\+\+ Accelerated Massive Parallelism\): una libreria che consente attività di elaborazione generale a elevate prestazioni nella GPU. Per altre informazioni, vedere [C\+\+ AMP \(C\+\+ Accelerated Massive Parallelism\)](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md).  
  
-   Runtime di concorrenza: una libreria che semplifica le attività di programmazione asincrona e in parallelo per dispositivi multicore e many\-core. Per altre informazioni, vedere [Runtime di concorrenza](../parallel/concrt/concurrency-runtime.md).  
  
 Anche molti scenari di programmazione Windows richiedono Windows SDK, che include i file di intestazione che garantiscono l'accesso ai componenti del sistema operativo Windows. Per impostazione predefinita, con tutte le edizioni di [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)] viene installato Windows SDK, che permette lo sviluppo di app universali di Windows. Per sviluppare app universali di Windows per Windows 10, è necessaria la versione Windows 10 di Windows SDK. Per informazioni su Windows 10 SDK, vedere [Windows 10 SDK](http://go.microsoft.com/fwlink/p/?LinkId=534603). Per altre informazioni su Windows SDK per versioni precedenti di Windows, vedere [Overview of the Windows SDK](../Topic/Overview%20of%20the%20Windows%20SDK.md).  
  
 Altre piattaforme quali Xbox e Azure dispongono di SDK specifiche, che potrebbe essere necessario installare. Per altre informazioni, vedere il Centro per sviluppatori DirectX e Azure.  
  
## Strumenti di sviluppo  
 Visual Studio include un potente debugger per codice nativo, strumenti di analisi statica, strumenti di debug grafico, un editor di codice completo, supporto per unit test e molti altri strumenti ed utilità. Per altre informazioni, vedere [Sviluppo di applicazioni in Visual Studio](http://msdn.microsoft.com/it-it/97490c1b-a247-41fb-8f2c-bc4c201eff68) e [IDE e strumenti di sviluppo](../ide/ide-and-tools-for-visual-cpp-development.md).  
  
## Articoli correlati  
  
|Titolo|Descrizione|  
|------------|-----------------|  
|[Visual C\+\+](../top/visual-cpp-in-visual-studio-2015.md)|Argomento principale per il contenuto MSDN Library su C\+\+.|