---
title: "Procedura dettagliata: rimozione di lavoro da un thread dell'interfaccia utente"
ms.date: 08/19/2019
helpviewer_keywords:
- user-interface threads, removing work from [Concurrency Runtime]
- removing work from user-interface threads [Concurrency Runtime]
ms.assetid: a4a65cc2-b3bc-4216-8fa8-90529491de02
ms.openlocfilehash: 52bc98ef339a19c6ec2a53697f532a9a94b6c9a6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377435"
---
# <a name="walkthrough-removing-work-from-a-user-interface-thread"></a>Procedura dettagliata: rimozione di lavoro da un thread dell'interfaccia utente

In questo documento viene illustrato come utilizzare il runtime di concorrenza per spostare il lavoro eseguito dal thread dell'interfaccia utente (UI) in un'applicazione MFC (Microsoft Foundation Classes) in un thread di lavoro. In questo documento viene inoltre illustrato come migliorare le prestazioni di un'operazione di disegno lunga.

La rimozione del lavoro dal thread dell'interfaccia utente eseguendo l'offload delle operazioni di blocco, ad esempio il disegno, ai thread di lavoro può migliorare la velocità di risposta dell'applicazione. In questa procedura dettagliata viene utilizzata una routine di disegno che genera il frattale di Mandelbrot per illustrare un'operazione di blocco lunga. La generazione del frattale di Mandelbrot è anche un buon candidato per la parallelizzazione perché il calcolo di ogni pixel è indipendente da tutti gli altri calcoli.

## <a name="prerequisites"></a>Prerequisiti

Leggere gli argomenti seguenti prima di iniziare questa procedura dettagliata:Read the following topics before you start this walkthrough:

- [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)

- [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)

- [Funzioni di passaggio dei messaggiMessage Passing Functions](../../parallel/concrt/message-passing-functions.md)

- [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)

- [Annullamento nella libreria PPL](cancellation-in-the-ppl.md)

Prima di iniziare questa procedura dettagliata, è inoltre consigliabile comprendere le nozioni di base relativi allo sviluppo di applicazioni MFC e a GDI. Per ulteriori informazioni su MFC, vedere [Applicazioni desktop MFC](../../mfc/mfc-desktop-applications.md). Per ulteriori informazioni su GDI, vedere [GDI](/windows/win32/gdiplus/-gdiplus-gdi-start).

## <a name="sections"></a><a name="top"></a>Sezioni

Questa procedura dettagliata contiene le sezioni seguenti:

- [Creazione dell'applicazione MFC](#application)

- [Implementazione della versione seriale dell'applicazione Mandelbrot](#serial)

- [Rimozione del lavoro dal thread dell'interfaccia utente](#removing-work)

- [Miglioramento delle prestazioni di disegno](#performance)

- [Aggiunta del supporto per l'annullamento](#cancellation)

## <a name="creating-the-mfc-application"></a><a name="application"></a>Creazione dell'applicazione MFC

In questa sezione viene descritto come creare l'applicazione MFC di base.

### <a name="to-create-a-visual-c-mfc-application"></a>Per creare un'applicazione MFC di Visual C

1. Utilizzare la **Creazione guidata applicazione MFC** per creare un'applicazione MFC con tutte le impostazioni predefinite. Vedere [Procedura dettagliata: utilizzo dei nuovi controlli della shell MFC](../../mfc/walkthrough-using-the-new-mfc-shell-controls.md) per istruzioni su come aprire la procedura guidata per la versione di Visual Studio in uso.

1. Digitare un nome per il `Mandelbrot`progetto, ad esempio , e quindi fare clic **su OK** per visualizzare la **Creazione guidata applicazione MFC**.

1. Nel riquadro **Tipo di applicazione** selezionare Documento **singolo**. Assicurarsi che la casella di controllo **Supporto architettura documento/visualizzazione** sia deselezionata.

1. Fare clic **su Fine** per creare il progetto e chiudere la Creazione guidata **applicazione MFC**.

   Verificare che l'applicazione sia stata creata correttamente compilandola ed eseguendola. Per compilare l'applicazione, scegliere **Compila soluzione**dal menu **Compila** . Se l'applicazione viene compilata correttamente, eseguirla scegliendo **Avvia debug** dal menu **Debug** .

## <a name="implementing-the-serial-version-of-the-mandelbrot-application"></a><a name="serial"></a>Implementazione della versione seriale dell'applicazione Mandelbrot

Questa sezione descrive come disegnare il frattale di Mandelbrot. Questa versione disegna il frattale di Mandelbrot in un oggetto [Bitmap](/windows/win32/api/gdiplusheaders/nl-gdiplusheaders-bitmap) di GDI, quindi copia il contenuto di tale bitmap nella finestra client.

#### <a name="to-implement-the-serial-version-of-the-mandelbrot-application"></a>Per implementare la versione seriale dell'applicazione Mandelbrot

1. In *pch.h* (*stdafx.h* in Visual Studio 2017 e versioni precedenti), aggiungere la direttiva seguente: `#include`

   [!code-cpp[concrt-mandelbrot#1](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_1.h)]

1. In ChildView.h, `pragma` dopo la `BitmapPtr` direttiva, definire il tipo. Il `BitmapPtr` tipo consente a `Bitmap` un puntatore a un oggetto di essere condiviso da più componenti. L'oggetto `Bitmap` viene eliminato quando non vi viene più fatto riferimento da alcun componente.

   [!code-cpp[concrt-mandelbrot#2](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_2.h)]

1. In ChildView.h aggiungere il codice `protected` seguente `CChildView` alla sezione della classe:

   [!code-cpp[concrt-mandelbrot#3](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_3.h)]

1. In ChildView.cpp, impostare come commento o rimuovere le righe seguenti.

   [!code-cpp[concrt-mandelbrot#4](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_4.cpp)]

   Nelle build di debug, questo passaggio `DEBUG_NEW` impedisce all'applicazione di utilizzare l'allocatore, che non è compatibile con GDI.

1. In ChildView.cpp aggiungere `using` una `Gdiplus` direttiva allo spazio dei nomi .

   [!code-cpp[concrt-mandelbrot#5](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_5.cpp)]

1. Aggiungere il codice riportato di seguito `CChildView` al costruttore e al distruttore della classe per inizializzare e arrestare GDI.

   [!code-cpp[concrt-mandelbrot#6](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_6.cpp)]

1. Implementare il metodo `CChildView::DrawMandelbrot`. Questo metodo disegna il frattale di `Bitmap` Mandelbrot nell'oggetto specificato.

   [!code-cpp[concrt-mandelbrot#7](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_7.cpp)]

1. Implementare il metodo `CChildView::OnPaint`. Questo metodo `CChildView::DrawMandelbrot` chiama e quindi copia `Bitmap` il contenuto dell'oggetto nella finestra.

   [!code-cpp[concrt-mandelbrot#8](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_8.cpp)]

1. Verificare che l'applicazione sia stata aggiornata correttamente compilandola ed eseguendola.

La figura seguente mostra i risultati dell'applicazione Mandelbrot.

![Applicazione di Mandelbrot](../../parallel/concrt/media/mandelbrot.png "Applicazione di Mandelbrot")

Poiché il calcolo per ogni pixel è costoso dal punto di vista computazionale, il thread dell'interfaccia utente non può elaborare messaggi aggiuntivi fino al termine del calcolo complessivo. Ciò potrebbe ridurre la velocità di risposta nell'applicazione. Tuttavia, è possibile alleviare questo problema rimuovendo il lavoro dal thread dell'interfaccia utente.

[[In alto](#top)]

## <a name="removing-work-from-the-ui-thread"></a><a name="removing-work"></a>Rimozione del lavoro dal thread dell'interfaccia utenteRemoving Work from the UI Thread

In questa sezione viene illustrato come rimuovere il lavoro di disegno dal thread dell'interfaccia utente nell'applicazione Mandelbrot. Spostando il lavoro di disegno dal thread dell'interfaccia utente a un thread di lavoro, il thread dell'interfaccia utente può elaborare i messaggi mentre il thread di lavoro genera l'immagine in background.

Il runtime di concorrenza offre tre modi per eseguire attività: gruppi di [attività,](../../parallel/concrt/task-parallelism-concurrency-runtime.md) [agenti asincroni](../../parallel/concrt/asynchronous-agents.md)e [attività leggere.](../../parallel/concrt/task-scheduler-concurrency-runtime.md) Sebbene sia possibile usare uno di questi meccanismi per rimuovere il lavoro dal thread dell'interfaccia utente, in questo esempio viene utilizzato un oggetto [concurrency::task_group](reference/task-group-class.md) perché i gruppi di attività supportano l'annullamento. In questa procedura dettagliata viene successivamente utilizzato l'annullamento per ridurre la quantità di lavoro eseguita quando la finestra client viene ridimensionata e per eseguire la pulizia quando la finestra viene eliminata.

Questo esempio usa anche un oggetto [concurrency::unbounded_buffer](reference/unbounded-buffer-class.md) per consentire al thread dell'interfaccia utente e al thread di lavoro di comunicare tra loro. Dopo che il thread di lavoro produce `Bitmap` l'immagine, invia un puntatore all'oggetto all'oggetto `unbounded_buffer` e quindi invia un messaggio di disegno al thread dell'interfaccia utente. Il thread dell'interfaccia `unbounded_buffer` utente `Bitmap` riceve quindi dall'oggetto l'oggetto e lo disegna nella finestra client.

#### <a name="to-remove-the-drawing-work-from-the-ui-thread"></a>Per rimuovere il lavoro di disegno dal thread dell'interfaccia utenteTo remove the drawing work from the UI thread

1. In *pch.h* (*stdafx.h* in Visual Studio 2017 e versioni precedenti), aggiungere le direttive seguenti: `#include`

   [!code-cpp[concrt-mandelbrot#101](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_9.h)]

1. In ChildView.h `task_group` aggiungere `unbounded_buffer` e le `protected` variabili `CChildView` membro alla sezione della classe. L'oggetto `task_group` contiene le attività che eseguono il disegno; l'oggetto `unbounded_buffer` contiene l'immagine completa di Mandelbrot.

   [!code-cpp[concrt-mandelbrot#102](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_10.h)]

1. In ChildView.cpp aggiungere `using` una `concurrency` direttiva allo spazio dei nomi .

   [!code-cpp[concrt-mandelbrot#103](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_11.cpp)]

1. Nel `CChildView::DrawMandelbrot` metodo, dopo la `Bitmap::UnlockBits`chiamata a , chiamare la funzione `Bitmap` [concurrency::send](reference/concurrency-namespace-functions.md#send) per passare l'oggetto al thread dell'interfaccia utente. Pubblicare quindi un messaggio di disegno nel thread dell'interfaccia utente e invalidare l'area client.

   [!code-cpp[concrt-mandelbrot#104](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_12.cpp)]

1. Aggiornare `CChildView::OnPaint` il metodo `Bitmap` per ricevere l'oggetto aggiornato e disegnare l'immagine nella finestra client.

   [!code-cpp[concrt-mandelbrot#105](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_13.cpp)]

   Il `CChildView::OnPaint` metodo crea un'attività per generare l'immagine di Mandelbrot se non ne esiste una nel buffer dei messaggi. Il buffer dei messaggi `Bitmap` non conterrà un oggetto in casi come il messaggio di disegno iniziale e quando un'altra finestra viene spostata davanti alla finestra del client.

1. Verificare che l'applicazione sia stata aggiornata correttamente compilandola ed eseguendola.

L'interfaccia utente è ora più reattiva perché il lavoro di disegno viene eseguito in background.

[[In alto](#top)]

## <a name="improving-drawing-performance"></a><a name="performance"></a>Miglioramento delle prestazioni di disegno

La generazione del frattale di Mandelbrot è un buon candidato per la parallelizzazione perché il calcolo di ogni pixel è indipendente da tutti gli altri calcoli. Per parallelizzare la procedura di `for` disegno, `CChildView::DrawMandelbrot` convertire il ciclo esterno nel metodo in una chiamata all'algoritmo [concurrency::parallel_for,](reference/concurrency-namespace-functions.md#parallel_for) come indicato di seguito.

[!code-cpp[concrt-mandelbrot#301](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_14.cpp)]

Poiché il calcolo di ogni elemento bitmap è indipendente, non è necessario sincronizzare le operazioni di disegno che accedono alla memoria bitmap. Ciò consente di scalare le prestazioni con l'aumentare del numero di processori disponibili.

[[In alto](#top)]

## <a name="adding-support-for-cancellation"></a><a name="cancellation"></a>Aggiunta del supporto per l'annullamento

In questa sezione viene descritto come gestire il ridimensionamento della finestra e come annullare le attività di disegno attive quando la finestra viene distrutta.

Il documento [Cancellazione nella libreria PPL](cancellation-in-the-ppl.md) spiega come funziona l'annullamento nel runtime. L'annullamento è cooperativo; pertanto, non si verifica immediatamente. Per arrestare un'attività annullata, il runtime genera un'eccezione interna durante una chiamata successiva dall'attività nel runtime. Nella sezione precedente viene `parallel_for` illustrato come utilizzare l'algoritmo per migliorare le prestazioni dell'attività di disegno. La chiamata `parallel_for` a consente al runtime di arrestare l'attività e pertanto consente il funzionamento dell'annullamento.

### <a name="cancelling-active-tasks"></a>Annullamento delle attività attive

L'applicazione Mandelbrot crea `Bitmap` oggetti le cui dimensioni corrispondono alle dimensioni della finestra client. Ogni volta che la finestra client viene ridimensionata, l'applicazione crea un'attività in background aggiuntiva per generare un'immagine per le nuove dimensioni della finestra. L'applicazione non richiede queste immagini intermedie; richiede solo l'immagine per le dimensioni finali della finestra. Per impedire all'applicazione di eseguire questa operazione aggiuntiva, è possibile `WM_SIZE` annullare tutte le attività di disegno attive nei gestori di messaggi per i messaggi e `WM_SIZING` e quindi ripianificare il lavoro di disegno dopo il ridimensionato della finestra.

Per annullare le attività di disegno attive quando la finestra viene ridimensionata, l'applicazione `WM_SIZING` `WM_SIZE` chiama il metodo [concurrency::task_group::cancel](reference/task-group-class.md#cancel) nei gestori per i messaggi e . Il gestore `WM_SIZE` per il messaggio chiama anche il metodo [concurrency::task_group::wait](reference/task-group-class.md#wait) per attendere il completamento di tutte le attività attive e quindi ripianifica l'attività di disegno per le dimensioni della finestra aggiornate.

Quando la finestra client viene eliminata, è consigliabile annullare tutte le attività di disegno attive. L'annullamento di tutte le attività di disegno attive assicura che i thread di lavoro non inviino messaggi al thread dell'interfaccia utente dopo l'eliminazione della finestra client. L'applicazione annulla tutte le attività di `WM_DESTROY` disegno attive nel gestore per il messaggio.

### <a name="responding-to-cancellation"></a>Risposta all'annullamento

Il `CChildView::DrawMandelbrot` metodo, che esegue l'attività di disegno, deve rispondere all'annullamento. Poiché il runtime utilizza la `CChildView::DrawMandelbrot` gestione delle eccezioni per annullare le attività, il metodo deve utilizzare un meccanismo indipendente dalle eccezioni per garantire che tutte le risorse vengano pulite correttamente. In questo esempio viene utilizzato il modello *RIA (Resource Acquisition Is Initialization)* per garantire che i bit bitmap vengano sbloccati quando l'attività viene annullata.

##### <a name="to-add-support-for-cancellation-in-the-mandelbrot-application"></a>Per aggiungere il supporto per la cancellazione nell'applicazione Mandelbrot

1. In ChildView.h, `protected` nella sezione `CChildView` della classe, aggiungere `OnSize` `OnSizing`le `OnDestroy` dichiarazioni per le funzioni , e la mappa messaggi.

   [!code-cpp[concrt-mandelbrot#201](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_15.h)]

1. In ChildView.cpp modificare la mappa messaggi in `WM_SIZE` `WM_SIZING`modo `WM_DESTROY` che contenga gestori per i messaggi , , e .

   [!code-cpp[concrt-mandelbrot#202](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_16.cpp)]

1. Implementare il metodo `CChildView::OnSizing`. Questo metodo annulla tutte le attività di disegno esistenti.

   [!code-cpp[concrt-mandelbrot#203](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_17.cpp)]

1. Implementare il metodo `CChildView::OnSize`. Questo metodo annulla le attività di disegno esistenti e crea una nuova attività di disegno per le dimensioni della finestra client aggiornate.

   [!code-cpp[concrt-mandelbrot#204](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_18.cpp)]

1. Implementare il metodo `CChildView::OnDestroy`. Questo metodo annulla tutte le attività di disegno esistenti.

   [!code-cpp[concrt-mandelbrot#205](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_19.cpp)]

1. In ChildView.cpp, `scope_guard` definire la classe , che implementa il modello RAII.

   [!code-cpp[concrt-mandelbrot#206](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_20.cpp)]

1. Aggiungere il codice `CChildView::DrawMandelbrot` seguente al metodo `Bitmap::LockBits`dopo la chiamata a :

   [!code-cpp[concrt-mandelbrot#207](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_21.cpp)]

   Questo codice gestisce `scope_guard` l'annullamento creando un oggetto. Quando l'oggetto esce dall'ambito, sblocca i bit della bitmap.

1. Modificare la fine `CChildView::DrawMandelbrot` del metodo `scope_guard` per chiudere l'oggetto dopo che i bit della bitmap sono stati sbloccati, ma prima che i messaggi vengono inviati al thread dell'interfaccia utente. Ciò garantisce che il thread dell'interfaccia utente non venga aggiornato prima che i bit della bitmap vengano sbloccati.

   [!code-cpp[concrt-mandelbrot#208](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_22.cpp)]

1. Verificare che l'applicazione sia stata aggiornata correttamente compilandola ed eseguendola.

Quando si ridimensiona la finestra, il lavoro di disegno viene eseguito solo per le dimensioni finali della finestra. Tutte le attività di disegno attive vengono annullate anche quando la finestra viene distrutta.

[[In alto](#top)]

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate del runtime di concorrenzaConcurrency Runtime Walkthroughs](../../parallel/concrt/concurrency-runtime-walkthroughs.md)<br/>
[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Funzioni di passaggio dei messaggiMessage Passing Functions](../../parallel/concrt/message-passing-functions.md)<br/>
[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[Annullamento nella libreria PPL](cancellation-in-the-ppl.md)<br/>
[Applicazioni desktop MFC](../../mfc/mfc-desktop-applications.md)
