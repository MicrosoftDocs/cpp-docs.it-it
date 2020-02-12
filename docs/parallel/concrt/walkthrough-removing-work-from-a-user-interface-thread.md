---
title: "Procedura dettagliata: Rimozione di lavoro da un thread dell'interfaccia utente"
ms.date: 08/19/2019
helpviewer_keywords:
- user-interface threads, removing work from [Concurrency Runtime]
- removing work from user-interface threads [Concurrency Runtime]
ms.assetid: a4a65cc2-b3bc-4216-8fa8-90529491de02
ms.openlocfilehash: 518044d4e3adea44c3776793c8277939076066d6
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77140701"
---
# <a name="walkthrough-removing-work-from-a-user-interface-thread"></a>Procedura dettagliata: Rimozione di lavoro da un thread dell'interfaccia utente

In questo documento viene illustrato come utilizzare il runtime di concorrenza per spostare il lavoro eseguito dal thread dell'interfaccia utente in un'applicazione Microsoft Foundation Classes (MFC) a un thread di lavoro. In questo documento viene inoltre illustrato come migliorare le prestazioni di un'operazione di disegno di lunga durata.

La rimozione del lavoro dal thread UI mediante l'offload delle operazioni di blocco, ad esempio il disegno, nei thread di lavoro può migliorare la velocità di risposta dell'applicazione. In questa procedura dettagliata viene utilizzata una routine di disegno che genera il frattale di Mandelbrot per illustrare un'operazione di blocco lungo. La generazione del frattale di Mandelbrot è anche un buon candidato per la parallelizzazione, perché il calcolo di ogni pixel è indipendente da tutti gli altri calcoli.

## <a name="prerequisites"></a>Prerequisites

Prima di iniziare questa procedura dettagliata, leggere gli argomenti seguenti:

- [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)

- [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)

- [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)

- [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)

- [Annullamento nella libreria PPL](cancellation-in-the-ppl.md)

Prima di iniziare questa procedura dettagliata, è inoltre consigliabile comprendere le nozioni di base dello sviluppo di applicazioni MFC e di GDI+. Per ulteriori informazioni su MFC, vedere [applicazioni desktop MFC](../../mfc/mfc-desktop-applications.md). Per ulteriori informazioni su GDI+, vedere [GDI+](/windows/win32/gdiplus/-gdiplus-gdi-start).

## <a name="top"></a> Sezioni

Questa procedura dettagliata contiene le sezioni seguenti:

- [Creazione dell'applicazione MFC](#application)

- [Implementazione della versione seriale dell'applicazione Mandelbrot](#serial)

- [Rimozione del lavoro dal thread dell'interfaccia utente](#removing-work)

- [Miglioramento delle prestazioni di disegno](#performance)

- [Aggiunta del supporto per l'annullamento](#cancellation)

## <a name="application"></a>Creazione dell'applicazione MFC

In questa sezione viene descritto come creare l'applicazione MFC di base.

### <a name="to-create-a-visual-c-mfc-application"></a>Per creare un'applicazione C++ MFC visuale

1. Utilizzare la **creazione guidata applicazione MFC** per creare un'applicazione MFC con tutte le impostazioni predefinite. Vedere [procedura dettagliata: uso dei nuovi controlli della shell MFC](../../mfc/walkthrough-using-the-new-mfc-shell-controls.md) per istruzioni su come aprire la procedura guidata per la versione di Visual Studio.

1. Digitare un nome per il progetto, ad esempio `Mandelbrot`, quindi fare clic su **OK** per visualizzare la **creazione guidata applicazione MFC**.

1. Nel riquadro **tipo di applicazione** selezionare **singolo documento**. Verificare che la casella di controllo **supporto architettura documento/visualizzazione** sia deselezionata.

1. Fare clic su **fine** per creare il progetto e chiudere la **creazione guidata applicazione MFC**.

   Verificare che l'applicazione sia stata creata correttamente mediante la compilazione e l'esecuzione. Per compilare l'applicazione, scegliere **Compila soluzione**dal menu **Compila** . Se l'applicazione viene compilata correttamente, eseguire l'applicazione scegliendo **Avvia debug** dal menu **debug** .

## <a name="serial"></a>Implementazione della versione seriale dell'applicazione Mandelbrot

In questa sezione viene descritto come creare il frattale di Mandelbrot. Questa versione disegna il frattale di Mandelbrot in un oggetto [bitmap](/windows/win32/api/gdiplusheaders/nl-gdiplusheaders-bitmap) GDI+, quindi copia il contenuto di tale bitmap nella finestra del client.

#### <a name="to-implement-the-serial-version-of-the-mandelbrot-application"></a>Per implementare la versione seriale dell'applicazione Mandelbrot

1. In *PCH. h* (*stdafx. h* in Visual Studio 2017 e versioni precedenti) aggiungere la seguente direttiva `#include`:

   [!code-cpp[concrt-mandelbrot#1](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_1.h)]

1. In ChildView. h, dopo la direttiva `pragma` definire il tipo di `BitmapPtr`. Il tipo di `BitmapPtr` consente di condividere un puntatore a un oggetto `Bitmap` da più componenti. L'oggetto `Bitmap` viene eliminato quando non vi viene più fatto riferimento da alcun componente.

   [!code-cpp[concrt-mandelbrot#2](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_2.h)]

1. In ChildView. h aggiungere il codice seguente alla sezione `protected` della classe `CChildView`:

   [!code-cpp[concrt-mandelbrot#3](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_3.h)]

1. In ChildView. cpp, impostare come commento o rimuovere le righe seguenti.

   [!code-cpp[concrt-mandelbrot#4](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_4.cpp)]

   Nelle build di debug, questo passaggio impedisce all'applicazione di usare l'allocatore `DEBUG_NEW`, che non è compatibile con GDI+.

1. In ChildView. cpp aggiungere una direttiva `using` allo spazio dei nomi `Gdiplus`.

   [!code-cpp[concrt-mandelbrot#5](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_5.cpp)]

1. Aggiungere il codice seguente al costruttore e al distruttore della classe `CChildView` per inizializzare e arrestare GDI+.

   [!code-cpp[concrt-mandelbrot#6](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_6.cpp)]

1. Implementare il metodo `CChildView::DrawMandelbrot`. Questo metodo disegna il frattale di Mandelbrot nell'oggetto `Bitmap` specificato.

   [!code-cpp[concrt-mandelbrot#7](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_7.cpp)]

1. Implementare il metodo `CChildView::OnPaint`. Questo metodo chiama `CChildView::DrawMandelbrot` e quindi copia il contenuto dell'oggetto `Bitmap` nella finestra.

   [!code-cpp[concrt-mandelbrot#8](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_8.cpp)]

1. Verificare che l'applicazione sia stata aggiornata correttamente mediante la compilazione e l'esecuzione.

Nella figura seguente vengono mostrati i risultati dell'applicazione di Mandelbrot.

![Applicazione di Mandelbrot](../../parallel/concrt/media/mandelbrot.png "Applicazione di Mandelbrot")

Poiché il calcolo per ogni pixel è costoso dal punto di vista del calcolo, il thread dell'interfaccia utente non può elaborare messaggi aggiuntivi fino al termine del calcolo generale. Questo potrebbe ridurre la velocità di risposta nell'applicazione. Tuttavia, è possibile alleviare questo problema rimuovendo il lavoro dal thread UI.

[[Torna all'inizio](#top)]

## <a name="removing-work"></a>Rimozione del lavoro dal thread UI

In questa sezione viene illustrato come rimuovere il lavoro di disegno dal thread dell'interfaccia utente nell'applicazione Mandelbrot. Spostando il lavoro di disegno dal thread dell'interfaccia utente a un thread di lavoro, il thread UI può elaborare i messaggi quando il thread di lavoro genera l'immagine in background.

Il runtime di concorrenza offre tre modi per eseguire attività: [gruppi di attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md), [agenti asincroni](../../parallel/concrt/asynchronous-agents.md)e [attività leggere](../../parallel/concrt/task-scheduler-concurrency-runtime.md). Sebbene sia possibile utilizzare uno di questi meccanismi per rimuovere il lavoro dal thread dell'interfaccia utente, in questo esempio viene utilizzato un oggetto [Concurrency:: task_group](reference/task-group-class.md) perché i gruppi di attività supportano l'annullamento. In seguito, questa procedura dettagliata usa l'annullamento per ridurre la quantità di lavoro eseguita quando la finestra del client viene ridimensionata e per eseguire la pulizia quando la finestra viene distrutta.

In questo esempio viene inoltre utilizzato un oggetto [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) per consentire al thread dell'interfaccia utente e al thread di lavoro di comunicare tra loro. Quando il thread di lavoro produce l'immagine, invia un puntatore all'oggetto `Bitmap` all'oggetto `unbounded_buffer` e quindi Invia un messaggio di disegno al thread dell'interfaccia utente. Il thread UI riceve quindi dall'oggetto `unbounded_buffer` oggetto `Bitmap` e lo disegna alla finestra client.

#### <a name="to-remove-the-drawing-work-from-the-ui-thread"></a>Per rimuovere il lavoro di disegno dal thread UI

1. In *PCH. h* (*stdafx. h* in Visual Studio 2017 e versioni precedenti) aggiungere le direttive `#include` seguenti:

   [!code-cpp[concrt-mandelbrot#101](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_9.h)]

1. In ChildView. h aggiungere `task_group` e `unbounded_buffer` variabili membro alla sezione `protected` della classe `CChildView`. L'oggetto `task_group` include le attività che eseguono il disegno; l'oggetto `unbounded_buffer` utilizza l'immagine Mandelbrot completata.

   [!code-cpp[concrt-mandelbrot#102](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_10.h)]

1. In ChildView. cpp aggiungere una direttiva `using` allo spazio dei nomi `concurrency`.

   [!code-cpp[concrt-mandelbrot#103](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_11.cpp)]

1. Nel metodo `CChildView::DrawMandelbrot`, dopo la chiamata a `Bitmap::UnlockBits`, chiamare la funzione [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) per passare l'oggetto `Bitmap` al thread dell'interfaccia utente. Inviare quindi un messaggio di disegno al thread dell'interfaccia utente e invalidare l'area client.

   [!code-cpp[concrt-mandelbrot#104](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_12.cpp)]

1. Aggiornare il metodo `CChildView::OnPaint` per ricevere l'oggetto `Bitmap` aggiornato e creare l'immagine nella finestra client.

   [!code-cpp[concrt-mandelbrot#105](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_13.cpp)]

   Il metodo `CChildView::OnPaint` crea un'attività per generare l'immagine di Mandelbrot se non ne esiste una nel buffer dei messaggi. Il buffer dei messaggi non conterrà un oggetto `Bitmap` nei casi, ad esempio il messaggio di disegno iniziale e quando un'altra finestra viene spostata davanti alla finestra del client.

1. Verificare che l'applicazione sia stata aggiornata correttamente mediante la compilazione e l'esecuzione.

L'interfaccia utente è ora più reattiva perché il lavoro di disegno viene eseguito in background.

[[Torna all'inizio](#top)]

## <a name="performance"></a>Miglioramento delle prestazioni di disegno

La generazione del frattale di Mandelbrot è un buon candidato per la parallelizzazione perché il calcolo di ogni pixel è indipendente da tutti gli altri calcoli. Per parallelizzare la procedura di disegno, convertire il ciclo di `for` esterno nel metodo `CChildView::DrawMandelbrot` in una chiamata all'algoritmo [Concurrency::p arallel_for](reference/concurrency-namespace-functions.md#parallel_for) , come indicato di seguito.

[!code-cpp[concrt-mandelbrot#301](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_14.cpp)]

Poiché il calcolo di ogni elemento bitmap è indipendente, non è necessario sincronizzare le operazioni di disegno che accedono alla memoria bitmap. In questo modo è possibile ridimensionare le prestazioni con l'aumentare del numero di processori disponibili.

[[Torna all'inizio](#top)]

## <a name="cancellation"></a>Aggiunta del supporto per l'annullamento

In questa sezione viene descritto come gestire il ridimensionamento delle finestre e come annullare tutte le attività di disegno attive quando la finestra viene distrutta.

L'annullamento del documento [nella libreria PPL](cancellation-in-the-ppl.md) spiega come funziona l'annullamento nel Runtime. L'annullamento è cooperativo; quindi, non si verifica immediatamente. Per arrestare un'attività annullata, il runtime genera un'eccezione interna durante una chiamata successiva dall'attività al runtime. Nella sezione precedente viene illustrato come utilizzare l'algoritmo `parallel_for` per migliorare le prestazioni dell'attività Drawing. La chiamata a `parallel_for` consente al runtime di arrestare l'attività, consentendo pertanto l'annullamento del funzionamento.

### <a name="cancelling-active-tasks"></a>Annullamento delle attività attive

L'applicazione di Mandelbrot crea oggetti `Bitmap` le cui dimensioni corrispondono alle dimensioni della finestra del client. Ogni volta che la finestra client viene ridimensionata, l'applicazione crea un'attività in background aggiuntiva per generare un'immagine per le nuove dimensioni della finestra. L'applicazione non richiede queste immagini intermedie; richiede solo l'immagine per la dimensione finale della finestra. Per evitare che l'applicazione esegua questa operazione aggiuntiva, è possibile annullare tutte le attività di disegno attive nei gestori di messaggi per la `WM_SIZE` e `WM_SIZING` i messaggi, quindi ripianificare il lavoro di disegno dopo il ridimensionamento della finestra.

Per annullare le attività di disegno attive quando la finestra viene ridimensionata, l'applicazione chiama il metodo [Concurrency:: task_group:: Cancel](reference/task-group-class.md#cancel) nei gestori per i messaggi di `WM_SIZING` e `WM_SIZE`. Il gestore per il messaggio di `WM_SIZE` chiama anche il metodo [Concurrency:: task_group:: wait](reference/task-group-class.md#wait) per attendere il completamento di tutte le attività attive e quindi ripianificare l'attività di disegno per le dimensioni della finestra aggiornate.

Quando la finestra del client viene distrutta, è consigliabile annullare tutte le attività di disegno attive. L'annullamento di tutte le attività di disegno attive garantisce che i thread di lavoro non invii messaggi al thread UI dopo che la finestra client viene distrutta. L'applicazione Annulla tutte le attività di disegno attive nel gestore per il messaggio di `WM_DESTROY`.

### <a name="responding-to-cancellation"></a>Risposta all'annullamento

Il metodo `CChildView::DrawMandelbrot`, che esegue l'attività Drawing, deve rispondere all'annullamento. Poiché il runtime usa la gestione delle eccezioni per annullare le attività, il metodo `CChildView::DrawMandelbrot` deve usare un meccanismo indipendente dalle eccezioni per garantire che tutte le risorse vengano pulite correttamente. Questo esempio usa il modello di *inizializzazione della risorsa* (RAII) per garantire che i bit della bitmap vengano sbloccati quando l'attività viene annullata.

##### <a name="to-add-support-for-cancellation-in-the-mandelbrot-application"></a>Per aggiungere il supporto per l'annullamento nell'applicazione di Mandelbrot

1. In ChildView. h, nella sezione `protected` della classe `CChildView`, aggiungere dichiarazioni per le funzioni `OnSize`, `OnSizing`e `OnDestroy` Message Map.

   [!code-cpp[concrt-mandelbrot#201](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_15.h)]

1. In ChildView. cpp modificare la mappa dei messaggi in modo che contenga gestori per i messaggi di `WM_SIZE`, `WM_SIZING`e `WM_DESTROY`.

   [!code-cpp[concrt-mandelbrot#202](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_16.cpp)]

1. Implementare il metodo `CChildView::OnSizing`. Questo metodo annulla qualsiasi attività di disegno esistente.

   [!code-cpp[concrt-mandelbrot#203](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_17.cpp)]

1. Implementare il metodo `CChildView::OnSize`. Questo metodo annulla tutte le attività di disegno esistenti e crea una nuova attività di disegno per le dimensioni della finestra client aggiornate.

   [!code-cpp[concrt-mandelbrot#204](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_18.cpp)]

1. Implementare il metodo `CChildView::OnDestroy`. Questo metodo annulla qualsiasi attività di disegno esistente.

   [!code-cpp[concrt-mandelbrot#205](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_19.cpp)]

1. In ChildView. cpp definire la classe `scope_guard`, che implementa il modello RAII.

   [!code-cpp[concrt-mandelbrot#206](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_20.cpp)]

1. Aggiungere il codice seguente al metodo `CChildView::DrawMandelbrot` dopo la chiamata a `Bitmap::LockBits`:

   [!code-cpp[concrt-mandelbrot#207](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_21.cpp)]

   Questo codice gestisce l'annullamento creando un oggetto `scope_guard`. Quando l'oggetto lascia l'ambito, Sblocca i bit bitmap.

1. Modificare la fine del metodo `CChildView::DrawMandelbrot` per chiudere l'oggetto `scope_guard` dopo che i bit bitmap sono stati sbloccati, ma prima che tutti i messaggi vengano inviati al thread dell'interfaccia utente. In questo modo si garantisce che il thread dell'interfaccia utente non venga aggiornato prima che i bit bitmap siano sbloccati.

   [!code-cpp[concrt-mandelbrot#208](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_22.cpp)]

9. Verificare che l'applicazione sia stata aggiornata correttamente mediante la compilazione e l'esecuzione.

Quando si ridimensiona la finestra, il lavoro di disegno viene eseguito solo per le dimensioni finali della finestra. Quando la finestra viene distrutta, vengono annullate anche tutte le attività di disegno attive.

[[Torna all'inizio](#top)]

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)<br/>
[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)<br/>
[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[Annullamento nella libreria PPL](cancellation-in-the-ppl.md)<br/>
[Applicazioni desktop MFC](../../mfc/mfc-desktop-applications.md)
