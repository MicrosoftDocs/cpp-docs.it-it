---
title: "Procedura dettagliata: Debug di un&#39;applicazione C++ AMP | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
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
  - "debug, C++ Accelerated Massive Parallelism"
  - "C++ AMP, debug"
  - "C++ Accelerated Massive Parallelism, debug"
  - "debug, C++ AMP"
ms.assetid: 40e92ecc-f6ba-411c-960c-b3047b854fb5
caps.latest.revision: 35
caps.handback.revision: 34
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura dettagliata: Debug di un&#39;applicazione C++ AMP
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questo topic mostra come fare il debug di un'applicazione che usa C\+\+ Accelerated Massive Parallelism \(C\+\+ AMP\) per sfruttare i processori della scheda grafica \(GPU\).  Essa usa un programma di riduzione in parallelo che elabora un numeroso array di interi.  In questa procedura dettagliata vengono illustrate le attività seguenti:  
  
-   Avvio del debugger della GPU.  
  
-   Ispezione dei thread della GPU nella finestra Thread della GPU.  
  
-   Utilizzo della finestra di Stack in parallelo per osservare simultaneamente gli stack di chiamate di più thread della GPU.  
  
-   Utilizzo della finestra di controllo in parallelo per controllare i valori di una singola espressione attraverso più thread contemporaneamente.  
  
-   Contrassegno, blocco, scongelamento e raggruppamento dei thread della GPU.  
  
-   Esecuzione di tutti i thread di una sezione in una posizione specifica nel codice.  
  
## Prerequisiti  
 Prima di iniziare questa procedura dettagliata:  
  
-   Leggere [Cenni preliminari su C\+\+ AMP](../../parallel/amp/cpp-amp-overview.md).  
  
-   Assicurarsi che i numeri di linea siano visualizzati nell'editor di testo.  Per ulteriori informazioni, vedere [Procedura: Visualizzare i numeri di riga nell'editor](../Topic/How%20to:%20Display%20Line%20Numbers%20in%20the%20Editor.md).  
  
-   Assicurarsi che si esegua [!INCLUDE[win8](../../build/includes/win8_md.md)] o [!INCLUDE[winserver8](../../build/includes/winserver8_md.md)] per supportare il debug sull'emulatore del software.  
  
 [!INCLUDE[note_settings_general](../../mfc/includes/note_settings_general_md.md)]  
  
### Per creare il progetto di esempio  
  
1.  Avviare Visual Studio.  
  
2.  Sulla barra dei menu scegliere **File**, **Nuovo**, **Progetto**.  
  
3.  In **installati**, nel riquadro Modelli, scegliere **Visual C\+\+**.  
  
4.  Scegliere **Progetto console Win32**, digitare `AMPMapReduce` nella casella **Nome**, quindi scegliere il pulsante **OK**.  
  
5.  Fare clic sul pulsante **Avanti**.  
  
6.  Deselezionare la casella di controllo **intestazione precompilata**, quindi scegliere il pulsante **Fine**.  
  
7.  In **Esplora soluzioni**, eliminare stdafx.h, targetver.h e stdafx.cpp dal progetto.  
  
8.  Aprire AMPMapReduce.cpp e sostituire il contenuto con il codice riportato di seguito.  
  
    ```cpp  
  
    // AMPMapReduce.cpp defines the entry point for the program.  
    // The program performs a parallel-sum reduction that computes the sum of an array of integers.   
  
    #include <stdio.h>  
    #include <tchar.h>  
    #include <amp.h>  
  
    const int BLOCK_DIM = 32;  
  
    using namespace concurrency;  
  
    void sum_kernel_tiled(tiled_index<BLOCK_DIM> t_idx, array<int, 1> &A, int stride_size) restrict(amp)  
    {  
        tile_static int localA[BLOCK_DIM];  
  
        index<1> globalIdx = t_idx.global * stride_size;  
        index<1> localIdx = t_idx.local;  
  
        localA[localIdx[0]] =  A[globalIdx];  
  
        t_idx.barrier.wait();  
  
        // Aggregate all elements in one tile into the first element.  
        for (int i = BLOCK_DIM / 2; i > 0; i /= 2)   
        {  
            if (localIdx[0] < i)   
            {  
  
                localA[localIdx[0]] += localA[localIdx[0] + i];  
            }  
  
            t_idx.barrier.wait();  
        }  
  
        if (localIdx[0] == 0)  
        {  
            A[globalIdx] = localA[0];  
        }  
    }  
  
    int size_after_padding(int n)  
    {  
        // The extent might have to be slightly bigger than num_stride to   
        // be evenly divisible by BLOCK_DIM. You can do this by padding with zeros.  
        // The calculation to do this is BLOCK_DIM * ceil(n / BLOCK_DIM)  
        return ((n - 1) / BLOCK_DIM + 1) * BLOCK_DIM;  
    }  
  
    int reduction_sum_gpu_kernel(array<int, 1> input)   
    {  
        int len = input.extent[0];  
  
        //Tree-based reduction control that uses the CPU.  
        for (int stride_size = 1; stride_size < len; stride_size *= BLOCK_DIM)   
        {  
            // Number of useful values in the array, given the current  
            // stride size.  
            int num_strides = len / stride_size;    
  
            extent<1> e(size_after_padding(num_strides));  
  
            // The sum kernel that uses the GPU.  
            parallel_for_each(extent<1>(e).tile<BLOCK_DIM>(), [&input, stride_size] (tiled_index<BLOCK_DIM> idx) restrict(amp)  
            {  
                sum_kernel_tiled(idx, input, stride_size);  
            });  
        }  
  
        array_view<int, 1> output = input.section(extent<1>(1));  
        return output[0];  
    }  
  
    int cpu_sum(const std::vector<int> &arr) {  
        int sum = 0;  
        for (size_t i = 0; i < arr.size(); i++) {  
            sum += arr[i];  
        }  
        return sum;  
    }  
  
    std::vector<int> rand_vector(unsigned int size) {  
        srand(2011);  
  
        std::vector<int> vec(size);  
        for (size_t i = 0; i < size; i++) {  
            vec[i] = rand();  
        }  
        return vec;  
    }  
  
    array<int, 1> vector_to_array(const std::vector<int> &vec) {  
        array<int, 1> arr(vec.size());  
        copy(vec.begin(), vec.end(), arr);  
        return arr;  
    }  
  
    int _tmain(int argc, _TCHAR* argv[])  
    {  
        std::vector<int> vec = rand_vector(10000);  
        array<int, 1> arr = vector_to_array(vec);  
  
        int expected = cpu_sum(vec);  
        int actual = reduction_sum_gpu_kernel(arr);  
  
        bool passed = (expected == actual);  
        if (!passed) {  
            printf("Actual (GPU): %d, Expected (CPU): %d", actual, expected);  
        }  
        printf("sum: %s\n", passed ? "Passed!" : "Failed!");   
  
        getchar();  
  
        return 0;  
    }  
  
    ```  
  
9. Sulla barra dei menu scegliere **File**, **Salva tutto**.  
  
10. In **Esplora Soluzioni**, aprire il menu di scelta rapida di **AMPMapReduce** e poi scegliere **Proprietà**.  
  
11. Nella finestra di dialogo **Pagine delle proprietà**, sotto **Proprietà di configurazione**, selezionare **C\/C\+\+**, **Intestazioni Precompilate**.  
  
12. Per la proprietà **intestazione precompilata**, selezionare **non usare intestazioni precompilate** quindi selezionare il pulsante **OK**.  
  
13. Sulla barra dei menu scegliere **Compilazione**, **Compila soluzione**.  
  
## Eseguire il debug del codice della CPU  
 In questa procedura, sarà utilizzato il debugger locale di Windows per garantire che il codice della CPU in questa applicazione sia corretto.  Nel segmento di codice della CPU di questa applicazione, è particolarmente interessante il ciclo `for` nella funzione `reduction_sum_gpu_kernel`.  Controlla la riduzione in parallelo, basata sulla struttura ad albero, che viene eseguita nella GPU.  
  
### Per eseguire il debug del codice della CPU  
  
1.  In **Esplora Soluzioni**, aprire il menu di scelta rapida di **AMPMapReduce** e poi scegliere **Proprietà**.  
  
2.  Nella finestra di dialogo **Pagine delle proprietà**, in **Proprietà di configurazione**, scegliere **Debug**.  Verificare che il **Debugger locale di Windows** sia selezionato nell'elenco **Debugger da avviare**.  
  
3.  Tornare all'Editor di codice.  
  
4.  Impostare i punti di interruzione nelle righe di codice come riportato nell'illustrazione \(circa 67 righe alla riga 70\).  
  
     ![Punti di interruzione CPU](../../parallel/amp/media/campcpubreakpoints.png "CampCpuBreakpoints")  
Punti di interruzione della CPU  
  
5.  Sulla barra dei menu scegliere **Debug**, **Avvia debug**.  
  
6.  Nella finestra **Locals**, osservare il valore di `stride_size` finché non viene raggiunto il punto di interruzione a riga 70.  
  
7.  Sulla barra del menu scegliere **Debug**, **Interrompi debug**.  
  
## Eseguire il debug del codice della GPU  
 In questa sezione viene illustrato come eseguire il debug del codice della GPU, ovvero il codice contenuto nella funzione `sum_kernel_tiled`.  Il codice della GPU calcola la somma di interi per ogni "blocco", in parallelo.  
  
### Per eseguire il debug del codice della GPU  
  
1.  In **Esplora Soluzioni**, aprire il menu di scelta rapida di **AMPMapReduce** e poi scegliere **Proprietà**.  
  
2.  Nella finestra di dialogo **Pagine delle proprietà**, in **Proprietà di configurazione**, scegliere **Debug**.  
  
3.  Nell'elenco **Debugger da avviare** selezionare **Debugger Windows locale**.  
  
4.  Nell'elenco **Tipo di debugger** selezionare **Solo GPU**.  
  
5.  Fare clic sul pulsante **OK**.  
  
6.  Impostare un punto di interruzione alla riga 30, come illustrato di seguito.  
  
     ![Punti di interruzione GPU](../../parallel/amp/media/campgpubreakpoints.png "CampGpuBreakpoints")  
Punto di interruzione della GPU  
  
7.  Sulla barra dei menu scegliere **Debug**, **Avvia debug**.  I punti di interruzione nel codice della CPU alle righe 67 e 70 non vengono eseguiti durante il debug della GPU in quanto le righe di codice vengono eseguite sulla CPU.  
  
### Per utilizzare la finestra dei Thread della GPU  
  
1.  Per aprire la finestra dei thread della GPU, sulla barra dei menu, scegliere **Debug**, **Finestre**, **Thread GPU**.  
  
     È possibile controllare lo stato dei Thread della GPU nella finestra thread della GPU che viene visualizzata.  
  
2.  Ancorare la finestra dei Thread della GPU nella parte inferiore di Visual Studio.  Scegliere il pulsante **Espandere l'opzione dei Thread** per visualizzare le caselle di testo dei Thread e della sezione.  La finestra delle Thread della GPU mostra il numero totale di Thread della GPU attive e bloccate, come illustrato di seguito.  
  
     ![Finestra Thread GPU con 4 thread attivi](../../parallel/amp/media/campc.png "CampC")  
Finestra Thread GPU  
  
     Vi sono 313 istanze allocate per il calcolo.  Ogni sezione contiene 32 thread.  Poiché il debug locale della GPU viene eseguito su un emulatore software, esistono quattro thread attivi della GPU.  I quattro thread eseguono le istruzioni simultaneamente e quindi passano assieme all'istruzione successiva.  
  
     Nella finestra thread della GPU, esistono quattro thread attivi della GPU e 28 thread della GPU bloccati all'istruzione [tile\_barrier::wait](../Topic/tile_barrier::wait%20Method.md) definita alla riga 21 \(`t_idx.barrier.wait();`\).  Tutti i 32 thread della GPU appartengono alla prima sezione, `tile[0]`.  Una freccia punta alla riga che include il thread corrente.  Per passare ad un altro thread, utilizzare uno dei seguenti metodi:  
  
    -   Nella riga del thread a cui passare, nella finestra dei thread della GPU, aprire il menu di scelta rapida e scegliere **Passa al thread**.  Se la riga rappresenta più di un thread, verrà selezionato il primo thread in base alle coordinate del thread.  
  
    -   Immettere i valori del tile e del thread nelle caselle di testo corrispondenti e quindi scegliere il pulsante **Passa al thread**.  
  
     La finestra Stack di chiamate visualizza lo stack di chiamate del corrente thread della GPU.  
  
### Per esaminare la finestra di stack in parallelo  
  
1.  Per aprire la finestra di stack in parallelo, sulla barra dei menu, scegliere **Debug**, **Finestre**, **Stack in parallelo**.  
  
     È possibile utilizzare la finestra di stack in parallelo per verificare contemporaneamente i frames dello stack di più thread della GPU.  
  
2.  Ancorare la finestra di Stack parallelo nella parte inferiore di Visual Studio.  
  
3.  Assicurarsi che **Thread** sia selezionato nella casella dell'angolo superiore sinistro.  Nell'illustrazione seguente, la finestra di stack in parallelo mostra una visualizzazione dello stack di chiamate dei thread della GPU già visto nella finestra dei thread della GPU.  
  
     ![Finestra Stack in parallelo con 4 thread attivi](../../parallel/amp/media/campd.png "CampD")  
Finestra Stack in parallelo  
  
     32 thread passano da `_kernel_stub` all'istruzione lambda nella chiamata a funzione `parallel_for_each` e dopo alla funzione `sum_kernel_tiled`, dove si verifica la riduzione in parallelo. 28 dei 32 thread hanno proseguito all'istruzione [tile\_barrier::wait](../Topic/tile_barrier::wait%20Method.md) e rimangono bloccati alla riga 22, mentre gli altri 4 thread rimangono attivi nella funzione `sum_kernel_tiled` alla riga 30.  
  
     È possibile esaminare le proprietà di un thread della GPU che sono disponibili nella finestra thread della GPU nel DataTip della finestra di Stack in parallelo.  Per fare questo, posizionare il puntatore del mouse sul frame dello stack di **sum\_kernel\_tiled**.  Nell'illustrazione seguente viene mostrato il DataTip.  
  
     ![Suggerimento dati per finestra Stack in parallelo](../../parallel/amp/media/campe.png "CampE")  
DataTip dei thread della GPU  
  
     Per ulteriori informazioni sulla finestra di Stack in parallelo, vedere [Utilizzo della finestra Stack in parallelo](../Topic/Using%20the%20Parallel%20Stacks%20Window.md).  
  
### Per utilizzare la finestra di controllo in parallelo  
  
1.  Per aprire la finestra di controllo in parallelo, sulla barra dei menu, scegliere **Debug**, **Finestre**, **Controllo in parallelo**, **Controllo in parallelo 1**.  
  
     È possibile utilizzare la finestra di controllo in parallelo per controllare i valori di un'espressione attraverso più thread.  
  
2.  Ancorare la finestra di controllo 1 nella parte inferiore di Visual Studio.  Ci sono 32 righe nella tabella della finestra di controllo in parallelo.  Ognuna corrisponde ad un thread della GPU che appariva sia nella finestra dei thread della GPU, sia nella finestra di stack in parallelo.  A questo punto, è possibile immettere espressioni delle quali si desidera controllare i valori attraverso tutti e 32 i thread della GPU.  
  
3.  Selezionare l'intestazione di colonna **Aggiungi espressione di controllo**, immettere `localIdx`, quindi Invio.  
  
4.  Selezionare nuovamente l'intestazione di colonna **Aggiungi espressione di controllo**, digitare `globalIdx`, quindi Invio.  
  
5.  Selezionare nuovamente l'intestazione di colonna **Aggiungi espressione di controllo**, digitare `localA[localIdx[0]]` quindi Invio.  
  
     È possibile ordinare per un'espressione specificata selezionando la sua corrispondente intestazione di colonna.  
  
     Selezionare l'intestazione di colonna **localA\[localIdx\[0\]\]** per ordinare la colonna.  Nella figura seguente vengono illustrati i risultati di ordinamento da **localA\[localIdx\[0\]\]**.  
  
     ![Finestra Espressione di controllo in parallelo con risultati ordinati](../../parallel/amp/media/campf.png "CampF")  
 Risultati ordinamento  
  
     È possibile esportare il contenuto della finestra di controllo in parallelo, in Excel, scegliendo il pulsante Excel, quindi **Apri in Excel**.  Se si dispone di Excel nel computer di sviluppo, verrà aperto un foglio di lavoro di Excel con il contenuto.  
  
6.  Nell'angolo superiore destro della finestra di controllo in parallelo, è presente un filtro che è possibile utilizzare per filtrare il contenuto utilizzando le espressioni booleane.  Immettere `localA[localIdx[0]] > 20000` nella casella di testo del filtro di controllo e quindi premere Invio.  
  
     La finestra ora contiene solo i thread in cui il valore di `localA[localIdx[0]]` è maggiore di 20000.  Il contenuto è ancora ordinato dalla colonna `localA[localIdx[0]]` che è l'azione di ordinamento che è stata eseguita in precedenza.  
  
## Contrassegno di thread della GPU  
 È possibile contrassegnare specifici thread della GPU, contrassegnandoli nella finestra thread della GPU, nella finestra di controllo in parallelo o in DataTip nella finestra di stack in parallelo.  Se una riga nella finestra thread della GPU contiene più di un thread, contrassegnando quella riga, si contrassegneranno tutti i thread che sono contenuti nella riga.  
  
### Per impostare i flag nei thread della GPU  
  
1.  Selezionare l'intestazione di colonna **\[Thread\]** nella finestra di controllo in parallelo 1 per ordinare in base all'indice di tile e di thread.  
  
2.  Sulla barra dei menu, scegliere **Debug**, **Continua**, quindi i quattro thread che erano attivi possono procedere fino al prossimo punto di interruzione \(definito a riga 32 di AMPMapReduce.cpp\).  
  
3.  Scegliere il simbolo del flag sulla sinistra della riga contenente i quattro thread che ora sono attivi.  
  
     La seguente illustrazione mostra i quattro thread contrassegnati attivi, nella finestra thread della GPU.  
  
     ![Finestra Thread GPU con thread con flag](../../parallel/amp/media/campg.png "CampG")  
Thread attivi nella finestra Thread GPU  
  
     La finestra di controllo in parallelo e il DataTip della finestra di stack in parallelo indicano entrambe i thread contrassegnati.  
  
4.  Se si desidera fare attenzione ai quattro thread contrassegnati, è possibile scegliere di visualizzare solo quelli nella finestra dei thread della GPU, nella finestra di controllo in parallelo e nella finestra di stack in parallelo.  
  
     Scegliere il pulsante "Show Flagged Only" in ognuna delle finestre o nella barra degli strumenti **Debug Location**.  Nella figura seguente viene illustrato il pulsante "Show Flagged Only" nella barra degli strumenti **Debug Location**.  
  
     ![Barra degli strumenti Posizione di debug con icona Mostra solo elementi con flag](../../parallel/amp/media/camph.png "CampH")  
Pulsante Mostra solo con flag  
  
     Ora le finestre di thread della GPU, di controllo in parallelo e di stack in parallelo visualizzano solo i thread con flag.  
  
## Blocco e sblocco dei thread della GPU  
 È possibile bloccare \(sospensione\) e sbloccare \(riprendere\) i thread della GPU sia dalla finestra dei thread della GPU sia dalla finestra di controllo in parallelo.  È possibile bloccare e sbloccare il thread della CPU allo stesso modo; per informazioni, vedere [Procedura: utilizzare la finestra Thread](../Topic/How%20to:%20Use%20the%20Threads%20Window.md).  
  
### Per bloccare e sbloccare i thread della GPU  
  
1.  Scegliere il pulsante **Show Flagged Only** per visualizzare tutti i thread.  
  
2.  Dalla barra dei menu scegliere **Debug**, **Continua**.  
  
3.  Aprire il menu di scelta rapida per la riga attiva, quindi scegliere **Blocca**.  
  
     La figura seguente della finestra dei thread della GPU mostra che tutti e quattro i thread sono bloccati.  
  
     ![Finestre Thread GPU con thread bloccati](../../parallel/amp/media/campk.png "CampK")  
Thread bloccati nella finestra Thread GPU  
  
     Analogamente la finestra di controllo in parallelo mostra che i quattro thread sono bloccati.  
  
4.  Sulla barra dei menu, scegliere **Debug**, **Continua** per consentire ai prossimi quattro thread della GPU di avanzare oltre la barriera alla riga 22 e per raggiungere il punto di interruzione alla riga 30.  La finestra thread della GPU mostra che i quattro thread precedentemente bloccati rimangono bloccati e nello stato attivo.  
  
5.  Dalla barra dei menu scegliere **Debug**, **Continua**.  
  
6.  Nella finestra di controllo in parallelo, è anche possibile sbloccare singoli o più thread della GPU.  
  
### Per raggruppare i thread della GPU  
  
1.  Dal menu di scelta rapida, per uno dei thread nella finestra **Thread della GPU**, scegliere **Raggruppa per**, **Indirizzo**.  
  
     I thread nella finestra dei thread della GPU sono raggruppati per indirizzo.  L'indirizzo corrisponde all'istruzione nel codice disassembly in cui si trova ciascun gruppo di thread. 24 thread sono alla riga 22 in cui viene eseguito il [Metodo tile\_barrier::wait](../Topic/tile_barrier::wait%20Method.md). 12 thread sono all'istruzione della riga 32 per la barriera.  Di questi thread, quattro sono contrassegnati.  Otto thread sono al punto di interruzione alla riga 30.  Di questi thread, quattro sono bloccati.  La seguente illustrazione mostra i thread raggruppati nella finestra thread della GPU.  
  
     ![Finestra Thread GPU con thread raggruppati per indirizzo](../../parallel/amp/media/campl.png "CampL")  
Thread raggruppati nella finestra thread della GPU  
  
2.  È inoltre possibile eseguire l'operazione **Raggruppa per** aprendo il menu di scelta rapida per il data grid della finestra di controllo in parallelo, scegliendo **Raggruppa per** quindi scegliendo la voce di menu che corrisponde a come si desidera raggruppare i thread.  
  
## Esecuzione di tutti i thread in una posizione specifica nel codice  
 Esegue tutti i thread in un tile dato fino alla riga che contiene il cursore utilizzando **esegui il Tile corrente fino al cursore**.  
  
### Per eseguire tutti i thread fine alla posizione contrassegnata dal cursore  
  
1.  Dal menu di scelta rapida, scegliere **Rilasciare** per i thread bloccati.  
  
2.  Nell'editor di codice, posizionare il cursore alla riga 30.  
  
3.  Dal menu di scelta rapida dell'Editor di codice, scegliere **Esegui il Tile corrente fino al cursore**.  
  
     I 24 thread che erano stati bloccati precedentemente dalla barriera alla riga 21, sono avanzati alla riga 32.  Questo è mostrato nella finestra dei **Thread della GPU**.  
  
## Vedere anche  
 [Cenni preliminari su C\+\+ AMP](../../parallel/amp/cpp-amp-overview.md)   
 [Debug del codice GPU](../Topic/Debugging%20GPU%20Code.md)   
 [Procedura: utilizzare la finestra Thread GPU](../Topic/How%20to:%20Use%20the%20GPU%20Threads%20Window.md)   
 [Procedura: utilizzare la finestra Espressione di controllo in parallelo](../Topic/How%20to:%20Use%20the%20Parallel%20Watch%20Window.md)   
 [Analisi del Codice C\+\+ AMP con il Visualizzatore di Concorrenza](http://go.microsoft.com/fwlink/?LinkID=253987&clcid=0x409)