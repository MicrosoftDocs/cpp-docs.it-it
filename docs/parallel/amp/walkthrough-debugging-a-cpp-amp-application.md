---
title: "Procedura dettagliata: Debug di un'applicazione C++ AMP | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-amp
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- debugging, C++ Accelerated Massive Parallelism
- C++ AMP, debugging
- C++ Accelerated Massive Parallelism, debugging
- debugging, C++ AMP
ms.assetid: 40e92ecc-f6ba-411c-960c-b3047b854fb5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1bf80276b5434804651bcc4507397e9479f6e494
ms.sourcegitcommit: da7b7533d1a4dc141cc0f09149e4e4196f2fe329
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/23/2018
---
# <a name="walkthrough-debugging-a-c-amp-application"></a>Procedura dettagliata: Debug di un'applicazione C++ AMP
In questo argomento viene illustrato come eseguire il debug di un'applicazione che usa C++ Accelerated Massive Parallelism (C++ AMP) per poter sfruttare l'unità di elaborazione grafica (GPU). Usa un programma parallelo riduzione che sommi un'ampia gamma di valori integer. Questa procedura dettagliata illustra le attività seguenti:  
  
-   Avviare il debugger della GPU.  
  
-   Controllo thread GPU nella finestra thread GPU.  
  
-   Utilizzando la finestra Stack in parallelo contemporaneamente, osservare gli stack di chiamate di più thread GPU.  
  
-   Tramite la finestra Espressioni di controllo parallelo per controllare i valori di un'espressione singola tra più thread contemporaneamente.  
  
-   Contrassegno, il blocco, sblocco e raggruppamento thread GPU.  
  
-   L'esecuzione di tutti i thread di un riquadro in una posizione specifica nel codice.  
  
## <a name="prerequisites"></a>Prerequisiti  
 Prima di iniziare questa procedura dettagliata:  
  
-   Lettura [C++ AMP Panoramica](../../parallel/amp/cpp-amp-overview.md).  
  
-   Verificare che tale riga nell'editor di testo vengono visualizzati i numeri. Per ulteriori informazioni, vedere [procedura: visualizzare i numeri di riga nell'Editor](/visualstudio/ide/reference/how-to-display-line-numbers-in-the-editor).  
  
-   Assicurarsi che si eseguono [!INCLUDE[win8](../../build/reference/includes/win8_md.md)] o [!INCLUDE[winserver8](../../build/reference/includes/winserver8_md.md)] per supportare il debug nell'emulatore software.  
  
 [!INCLUDE[note_settings_general](../../mfc/includes/note_settings_general_md.md)]  
  
### <a name="to-create-the-sample-project"></a>Per creare il progetto di esempio  
  
1.  Avviare Visual Studio.  
  
2.  Nella barra dei menu scegliere **File**, **Nuovo**, **Progetto**.  
  
3.  In **installato** nel riquadro dei modelli, scegliere **Visual C++**.  
  
4.  Scegliere **applicazione Console Win32**, tipo `AMPMapReduce` nel **nome** , quindi scegliere il **OK** pulsante.  
  
5.  Fare clic su **Avanti**.  
  
6.  Cancella il **intestazione precompilata** casella di controllo e quindi scegliere il **fine** pulsante.  
  
7.  In **Esplora**, eliminare stdafx. h, targetver e stdafx.cpp dal progetto.  
  
8.  Aprire AMPMapReduce.cpp e sostituirne il contenuto con il codice seguente.  
  
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
        printf("sum: %s\n", passed  "Passed!" : "Failed!");   
  
        getchar();  
  
        return 0;  
    }  
  
 ```  
  
9. Nella barra dei menu scegliere **File**, **Salva tutto**.  
  
10. In **Esplora**, aprire il menu di scelta rapida per **AMPMapReduce**, quindi scegliere **proprietà**.  
  
11. Nel **pagine delle proprietà** nella finestra di dialogo **le proprietà di configurazione**, scegliere **C/C++**, **intestazioni precompilate**.  
  
12. Per il **intestazione precompilata** proprietà, selezionare **senza intestazioni precompilate**, quindi scegliere il **OK** pulsante.  
  
13. Nella barra dei menu scegliere **Compilazione**, **Compila soluzione**.  
  
## <a name="debugging-the-cpu-code"></a>Debug del codice della CPU  
 In questa procedura, si utilizzerà il Debugger Windows locale per assicurarsi che il codice della CPU in questa applicazione è corretto. Il segmento di codice della CPU in questa applicazione è particolarmente interessante è la `for` ciclo nel `reduction_sum_gpu_kernel` (funzione). Controlla la riduzione parallela basati su una struttura che viene eseguita nella GPU.  
  
### <a name="to-debug-the-cpu-code"></a>Per il debug del codice della CPU  
  
1.  In **Esplora**, aprire il menu di scelta rapida per **AMPMapReduce**, quindi scegliere **proprietà**.  
  
2.  Nel **pagine delle proprietà** nella finestra di dialogo **le proprietà di configurazione**, scegliere **debug**. Verificare che **Debugger Windows locale** è selezionata nel **Debugger da avviare** elenco.  
  
3.  Tornare all'Editor di codice.  
  
4.  Impostare punti di interruzione nelle righe di codice riportato di seguito (circa righe 67 line-70).  
  
     ![Punti di interruzione CPU](../../parallel/amp/media/campcpubreakpoints.png "campcpubreakpoints")  
Punti di interruzione CPU  
  
5.  Nella barra dei menu scegliere **Debug**, **Avvia debug**.  
  
6.  Nel **variabili locali** finestra, osservare il valore per `stride_size` fino a quando non viene raggiunto il punto di interruzione riga 70.  
  
7.  Sulla barra del menu scegliere **Debug**, **Termina debug**.  
  
## <a name="debugging-the-gpu-code"></a>Debug del codice GPU  
 In questa sezione viene illustrato come eseguire il debug di codice della GPU, ovvero il codice contenuto nel `sum_kernel_tiled` (funzione). Il codice della GPU calcola la somma di numeri interi per ogni "blocco" in parallelo.  
  
### <a name="to-debug-the-gpu-code"></a>Per il debug del codice GPU  
  
1.  In **Esplora**, aprire il menu di scelta rapida per **AMPMapReduce**, quindi scegliere **proprietà**.  
  
2.  Nel **pagine delle proprietà** nella finestra di dialogo **le proprietà di configurazione**, scegliere **debug**.  
  
3.  Nel **Debugger da avviare** elenco, selezionare **Debugger Windows locale**.  
  
4.  Nel **tipo di Debugger** elenco, verificare che **Auto** sia selezionata.

    **Auto** è il valore predefinito. Prima di Windows 10 **solo GPU** è il valore richiesto anziché **Auto**.
  
5.  Fare clic sul pulsante **OK** .  
  
6.  Impostare un punto di interruzione alla riga 30, come illustrato nella figura seguente.  
  
     ![Punti di interruzione GPU](../../parallel/amp/media/campgpubreakpoints.png "campgpubreakpoints")  
Punto di interruzione GPU  
  
7.  Nella barra dei menu scegliere **Debug**, **Avvia debug**. I punti di interruzione nel codice della CPU alle righe 67 e 70 non vengono eseguiti durante il debug in quanto le righe di codice vengono eseguite sulla CPU GPU.  
  
### <a name="to-use-the-gpu-threads-window"></a>Utilizzare la finestra thread GPU  
  
1.  Per aprire la finestra thread GPU, nella barra dei menu, scegliere **Debug**, **Windows**, **thread GPU**.  
  
     È possibile controllare lo stato del thread GPU nella finestra thread GPU che viene visualizzato.  
  
2.  Ancorare la finestra thread GPU nella parte inferiore di Visual Studio. Scegliere il **espandere commutatore Thread** pulsante per visualizzare le caselle di testo riquadro e un thread. Finestra thread GPU Mostra il numero totale di thread GPU attivi e bloccate, come illustrato nella figura seguente.  
  
     ![Finestra thread GPU con 4 thread attivi](../../parallel/amp/media/campc.png "campc")  
Finestra Thread GPU  
  
     Sono disponibili 313 riquadri allocate per il calcolo. Ogni riquadro contiene 32 thread. Poiché il debug di GPU locale si verifica in un emulatore software, vi sono quattro thread GPU attivi. I quattro thread eseguono simultanea di istruzioni e quindi passano insieme all'istruzione successiva.  
  
     Nella finestra thread GPU, vi sono quattro thread GPU attivi e 28 thread GPU bloccati nel [tile_barrier:: Wait](reference/tile-barrier-class.md#wait) istruzione definita pressoché alla riga 21 (`t_idx.barrier.wait();`). Tutti i thread GPU 32 appartengono al primo riquadro, `tile[0]`. Una freccia che punta alla riga che include il thread corrente. Per passare a un altro thread, utilizzare uno dei metodi seguenti:  

  
    -   Nella riga per il thread passare alla finestra thread GPU, aprire il menu di scelta rapida e scegliere **passa al Thread**. Se la riga rappresenta più thread, passerà al primo thread secondo le coordinate del thread.  
  
    -   Immettere i valori del riquadro e un thread del thread nelle caselle di testo corrispondente e quindi scegliere il **Thread commutatore** pulsante.  
  
     La finestra Stack di chiamate Mostra lo stack di chiamate del thread GPU corrente.  
  
### <a name="to-use-the-parallel-stacks-window"></a>Utilizzare la finestra Stack in parallelo  
  
1.  Per aprire la finestra Stack in parallelo, nella barra dei menu, scegliere **Debug**, **Windows**, **stack in parallelo**.  
  
     È possibile utilizzare la finestra Stack in parallelo contemporaneamente controllare i frame dello stack di più thread GPU.  
  
2.  Ancorare la finestra Stack in parallelo nella parte inferiore di Visual Studio.  
  
3.  Assicurarsi che **thread** sia selezionato nell'elenco nell'angolo superiore sinistro. Nella figura seguente, la finestra Stack in parallelo una visualizzazione stack di chiamate con stato attivo dei thread GPU che si è visto nella finestra thread GPU.  
  
     ![Finestra Stack in parallelo con 4 thread attivi](../../parallel/amp/media/campd.png "campd")  
Finestra Stack in parallelo  
  
     32 thread è passata dallo `_kernel_stub` per l'istruzione di espressione lambda nel `parallel_for_each` chiamata di funzione e quindi la `sum_kernel_tiled` funzione, in cui si verifica la riduzione parallela. 28 fuori 32 thread sono avanzati per il [tile_barrier:: Wait](reference/tile-barrier-class.md#wait) istruzione e restano bloccati alla riga 22, mentre 4 thread rimangono attivi di `sum_kernel_tiled` funzione alla riga 30.  

  
     È possibile esaminare le proprietà di un thread GPU che sono disponibili nella finestra thread GPU nel suggerimento dati avanzata della finestra Stack in parallelo. A tale scopo, posizionare il puntatore del mouse sul frame dello stack di **sum_kernel_tiled**. Nella figura seguente viene illustrato il suggerimento dati.  
  
     ![Suggerimento dati per finestra Stack in parallelo](../../parallel/amp/media/campe.png "campe")  
Thread GPU suggerimento dati  
  
     Per ulteriori informazioni sulla finestra Stack in parallelo, vedere [utilizzando la finestra Stack in parallelo](/visualstudio/debugger/using-the-parallel-stacks-window).  
  
### <a name="to-use-the-parallel-watch-window"></a>Utilizzare la finestra Espressioni di controllo parallelo  
  
1.  Per aprire la finestra Espressioni di controllo parallelo, sulla barra dei menu scegliere **Debug**, **Windows**, **espressioni di controllo parallelo**, **parallela controllo1**.  
  
     È possibile utilizzare la finestra Espressioni di controllo parallelo per controllare i valori di un'espressione tra più thread.  
  
2.  Ancorare la finestra Watch1 parallelo alla fine di Visual Studio. Sono presenti 32 righe nella tabella della finestra Espressioni di controllo parallelo. Ognuno corrisponde a un thread GPU che venivano visualizzate nella finestra thread GPU e la finestra Stack in parallelo. A questo punto, è possibile immettere espressioni i cui valori che si desidera controllare tra tutti i thread GPU 32.  
  
3.  Selezionare il **Aggiungi espressione di controllo** intestazione di colonna, immettere `localIdx`e quindi premere INVIO.  
  
4.  Selezionare il **Aggiungi espressione di controllo** nuovamente l'intestazione di colonna, tipo `globalIdx`e quindi premere INVIO.  
  
5.  Selezionare il **Aggiungi espressione di controllo** nuovamente l'intestazione di colonna, tipo `localA[localIdx[0]]`e quindi premere INVIO.  
  
     È possibile ordinare da un'espressione specificata selezionando l'intestazione di colonna corrispondente.  
  
     Selezionare il **localA [localIdx [0]]** intestazione di colonna per ordinare la colonna. Nella figura seguente mostra i risultati dell'ordinamento **localA [localIdx [0]]**.  
  
     ![Finestra Espressioni di controllo in parallelo con risultati ordinati](../../parallel/amp/media/campf.png "campf")  
 Risultati ordinamento  
  
     È possibile esportare il contenuto nella finestra Espressioni di controllo parallelo in Excel scegliendo il pulsante di Excel e quindi scegliendo **Apri in Excel**. Se si dispone di Excel installato nel computer di sviluppo, verrà aperto un foglio di lavoro di Excel che contiene il contenuto.  
  
6.  Nell'angolo superiore destro della finestra Espressioni di controllo parallelo, è presente un controllo di filtro che è possibile utilizzare per filtrare il contenuto tramite le espressioni booleane. Invio `localA[localIdx[0]] > 20000` nel testo del controllo filtro, quindi scegliere il tasto INVIO.  
  
     La finestra ora contiene solo i thread in cui il `localA[localIdx[0]]` valore è maggiore di 20000. Il contenuto viene comunque ordinato in base il `localA[localIdx[0]]` colonna, ovvero l'azione di ordinamento eseguito in precedenza.  
  
## <a name="flagging-gpu-threads"></a>Contrassegnare i thread GPU  
 È possibile contrassegnare i thread GPU specifici contrassegnando li nella finestra thread GPU, finestra Espressioni di controllo parallelo o il suggerimento dati nella finestra Stack in parallelo. Se una riga nella finestra thread GPU contiene più di un thread, contrassegnare la riga contrassegna tutti i thread che sono contenuti nella riga.  
  
### <a name="to-flag-gpu-threads"></a>Per contrassegnare thread GPU  
  
1.  Selezionare il **[Thread]** intestazione di colonna nella finestra Watch1 parallelo per ordinare in base a indice della sezione e l'indice thread.  
  
2.  Nella barra dei menu, scegliere **Debug**, **continua**, che comporta i quattro thread erano attive in corso la barriera successiva (definita nella riga 32 di AMPMapReduce.cpp).  
  
3.  Scegliere il simbolo di flag sul lato sinistro della riga che contiene i quattro thread sono ora attivi.  
  
     Nella figura seguente mostra i quattro thread con flag attivi nella finestra thread GPU.  
  
     ![Finestra thread GPU con thread con flag](../../parallel/amp/media/campg.png "campg")  
Thread attivi nella finestra Thread GPU  
  
     La finestra Espressioni di controllo parallelo e il suggerimento dati della finestra di stack in parallelo sia indicano i thread con flag.  
  
4.  Se si desidera concentrarsi su quattro thread contrassegnati dall'utente, è possibile scegliere di visualizzare, il thread GPU, espressioni di controllo parallelo e windows stack in parallelo, solo i thread con flag.  
  
     Pulsante Mostra solo con flag su qualsiasi di windows o scegliere il **posizione di Debug** barra degli strumenti. Nella figura seguente viene illustrato il pulsante Mostra solo con flag sul **posizione di Debug** barra degli strumenti.  
  
     ![Posizione barra degli strumenti con icona Mostra solo con contrassegno debug](../../parallel/amp/media/camph.png "camph")  
Pulsante Mostra solo con flag  
  
     Ora le finestre thread GPU, espressioni di controllo parallelo e stack in parallelo visualizzano solo i thread con flag.  
  
## <a name="freezing-and-thawing-gpu-threads"></a>Blocco e sblocco dei thread GPU  
 È possibile bloccare (sospendere) e sbloccare (riprendere) i thread GPU da finestra thread GPU o la finestra Espressioni di controllo parallelo. È possibile bloccare e sbloccare i thread di CPU allo stesso modo; Per informazioni, vedere [procedura: utilizzare la finestra thread](/visualstudio/debugger/how-to-use-the-threads-window).  
  
### <a name="to-freeze-and-thaw-gpu-threads"></a>Per bloccare e sbloccare i thread GPU  
  
1.  Scegliere il **Mostra solo con flag** pulsante per visualizzare tutti i thread.  
  
2.  Nella barra dei menu, scegliere **Debug**, **continua**.  
  
3.  Aprire il menu di scelta rapida per la riga attiva e quindi scegliere **bloccare**.  
  
     La figura seguente della finestra thread GPU mostra che tutti i quattro thread sono bloccati.  
  
     ![Finestre thread GPU con thread bloccati](../../parallel/amp/media/campk.png "campk")  
Thread bloccati nella finestra Thread GPU  
  
     Analogamente, la finestra Espressioni di controllo parallelo mostra che tutti i quattro thread sono bloccati.  
  
4.  Nella barra dei menu, scegliere **Debug**, **continua** per consentire i quattro thread GPU dopo la barriera riga 22 sullo stato di avanzamento e per raggiungere il punto di interruzione riga 30. La finestra thread GPU mostra che i quattro thread bloccati in precedenza rimangono bloccata e lo stato attivo.  
  
5.  Nella barra dei menu, scegliere **Debug**, **continua**.  
  
6.  Dalla finestra Espressioni di controllo parallelo, è anche possibile sbloccare singoli o più thread GPU.  
  
### <a name="to-group-gpu-threads"></a>Per raggruppare i thread GPU  
  
1.  Menu di scelta rapida per uno dei thread di **thread GPU** finestra, scegliere **Group By**, **indirizzo**.  
  
     I thread nella finestra thread GPU vengono raggruppati in base all'indirizzo. L'indirizzo corrisponde all'istruzione nel codice disassembly in cui si trova ciascun gruppo di thread. 24 thread sono 22 riga in cui il [metodo tile_barrier:: Wait](reference/tile-barrier-class.md#wait) viene eseguita. 12 thread sono in corrispondenza dell'istruzione per la barriera riga 32. Quattro di questi thread sono contrassegnati. Il punto di interruzione riga 30 sono otto thread. Quattro di questi thread sono bloccati. Nella figura seguente mostra i thread raggruppati nella finestra thread GPU.  

  
     ![Finestra thread GPU con thread raggruppati in base all'indirizzo](../../parallel/amp/media/campl.png "campl")  
Thread raggruppati nella finestra thread GPU  
  
2.  È inoltre possibile eseguire il **Group By** operazione aprendo il menu di scelta rapida per la griglia di dati della finestra Espressioni di controllo parallelo scelta **Group By**e quindi scegliendo la voce di menu che corrisponde alla modalità desiderata per raggruppare i thread.  
  
## <a name="running-all-threads-to-a-specific-location-in-code"></a>Esecuzione di tutti i thread in una posizione specifica nel codice  
 Eseguire tutti i thread in un riquadro specifico per la riga che contiene il cursore utilizzando **Esegui corrente affiancare fino al cursore**.  
  
### <a name="to-run-all-threads-to-the-location-marked-by-the-cursor"></a>Per eseguire tutti i thread nella posizione contrassegnata dal cursore  
  
1.  Nel menu di scelta rapida per il thread bloccati, scegliere **Sblocca**.  
  
2.  Nell'Editor di codice, posizionare il cursore nella riga 30.  
  
3.  Nel menu di scelta rapida per l'Editor di codice, scegliere **Esegui corrente riquadro fino al cursore**.  
  
     24 thread bloccati in precedenza alla barriera alla riga 21 sono avanzati alla riga 32. Come illustrato nel **thread GPU** finestra.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica di C++ AMP](../../parallel/amp/cpp-amp-overview.md)   
 [Debug del codice GPU](/visualstudio/debugger/debugging-gpu-code)   
 [Procedura: utilizzare la finestra thread GPU](/visualstudio/debugger/how-to-use-the-gpu-threads-window)   
 [Procedura: utilizzare la finestra Espressioni di controllo parallelo](/visualstudio/debugger/how-to-use-the-parallel-watch-window)   
 [Analisi del codice AMP C++ con il Visualizzatore di concorrenza](http://go.microsoft.com/fwlink/p/?linkid=253987&clcid=0x409)

