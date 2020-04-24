---
title: 'Procedura dettagliata: Connessione tramite attività e richieste HTTP XML'
ms.date: 04/25/2019
helpviewer_keywords:
- connecting to web services, UWP apps [C++]
- IXMLHTTPRequest2 and tasks, example
- IXHR2 and tasks, example
ms.assetid: e8e12d46-604c-42a7-abfd-b1d1bb2ed6b3
ms.openlocfilehash: 2c627a543ec18702bf5358ff0170bec177fd7497
ms.sourcegitcommit: 89d9e1cb08fa872483d1cde98bc2a7c870e505e9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "82032265"
---
# <a name="walkthrough-connecting-using-tasks-and-xml-http-requests"></a>Procedura dettagliata: Connessione tramite attività e richieste HTTP XML

In questo esempio viene illustrato come utilizzare le interfacce [IXMLHTTPRequest2](/windows/win32/api/msxml6/nn-msxml6-ixmlhttprequest2) e [IXMLHTTPRequest2Callback](/windows/win32/api/msxml6/nn-msxml6-ixmlhttprequest2callback) con attività per inviare richieste HTTP GET e POST a un servizio Web in un'app UWP (Universal Windows Platform). Combinando `IXMLHTTPRequest2` insieme alle attività, è possibile scrivere codice che si integra con altre attività. Ad esempio, è possibile utilizzare l'attività di download come parte di una catena di attività. L'attività di download può rispondere anche quando il lavoro viene annullato.

> [!TIP]
> È anche possibile usare l'SDK REST di C'è per eseguire le richieste HTTP da un'app UWP usando l'app C, o da un'app desktop di C. Per ulteriori informazioni, vedere [L'SDK REST di C'è (nome in codice "Casablanca")](https://github.com/Microsoft/cpprestsdk).

Per ulteriori informazioni sulle attività, vedere [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md). Per ulteriori informazioni sull'utilizzo delle attività in un'app UWP, vedere [Programmazione asincrona in C'](/windows/uwp/threading-async/asynchronous-programming-in-cpp-universal-windows-platform-apps) e [Creazione di operazioni asincrone in C' per le app UWP.](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md)

In questo documento viene `HttpRequest` innanzitutto illustrato come creare e le relative classi di supporto. Viene quindi illustrato come usare questa classe da un'app UWP che usa il linguaggio XAML e C.

Per un esempio `IXMLHTTPRequest2` che usa ma non usa attività, vedere [Guida introduttiva: Connessione tramite richiesta HTTP XML (IXMLHTTPRequest2).](/previous-versions/windows/apps/hh770550\(v=win.10\))

> [!TIP]
> `IXMLHTTPRequest2`e `IXMLHTTPRequest2Callback` sono le interfacce che consigliamo per l'uso in un'app UWP. È anche possibile adattare questo esempio per l'utilizzo in un'app desktop.

## <a name="prerequisites"></a>Prerequisiti

Il supporto UWP è facoltativo in Visual Studio 2017 e versioni successive. Per installarlo, aprire il programma di installazione di Visual Studio dal menu Start di Windows e scegliere la versione di Visual Studio in uso. Fare clic sul pulsante **Modifica** e verificare che il riquadro **Sviluppo UWP** sia selezionato. In **Componenti facoltativi** assicurarsi che l'opzione **Strumenti UWP** di C. Usare v141 per Visual Studio 2017 o v142 per Visual Studio 2019.Use v141 for Visual Studio 2017 or v142 for Visual Studio 2019.

## <a name="defining-the-httprequest-httprequestbufferscallback-and-httprequeststringcallback-classes"></a>Definizione delle classi HttpRequest, HttpRequestBuffersCallback e HttpRequestStringCallback

Quando si `IXMLHTTPRequest2` utilizza l'interfaccia per creare richieste `IXMLHTTPRequest2Callback` Web su HTTP, si implementa l'interfaccia per ricevere la risposta del server e reagire ad altri eventi. In questo esempio `HttpRequest` viene definita la classe `HttpRequestBuffersCallback` `HttpRequestStringCallback` per creare richieste Web e le classi e per elaborare le risposte. Le `HttpRequestBuffersCallback` `HttpRequestStringCallback` classi e `HttpRequest` supportano la classe ; si lavora solo `HttpRequest` con la classe dal codice dell'applicazione.

I `GetAsync` `PostAsync` metodi , `HttpRequest` della classe consentono di avviare rispettivamente le operazioni HTTP GET e POST. Questi metodi `HttpRequestStringCallback` utilizzano la classe per leggere la risposta del server come stringa. I `SendAsync` `ReadAsync` metodi e consentono di trasmettere contenuto di grandi dimensioni in blocchi. Questi metodi restituiscono [ciascuno concurrency::task](../../parallel/concrt/reference/task-class.md) per rappresentare l'operazione. I `GetAsync` `PostAsync` metodi `task<std::wstring>` e producono `wstring` valore, in cui la parte rappresenta la risposta del server. I `SendAsync` `ReadAsync` metodi `task<void>` e producono valori; queste attività vengono completate al completamento delle operazioni di invio e lettura.

Poiché `IXMLHTTPRequest2` le interfacce agiscono in modo asincrono, in questo esempio viene utilizzato [concurrency::task_completion_event](../../parallel/concrt/reference/task-completion-event-class.md) per creare un'attività che viene completata dopo il completamento o l'annullamento dell'operazione di download da parte dell'oggetto callback. La `HttpRequest` classe crea una continuazione basata su attività da questa attività per impostare il risultato finale. La `HttpRequest` classe utilizza una continuazione basata su attività per garantire che l'attività di continuazione venga eseguita anche se l'attività precedente genera un errore o viene annullata. Per altre informazioni sulle continuazioni basate su attività, vedere [Parallelismo delle attivitàFor more](../../parallel/concrt/task-parallelism-concurrency-runtime.md) information about task-based continuations, see Task Parallelism

Per supportare `HttpRequest`l'annullamento, le classi , `HttpRequestBuffersCallback`e `HttpRequestStringCallback` utilizzano i token di annullamento. Le `HttpRequestBuffersCallback` `HttpRequestStringCallback` classi e usano il metodo [concurrency::cancellation_token::register_callback](reference/cancellation-token-class.md#register_callback) per consentire all'evento di completamento dell'attività di rispondere all'annullamento. Questo callback di annullamento interrompe il download. Per ulteriori informazioni sull'annullamento, vedere [Annullamento](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md#cancellation).

### <a name="to-define-the-httprequest-class"></a>Per definire la classe HttpRequest

1. Dal menu principale, scegliere **File** > **nuovo** > **progetto**.

1. Per creare un progetto di app XAML vuoto, usa il modello **di app vuota (Windows universale) per** creare un progetto di app XAML vuoto. Questo esempio assegna al progetto il nome `UsingIXMLHTTPRequest2`.

1. Aggiungere al progetto un file di intestazione denominato HttpRequest.h e un file di origine denominato HttpRequest.cpp.Add to the project a header file that is named HttpRequest.h and a source file that is named HttpRequest.cpp.

1. In pch.h aggiungere il codice seguente:In pch.h, add this code:

   [!code-cpp[concrt-using-ixhr2#1](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_1.h)]

1. In HttpRequest.h aggiungere il codice seguente:In HttpRequest.h, add this code:

   [!code-cpp[concrt-using-ixhr2#2](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_2.h)]

1. In HttpRequest.cpp aggiungere questo codice:In HttpRequest.cpp, add this code:

   [!code-cpp[concrt-using-ixhr2#3](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_3.cpp)]

## <a name="using-the-httprequest-class-in-a-uwp-app"></a>Utilizzo della classe HttpRequest in un'app UWPUsing the HttpRequest Class in a UWP App

Questa sezione illustra come `HttpRequest` usare la classe in un'app UWP. L'app fornisce una casella di input che definisce una risorsa URL e i comandi dei pulsanti che eseguono operazioni GET e POST e un comando pulsante che annulla l'operazione corrente.

### <a name="to-use-the-httprequest-class"></a>Per utilizzare la classe HttpRequest

1. In MainPage.xaml definire l'elemento [StackPanel](/uwp/api/windows.ui.xaml.controls.stackpanel) come indicato di seguito.

   [!code-xml[concrt-using-ixhr2#A1](../../parallel/concrt/codesnippet/xaml/walkthrough-connecting-using-tasks-and-xml-http-requests_4.xaml)]

1. In MainPage.xaml.h aggiungi `#include` questa direttiva:In MainPage.xaml.h, add this directive:

   [!code-cpp[concrt-using-ixhr2#A2](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_5.h)]

1. In MainPage.xaml.h aggiungi `private` queste variabili `MainPage` membro alla classe:

   [!code-cpp[concrt-using-ixhr2#A3](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_6.h)]

1. In MainPage.xaml.h dichiarare `private` `ProcessHttpRequest`il metodo :

   [!code-cpp[concrt-using-ixhr2#A4](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_7.h)]

1. In MainPage.xaml.cpp aggiungi `using` queste istruzioni:

   [!code-cpp[concrt-using-ixhr2#A5](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_8.cpp)]

1. In MainPage.xaml.cpp `GetButton_Click`implementare `PostButton_Click`i `CancelButton_Click` metodi `MainPage` , e della classe .

   [!code-cpp[concrt-using-ixhr2#A6](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_9.cpp)]

   > [!TIP]
   > Se l'app non richiede il supporto per l'annullamento, `HttpRequest::GetAsync` passa `HttpRequest::PostAsync` [concurrency::cancellation_token::none](reference/cancellation-token-class.md#none) ai metodi e .

1. In MainPage.xaml.cpp implementare il `MainPage::ProcessHttpRequest` metodo .

   [!code-cpp[concrt-using-ixhr2#A7](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_10.cpp)]

1. Nelle proprietà del progetto, **Input**in `shcore.lib` **Linker**, Input , specificare e `msxml6.lib`.

Ecco l'app in esecuzione:

![L'app di Windows Runtime in esecuzione](../../parallel/concrt/media/concrt_usingixhr2.png "L'app di Windows Runtime in esecuzione")

## <a name="next-steps"></a>Passaggi successivi

[Procedure dettagliate del runtime di concorrenzaConcurrency Runtime Walkthroughs](../../parallel/concrt/concurrency-runtime-walkthroughs.md)

## <a name="see-also"></a>Vedere anche

[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[Annullamento nella libreria PPL](cancellation-in-the-ppl.md)<br/>
[Programmazione asincrona in C](/windows/uwp/threading-async/asynchronous-programming-in-cpp-universal-windows-platform-apps)<br/>
[Creazione di operazioni asincrone in C , per le app UWPCreating Asynchronous Operations in C' for UWP Apps](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md)<br/>
[Guida introduttiva: Connessione tramite la classe di attività Richiesta HTTP XML (IXMLHTTPRequest2) (Runtime di concorrenza)Quickstart: Connecting using XML HTTP Request (IXMLHTTPRequest2)](/previous-versions/windows/apps/hh770550\(v=win.10\))
[task Class (Concurrency Runtime)](../../parallel/concrt/reference/task-class.md)<br/>
[Classe task_completion_event](../../parallel/concrt/reference/task-completion-event-class.md)
