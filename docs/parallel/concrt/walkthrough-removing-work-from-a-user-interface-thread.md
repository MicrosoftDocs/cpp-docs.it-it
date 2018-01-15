---
title: 'Procedura dettagliata: Rimozione di lavoro da un Thread dell''interfaccia utente | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- user-interface threads, removing work from [Concurrency Runtime]
- removing work from user-interface threads [Concurrency Runtime]
ms.assetid: a4a65cc2-b3bc-4216-8fa8-90529491de02
caps.latest.revision: "14"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7c32613aa6938b873a820fbb491fa2c507605a6d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="walkthrough-removing-work-from-a-user-interface-thread"></a>Procedura dettagliata: rimozione di lavoro da un thread dell'interfaccia utente
Questo documento viene illustrato come utilizzare il Runtime di concorrenza per spostare il lavoro eseguito dal thread dell'interfaccia utente (UI) in un'applicazione di Microsoft Foundation Classes (MFC) per un thread di lavoro. Questo documento viene inoltre illustrato come migliorare le prestazioni di un'operazione di disegno di lunga durata.  
  
 Rimozione di lavoro dal thread dell'interfaccia utente tramite l'offload delle operazioni di blocco, ad esempio, il disegno, ai thread di lavoro può migliorare la velocità di risposta dell'applicazione. Questa procedura dettagliata Usa una routine di disegno che genera l'errore frattale di Mandelbrot per illustrare un'operazione lunga. La generazione del frattale di Mandelbrot è anche un buon candidato per la parallelizzazione perché il calcolo di ogni pixel è indipendente da tutti gli altri calcoli.  
  
## <a name="prerequisites"></a>Prerequisiti  
 Prima di iniziare questa procedura dettagliata, leggere gli argomenti seguenti:  
  
-   [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)  
  
-   [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)  
  
-   [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)  
  
-   [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)  
  
-   [Annullamento nella libreria PPL](cancellation-in-the-ppl.md)  
  
 Si consiglia inoltre di aver compreso le nozioni di base dello sviluppo di applicazioni MFC e [!INCLUDE[ndptecgdiplus](../../parallel/concrt/includes/ndptecgdiplus_md.md)] prima di iniziare questa procedura dettagliata. Per ulteriori informazioni su MFC, vedere [applicazioni Desktop MFC](../../mfc/mfc-desktop-applications.md). Per ulteriori informazioni su [!INCLUDE[ndptecgdiplus](../../parallel/concrt/includes/ndptecgdiplus_md.md)], vedere [GDI+](https://msdn.microsoft.com/en-us/library/windows/desktop/ms533798).  
  
##  <a name="top"></a> Sezioni  
 Questa procedura dettagliata contiene le sezioni seguenti:  
  
-   [Creazione dell'applicazione MFC](#application)  
  
-   [Implementazione della versione seriale dell'applicazione di Mandelbrot](#serial)  
  
-   [Rimozione di lavoro dal Thread dell'interfaccia utente](#removing-work)  
  
-   [Miglioramento delle prestazioni di disegno](#performance)  
  
-   [Aggiunta del supporto per l'annullamento](#cancellation)  
  
##  <a name="application"></a>Creazione dell'applicazione MFC  
 In questa sezione viene descritto come creare l'applicazione MFC di base.  
  
### <a name="to-create-a-visual-c-mfc-application"></a>Per creare un'applicazione Visual C++ MFC  
  
1.  Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.  
  
2.  Nel **nuovo progetto** della finestra di dialogo di **modelli installati** riquadro, selezionare **Visual C++**, quindi il **modelli** riquadro, selezionare **Applicazione MFC**. Digitare un nome per il progetto, ad esempio, `Mandelbrot`, quindi fare clic su **OK** per visualizzare il **Creazione guidata applicazione MFC**.  
  
3.  Nel **tipo di applicazione** riquadro, selezionare **singolo documento**. Verificare che il **Supporto architettura documento/visualizzazione** casella di controllo è deselezionata.  
  
4.  Fare clic su **fine** per creare il progetto e chiudere il **Creazione guidata applicazione MFC**.  
  
     Verificare che l'applicazione è stato creato correttamente per la creazione e l'esecuzione. Per compilare l'applicazione, scegliere il **compilare** menu, fare clic su **Compila soluzione**. Se l'applicazione viene compilata correttamente, eseguire l'applicazione facendo clic su **Avvia debug** sul **Debug** menu.  
  
##  <a name="serial"></a>Implementazione della versione seriale dell'applicazione di Mandelbrot  
 In questa sezione viene descritto come disegnare il frattale di Mandelbrot. Questa versione il frattale Mandelbrot per un [!INCLUDE[ndptecgdiplus](../../parallel/concrt/includes/ndptecgdiplus_md.md)] [Bitmap](https://msdn.microsoft.com/library/ms534420.aspx) dell'oggetto e quindi copia il contenuto di tale bitmap nella finestra del client.  
  
#### <a name="to-implement-the-serial-version-of-the-mandelbrot-application"></a>Per implementare la versione seriale dell'applicazione di Mandelbrot  
  
1.  In stdafx. h, aggiungere la seguente `#include` direttiva:  
  
     [!code-cpp[concrt-mandelbrot#1](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_1.h)]  
  
2.  In ChildView. H, dopo il `pragma` direttiva, definire il `BitmapPtr` tipo. Il `BitmapPtr` tipo consente a un puntatore a un `Bitmap` oggetto deve essere condiviso da più componenti. Il `Bitmap` oggetto viene eliminato quando non viene fatto riferimento da alcun componente.  
  
     [!code-cpp[concrt-mandelbrot#2](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_2.h)]  
  
3.  In ChildView. H, aggiungere il codice seguente per il `protected` sezione la `CChildView` classe:  
  
     [!code-cpp[concrt-mandelbrot#3](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_3.h)]  
  
4.  In ChildView. cpp, impostare come commento o rimuovere le righe seguenti.  
  
     [!code-cpp[concrt-mandelbrot#4](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_4.cpp)]  
  
     Nelle build di Debug, questo passaggio impedisce all'applicazione utilizzando il `DEBUG_NEW` allocatore, non è compatibile con [!INCLUDE[ndptecgdiplus](../../parallel/concrt/includes/ndptecgdiplus_md.md)].  
  
5.  In ChildView. cpp, aggiungere un `using` direttiva per il `Gdiplus` dello spazio dei nomi.  
  
     [!code-cpp[concrt-mandelbrot#5](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_5.cpp)]  
  
6.  Aggiungere il codice seguente al costruttore e distruttore del `CChildView` classe per inizializzare e arrestare [!INCLUDE[ndptecgdiplus](../../parallel/concrt/includes/ndptecgdiplus_md.md)].  
  
     [!code-cpp[concrt-mandelbrot#6](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_6.cpp)]  
  
7.  Implementare il metodo `CChildView::DrawMandelbrot`. Questo metodo il frattale Mandelbrot specificata `Bitmap` oggetto.  
  
     [!code-cpp[concrt-mandelbrot#7](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_7.cpp)]  
  
8.  Implementare il metodo `CChildView::OnPaint`. Questo metodo chiama `CChildView::DrawMandelbrot` e quindi copia il contenuto del `Bitmap` oggetto alla finestra.  
  
     [!code-cpp[concrt-mandelbrot#8](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_8.cpp)]  
  
9. Verificare che l'applicazione è stato aggiornato correttamente tramite la creazione e l'esecuzione.  
  
 Nella figura seguente mostra i risultati dell'applicazione di Mandelbrot.  
  
 ![Applicazione di Mandelbrot](../../parallel/concrt/media/mandelbrot.png "mandelbrot")  
  
 Poiché il calcolo per ciascun pixel è onerosa, il thread dell'interfaccia utente non può elaborare ulteriori messaggi fino al termine del calcolo complessivo. Questo potrebbe ridurre la reattività dell'applicazione. Tuttavia, è possibile aumentare significativamente il problema tramite la rimozione di lavoro dal thread dell'interfaccia utente.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="removing-work"></a>Rimozione di lavoro dal Thread UI  
 In questa sezione viene illustrato come rimuovere il lavoro di disegno dal thread dell'interfaccia utente nell'applicazione di Mandelbrot. Spostando il lavoro di disegno dal thread dell'interfaccia utente in un thread di lavoro, il thread dell'interfaccia utente può elaborare messaggi, come il thread di lavoro genera l'immagine in background.  
  
 Il Runtime di concorrenza fornisce tre modalità di esecuzione di attività: [gruppi di attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md), [agenti asincroni](../../parallel/concrt/asynchronous-agents.md), e [attività leggere](../../parallel/concrt/task-scheduler-concurrency-runtime.md). Sebbene sia possibile utilizzare uno qualsiasi di questi meccanismi per rimuovere lavoro dal thread dell'interfaccia utente, questo esempio viene utilizzato un [Concurrency:: task_group](reference/task-group-class.md) quanto i gruppi di attività supportano l'annullamento dell'oggetto. Questa procedura dettagliata in un secondo momento verrà utilizzato l'annullamento per ridurre la quantità di lavoro che viene eseguito quando si ridimensiona la finestra del client e per eseguire la pulizia quando la finestra viene eliminata.  
  
 Questo esempio viene inoltre utilizzato un [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) oggetto per consentire il thread UI e il thread di lavoro per comunicare tra loro. Dopo che il thread di lavoro di generazione dell'immagine, invia un puntatore al `Bitmap` dell'oggetto per il `unbounded_buffer` dell'oggetto, quindi invia un messaggio di disegno nel thread UI. Il thread dell'interfaccia utente quindi riceve dal `unbounded_buffer` oggetto di `Bitmap` e lo disegna nella finestra del client.  
  
#### <a name="to-remove-the-drawing-work-from-the-ui-thread"></a>Per rimuovere il disegno lavoro dal thread dell'interfaccia utente  
  
1.  In stdafx. h, aggiungere la seguente `#include` direttive:  
  
     [!code-cpp[concrt-mandelbrot#101](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_9.h)]  
  
2.  In ChildView. H, aggiungere `task_group` e `unbounded_buffer` variabili membro per il `protected` sezione la `CChildView` classe. Il `task_group` oggetto contiene le attività che eseguono il disegno; il `unbounded_buffer` oggetto contiene l'immagine di Mandelbrot completata.  
  
     [!code-cpp[concrt-mandelbrot#102](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_10.h)]  
  
3.  In ChildView. cpp, aggiungere un `using` direttiva per il `concurrency` dello spazio dei nomi.  
  
     [!code-cpp[concrt-mandelbrot#103](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_11.cpp)]  
  

4.  Nel `CChildView::DrawMandelbrot` dopo la chiamata al metodo `Bitmap::UnlockBits`, chiamare il [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) funzione per passare il `Bitmap` oggetto nel thread UI. Quindi, invia un messaggio di disegno nel thread UI e invalidare l'area client.  

  
     [!code-cpp[concrt-mandelbrot#104](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_12.cpp)]  
  
5.  Aggiornamento di `CChildView::OnPaint` per ricevere aggiornato `Bitmap` dell'oggetto e disegnare l'immagine per la finestra del client.  
  
     [!code-cpp[concrt-mandelbrot#105](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_13.cpp)]  
  
     Il `CChildView::OnPaint` metodo crea un'attività per generare l'immagine di Mandelbrot se non esiste nel buffer dei messaggi. Il buffer dei messaggi non conterrà un `Bitmap` oggetto nel caso ad esempio il messaggio di disegno iniziale e quando un'altra finestra viene spostata davanti alla finestra del client.  
  
6.  Verificare che l'applicazione è stato aggiornato correttamente tramite la creazione e l'esecuzione.  
  
 L'interfaccia utente è ora più reattiva, perché il lavoro di disegno viene eseguito in background.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="performance"></a>Miglioramento delle prestazioni di disegno  

 La generazione del frattale di Mandelbrot è un buon candidato per la parallelizzazione perché il calcolo di ogni pixel è indipendente da tutti gli altri calcoli. Per parallelizzare la procedura di disegno, convertire esterna `for` ciclo nella `CChildView::DrawMandelbrot` una chiamata al metodo di [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algoritmo, come indicato di seguito.  

  
 [!code-cpp[concrt-mandelbrot#301](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_14.cpp)]  
  
 Poiché il calcolo di ogni elemento della bitmap è indipendente, non è necessario sincronizzare le operazioni di disegno che l'accedono alla memoria della bitmap. Ciò consente prestazioni all'aumentare del numero di processori disponibili.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="cancellation"></a>Aggiunta del supporto per l'annullamento  
 In questa sezione viene descritto come gestire il ridimensionamento della finestra e su come annullare qualsiasi attività di disegno quando la finestra viene eliminata.  
  
 Il documento [annullamento nella libreria PPL](cancellation-in-the-ppl.md) viene illustrata l'annullamento in fase di esecuzione. L'annullamento è cooperativo; Pertanto, viene generato immediatamente. Per arrestare un'attività annullata, il runtime genera un'eccezione interna durante una chiamata successiva dall'attività in fase di esecuzione. Nella sezione precedente viene illustrato come utilizzare il `parallel_for` algoritmo per migliorare le prestazioni dell'attività di disegno. La chiamata a `parallel_for` consente al runtime di arrestare l'attività e pertanto consente il funzionamento dell'annullamento.  
  
### <a name="cancelling-active-tasks"></a>Annullamento di attività attive  
 Crea l'applicazione di Mandelbrot `Bitmap` oggetti le cui dimensioni corrispondono alle dimensioni della finestra del client. Ogni volta che il client viene ridimensionata, l'applicazione crea un'attività in background aggiuntiva per generare un'immagine per la nuova dimensione della finestra. L'applicazione non richiede tali immagini intermedie; richiede solo l'immagine per la dimensione della finestra finale. Per impedire all'applicazione dall'esecuzione di questo lavoro aggiuntivo, è possibile annullare qualsiasi attività di disegno nei gestori di messaggi per il `WM_SIZE` e `WM_SIZING` messaggi e quindi ripianificare disegno funzionano dopo la finestra viene ridimensionata.  
  
 Per annullare le attività di disegno quando la finestra viene ridimensionata, l'applicazione chiama il [concurrency::task_group::cancel](reference/task-group-class.md#cancel) metodo nei gestori per il `WM_SIZING` e `WM_SIZE` i messaggi. Il gestore per il `WM_SIZE` messaggio anche le chiamate di [Concurrency](reference/task-group-class.md#wait) metodo per attendere attività per completare tutte attive e, successivamente, ripianificare l'attività di disegno per la dimensione della finestra aggiornata.  
  
 Quando viene eliminato definitivamente la finestra del client, è consigliabile annullare qualsiasi attività di disegno. Annullamento di qualsiasi attività di disegno assicura che i thread di lavoro non inviino messaggi nel thread UI dopo che la finestra del client viene eliminata. L'applicazione Annulla qualsiasi attività di disegno nel gestore per il `WM_DESTROY` messaggio.  
  
### <a name="responding-to-cancellation"></a>Risponde all'annullamento  
 Il `CChildView::DrawMandelbrot` metodo, che esegue l'attività di disegno, è necessario rispondere all'annullamento. Poiché il runtime utilizza le eccezioni per annullare le attività, il `CChildView::DrawMandelbrot` (metodo) deve utilizzare un meccanismo indipendente dalle eccezioni per garantire la corretta pulizia di tutte le risorse. Questo esempio viene utilizzato il *Resource Acquisition Is Initialization* modello (RAII) per garantire che i bit della bitmap siano sbloccati quando l'attività viene annullata.  
  
##### <a name="to-add-support-for-cancellation-in-the-mandelbrot-application"></a>Per aggiungere il supporto per l'annullamento dell'applicazione di Mandelbrot  
  
1.  In ChildView. H, nel `protected` sezione la `CChildView` classe, aggiungere le dichiarazioni per il `OnSize`, `OnSizing`, e `OnDestroy` funzioni per la mappa dei messaggi.  
  
     [!code-cpp[concrt-mandelbrot#201](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_15.h)]  
  
2.  In ChildView. cpp, modificare la mappa messaggi per contenere i gestori per il `WM_SIZE`, `WM_SIZING`, e `WM_DESTROY` i messaggi.  
  
     [!code-cpp[concrt-mandelbrot#202](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_16.cpp)]  
  
3.  Implementare il metodo `CChildView::OnSizing`. Questo metodo annulla qualsiasi attività di disegno esistente.  
  
     [!code-cpp[concrt-mandelbrot#203](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_17.cpp)]  
  
4.  Implementare il metodo `CChildView::OnSize`. Questo metodo annulla qualsiasi attività di disegno esistente e crea una nuova attività di disegno per la dimensione della finestra client aggiornato.  
  
     [!code-cpp[concrt-mandelbrot#204](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_18.cpp)]  
  
5.  Implementare il metodo `CChildView::OnDestroy`. Questo metodo annulla qualsiasi attività di disegno esistente.  
  
     [!code-cpp[concrt-mandelbrot#205](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_19.cpp)]  
  
6.  In ChildView. cpp, definire la `scope_guard` classe che implementa il modello RAII.  
  
     [!code-cpp[concrt-mandelbrot#206](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_20.cpp)]  
  
7.  Aggiungere il codice seguente per il `CChildView::DrawMandelbrot` metodo dopo la chiamata a `Bitmap::LockBits`:  
  
     [!code-cpp[concrt-mandelbrot#207](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_21.cpp)]  
  
     Questo codice gestisce l'annullamento tramite la creazione di un `scope_guard` oggetto. Quando l'oggetto esce dall'ambito, sblocca i bit della bitmap.  
  
8.  Fine di modificare il `CChildView::DrawMandelbrot` metodo per chiudere la `scope_guard` dopo aver sbloccato il bit di bitmap, ma prima che tutti i messaggi vengono inviati al thread dell'interfaccia utente dell'oggetto. In questo modo si garantisce che il thread dell'interfaccia utente non viene aggiornato prima i bit della bitmap vengono sbloccati.  
  
     [!code-cpp[concrt-mandelbrot#208](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_22.cpp)]  
  
9. Verificare che l'applicazione è stato aggiornato correttamente tramite la creazione e l'esecuzione.  
  
 Quando si ridimensiona la finestra, creazione di lavoro viene eseguita solo per le dimensioni della finestra finale. Qualsiasi attività di disegno vengono annullati anche quando la finestra viene eliminata.  
  
 [[Torna all'inizio](#top)]  
  
## <a name="see-also"></a>Vedere anche  
 [Procedure dettagliate del Runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)   
 [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)   
 [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)   
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)   
 [Annullamento nella libreria PPL](cancellation-in-the-ppl.md)   
 [Applicazioni desktop MFC](../../mfc/mfc-desktop-applications.md)
