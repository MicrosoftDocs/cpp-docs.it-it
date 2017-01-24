---
title: "Procedura dettagliata: rimozione di lavoro da un thread dell&#39;interfaccia utente | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rimozione di lavoro da thread dell'interfaccia utente [Runtime di concorrenza]"
  - "thread di interfaccia utente, rimozione di lavoro [Runtime di concorrenza]"
ms.assetid: a4a65cc2-b3bc-4216-8fa8-90529491de02
caps.latest.revision: 14
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura dettagliata: rimozione di lavoro da un thread dell&#39;interfaccia utente
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo documento viene illustrato come utilizzare il Runtime di concorrenza per trasferire il lavoro eseguito dal thread dell'interfaccia utente in un'applicazione MFC \(Microsoft Foundation Classes\) a un thread di lavoro.  Viene inoltre illustrato come migliorare le prestazioni di un'operazione di disegno di lunga durata.  
  
 La rimozione di lavoro dal thread dell'interfaccia utente trasferendo le operazioni più onerose, ad esempio, il disegno, ai thread di lavoro può migliorare la reattività dell'applicazione.  Al fine di presentare un'operazione lunga e onerosa, questa procedura dettagliata utilizza una routine di disegno che genera il frattale di Mandelbrot.  La generazione del frattale di Mandelbrot è inoltre un buon candidato per la parallelizzazione perché il calcolo di ciascun pixel è indipendente da tutti gli altri calcoli.  
  
## Prerequisiti  
 Prima di iniziare questa procedura dettagliata, leggere gli argomenti seguenti:  
  
-   [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)  
  
-   [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)  
  
-   [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)  
  
-   [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)  
  
-   [Annullamento](../../parallel/concrt/cancellation-in-the-ppl.md)  
  
 Si consiglia inoltre di acquisire una buona conoscenza delle basi per lo sviluppo di applicazioni MFC e [!INCLUDE[ndptecgdiplus](../../parallel/concrt/includes/ndptecgdiplus_md.md)] prima di avviare questa procedura dettagliata.  Per ulteriori informazioni su MFC, vedere [Applicazioni desktop MFC](../../mfc/mfc-desktop-applications.md).  Per ulteriori informazioni su [!INCLUDE[ndptecgdiplus](../../parallel/concrt/includes/ndptecgdiplus_md.md)], vedere [GDI\+](_gdiplus_GDI_start_cpp).  
  
##  <a name="top"></a> Sezioni  
 In questa procedura dettagliata sono contenute le sezioni seguenti:  
  
-   [Creazione dell'applicazione MFC](#application)  
  
-   [Implementazione della versione seriale dell'applicazione di Mandelbrot](#serial)  
  
-   [Rimozione del lavoro dal thread dell'interfaccia utente](#removing-work)  
  
-   [Miglioramento delle prestazioni di disegno](#performance)  
  
-   [Aggiunta di supporto per l'annullamento](#cancellation)  
  
##  <a name="application"></a> Creazione dell'applicazione MFC  
 In questa sezione viene descritto come creare l'applicazione MFC di base.  
  
### Per creare un'applicazione MFC in Visual C\+\+  
  
1.  Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.  
  
2.  Nel riquadro **Modelli installati** della finestra di dialogo **Nuovo Progetto**, selezionare **Visual C\+\+**, quindi selezionare **Applicazione MFC** nel riquadro **Modelli**.  Digitare un nome per il progetto, ad esempio, `Mandelbrot`, quindi fare clic su **OK** per visualizzare la **Creazione guidata applicazione MFC**.  
  
3.  Nel riquadro **Tipo di applicazione**, selezionare **Documento singolo**.  Verificare che la casella di controllo **Supporto per l'architettura documento\/visualizzazione** non sia selezionata.  
  
4.  Fare clic su **Fine** per creare il progetto e chiudere la **Creazione guidata applicazione MFC**.  
  
     Verificare che l'applicazione sia stata creata correttamente compilandola ed eseguendola.  Per compilare l'applicazione, fare clic su **Compila soluzione** nel menu **Compila**.  Se l'applicazione viene compilata correttamente, eseguirla facendo clic su **Avvia debug** nel menu **Debug**.  
  
##  <a name="serial"></a> Implementazione della versione seriale dell'applicazione di Mandelbrot  
 In questa sezione viene descritto come disegnare il frattale di Mandelbrot.  In questa versione il frattale di Mandelbrot viene disegnato in un oggetto [!INCLUDE[ndptecgdiplus](../../parallel/concrt/includes/ndptecgdiplus_md.md)] [Bitmap](https://msdn.microsoft.com/en-us/library/ms534420.aspx), quindi il contenuto di tale bitmap viene copiato nella finestra client.  
  
#### Per implementare la versione seriale dell'applicazione di Mandelbrot  
  
1.  In stdafx.h aggiungere la seguente direttiva `#include`:  
  
     [!code-cpp[concrt-mandelbrot#1](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_1.h)]  
  
2.  In ChildView.h, dopo la direttiva `pragma` definire il tipo `BitmapPtr`.  Il tipo `BitmapPtr` abilita un puntatore a un oggetto `Bitmap` che deve essere condiviso da più componenti.  L'oggetto `Bitmap` viene eliminato quando non esiste più alcun componente che fa riferimento all'oggetto.  
  
     [!code-cpp[concrt-mandelbrot#2](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_2.h)]  
  
3.  In ChildView.h, aggiungere il codice seguente alla sezione `protected` della classe `CChildView`:  
  
     [!code-cpp[concrt-mandelbrot#3](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_3.h)]  
  
4.  In ChildView.cpp, impostare come commento o rimuovere le righe seguenti.  
  
     [!code-cpp[concrt-mandelbrot#4](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_4.cpp)]  
  
     Nelle compilazioni Debug, questo passaggio evita che l'applicazione utilizzi l'allocatore `DEBUG_NEW` che è incompatibile con [!INCLUDE[ndptecgdiplus](../../parallel/concrt/includes/ndptecgdiplus_md.md)].  
  
5.  In ChildView.cpp, aggiungere una direttiva `using` allo spazio dei nomi `Gdiplus`.  
  
     [!code-cpp[concrt-mandelbrot#5](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_5.cpp)]  
  
6.  Aggiungere il codice riportato di seguito al costruttore e al distruttore della classe `CChildView` per inizializzare e arrestare [!INCLUDE[ndptecgdiplus](../../parallel/concrt/includes/ndptecgdiplus_md.md)].  
  
     [!code-cpp[concrt-mandelbrot#6](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_6.cpp)]  
  
7.  Implementare il metodo `CChildView::DrawMandelbrot`.  Questo metodo disegna il frattale di Mandelbrot nell'oggetto `Bitmap` specificato.  
  
     [!code-cpp[concrt-mandelbrot#7](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_7.cpp)]  
  
8.  Implementare il metodo `CChildView::OnPaint`.  Questo metodo chiama `CChildView::DrawMandelbrot` e copia il contenuto dell'oggetto `Bitmap` nella finestra.  
  
     [!code-cpp[concrt-mandelbrot#8](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_8.cpp)]  
  
9. Verificare che l'applicazione sia stata aggiornata correttamente compilandola ed eseguendola.  
  
 Nell'illustrazione riportata di seguito vengono mostrati i risultati dell'applicazione di Mandelbrot.  
  
 ![Applicazione di Mandelbrot](../../parallel/concrt/media/mandelbrot.png "Mandelbrot")  
  
 Poiché il calcolo per ciascun pixel è oneroso in termini di elaborazione, il thread dell'interfaccia utente non sarà in grado di elaborare messaggi aggiuntivi fino al termine del calcolo complessivo.  Questo potrebbe ridurre la reattività dell'applicazione.  Tuttavia, è possibile limitare l'entità di questo problema rimuovendo il lavoro dal thread dell'interfaccia utente.  
  
 \[[Top](#top)\]  
  
##  <a name="removing-work"></a> Rimozione del lavoro dal thread dell'interfaccia utente  
 In questa sezione viene illustrato come rimuovere il lavoro di disegno dal thread UI nell'applicazione di Mandelbrot.  Trasferendo il lavoro di disegno dal thread UI in un thread di lavoro, il thread UI sarà in grado di elaborare messaggi mentre il thread di lavoro genera in background l'immagine.  
  
 Il runtime di concorrenza fornisce tre modalità di esecuzione di attività: [gruppi di attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md), [agenti asincroni](../../parallel/concrt/asynchronous-agents.md) e [attività leggere](../../parallel/concrt/task-scheduler-concurrency-runtime.md).  Sebbene sia possibile utilizzare uno qualsiasi di questi meccanismi per rimuovere lavoro dal thread UI, in questo esempio viene utilizzato un oggetto [concurrency::task\_group](../Topic/task_group%20Class.md) in quanto i gruppi di attività supportano l'annullamento.  In questa procedura dettagliata, più avanti verrà utilizzato l'annullamento per ridurre la quantità di lavoro eseguita quando la finestra client viene ridimensionata e per eseguire la pulizia quando la finestra viene distrutta.  
  
 In questo esempio viene inoltre utilizzato un oggetto [concurrency::unbounded\_buffer](../Topic/unbounded_buffer%20Class.md) per consentire la comunicazione tra il thread UI e il thread di lavoro.  Quando il thread di lavoro ha terminato la generazione dell'immagine, invia all'oggetto `unbounded_buffer` un puntatore all'oggetto `Bitmap`, quindi invia un messaggio di disegno al thread UI.  Il thread UI riceve quindi l'oggetto `Bitmap` dall'oggetto `unbounded_buffer` e lo disegna nella finestra client.  
  
#### Per rimuovere il lavoro di disegno dal thread dell'interfaccia utente  
  
1.  In stdafx.h aggiungere, le seguenti direttive `#include`:  
  
     [!code-cpp[concrt-mandelbrot#101](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_9.h)]  
  
2.  In ChildView.h, aggiungere le variabili membro `task_group` e `unbounded_buffer` alla sezione `protected` della classe `CChildView`.  L'oggetto `task_group` conserva le attività che eseguono disegno, mentre l'oggetto `unbounded_buffer` contiene l'immagine Mandelbrot completa.  
  
     [!code-cpp[concrt-mandelbrot#102](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_10.h)]  
  
3.  In ChildView.cpp, aggiungere una direttiva `using` allo spazio dei nomi `concurrency`.  
  
     [!code-cpp[concrt-mandelbrot#103](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_11.cpp)]  
  
4.  Nel metodo `CChildView::DrawMandelbrot`, dopo la chiamata a `Bitmap::UnlockBits`, chiamare la funzione [concurrency::send](../Topic/send%20Function.md) per passare l'oggetto `Bitmap` al thread UI.  Inviare quindi un messaggio di disegno al thread UI e invalidare l'area client.  
  
     [!code-cpp[concrt-mandelbrot#104](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_12.cpp)]  
  
5.  Aggiornare il metodo `CChildView::OnPaint` per ricevere l'oggetto `Bitmap` aggiornato e disegnare l'immagine nella finestra client.  
  
     [!code-cpp[concrt-mandelbrot#105](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_13.cpp)]  
  
     Il metodo `CChildView::OnPaint` crea un'attività per generare l'immagine di Mandelbrot, se non ne esiste una nel buffer dei messaggi.  Il buffer dei messaggi non conterrà un oggetto `Bitmap` in casi come il messaggio di disegno iniziale e quando un'altra finestra viene spostata davanti alla finestra client.  
  
6.  Verificare che l'applicazione sia stata aggiornata correttamente compilandola ed eseguendola.  
  
 L'Interfaccia utente è ora più reattiva perché il lavoro di disegno viene eseguito in background.  
  
 \[[Top](#top)\]  
  
##  <a name="performance"></a> Miglioramento delle prestazioni di disegno  
 La generazione del frattale di Mandelbrot è un buon candidato per la parallelizzazione perché il calcolo di ciascun pixel è indipendente da tutti gli altri calcoli.  Per parallelizzare la procedura di disegno, convertire il ciclo `for` esterno del metodo `CChildView::DrawMandelbrot` in una chiamata all'algoritmo [concurrency::parallel\_for](../Topic/parallel_for%20Function.md), come illustrato di seguito.  
  
 [!code-cpp[concrt-mandelbrot#301](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_14.cpp)]  
  
 Poiché il calcolo di ciascun elemento della bitmap è indipendente, non è necessario sincronizzare le operazioni di disegno che accedono alla memoria della bitmap.  Questo consente l'adeguamento delle prestazioni all'aumentare del numero di processori disponibili.  
  
 \[[Top](#top)\]  
  
##  <a name="cancellation"></a> Aggiunta di supporto per l'annullamento  
 In questa sezione viene descritto come gestire il ridimensionamento della finestra e come annullare qualsiasi attività di disegno attiva quando viene distrutta la finestra.  
  
 Il documento [Annullamento](../../parallel/concrt/cancellation-in-the-ppl.md) spiega il funzionamento dell'annullamento nel runtime.  L'annullamento è un processo di cooperazione, pertanto non si verifica immediatamente.  Per arrestare un'attività annullata, il runtime genera un'eccezione interna durante una chiamata successiva inviata dall'attività nel runtime.  Nella sezione precedente viene illustrato come utilizzare l'algoritmo `parallel_for` per migliorare le prestazioni dell'attività di disegno.  La chiamata a `parallel_for` consente al runtime di arrestare l'attività e pertanto consente il funzionamento dell'annullamento.  
  
### Annullamento di attività attive  
 L'applicazione di Mandelbrot crea oggetti `Bitmap` le cui dimensioni corrispondono alle dimensioni della finestra client.  Ogni volta che la finestra client viene ridimensionata, l'applicazione crea un'attività in background aggiuntiva per generare un'immagine per la nuova dimensione della finestra.  L'applicazione non necessita di tali immagini intermedie; richiede solo l'immagine corrispondente alla dimensione finale della finestra.  Per evitare l'esecuzione di questo lavoro aggiuntivo da parte dell'applicazione, è possibile annullare qualsiasi attività di disegno attiva nei gestori di messaggi relativamente ai messaggi `WM_SIZE` e `WM_SIZING` e quindi ripianificare il lavoro di disegno dopo che la finestra è stata ridimensionata.  
  
 Per annullare le attività di disegno attive quando la finestra viene ridimensionata, l'applicazione chiama il metodo [concurrency::task\_group::cancel](../Topic/task_group::cancel%20Method.md) nei gestori per i messaggi `WM_SIZING` e `WM_SIZE`.  Il gestore del messaggio `WM_SIZE` chiama inoltre il metodo [concurrency::task\_group::wait](../Topic/task_group::wait%20Method.md) per attendere il completamento di tutte le attività attive e quindi ripianificare l'attività di disegno per la dimensione della finestra aggiornata.  
  
 Quando la finestra client viene distrutta, è consigliabile annullare qualsiasi attività di disegno attiva.  L'annullamento di qualsiasi attività di disegno attiva garantisce che i thread di lavoro non inviino messaggi al thread UI dopo che la finestra client è stata distrutta.  L'applicazione annulla qualsiasi attività di disegno attiva nel gestore per il messaggio `WM_DESTROY`.  
  
### Risposta all'annullamento  
 Il metodo `CChildView::DrawMandelbrot` che esegue l'attività di disegno deve rispondere all'annullamento.  Poiché il runtime utilizza la gestione delle eccezioni per annullare le attività, il metodo `CChildView::DrawMandelbrot` deve utilizzare un meccanismo indipendente dalle eccezioni per garantire la corretta pulizia di tutte le risorse.  In questo esempio viene utilizzato il modello *RAII \(Resource Acquisition Is Initialization\)* per garantire che i bit della bitmap vengano sbloccati quando l'attività viene annullata.  
  
##### Per aggiungere supporto per l'annullamento nell'applicazione di Mandelbrot  
  
1.  In ChildView.h, nella sezione `protected` della classe `CChildView`, aggiungere le dichiarazioni per le funzioni `OnSize`, `OnSizing` e `OnDestroy` di mapping ai messaggi.  
  
     [!code-cpp[concrt-mandelbrot#201](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_15.h)]  
  
2.  In ChildView.cpp, modificare la mappa dei messaggi per contenere i gestori per i messaggi `WM_SIZE`, `WM_SIZING` e `WM_DESTROY`.  
  
     [!code-cpp[concrt-mandelbrot#202](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_16.cpp)]  
  
3.  Implementare il metodo `CChildView::OnSizing`.  Questo metodo annulla qualsiasi attività di disegno esistente.  
  
     [!code-cpp[concrt-mandelbrot#203](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_17.cpp)]  
  
4.  Implementare il metodo `CChildView::OnSize`.  Questo metodo annulla qualsiasi attività di disegno esistente e crea una nuova attività di disegno per la dimensione della finestra client aggiornata.  
  
     [!code-cpp[concrt-mandelbrot#204](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_18.cpp)]  
  
5.  Implementare il metodo `CChildView::OnDestroy`.  Questo metodo annulla qualsiasi attività di disegno esistente.  
  
     [!code-cpp[concrt-mandelbrot#205](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_19.cpp)]  
  
6.  In ChildView.cpp, definire la classe `scope_guard` che implementa il modello RAII.  
  
     [!code-cpp[concrt-mandelbrot#206](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_20.cpp)]  
  
7.  Aggiungere il codice riportato di seguito al metodo `CChildView::DrawMandelbrot` dopo la chiamata a `Bitmap::LockBits`.  
  
     [!code-cpp[concrt-mandelbrot#207](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_21.cpp)]  
  
     Tale codice gestisce l'annullamento creando un oggetto `scope_guard`.  Quando l'oggetto lascia l'ambito, sblocca i bit della bitmap.  
  
8.  Modificare la fine del metodo `CChildView::DrawMandelbrot` in modo da terminare l'oggetto `scope_guard` dopo aver sbloccato bit della bitmap, ma prima dell'invio di qualsiasi messaggio al thread UI.  Questo assicura che il thread UI non venga aggiornato prima di aver sbloccato i bit della bitmap.  
  
     [!code-cpp[concrt-mandelbrot#208](../../parallel/concrt/codesnippet/CPP/walkthrough-removing-work-from-a-user-interface-thread_22.cpp)]  
  
9. Verificare che l'applicazione sia stata aggiornata correttamente compilandola ed eseguendola.  
  
 Quando si ridimensiona la finestra, il lavoro di disegno viene eseguito solo per la dimensione della finestra finale.  Qualsiasi attività di disegno attiva viene annullata anche quando la finestra viene distrutta.  
  
 \[[Top](#top)\]  
  
## Vedere anche  
 [Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)   
 [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)   
 [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)   
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)   
 [Annullamento](../../parallel/concrt/cancellation-in-the-ppl.md)   
 [Applicazioni desktop MFC](../../mfc/mfc-desktop-applications.md)