---
title: "Programmazione Web e cloud in Visual C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: b63611f1-9723-44d0-ba7f-c3ebef341313
caps.latest.revision: 13
caps.handback.revision: 13
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Programmazione Web e cloud in Visual C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In C\+\+, esistono diverse opzioni per la connessione al Web e al cloud.  
  
 [Servizi mobili di Windows Azure](http://www.windowsazure.com/develop/mobile/)  
 Fornisce API native che è possibile usare in app di Windows Store e app desktop di Windows per connettersi a Servizi mobili di Microsoft Azure. Benché la maggior parte degli esempi nel sito Web sia in C\#, è possibile usare anche C\+\+. Per altre informazioni, vedere [Guida introduttiva: Aggiunta di un servizio mobile con C\+\+](http://msdn.microsoft.com/library/windows/apps/dn263181.aspx).  
  
 [Interfaccia REST live](http://msdn.microsoft.com/library/live/hh243648.aspx)  
 Fornisce endpoint REST che è possibile usare in app di Windows Store, app desktop di Windows o applicazioni Linux C\+\+ per connettersi a servizi [live](http://msdn.microsoft.com/live/ff519582), come SkyDrive, Outlook.com e Skype. Le app C\+\+ usano questi endpoint direttamente anziché passare da Live SDK, che è solo per le app .NET.  
  
 [C\+\+ REST SDK \(nome in codice "Casablanca"\)](../top/cpp-rest-sdk-codename-casablanca.md)  
 Fornisce pratici metodi wrapper HTTP asincroni progettati per compatibilità multipiattaforma e per l'uso in app desktop sui sistemi operativi fino a Windows 7 e Windows Server 2012. Nonostante sia possibile usare questi metodi anche in app della piattaforma UWP \(Universal Windows Platform\), per le app destinate solo alla piattaforma UWP \(Universal Windows Platform\) è consigliabile usare la classe `Windows::Web:HttpClient`. C\+\+ REST SDK \(nome in codice "Casablanca"\) fornisce anche classi helper che supportano chiamate REST e convertono dati JSON in tipi C\+\+. SDK è disponibile in [CodePlex](http://casablanca.codeplex.com/) e contiene file di esempio come, ad esempio, [live\_connect.h](http://casablanca.codeplex.com/SourceControl/latest#Release/collateral/Samples/WindowsLiveAuth/live_connect.h), che fornisce metodi helper per la connessione a servizi [live](http://msdn.microsoft.com/live/ff519582).  
  
 [Windows::Web::Http::HttpClient](https://msdn.microsoft.com/en-us/library/windows/apps/windows.web.http.httpclient.aspx)  
 Classe client HTTP di Windows Runtime modellata sulla classe .NET Framework con lo stesso nome nello spazio dei nomi System.Web.`HttpClient` supporta completamente il caricamento e il download asincrono su HTTP e i filtri pipeline, che permettono l'inserimento di gestori HTTP personalizzati nella pipeline. Windows SDK include filtri di esempio per reti a consumo, autenticazione OAuth e altro ancora.  
  
 [Interfaccia IXMLHTTPRequest2](http://msdn.microsoft.com/library/windows/apps/hh831151.aspx)  
 Fornisce un'interfaccia COM nativa che è possibile usare in app di Windows Store o app desktop di Windows per connettersi a Internet su HTTP ed eseguire GET, PUT e altri comandi HTTP. Per altre informazioni, vedere [Procedura dettagliata: Connessione tramite attività e richieste HTTP XML](../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md).  
  
 [Internet di Windows \(WinInet\)](http://msdn.microsoft.com/library/windows/desktop/aa385331\(v=vs.85\).aspx)  
 API Windows che è possibile usare in app desktop di Windows per connettersi a Internet.  
  
## Vedere anche  
 [Visual C\+\+](../top/visual-cpp-in-visual-studio-2015.md)   
 [Connessione a reti e servizi Web \(app di Windows Store con C\#\/VB\/C\+\+ e XAML\)](http://msdn.microsoft.com/library/windows/apps/br229573.aspx)