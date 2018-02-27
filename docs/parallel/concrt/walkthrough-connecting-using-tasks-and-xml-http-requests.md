---
title: "Procedura dettagliata: Connessione tramite attività e richieste HTTP XML | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- connecting to web services, UWP apps [C++]
- IXMLHTTPRequest2 and tasks, example
- IXHR2 and tasks, example
ms.assetid: e8e12d46-604c-42a7-abfd-b1d1bb2ed6b3
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e778c03368a634c349ec7c3ef241a29314cac4ea
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="walkthrough-connecting-using-tasks-and-xml-http-requests"></a>Procedura dettagliata: Connessione tramite attività e richieste HTTP XML
In questo esempio viene illustrato come utilizzare il [IXMLHTTPRequest2](http://msdn.microsoft.com/en-us/bbc11c4a-aecf-4d6d-8275-3e852e309908) e [IXMLHTTPRequest2Callback](http://msdn.microsoft.com/en-us/aa4b3f4c-6e28-458b-be25-6cce8865fc71) interfacce insieme alle attività per inviare richieste HTTP GET e POST a un servizio web in una piattaforma UWP (Universal Windows ) app. Combinando `IXMLHTTPRequest2` insieme alle attività, è possibile scrivere codice che si integra con altre attività. Ad esempio, è possibile utilizzare l'attività di download come parte di una catena di attività. L'attività di download è anche possibile rispondere all'annullamento di lavoro.  
  
> [!TIP]
>  Per eseguire richieste HTTP da un'app UWP utilizzando l'applicazione C++ o da un desktop app C++, è possibile utilizzare anche C++ REST SDK. Per altre informazioni, vedere [C++ REST SDK (nome in codice "Casablanca")](https://github.com/Microsoft/cpprestsdk).  
  
 Per ulteriori informazioni sulle attività, vedere [parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md). Per ulteriori informazioni su come usare le attività in un'app UWP, vedere [programmazione asincrona in C++](/windows/uwp/threading-async/asynchronous-programming-in-cpp-universal-windows-platform-apps) e [creazione di operazioni asincrone in C++ per App UWP](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md).  
  
 Questo documento viene innanzitutto illustrato come creare `HttpRequest` e le relative classi di supporto. Viene quindi illustrato come utilizzare questa classe da un'app UWP che usa C++ e XAML.  
  
 Per un esempio più completo che usa il `HttpReader` classe descritta nel presente documento, vedere [lo sviluppo di Bing Maps ottimizzazione dei viaggi, un'applicazione Windows Store in JavaScript e C++](http://msdn.microsoft.com/library/974cf025-de1a-4299-b7dd-c6c7bf0e5d30). Per un altro esempio che usa `IXMLHTTPRequest2` ma non utilizza attività, vedere [avvio rapido: connessione mediante richieste HTTP XML (IXMLHTTPRequest2)](http://msdn.microsoft.com/en-us/cc7aed53-b2c5-4d83-b85d-cff2f5ba7b35).  
  
> [!TIP]
>  `IXMLHTTPRequest2` e `IXMLHTTPRequest2Callback` sono le interfacce che è consigliabile per l'utilizzo in un'app UWP. È anche possibile adattare questo esempio per l'utilizzo in un'applicazione desktop.  
  
## <a name="prerequisites"></a>Prerequisiti  
  
## <a name="defining-the-httprequest-httprequestbufferscallback-and-httprequeststringcallback-classes"></a>Definizione delle classi HttpRequest, HttpRequestBuffersCallback e HttpRequestStringCallback  
 Quando si utilizza il `IXMLHTTPRequest2` l'interfaccia per creare richieste web tramite HTTP, si implementa il `IXMLHTTPRequest2Callback` interfaccia per ricevere la risposta del server e rispondere agli altri eventi. Questo esempio viene definito il `HttpRequest` classe per creare richieste web e `HttpRequestBuffersCallback` e `HttpRequestStringCallback` alle classi di elaborazione delle risposte. Il `HttpRequestBuffersCallback` e `HttpRequestStringCallback` classi supportano il `HttpRequest` classe, ma funzionano solo con la `HttpRequest` classe dal codice dell'applicazione.  
  
 Il `GetAsync`, `PostAsync` metodi di `HttpRequest` classe consentono di avviare le operazioni di HTTP GET e POST, rispettivamente. Utilizzano questi metodi di `HttpRequestStringCallback` per leggere la risposta del server sotto forma di stringa. Il `SendAsync` e `ReadAsync` metodi consentono di trasmettere contenuti di grandi dimensioni in blocchi. Questi metodi restituiscono [Concurrency:: Task](../../parallel/concrt/reference/task-class.md) che rappresenta l'operazione. Il `GetAsync` e `PostAsync` producano `task<std::wstring>` valore, in cui il `wstring` parte rappresenta la risposta del server. Il `SendAsync` e `ReadAsync` producano `task<void>` valori; queste attività completo quando completare le operazioni di lettura e di trasmissione.  
  
 Poiché il `IXMLHTTPRequest2` interfacce agiscono in modo asincrono, in questo esempio viene utilizzato [Concurrency:: task_completion_event](../../parallel/concrt/reference/task-completion-event-class.md) per creare un'attività che completa l'oggetto callback al termine o Annulla l'operazione di download. La `HttpRequest` classe crea una continuazione basata su attività da questa attività per impostare il risultato finale. La `HttpRequest` classe utilizza una continuazione basata su attività per verificare che l'attività di continuazione viene eseguita anche se l'attività precedente genera un errore o viene annullata. Per ulteriori informazioni sulle continuazioni basate su attività, vedere [parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)  
  
 Per supportare l'annullamento, la `HttpRequest`, `HttpRequestBuffersCallback`, e `HttpRequestStringCallback` classi utilizzano i token di annullamento. Il `HttpRequestBuffersCallback` e `HttpRequestStringCallback` classi Usa la [concurrency::cancellation_token::register_callback](reference/cancellation-token-class.md#register_callback) metodo per abilitare l'evento di completamento di attività rispondere all'annullamento. Questo callback annullamento interrompe il download. Per ulteriori informazioni sull'annullamento, vedi [annullamento](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md#cancellation).  
  
#### <a name="to-define-the-httprequest-class"></a>Per definire la classe HttpRequest  
  
1.  Usare Visual C++ **App vuota (XAML)** modello per creare un progetto di app XAML vuoto. Questo esempio assegna al progetto il nome `UsingIXMLHTTPRequest2`.  
  
2.  Aggiungere al progetto un file di intestazione denominata HttpRequest.h e un file di origine denominato HttpRequest.cpp.  
  
3.  In PCH. h, aggiungere questo codice:  
  
     [!code-cpp[concrt-using-ixhr2#1](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_1.h)]  
  
4.  In HttpRequest.h, aggiungere questo codice:  
  
     [!code-cpp[concrt-using-ixhr2#2](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_2.h)]  
  
5.  In HttpRequest.cpp, aggiungere questo codice:  
  
     [!code-cpp[concrt-using-ixhr2#3](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_3.cpp)]  
  
## <a name="using-the-httprequest-class-in-a-uwp-app"></a>Utilizzo della classe HttpRequest in un'App UWP  
 In questa sezione viene illustrato come utilizzare la `HttpRequest` classe in un'app UWP. L'applicazione fornisce una casella di input che definisce una risorsa URL, e i comandi che eseguono operazioni GET e POST e un pulsante di comando che consente di annullare l'operazione corrente.  
  
#### <a name="to-use-the-httprequest-class"></a>Per utilizzare la classe HttpRequest  
  
1.  In MainPage. XAML, definire il [StackPanel](http://msdn.microsoft.com/library/windows/apps/xaml/windows.ui.xaml.controls.stackpanel.aspx) elemento come indicato di seguito.  
  
     [!code-xml[concrt-using-ixhr2#A1](../../parallel/concrt/codesnippet/xaml/walkthrough-connecting-using-tasks-and-xml-http-requests_4.xaml)]  
  
2.  In MainPage, aggiungere questo `#include` direttiva:  
  
     [!code-cpp[concrt-using-ixhr2#A2](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_5.h)]  
  
3.  In MainPage, aggiungere questi `private` variabili membro per la `MainPage` classe:  
  
     [!code-cpp[concrt-using-ixhr2#A3](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_6.h)]  
  
4.  In MainPage, dichiarare il `private` metodo `ProcessHttpRequest`:  
  
     [!code-cpp[concrt-using-ixhr2#A4](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_7.h)]  
  
5.  In MainPage.xaml.cpp, aggiungere questi `using` istruzioni:  
  
     [!code-cpp[concrt-using-ixhr2#A5](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_8.cpp)]  
  
6.  In MainPage.xaml.cpp, implementare il `GetButton_Click`, `PostButton_Click`, e `CancelButton_Click` metodi di `MainPage` classe.  
  
     [!code-cpp[concrt-using-ixhr2#A6](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_9.cpp)]  
  
    > [!TIP]


    >  Se l'app non richiedono il supporto per l'annullamento, passare [Concurrency:: cancellation_token:: none](reference/cancellation-token-class.md#none) per il `HttpRequest::GetAsync` e `HttpRequest::PostAsync` metodi.  


  
7.  In MainPage.xaml.cpp, implementare il `MainPage::ProcessHttpRequest` metodo.  
  
     [!code-cpp[concrt-using-ixhr2#A7](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_10.cpp)]  
  
8.  Nelle proprietà del progetto, in **Linker**, **Input**, specificare `shcore.lib` e `msxml6.lib`.  
  
 Di seguito è riportato l'app in esecuzione:  
  
 ![L'app di Windows Runtime in esecuzione](../../parallel/concrt/media/concrt_usingixhr2.png "concrt_usingixhr2")  
  
## <a name="next-steps"></a>Passaggi successivi  
 [Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)   
 [Annullamento nella libreria PPL](cancellation-in-the-ppl.md)   
 [Programmazione asincrona in C++](/windows/uwp/threading-async/asynchronous-programming-in-cpp-universal-windows-platform-apps)   
 [Creazione di operazioni asincrone in C++ per App UWP](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md)   
 [Guida introduttiva: Connessione mediante richieste HTTP XML (IXMLHTTPRequest2)](http://msdn.microsoft.com/en-us/cc7aed53-b2c5-4d83-b85d-cff2f5ba7b35)   
 [Classe Task (Runtime di concorrenza)](../../parallel/concrt/reference/task-class.md)   
 [Classe task_completion_event](../../parallel/concrt/reference/task-completion-event-class.md)
