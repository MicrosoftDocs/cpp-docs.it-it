---
title: "Procedura dettagliata: Connessione tramite attivit&#224; e richieste HTTP XML | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "connessione a servizi Web, app di Windows Store [C++]"
  - "IXMLHTTPRequest2 e attività, esempio"
  - "IXHR2 e attività, esempio"
ms.assetid: e8e12d46-604c-42a7-abfd-b1d1bb2ed6b3
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Procedura dettagliata: Connessione tramite attivit&#224; e richieste HTTP XML
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questo esempio illustra come utilizzare le interfacce [IXMLHTTPRequest2](http://msdn.microsoft.com/it-it/bbc11c4a-aecf-4d6d-8275-3e852e309908) e [IXMLHTTPRequest2Callback](http://msdn.microsoft.com/it-it/aa4b3f4c-6e28-458b-be25-6cce8865fc71) insieme alle attività per inviare richieste, HTTP GET e POST ad un servizio web, in un'applicazione [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Combinando `IXMLHTTPRequest2` insieme alle attività, è possibile scrivere codice che compone altre attività.  Ad esempio, è possibile utilizzare l'attività di download come parte di una catena di attività.  L'attività di download può anche rispondere quando il lavoro viene annullato.  
  
> [!TIP]
>  È inoltre possibile utilizzare l'SDK C\+\+ REST per eseguire richieste HTTP da un'applicazione [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] utilizzando l'applicazione C\+\+ o da un'applicazione C\+\+ desktop.  Per ulteriori informazioni, vedi [C\+\+ REST SDK \(nome in codice "Casablanca"\)](../../top/cpp-rest-sdk-codename-casablanca.md).  
  
 Per ulteriori informazioni sulle attività, vedere [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md).  Per ulteriori informazioni su come utilizzare le attività in un'applicazione [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)], vedere [Asynchronous programming in C\+\+](http://msdn.microsoft.com/it-it/512700b7-7863-44cc-93a2-366938052f31) e [Creazione di operazioni asincrone in C\+\+ per le applicazioni Windows Store](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md).  
  
 Questo primo documento mostra come creare `HttpRequest` e le relative classi di supporto.  Viene quindi illustrato come utilizzare questa classe in un'applicazione [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] che utilizza C\+\+ e XAML.  
  
 Per un esempio più completo, che utilizza la classe `HttpReader` specificata in questo documento, vedere [Sviluppo dell'utilità di ottimizzazione dei viaggi di Bing Mappe, un'applicazione Windows Store in JavaScript e C\+\+](../Topic/Developing%20Bing%20Maps%20Trip%20Optimizer,%20a%20Windows%20Store%20app%20in%20JavaScript%20and%20C++.md).  Per un altro esempio che usa `IXMLHTTPRequest2` ma non usa attività, vedere [Quickstart: Connecting using XML HTTP Request \(IXMLHTTPRequest2\)](http://msdn.microsoft.com/it-it/cc7aed53-b2c5-4d83-b85d-cff2f5ba7b35).  
  
> [!TIP]
>  `IXMLHTTPRequest2` e `IXMLHTTPRequest2Callback` sono interfacce che si consiglia di utilizzare in un'applicazione [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  È inoltre possibile adattare questo esempio per utilizzarlo in un'applicazione desktop.  
  
## Prerequisiti  
  
## Definizione delle classi HttpRequest, HttpRequestBuffersCallback e HttpRequestStringCallback  
 Quando si utilizza l'interfaccia `IXMLHTTPRequest2` per creare richieste Web tramite HTTP, si implementa l'interfaccia `IXMLHTTPRequest2Callback` per ricevere la risposta del server e rispondere agli eventi.  In questo esempio viene definita la classe `HttpRequest` per creare richieste Web e le classi `HttpRequestStringCallback`, `HttpRequestBuffersCallback` per elaborare le risposte.  Le classi di `HttpRequestStringCallback` e `HttpRequestBuffersCallback` supportano la classe `HttpRequest`; si utilizza solo la classe `HttpRequest` dal codice dell'applicazione.  
  
 I metodi `GetAsync`, `PostAsync`, della classe `HttpRequest` consentono di avviare rispettivamente le operazioni HTTP GET e POST.  Questi metodi utilizzano la classe `HttpRequestStringCallback` per leggere la risposta del server come una stringa.  I metodi `ReadAsync` e `SendAsync` consentono di trasmettere contenuti di grande dimensioni in blocchi.  Ognuno di questi metodi restituisce [concurrency::task](../../parallel/concrt/reference/task-class-concurrency-runtime.md) per rappresentare l'operazione.  I metodi `task<std::wstring>` e `PostAsync` producono il valore `GetAsync`, dove il frammento `wstring` rappresenta la risposta del server.  I metodi `ReadAsync` e `SendAsync` producono valori `task<void>` ; queste attività vengono completate quando le operazioni d'invio e di lettura sono completate.  
  
 Poiché le interfacce `IXMLHTTPRequest2` agiscono in maniera asincrona, questo esempio usa [concurrency::task\_completion\_event](../../parallel/concrt/reference/task-completion-event-class.md) per creare attività che può completarsi successivamente al completamento dell'oggetto di callback, oppure quando l'operazione di download viene annullata.  La classe `HttpRequest` crea una continuazione correlata ad una attività, da questa attività, per impostare il risultato finale.  La classe `HttpRequest` utilizza la continuazione di un'attività correlata, per garantire l'attività di continuazione anche se l'attività precedente produce un errore o viene annullata.  Per ulteriori informazioni sulla continuazione di attività correlate, vedere [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md).  
  
 Per supportare l'annullamento, `HttpRequest`, `HttpRequestBuffersCallback` e le classi di `HttpRequestStringCallback` utilizzano i token di annullamento.  Le classi `HttpRequestStringCallback` e `HttpRequestBuffersCallback` utilizzano il metodo di [concurrency::cancellation\_token::register\_callback](../Topic/cancellation_token::register_callback%20Method.md) per consentire all'attività di completare l'evento per rispondere all'annullamento.  Questo callback di annullamento interrompe il download.  Per ulteriori informazioni sull'annullamento, vedere [Annullamento](../../parallel/concrt/cancellation-in-the-ppl.md).  
  
#### Per definire la classe HttpRequest  
  
1.  Utilizzare il modello di Visual C\+\+ **Applicazione vuota \(XAML\)**, per creare un progetto di un'applicazione XAML vuota.  In questo esempio nomina il progetto `UsingIXMLHTTPRequest2`.  
  
2.  Aggiungere al progetto un file di intestazione denominato HttpRequest.h e un file di origine denominato HttpRequest.cpp.  
  
3.  In pch.h, aggiungere questo codice :  
  
     [!CODE [concrt-using-IXMLHTTPRequest2#1](concrt-using-IXMLHTTPRequest2#1)]  
  
4.  In HttpRequest.h, aggiungere il codice seguente:  
  
     [!CODE [concrt-using-IXMLHTTPRequest2#2](concrt-using-IXMLHTTPRequest2#2)]  
  
5.  In HttpRequest.h, aggiungere questo codice:  
  
     [!CODE [concrt-using-IXMLHTTPRequest2#3](concrt-using-IXMLHTTPRequest2#3)]  
  
## Utilizzo della classe HttpRequest in un'applicazione [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)]  
 In questa sezione viene illustrato come utilizzare la classe `HttpRequest` in un'applicazione [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  L'applicazione fornisce una casella di input che definisce una risorsa con un URL, un pulsante che esegue le operazioni di GET e POST e un pulsante per annullare l'operazione in corso.  
  
#### Per utilizzare la classe HttpRequest  
  
1.  Nel file MainPage.xaml, definire l'elemento [StackPanel](http://msdn.microsoft.com/library/windows/apps/xaml/windows.ui.xaml.controls.stackpanel.aspx) come segue.  
  
     [!CODE [concrt-using-IXMLHTTPRequest2#A1](concrt-using-IXMLHTTPRequest2#A1)]  
  
2.  In MainPage.xaml.h, aggiungere questa direttiva `#include` :  
  
     [!CODE [concrt-using-IXMLHTTPRequest2#A2](concrt-using-IXMLHTTPRequest2#A2)]  
  
3.  In MainPage.xaml.h, aggiungere queste variabili membro `private` alla classe `MainPage` :  
  
     [!CODE [concrt-using-IXMLHTTPRequest2#A3](concrt-using-IXMLHTTPRequest2#A3)]  
  
4.  In MainPage.xaml.h, dichiarare il metodo `ProcessHttpRequest`, `private` :  
  
     [!CODE [concrt-using-IXMLHTTPRequest2#A4](concrt-using-IXMLHTTPRequest2#A4)]  
  
5.  In MainPage.xaml.cpp, aggiungere le istruzioni `using` :  
  
     [!CODE [concrt-using-IXMLHTTPRequest2#A5](concrt-using-IXMLHTTPRequest2#A5)]  
  
6.  In MainPage.xaml.cpp, implementare `GetButton_Click`, `PostButton_Click`e i metodi `CancelButton_Click` della classe `MainPage` .  
  
     [!CODE [concrt-using-IXMLHTTPRequest2#A6](concrt-using-IXMLHTTPRequest2#A6)]  
  
    > [!TIP]
    >  Se l'applicazione non richiede il supporto per l'annullamento, passare [concurrency::cancellation\_token::none](../Topic/cancellation_token::none%20Method.md) ai metodi `HttpRequest::PostAsync` e `HttpRequest::GetAsync`.  
  
7.  In MainPage.xaml.cpp, implementare il metodo `MainPage::ProcessHttpRequest`.  
  
     [!CODE [concrt-using-IXMLHTTPRequest2#A7](concrt-using-IXMLHTTPRequest2#A7)]  
  
8.  Nelle proprietà del progetto, in **Linker**, **Input**, specificare `shcore.lib` e `msxml6.lib`.  
  
 Ecco l'applicazione in esecuzione:  
  
 ![App di Windows Store in esecuzione](../../parallel/concrt/media/concrt_usingixhr2.png "ConcRT\_UsingIXHR2")  
  
## Passaggi successivi  
 [Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)  
  
## Vedere anche  
 [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)   
 [Annullamento](../../parallel/concrt/cancellation-in-the-ppl.md)   
 [Asynchronous programming in C\+\+](http://msdn.microsoft.com/it-it/512700b7-7863-44cc-93a2-366938052f31)   
 [Creazione di operazioni asincrone in C\+\+ per le applicazioni Windows Store](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md)   
 [Quickstart: Connecting using XML HTTP Request \(IXMLHTTPRequest2\)](http://msdn.microsoft.com/it-it/cc7aed53-b2c5-4d83-b85d-cff2f5ba7b35)   
 [Classe task \(runtime di concorrenza\)](../../parallel/concrt/reference/task-class-concurrency-runtime.md)   
 [Classe task\_completion\_event](../../parallel/concrt/reference/task-completion-event-class.md)   
 [IXMLHTTPRequest2](http://msdn.microsoft.com/it-it/bbc11c4a-aecf-4d6d-8275-3e852e309908)   
 [IXMLHTTPRequest2Callback](http://msdn.microsoft.com/it-it/aa4b3f4c-6e28-458b-be25-6cce8865fc71)