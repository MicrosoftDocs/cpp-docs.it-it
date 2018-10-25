---
title: "Procedura dettagliata: Rimozione di lavoro da un Thread dell'interfaccia utente | Microsoft Docs"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- user-interface threads, removing work from [Concurrency Runtime]
- removing work from user-interface threads [Concurrency Runtime]
ms.assetid: a4a65cc2-b3bc-4216-8fa8-90529491de02
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cc766b3f5410cc52543b5d2bafc06b87d9222e4a
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50077933"
---
# <a name="walkthrough-removing-work-from-a-user-interface-thread"></a>Procedura dettagliata: rimozione di lavoro da un thread dell'interfaccia utente

Questo documento illustra come usare il Runtime di concorrenza per spostare il lavoro eseguito dal thread dell'interfaccia utente (UI) in un'applicazione di Microsoft Foundation Classes (MFC) per un thread di lavoro. Questo documento illustra anche come migliorare le prestazioni di un'operazione di disegno di lunga durata.

Rimozione di lavoro da thread dell'interfaccia utente tramite l'offload delle operazioni di blocco, ad esempio, il disegno, ai thread di lavoro può migliorare la velocità di risposta dell'applicazione. Questa procedura dettagliata Usa una routine di disegno che genera il frattale di Mandelbrot per dimostrare un'operazione lunga. La generazione del frattale di Mandelbrot è anche un buon candidato per la parallelizzazione, poiché il calcolo di ogni pixel è indipendente da tutti gli altri calcoli.

## <a name="prerequisites"></a>Prerequisiti

Prima di iniziare questa procedura dettagliata, leggere gli argomenti seguenti:

- [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)

- [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)

- [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)

- [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)

- [Annullamento nella libreria PPL](cancellation-in-the-ppl.md)

Si consiglia inoltre di aver compreso i concetti di sviluppo di applicazioni MFC e GDI+ prima di iniziare questa procedura dettagliata. Per altre informazioni su MFC, vedere [MFC Desktop Applications](../../mfc/mfc-desktop-applications.md). Per altre informazioni su GDI+, vedere [GDI+](https://msdn.microsoft.com/library/windows/desktop/ms533798).

##  <a name="top"></a> Sezioni

Questa procedura dettagliata contiene le sezioni seguenti:

- [Creazione dell'applicazione MFC](#application)

- [Implementazione della versione seriale dell'applicazione di Mandelbrot](#serial)

- [Rimozione di lavoro dal Thread dell'interfaccia utente](#removing-work)

- [Miglioramento delle prestazioni di disegno](#performance)

- [Aggiunta del supporto per l'annullamento](#cancellation)

##  <a name="application"></a> Creazione dell'applicazione MFC

Questa sezione descrive come creare l'applicazione MFC di base.

### <a name="to-create-a-visual-c-mfc-application"></a>Per creare un'applicazione MFC Visual C++

1. Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.

1. Nel **nuovo progetto** nella finestra di dialogo il **modelli installati** riquadro, selezionare **Visual C++**, quindi il **modelli** riquadro, selezionare **Applicazione MFC**. Digitare un nome per il progetto, ad esempio, `Mandelbrot`, quindi fare clic su **OK** per visualizzare il **Creazione guidata applicazione MFC**.

1. Nel **tipo di applicazione** riquadro, selezionare **singolo documento**. Verificare che il **supporto per l'architettura documento/visualizzazione** casella di controllo è deselezionata.

1. Fare clic su **Finish** per creare il progetto e chiudere il **Creazione guidata applicazione MFC**.

   Verificare che l'applicazione è stata creata correttamente per la creazione e la sua esecuzione. Per compilare l'applicazione, scegliere il **compilare** menu, fare clic su **Compila soluzione**. Se l'applicazione viene compilata correttamente, eseguire l'applicazione facendo clic **Avvia debug** nel **Debug** menu.

##  <a name="serial"></a> Implementazione della versione seriale dell'applicazione di Mandelbrot

Questa sezione descrive come disegnare il frattale di Mandelbrot. Questa versione consente di disegnare il frattale di Mandelbrot a un oggetto GDI+ [Bitmap](/windows/desktop/api/gdiplusheaders/nl-gdiplusheaders-bitmap) dell'oggetto, che quindi copia il contenuto di tale bitmap per la finestra del client.

#### <a name="to-implement-the-serial-version-of-the-mandelbrot-application"></a>Per implementare la versione seriale dell'applicazione di Mandelbrot

1. In stdafx. h, aggiungere il codice seguente `#include` direttiva:

   [!code-cpp[concrt-mandelbrot#1](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_1.h)]

1. In ChildView. H, dopo il `pragma` direttiva, definire il `BitmapPtr` tipo. Il `BitmapPtr` tipo consente a un puntatore a un `Bitmap` oggetto deve essere condiviso da più componenti. Il `Bitmap` oggetto viene eliminato quando non viene fatto riferimento da alcun componente.

   [!code-cpp[concrt-mandelbrot#2](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_2.h)]

1. In ChildView. H, aggiungere il codice seguente per il `protected` sezione del `CChildView` classe:

   [!code-cpp[concrt-mandelbrot#3](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_3.h)]

1. In ChildView. cpp, impostare come commento o rimuovere le righe seguenti.

   [!code-cpp[concrt-mandelbrot#4](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_4.cpp)]

   Nelle build di Debug, questo passaggio impedisce all'applicazione tramite il `DEBUG_NEW` allocatore, che è incompatibile con GDI+.

1. In ChildView. cpp, aggiungere un `using` direttiva per il `Gdiplus` dello spazio dei nomi.

   [!code-cpp[concrt-mandelbrot#5](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_5.cpp)]

1. Aggiungere il codice seguente al costruttore e distruttore del `CChildView` classe per inizializzare e arrestare GDI+.

   [!code-cpp[concrt-mandelbrot#6](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_6.cpp)]

1. Implementare il metodo `CChildView::DrawMandelbrot`. Questo metodo consente di disegnare il frattale di Mandelbrot specificato `Bitmap` oggetto.

   [!code-cpp[concrt-mandelbrot#7](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_7.cpp)]

1. Implementare il metodo `CChildView::OnPaint`. Questo metodo chiama `CChildView::DrawMandelbrot` , che quindi copia il contenuto del `Bitmap` oggetto alla finestra.

   [!code-cpp[concrt-mandelbrot#8](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_8.cpp)]

9. Verificare che l'applicazione è stata aggiornata correttamente per la creazione e la sua esecuzione.

La figura seguente mostra i risultati dell'applicazione di Mandelbrot.

![L'applicazione di Mandelbrot](../../parallel/concrt/media/mandelbrot.png "mandelbrot")

Poiché il calcolo per ogni pixel è un'operazione costosa, il thread dell'interfaccia utente non può elaborare ulteriori messaggi fino a quando non termina il calcolo globale. Questo potrebbe ridurre la velocità di risposta dell'applicazione. Tuttavia, è possibile aumentare significativamente il problema tramite la rimozione di lavoro dal thread dell'interfaccia utente.

[[Torna all'inizio](#top)]

##  <a name="removing-work"></a> Rimozione di lavoro da Thread dell'interfaccia utente

Questa sezione illustra come rimuovere le operazioni di disegno da thread dell'interfaccia utente nell'applicazione di Mandelbrot. Spostando il lavoro di disegno dal thread dell'interfaccia utente in un thread di lavoro, il thread dell'interfaccia utente può elaborare messaggi come il thread di lavoro genera l'immagine in background.

Il Runtime di concorrenza offre tre modi per eseguire le attività: [gruppi di attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md), [agenti asincroni](../../parallel/concrt/asynchronous-agents.md), e [le attività leggere](../../parallel/concrt/task-scheduler-concurrency-runtime.md). Anche se è possibile usare uno di questi meccanismi per rimuovere lavoro dal thread dell'interfaccia utente, in questo esempio Usa un' [Concurrency:: task_group](reference/task-group-class.md) poiché i gruppi di attività supportano l'annullamento dell'oggetto. Questa procedura dettagliata Usa l'annullamento in un secondo momento per ridurre la quantità di lavoro che viene eseguito quando si ridimensiona la finestra del client e per eseguire la pulizia quando la finestra viene eliminata.

Questo esempio Usa anche un [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) oggetto per abilitare il thread dell'interfaccia utente e il thread di lavoro per comunicare tra loro. Dopo che il thread di lavoro genera l'immagine, invia un puntatore ai `Bitmap` dell'oggetto per il `unbounded_buffer` dell'oggetto, quindi invia un messaggio paint al thread dell'interfaccia utente. Il thread dell'interfaccia utente quindi riceve dal `unbounded_buffer` oggetto di `Bitmap` dell'oggetto e lo disegna la finestra del client.

#### <a name="to-remove-the-drawing-work-from-the-ui-thread"></a>Per rimuovere il lavoro di disegno da thread dell'interfaccia utente

1. In stdafx. h, aggiungere il codice seguente `#include` direttive:

   [!code-cpp[concrt-mandelbrot#101](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_9.h)]

1. In ChildView. H, aggiungere `task_group` e `unbounded_buffer` variabili membro per il `protected` sezione del `CChildView` classe. Il `task_group` oggetto contiene le attività che eseguono il disegno; il `unbounded_buffer` oggetto contiene l'immagine di Mandelbrot completata.

   [!code-cpp[concrt-mandelbrot#102](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_10.h)]

1. In ChildView. cpp, aggiungere un `using` direttiva per il `concurrency` dello spazio dei nomi.

   [!code-cpp[concrt-mandelbrot#103](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_11.cpp)]

1. Nel `CChildView::DrawMandelbrot` dopo la chiamata al metodo `Bitmap::UnlockBits`, chiamare il [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) funzione per passare il `Bitmap` oggetto al thread dell'interfaccia utente. Quindi pubblica un messaggio paint al thread UI e invalidare l'area client.

   [!code-cpp[concrt-mandelbrot#104](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_12.cpp)]

1. Aggiornamento di `CChildView::OnPaint` metodo per la ricezione aggiornato `Bitmap` dell'oggetto e disegnare l'immagine per la finestra del client.

   [!code-cpp[concrt-mandelbrot#105](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_13.cpp)]

   Il `CChildView::OnPaint` metodo crea un'attività per generare l'immagine di Mandelbrot se non ne esiste nel buffer dei messaggi. Il buffer dei messaggi non conterrà un `Bitmap` oggetto nei casi, ad esempio il messaggio di disegno iniziale e quando un'altra finestra viene spostata davanti la finestra del client.

1. Verificare che l'applicazione è stata aggiornata correttamente per la creazione e la sua esecuzione.

L'interfaccia utente è ora più reattiva poiché il disegno viene eseguito in background.

[[Torna all'inizio](#top)]

##  <a name="performance"></a> Miglioramento delle prestazioni di disegno

La generazione del frattale di Mandelbrot è un buon candidato per la parallelizzazione poiché il calcolo di ogni pixel è indipendente da tutti gli altri calcoli. Per parallelizzare la procedura di disegno, convertire l'outer `for` ciclo il `CChildView::DrawMandelbrot` a una chiamata al metodo il [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algoritmo, come indicato di seguito.

[!code-cpp[concrt-mandelbrot#301](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_14.cpp)]

Poiché il calcolo di ogni elemento bitmap è indipendente, non è necessario sincronizzare le operazioni di disegno che accedono a memoria della bitmap. In tal modo prestazioni scalarle come il numero di processori disponibili aumenta.

[[Torna all'inizio](#top)]

##  <a name="cancellation"></a> Aggiunta del supporto per l'annullamento

Questa sezione descrive come gestire il ridimensionamento della finestra e su come annullare eventuali attività di disegno quando la finestra viene eliminata.

Il documento [annullamento nella libreria PPL](cancellation-in-the-ppl.md) illustra il funzionamento dell'annullamento in fase di esecuzione. L'annullamento è cooperativo; Pertanto, non viene generato immediatamente. Per arrestare un'attività annullata, il runtime genera un'eccezione interna durante una chiamata successiva dall'attività in fase di esecuzione. Nella sezione precedente viene illustrato come utilizzare il `parallel_for` algoritmo per migliorare le prestazioni dell'attività di disegno. La chiamata a `parallel_for` consente al runtime di arrestare l'attività e pertanto consente il funzionamento dell'annullamento.

### <a name="cancelling-active-tasks"></a>Annullamento di attività attive

Crea l'applicazione di Mandelbrot `Bitmap` oggetti le cui dimensioni corrispondono alle dimensioni della finestra del client. Ogni volta che viene ridimensionata la finestra del client, l'applicazione crea un'attività in background aggiuntiva per generare un'immagine per la nuova dimensione della finestra. L'applicazione non richiede queste immagini intermedie; richiede solo l'immagine per la dimensione della finestra finale. Per evitare che l'applicazione di eseguire questo lavoro aggiuntivo, è possibile annullare le attività di disegno nei gestori di messaggi per il `WM_SIZE` e `WM_SIZING` messaggi e quindi ripianificare disegno funzionare dopo la finestra viene ridimensionata.

Per annullare l'attività di disegno quando la finestra viene ridimensionata, l'applicazione chiama il [concurrency::task_group::cancel](reference/task-group-class.md#cancel) metodo nei gestori per il `WM_SIZING` e `WM_SIZE` messaggi. Il gestore per il `WM_SIZE` messaggio anche le chiamate di [Concurrency:: Canceled](reference/task-group-class.md#wait) metodo per attendere attiva tutte le attività da completare e, successivamente, ripianificare l'attività di disegno per la dimensione della finestra aggiornata.

Quando viene eliminata definitivamente la finestra del client, è consigliabile annullare eventuali attività di disegno. Annullamento di qualsiasi attività di disegno assicura che i thread di lavoro non inviino messaggi al thread UI dopo che la finestra del client viene eliminato definitivamente. L'applicazione Annulla eventuali attività di disegno nel gestore per il `WM_DESTROY` messaggio.

### <a name="responding-to-cancellation"></a>Risponde all'annullamento

Il `CChildView::DrawMandelbrot` metodo, che esegue l'attività di disegno, deve rispondere all'annullamento. Poiché viene utilizzato per annullare le attività, di gestione delle eccezioni di `CChildView::DrawMandelbrot` metodo deve usare un meccanismo indipendente dalle eccezioni per garantire la corretta pulizia di tutte le risorse. Questo esempio Usa la *Resource Acquisition Is Initialization* modello (RAII) per garantire che i bit della bitmap vengano sbloccati quando l'attività viene annullata.

##### <a name="to-add-support-for-cancellation-in-the-mandelbrot-application"></a>Per aggiungere supporto per l'annullamento dell'applicazione di Mandelbrot

1. In ChildView. H, nel `protected` sezione del `CChildView` classe, aggiungere le dichiarazioni per le `OnSize`, `OnSizing`, e `OnDestroy` funzioni per la mappa del messaggio.

   [!code-cpp[concrt-mandelbrot#201](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_15.h)]

1. In ChildView. cpp, modificare la mappa messaggi per contenere i gestori per il `WM_SIZE`, `WM_SIZING`, e `WM_DESTROY` messaggi.

   [!code-cpp[concrt-mandelbrot#202](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_16.cpp)]

1. Implementare il metodo `CChildView::OnSizing`. Questo metodo annulla eventuali attività di disegno esistente.

   [!code-cpp[concrt-mandelbrot#203](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_17.cpp)]

1. Implementare il metodo `CChildView::OnSize`. Questo metodo annulla eventuali attività di disegno esistente e crea una nuova attività di disegno per la dimensione della finestra client aggiornato.

   [!code-cpp[concrt-mandelbrot#204](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_18.cpp)]

1. Implementare il metodo `CChildView::OnDestroy`. Questo metodo annulla eventuali attività di disegno esistente.

   [!code-cpp[concrt-mandelbrot#205](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_19.cpp)]

1. In ChildView. cpp, definire il `scope_guard` classe che implementa il modello RAII.

   [!code-cpp[concrt-mandelbrot#206](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_20.cpp)]

1. Aggiungere il codice seguente per il `CChildView::DrawMandelbrot` dopo la chiamata al metodo `Bitmap::LockBits`:

   [!code-cpp[concrt-mandelbrot#207](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_21.cpp)]

   Questo codice gestisce l'annullamento tramite la creazione di un `scope_guard` oggetto. Quando l'oggetto esce dall'ambito, sblocca i bit della bitmap.

1. Fine di modificare la `CChildView::DrawMandelbrot` metodo per chiudere il `scope_guard` dopo aver sbloccato il bit della bitmap, ma prima che tutti i messaggi vengono inviati al thread dell'interfaccia utente dell'oggetto. Ciò garantisce che il thread dell'interfaccia utente non viene aggiornato prima i bit della bitmap vengono sbloccati.

   [!code-cpp[concrt-mandelbrot#208](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_22.cpp)]

9. Verificare che l'applicazione è stata aggiornata correttamente per la creazione e la sua esecuzione.

Quando si ridimensiona la finestra, disegno work viene eseguita solo per le dimensioni della finestra finale. Qualsiasi attività di disegno vengono annullate anche quando la finestra viene eliminata.

[[Torna all'inizio](#top)]

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)<br/>
[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)<br/>
[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[Annullamento nella libreria PPL](cancellation-in-the-ppl.md)<br/>
[Applicazioni desktop MFC](../../mfc/mfc-desktop-applications.md)
