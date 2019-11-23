---
title: 'Procedura dettagliata: Connessione tramite attività e richieste HTTP XML'
ms.date: 04/25/2019
helpviewer_keywords:
- connecting to web services, UWP apps [C++]
- IXMLHTTPRequest2 and tasks, example
- IXHR2 and tasks, example
ms.assetid: e8e12d46-604c-42a7-abfd-b1d1bb2ed6b3
ms.openlocfilehash: b11b56578cadc4b3bd037acf84014a718f9fad84
ms.sourcegitcommit: 389c559918d9bfaf303d262ee5430d787a662e92
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/25/2019
ms.locfileid: "69512143"
---
# <a name="walkthrough-connecting-using-tasks-and-xml-http-requests"></a>Procedura dettagliata: Connessione tramite attività e richieste HTTP XML

Questo esempio illustra come usare le interfacce [IXMLHTTPRequest2](/windows/win32/api/msxml6/nn-msxml6-ixmlhttprequest2) e [IXMLHTTPRequest2Callback](/windows/win32/api/msxml6/nn-msxml6-ixmlhttprequest2callback) insieme alle attività per inviare richieste HTTP GET e post a un servizio web in un'app piattaforma UWP (Universal Windows Platform) (UWP). Combinando `IXMLHTTPRequest2` insieme alle attività, è possibile scrivere codice che si integra con altre attività. Ad esempio, è possibile usare l'attività di download come parte di una catena di attività. L'attività di download può inoltre rispondere quando il lavoro viene annullato.

> [!TIP]
>  È anche possibile usare l' C++ SDK REST per eseguire richieste HTTP da un'app UWP usando C++ l'app o da un' C++ app desktop. Per altre informazioni, vedere [ C++ REST SDK (nome in codice "Casablanca")](https://github.com/Microsoft/cpprestsdk).

Per ulteriori informazioni sulle attività, vedere [parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md). Per altre informazioni su come usare le attività in un'app UWP, vedere [programmazione asincrona in C++ ](/windows/uwp/threading-async/asynchronous-programming-in-cpp-universal-windows-platform-apps) e [creazione di operazioni asincrone C++ in per app UWP](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md).

Questo documento illustra prima di tutto come creare `HttpRequest` e le relative classi di supporto. Viene quindi illustrato come usare questa classe da un'app UWP che usa C++ e XAML.

Per un esempio che usa `IXMLHTTPRequest2` ma non usa le attività, vedere [Guida introduttiva: connessione tramite richiesta HTTP XML (IXMLHTTPRequest2)](/previous-versions/windows/apps/hh770550\(v=win.10\)).

> [!TIP]
>  `IXMLHTTPRequest2` e `IXMLHTTPRequest2Callback` sono le interfacce consigliate per l'uso in un'app UWP. Questo esempio può essere adattato anche per l'uso in un'app desktop.

## <a name="prerequisites"></a>Prerequisiti

Il supporto per UWP è facoltativo in Visual Studio 2017 e versioni successive. Per installarlo, aprire il Programma di installazione di Visual Studio dal menu Start di Windows e scegliere la versione di Visual Studio in uso. Fare clic sul pulsante **modifica** e verificare che il riquadro **sviluppo UWP** sia selezionato. In **componenti facoltativi** assicurarsi che  **C++ gli strumenti UWP** siano selezionati. Usare V141 per Visual Studio 2017 o V142 per Visual Studio 2019.

## <a name="defining-the-httprequest-httprequestbufferscallback-and-httprequeststringcallback-classes"></a>Definizione delle classi HttpRequest, HttpRequestBuffersCallback e HttpRequestStringCallback

Quando si usa l'interfaccia `IXMLHTTPRequest2` per creare richieste Web su HTTP, si implementa l'interfaccia `IXMLHTTPRequest2Callback` per ricevere la risposta del server e reagire ad altri eventi. Questo esempio definisce la classe `HttpRequest` per creare richieste Web e le classi `HttpRequestBuffersCallback` e `HttpRequestStringCallback` per elaborare le risposte. Le classi `HttpRequestBuffersCallback` e `HttpRequestStringCallback` supportano la classe `HttpRequest`; si utilizza solo la classe `HttpRequest` dal codice dell'applicazione.

I metodi di `GetAsync`, `PostAsync` della classe `HttpRequest` consentono di avviare rispettivamente le operazioni HTTP GET e POST. Questi metodi usano la classe `HttpRequestStringCallback` per leggere la risposta del server sotto forma di stringa. I metodi `SendAsync` e `ReadAsync` consentono di trasmettere contenuto di grandi dimensioni in blocchi. Questi metodi restituiscono ciascun oggetto [Concurrency:: Task](../../parallel/concrt/reference/task-class.md) per rappresentare l'operazione. I metodi `GetAsync` e `PostAsync` producono `task<std::wstring>` valore, dove la parte `wstring` rappresenta la risposta del server. I metodi `SendAsync` e `ReadAsync` producono valori `task<void>`; Queste attività vengono completate al completamento delle operazioni di invio e lettura.

Poiché le interfacce di `IXMLHTTPRequest2` agiscono in modo asincrono, in questo esempio viene utilizzato [Concurrency:: task_completion_event](../../parallel/concrt/reference/task-completion-event-class.md) per creare un'attività che viene completata dopo il completamento dell'oggetto callback o l'annullamento dell'operazione di download. La classe `HttpRequest` crea una continuazione basata su attività da questa attività per impostare il risultato finale. La classe `HttpRequest` utilizza una continuazione basata su attività per assicurarsi che l'attività di continuazione venga eseguita anche se l'attività precedente genera un errore o viene annullata. Per ulteriori informazioni sulle continuazioni basate su attività, vedere [parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)

Per supportare l'annullamento, le classi `HttpRequest`, `HttpRequestBuffersCallback`e `HttpRequestStringCallback` usano i token di annullamento. Le classi `HttpRequestBuffersCallback` e `HttpRequestStringCallback` utilizzano il metodo [Concurrency:: cancellation_token:: register_callback](reference/cancellation-token-class.md#register_callback) per consentire all'evento di completamento dell'attività di rispondere all'annullamento. Questo callback di annullamento interrompe il download. Per ulteriori informazioni sull'annullamento, vedere [annullamento](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md#cancellation).

#### <a name="to-define-the-httprequest-class"></a>Per definire la classe HttpRequest

1. Dal menu principale scegliere **File** > **nuovo** > **progetto**. 

1. Usare il C++ modello **app vuota (Windows universale)** per creare un progetto di app XAML vuoto. Questo esempio assegna al progetto il nome `UsingIXMLHTTPRequest2`.

1. Aggiungere al progetto un file di intestazione denominato HttpRequest. h e un file di origine denominato HttpRequest. cpp.

1. In PCH. h aggiungere il codice seguente:

   [!code-cpp[concrt-using-ixhr2#1](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_1.h)]

1. In HttpRequest. h aggiungere il codice seguente:

   [!code-cpp[concrt-using-ixhr2#2](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_2.h)]

1. In HttpRequest. cpp aggiungere il codice seguente:

   [!code-cpp[concrt-using-ixhr2#3](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_3.cpp)]

## <a name="using-the-httprequest-class-in-a-uwp-app"></a>Uso della classe HttpRequest in un'app UWP

Questa sezione illustra come usare la classe `HttpRequest` in un'app UWP. L'app fornisce una casella di input che definisce una risorsa URL, i comandi dei pulsanti che eseguono operazioni GET e POST e un comando Button che annulla l'operazione corrente.

#### <a name="to-use-the-httprequest-class"></a>Per utilizzare la classe HttpRequest

1. In MainPage. XAML definire l'elemento [StackPanel](/uwp/api/Windows.UI.Xaml.Controls.StackPanel) come indicato di seguito.

   [!code-xml[concrt-using-ixhr2#A1](../../parallel/concrt/codesnippet/xaml/walkthrough-connecting-using-tasks-and-xml-http-requests_4.xaml)]

2. In MainPage. XAML. h aggiungere questa direttiva `#include`:

   [!code-cpp[concrt-using-ixhr2#A2](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_5.h)]

3. In MainPage. XAML. h aggiungere le variabili membro `private` alla classe `MainPage`:

   [!code-cpp[concrt-using-ixhr2#A3](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_6.h)]

4. In MainPage. XAML. h dichiarare il metodo di `private` `ProcessHttpRequest`:

   [!code-cpp[concrt-using-ixhr2#A4](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_7.h)]

5. In MainPage. XAML. cpp aggiungere le istruzioni `using` seguenti:

   [!code-cpp[concrt-using-ixhr2#A5](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_8.cpp)]

6. In MainPage. XAML. cpp implementare i metodi `GetButton_Click`, `PostButton_Click`e `CancelButton_Click` della classe `MainPage`.

   [!code-cpp[concrt-using-ixhr2#A6](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_9.cpp)]

   > [!TIP]
   > Se l'app non richiede il supporto per l'annullamento, passare [Concurrency:: cancellation_token:: None](reference/cancellation-token-class.md#none) ai metodi `HttpRequest::GetAsync` e `HttpRequest::PostAsync`.

1. In MainPage. XAML. cpp implementare il metodo `MainPage::ProcessHttpRequest`.

   [!code-cpp[concrt-using-ixhr2#A7](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_10.cpp)]

8. Nelle proprietà del progetto, in **linker**, **input**specificare `shcore.lib` e `msxml6.lib`.

Ecco l'app in esecuzione:

![L'app in esecuzione Windows Runtime](../../parallel/concrt/media/concrt_usingixhr2.png "l'app Windows Runtime in esecuzione")

## <a name="next-steps"></a>Passaggi successivi

[Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)

## <a name="see-also"></a>Vedere anche

[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[Annullamento nella libreria PPL](cancellation-in-the-ppl.md)<br/>
[Programmazione asincrona inC++](/windows/uwp/threading-async/asynchronous-programming-in-cpp-universal-windows-platform-apps)<br/>
[Creazione di operazioni asincrone in C++ per app UWP](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md)<br/>
[Guida introduttiva: connessione tramite richiesta HTTP XML (IXMLHTTPRequest2)](/previous-versions/windows/apps/hh770550\(v=win.10\))
[classe di attività (runtime di concorrenza)](../../parallel/concrt/reference/task-class.md)<br/>
[Classe task_completion_event](../../parallel/concrt/reference/task-completion-event-class.md)
