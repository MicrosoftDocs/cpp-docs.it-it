---
title: Cenni preliminari sulla programmazione di Windows in C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/27/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: efc691d7-21f3-47ae-ae56-cab999ccf59d
caps.latest.revision: "22"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b2206151f68e02ebadbfab5785a7a1e90be67468
ms.sourcegitcommit: 6f40bba1772a09ff0e3843d5f70b553e1a15ab50
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2018
---
# <a name="overview-of-windows-programming-in-c"></a>Cenni preliminari sulla programmazione Windows in C++

È possibile usare Visual C++ per scrivere un'ampia gamma di programmi eseguibili in un computer Windows (x86, x64 o ARM), in un server Windows, nel cloud oppure su Xbox I programmi in C++ ben scritti sono veloci, efficienti, economici in termini di consumo energetico e permettono di usufruire appieno di dispositivi multicore o many-core, elaborazione generale nelle GPU e altri recenti progressi nell'hardware.

Esistono molte ampie categorie di app di Windows che è possibile sviluppare con Visual C++. Queste categorie hanno modelli di programmazione, o modelli di app, diversi, ovvero usano librerie e API diverse per fornire l'accesso alla piattaforma e l'interfaccia utente.

- [App universali di Windows](#BK_WindowsUniversal). La terza categoria di app di Windows è stata introdotta con Windows 8 e il supporto per questa categoria di app continua anche in Windows 10. Queste app sono in genere chiamate semplicemente "app di Windows" e includono app desktop e per dispositivi mobili destinate a svariati dispositivi. È possibile scrivere queste app in C++/CX, un dialetto di C++ che include il supporto per lo sviluppo di Windows Runtime, oppure in C++ standard con COM usando la libreria di Windows Runtime (WRL). Queste app sono state originariamente progettate per l'esecuzione a schermo intero, ma gli utenti di Windows 10 possono scegliere di eseguirle in una finestra desktop. Benché queste app siano orientate al tocco, è facile usarle con il mouse se gli utenti lo preferiscono o se non è disponibile un touch screen. Queste app vengono distribuite da Windows Store e per questo motivo vengono ora chiamate anche "app di Windows Store".

- [Applicazioni e giochi desktop, server e cloud](#BK_Native). Questa categoria include applicazioni desktop di Windows, talvolta chiamate applicazioni Win32 perché usavano l'API Win32. Prima di Windows 8, tutte le applicazioni di Windows appartenevano a questa categoria. Le applicazioni di questa categoria possono usare MFC per l'interfaccia utente e ATL per interagire con i componenti di Windows, che sono in genere oggetti COM.

   Anche le applicazioni, le librerie o i componenti scritti in C++ standard rientrano in questa categoria.

   Questa categoria include anche l'uso di C++ per componenti di base e codice di calcolo nel contesto della programmazione server e cloud. Talvolta il codice a prestazioni intensive alla base di un'applicazione server o cloud viene scritto in C++ per ottimizzare le prestazioni. È possibile compilare questo codice in una DLL e usarlo da C# o Visual Basic.

- **Applicazioni .NET Framework**. Benché la maggior parte delle applicazioni .NET Framework sia scritta in C# o Visual Basic, è possibile usare anche C++/CLI (l'opzione del compilatore /clr in Visual C++). È consigliabile usare C++/CLI per un livello minimo di interoperabilità in un'applicazione di grandi dimensioni che include codice gestito e nativo.

##  <a name="BK_WindowsUniversal"></a> Windows Universal Apps

Con Windows 10, le app possono essere eseguite su tutti i dispositivi Windows 10, tra cui tablet e telefoni cellulari, nonché sul desktop. Sul desktop possono essere eseguite come finestra desktop invece che a schermo intero. Queste app possono essere eseguite anche in Xbox e sui dispositivi futuri.  Il modello di programmazione per i due tipi di app è diverso da quello delle applicazioni desktop Win32. Queste app di Windows vengono eseguite in Windows Runtime, che fornisce gli elementi dell'interfaccia utente, i servizi essenziali per le app e un'interfaccia per i diversi dispositivi hardware supportati. Queste app vengono compilate in codice nativo e hanno un'interfaccia utente XAML oppure usano DirectX. È anche possibile scrivere componenti Windows Runtime nel codice nativo a cui è possibile utilizzare altre app di Windows, tra cui le app scritte in c#, Visual Basic o JavaScript. Per ulteriori informazioni, vedere [creare un'app "Hello world" UWP in C++](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp), [creare un semplice gioco UWP con DirectX](/windows/uwp/gaming/tutorial--create-your-first-uwp-directx-game), e [componenti di creazione di Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp).

> [!TIP]
> Per Windows 10, è possibile utilizzare il convertitore di App Desktop per creare un pacchetto di applicazione desktop esistente per la distribuzione tramite Windows Store. Per altre informazioni, vedere i post relativi all'[uso del runtime di Visual C++ nel progetto Centennial](https://blogs.msdn.microsoft.com/vcblog/2016/07/07/using-visual-c-runtime-in-centennial-project) e al [trasferimento dell'app desktop sulla piattaforma UWP con Desktop Bridge](https://msdn.microsoft.com/en-us/windows/uwp/porting/desktop-to-uwp-root).

Per alcuni esempi della piattaforma UWP (Universal Windows Platform), vedere [Windows Universal Samples on GitHub](https://github.com/Microsoft/Windows-universal-samples)(Esempi per la piattaforma universale di Windows su GitHub).

Se si dispone di un progetto Windows 8.1 esistente e si desidera convertirlo per Windows 10, vedere [Porting alla piattaforma Windows Universal](../porting/porting-to-the-universal-windows-platform-cpp.md). Se si dispongono di esistente le librerie desktop Win32 classiche e codice che si desidera integrare un'app UWP, vedere [procedura: utilizzare codice C++ esistente in un'App della piattaforma Windows universale](../porting/how-to-use-existing-cpp-code-in-a-universal-windows-platform-app.md).

È anche possibile scrivere App, giochi e componenti universali di Windows senza l'utilizzo di C + + CX; In alternativa, è possibile utilizzare la libreria di modelli di Windows Runtime C++ (libreria di modelli C++ di Windows Runtime). Per ulteriori informazioni, vedere [libreria di modelli C++ (WRL) di Windows Runtime](../windows/windows-runtime-cpp-template-library-wrl.md).

Con [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)]è possibile sviluppare app universali di Windows che possono essere eseguite su dispositivi mobili e desktop Windows 10. È anche possibile sviluppare app di Windows 8.1 e Windows Phone 8.1 in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)], ma a questo scopo è innanzitutto necessario installare Visual Studio 2013 nello stesso computer e quindi configurare il progetto per l'uso del set di strumenti di **Visual Studio 2013 (v120)** . Per configurare questa impostazione nel progetto, aprire le proprietà del progetto e nella sezione **Generale** impostare **Set strumenti della piattaforma** su **Visual Studio 2013 (v120)**.

Se si installano gli strumenti di Windows Phone 8.0 nell'installazione di Visual Studio, è anche possibile sviluppare applicazioni per Windows Phone 8.0.

Un nuovo concetto introdotto con Windows 10 chiamato contratti API sostituisce la vecchia pratica di sviluppare applicazioni per versioni di Windows specifiche. Ora è invece possibile scegliere i contratti API necessari per l'app perché questa possa essere eseguita su qualsiasi dispositivo Windows che li supporta. Un contratto API è un set di API stabili che fornisce accesso alle risorse di piattaforma e dispositivo. I contratti API possono essere inclusi come riferimenti nel sistema del progetto. Se in un progetto di Visual Studio si aggiunge un riferimento a un SDK di estensione specifico, Visual Studio aggiunge i contratti API appropriati.

Per ulteriori informazioni su tutti questi concetti, vedere [Guida per App universali di Windows](http://go.microsoft.com/fwlink/p/?linkid=534605).

##  <a name="BK_Native"></a> App e giochi per desktop, server e cloud

Nel cloud è possibile scrivere assembly in codice nativo di Azure in C++ ed eseguire chiamate al loro interno da ruoli Web creati in C#. Per altre informazioni, vedere [Azure SDK](http://go.microsoft.com/fwlink/p/?LinkId=256416).

Per apprendere le nozioni fondamentali di scrittura di applicazioni client Windows per il desktop, vedere [Developing Windows Applications in C++](http://msdn.microsoft.com/vstudio//hh304489) (Sviluppo di applicazioni Windows in C++) e [Introduction to Windows Programming in C++](http://msdn.microsoft.com/library/windows/desktop/ff381398\(v=vs.85\).aspx)(Introduzione alla programmazione Windows in C++).

In Windows 10 è possibile usare Visual C++ per creare molti tipi di programmi:

- App e utilità della riga di comando. Per ulteriori informazioni, vedere [applicazioni Console](../windows/console-applications-in-visual-cpp.md).

- Giochi DirectX eseguiti nel PC o su Xbox. Per altre informazioni, visitare il [Centro per sviluppatori DirectX](http://go.microsoft.com/fwlink/p/?LinkId=256418).

- Applicazioni consumer con interfacce utente grafiche sofisticate. Per altre informazioni, vedere [Hilo: Developing C++ Applications for Windows](http://go.microsoft.com/fwlink/p/?LinkId=256417)(Hilo: sviluppo di applicazioni C++ per Windows).

- App aziendali e line-of-business in esecuzione in .NET Framework o che fungono da ponte tra app .NET Framework e app o componenti scritti in codice nativo. Per ulteriori informazioni, vedere [programmazione .NET con C + + CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

- Client del database SQL eseguiti in codice nativo. Per altre informazioni, vedere [SQL Server Native Client](http://go.microsoft.com/fwlink/p/?LinkId=256419).

- Componenti aggiuntivi per applicazioni Microsoft Office Per altre informazioni, vedere [Building a C++ Add-in for Outlook 2010](http://go.microsoft.com/fwlink/p/?LinkId=256420)(Creazione di un componente aggiuntivo C++ per Outlook 2010).

- Driver di dispositivo. Per altre informazioni, vedere [Windows Driver Kit (WDK)](http://go.microsoft.com/fwlink/p/?LinkId=256421).

- Servizi Windows. Per altre informazioni, vedere [Introduction to Windows Service Applications](/dotnet/framework/windows-services/introduction-to-windows-service-applications).

È possibile usare Visual C++ per comprimere qualsiasi tipo di funzionalità personalizzata a elevate prestazioni nelle DLL Win32 o COM utilizzabili da app C++ o scritte in altri linguaggi, ad esempio C# o Visual Basic. Per altre informazioni sulle DLL Win32, vedere [DLLs in Visual C++](../build/dlls-in-visual-cpp.md). Per ulteriori informazioni sullo sviluppo COM, vedere [modello COM (Component Object)](https://msdn.microsoft.com/library/windows/desktop/ms680573).

## <a name="sdks-and-header-files"></a>SDK e file di intestazione

Visual C++ include la libreria di Runtime C (CRT), la libreria Standard C++ e altre librerie specifiche di Microsoft. Le cartelle di inclusione che contengono i file di intestazione per tali librerie si trovano nella directory di installazione di Visual Studio nella cartella \VC\ o, nel caso di CRT, cartella di installazione di Windows SDK, ad esempio Windows Kits\10 nei file di programma cartella per Windows 10 SDK.  Le librerie Microsoft includono:

- Microsoft Foundation Classes (MFC): un framework orientato a oggetti per la creazione di programmi Windows tradizionali, in particolare applicazioni aziendali, con interfacce utente avanzate dotate di pulsanti, caselle di riepilogo, visualizzazioni albero e altri controlli. Per altre informazioni, vedere [MFC Desktop Applications](../mfc/mfc-desktop-applications.md).

- Active Template Library (ATL): una libreria helper efficace per la creazione di componenti COM. Per altre informazioni, vedere [ATL COM Desktop Components](../atl/atl-com-desktop-components.md).

- C++ AMP (C++ Accelerated Massive Parallelism): una libreria che consente attività di elaborazione generale a elevate prestazioni nella GPU. Per altre informazioni, vedere [C++ AMP (C++ Accelerated Massive Parallelism)](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md).

- Runtime di concorrenza: una libreria che semplifica le attività di programmazione asincrona e in parallelo per dispositivi multicore e many-core. Per altre informazioni, vedere [Concurrency Runtime](../parallel/concrt/concurrency-runtime.md).

Anche molti scenari di programmazione Windows richiedono Windows SDK, che include i file di intestazione che garantiscono l'accesso ai componenti del sistema operativo Windows. Per impostazione predefinita, Visual Studio installa Windows SDK, che consente lo sviluppo di App universali di Windows. Per sviluppare app universali di Windows per Windows 10, è necessaria la versione Windows 10 di Windows SDK. Per informazioni su Windows 10 SDK, vedere [Windows 10 SDK](https://dev.windows.com/downloads/windows-10-sdk). (Per ulteriori informazioni su Windows SDK per le versioni precedenti di Windows, vedere il [archivio Windows SDK](https://developer.microsoft.com/windows/downloads/sdk-archive)).

Altre piattaforme quali Xbox e Azure dispongono di SDK specifiche, che potrebbe essere necessario installare. Per altre informazioni, vedere il Centro per sviluppatori DirectX e Azure.

## <a name="development-tools"></a>Strumenti di sviluppo

Visual Studio include un potente debugger per codice nativo, strumenti di analisi statica, strumenti di debug grafico, un editor di codice completo, supporto per unit test e molti altri strumenti ed utilità. Per ulteriori informazioni, vedere [Introduzione allo sviluppo con Visual Studio](/visualstudio/ide/get-started-developing-with-visual-studio), e [IDE e strumenti di sviluppo](../ide/ide-and-tools-for-visual-cpp-development.md).

## <a name="related-articles"></a>Articoli correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[Visual C++](../visual-cpp-in-visual-studio.md)|Argomento principale per il contenuto per sviluppatori di Visual C++.|