---
title: 'Procedura dettagliata: Connessione tramite attività e richieste HTTP XML'
ms.date: 04/25/2019
helpviewer_keywords:
- connecting to web services, UWP apps [C++]
- IXMLHTTPRequest2 and tasks, example
- IXHR2 and tasks, example
ms.assetid: e8e12d46-604c-42a7-abfd-b1d1bb2ed6b3
ms.openlocfilehash: cdcdd4747e7f32d1d4c0e91959f4b49a45721269
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224903"
---
# <a name="walkthrough-connecting-using-tasks-and-xml-http-requests"></a>Procedura dettagliata: Connessione tramite attività e richieste HTTP XML

Questo esempio illustra come usare le interfacce [IXMLHTTPRequest2](/windows/win32/api/msxml6/nn-msxml6-ixmlhttprequest2) e [IXMLHTTPRequest2Callback](/windows/win32/api/msxml6/nn-msxml6-ixmlhttprequest2callback) insieme alle attività per inviare richieste HTTP GET e post a un servizio web in un'app piattaforma UWP (Universal Windows Platform) (UWP). Combinando `IXMLHTTPRequest2` insieme alle attività, è possibile scrivere codice che si integra con altre attività. Ad esempio, è possibile usare l'attività di download come parte di una catena di attività. L'attività di download può inoltre rispondere quando il lavoro viene annullato.

> [!TIP]
> È anche possibile usare C++ REST SDK per eseguire richieste HTTP da un'app UWP usando l'app C++ o da un'app C++ desktop. Per altre informazioni, vedere [C++ REST SDK (nome in codice "Casablanca")](https://github.com/Microsoft/cpprestsdk).

Per ulteriori informazioni sulle attività, vedere [parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md). Per altre informazioni su come usare le attività in un'app UWP, vedere [programmazione asincrona in c++](/windows/uwp/threading-async/asynchronous-programming-in-cpp-universal-windows-platform-apps) e [creazione di operazioni asincrone in C++ per app UWP](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md).

In questo documento viene prima illustrato come creare `HttpRequest` e le relative classi di supporto. Viene quindi illustrato come usare questa classe da un'app UWP che usa C++ e XAML.

Per un esempio che usa `IXMLHTTPRequest2` , ma non usa le attività, vedere [Guida introduttiva: connessione tramite richiesta HTTP XML (IXMLHTTPRequest2)](/previous-versions/windows/apps/hh770550\(v=win.10\)).

> [!TIP]
> `IXMLHTTPRequest2`e `IXMLHTTPRequest2Callback` sono le interfacce consigliate per l'uso in un'app UWP. Questo esempio può essere adattato anche per l'uso in un'app desktop.

## <a name="prerequisites"></a>Prerequisiti

Il supporto per UWP è facoltativo in Visual Studio 2017 e versioni successive. Per installarlo, aprire il Programma di installazione di Visual Studio dal menu Start di Windows e scegliere la versione di Visual Studio in uso. Fare clic sul pulsante **modifica** e verificare che il riquadro **sviluppo UWP** sia selezionato. In **componenti facoltativi** assicurarsi che siano controllati **gli strumenti C++ UWP** . Usare V141 per Visual Studio 2017 o V142 per Visual Studio 2019.

## <a name="defining-the-httprequest-httprequestbufferscallback-and-httprequeststringcallback-classes"></a>Definizione delle classi HttpRequest, HttpRequestBuffersCallback e HttpRequestStringCallback

Quando si usa l' `IXMLHTTPRequest2` interfaccia per creare richieste Web tramite http, si implementa l' `IXMLHTTPRequest2Callback` interfaccia per ricevere la risposta del server e reagire ad altri eventi. Questo esempio definisce la `HttpRequest` classe per creare richieste Web e le `HttpRequestBuffersCallback` classi e `HttpRequestStringCallback` per elaborare le risposte. Le `HttpRequestBuffersCallback` `HttpRequestStringCallback` classi e supportano la `HttpRequest` classe. si utilizza solo la `HttpRequest` classe dal codice dell'applicazione.

I `GetAsync` `PostAsync` metodi della `HttpRequest` classe consentono di avviare rispettivamente le operazioni HTTP GET e post. Questi metodi usano la `HttpRequestStringCallback` classe per leggere la risposta del server sotto forma di stringa. I `SendAsync` `ReadAsync` metodi e consentono di trasmettere contenuto di grandi dimensioni in blocchi. Questi metodi restituiscono ciascun oggetto [Concurrency:: Task](../../parallel/concrt/reference/task-class.md) per rappresentare l'operazione. I `GetAsync` `PostAsync` metodi e producono un `task<std::wstring>` valore, dove la `wstring` parte rappresenta la risposta del server. I `SendAsync` `ReadAsync` metodi e producono `task<void>` valori. queste attività vengono completate al completamento delle operazioni di invio e lettura.

Poiché le `IXMLHTTPRequest2` interfacce agiscono in modo asincrono, in questo esempio viene utilizzato [Concurrency:: task_completion_event](../../parallel/concrt/reference/task-completion-event-class.md) per creare un'attività che viene completata dopo il completamento dell'oggetto callback o l'annullamento dell'operazione di download. La `HttpRequest` classe crea una continuazione basata su attività da questa attività per impostare il risultato finale. La `HttpRequest` classe utilizza una continuazione basata su attività per assicurarsi che l'attività di continuazione venga eseguita anche se l'attività precedente genera un errore o viene annullata. Per ulteriori informazioni sulle continuazioni basate su attività, vedere [parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)

Per supportare l'annullamento, `HttpRequest` le `HttpRequestBuffersCallback` classi, e `HttpRequestStringCallback` usano i token di annullamento. Le `HttpRequestBuffersCallback` `HttpRequestStringCallback` classi e usano il metodo [Concurrency:: cancellation_token:: register_callback](reference/cancellation-token-class.md#register_callback) per consentire all'evento di completamento dell'attività di rispondere all'annullamento. Questo callback di annullamento interrompe il download. Per ulteriori informazioni sull'annullamento, vedere [annullamento](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md#cancellation).

### <a name="to-define-the-httprequest-class"></a>Per definire la classe HttpRequest

1. Dal menu principale scegliere **file**  >  **nuovo**  >  **progetto**.

1. Usare il modello **app vuota (Windows universale)** C++ per creare un progetto di app XAML vuoto. Questo esempio assegna al progetto il nome `UsingIXMLHTTPRequest2`.

1. Aggiungere al progetto un file di intestazione denominato HttpRequest. h e un file di origine denominato HttpRequest. cpp.

1. In PCH. h aggiungere il codice seguente:

   [!code-cpp[concrt-using-ixhr2#1](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_1.h)]

1. In HttpRequest. h aggiungere il codice seguente:

   [!code-cpp[concrt-using-ixhr2#2](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_2.h)]

1. In HttpRequest. cpp aggiungere il codice seguente:

   [!code-cpp[concrt-using-ixhr2#3](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_3.cpp)]

## <a name="using-the-httprequest-class-in-a-uwp-app"></a>Uso della classe HttpRequest in un'app UWP

Questa sezione illustra come usare la `HttpRequest` classe in un'app UWP. L'app fornisce una casella di input che definisce una risorsa URL, i comandi dei pulsanti che eseguono operazioni GET e POST e un comando Button che annulla l'operazione corrente.

### <a name="to-use-the-httprequest-class"></a>Per utilizzare la classe HttpRequest

1. In MainPage. XAML definire l'elemento [StackPanel](/uwp/api/windows.ui.xaml.controls.stackpanel) come indicato di seguito.

   [!code-xml[concrt-using-ixhr2#A1](../../parallel/concrt/codesnippet/xaml/walkthrough-connecting-using-tasks-and-xml-http-requests_4.xaml)]

1. In MainPage. XAML. h aggiungere questa `#include` direttiva:

   [!code-cpp[concrt-using-ixhr2#A2](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_5.h)]

1. In MainPage. XAML. h aggiungere le **`private`** variabili membro seguenti alla `MainPage` classe:

   [!code-cpp[concrt-using-ixhr2#A3](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_6.h)]

1. In MainPage. XAML. h, dichiarare il **`private`** metodo `ProcessHttpRequest` :

   [!code-cpp[concrt-using-ixhr2#A4](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_7.h)]

1. In MainPage. XAML. cpp aggiungere le **`using`** istruzioni seguenti:

   [!code-cpp[concrt-using-ixhr2#A5](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_8.cpp)]

1. In MainPage. XAML. cpp implementare i `GetButton_Click` metodi, `PostButton_Click` e `CancelButton_Click` della `MainPage` classe.

   [!code-cpp[concrt-using-ixhr2#A6](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_9.cpp)]

   > [!TIP]
   > Se l'app non richiede il supporto per l'annullamento, passare [Concurrency:: cancellation_token:: None](reference/cancellation-token-class.md#none) ai `HttpRequest::GetAsync` `HttpRequest::PostAsync` metodi e.

1. In MainPage. XAML. cpp, implementare il `MainPage::ProcessHttpRequest` metodo.

   [!code-cpp[concrt-using-ixhr2#A7](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_10.cpp)]

1. Nelle proprietà del progetto, in **linker**, **input**specificare `shcore.lib` e `msxml6.lib` .

Ecco l'app in esecuzione:

![App Windows Runtime in esecuzione](../../parallel/concrt/media/concrt_usingixhr2.png "App Windows Runtime in esecuzione")

## <a name="next-steps"></a>Passaggi successivi

[Procedure dettagliate runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)

## <a name="see-also"></a>Vedere anche

[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[Annullamento nella libreria PPL](cancellation-in-the-ppl.md)<br/>
[Programmazione asincrona in C++](/windows/uwp/threading-async/asynchronous-programming-in-cpp-universal-windows-platform-apps)<br/>
[Creazione di operazioni asincrone in C++ per app UWP](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md)<br/>
[Guida introduttiva: connessione tramite richiesta HTTP XML (IXMLHTTPRequest2)](/previous-versions/windows/apps/hh770550\(v=win.10\)) 
 [classe Task (runtime di concorrenza)](../../parallel/concrt/reference/task-class.md)<br/>
[Classe task_completion_event](../../parallel/concrt/reference/task-completion-event-class.md)
