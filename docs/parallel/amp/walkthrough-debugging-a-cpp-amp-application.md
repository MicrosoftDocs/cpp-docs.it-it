---
title: "Procedura dettagliata: Debug di un'applicazione C++ AMP"
ms.date: 04/23/2019
helpviewer_keywords:
- debugging, C++ Accelerated Massive Parallelism
- C++ AMP, debugging
- C++ Accelerated Massive Parallelism, debugging
- debugging, C++ AMP
ms.assetid: 40e92ecc-f6ba-411c-960c-b3047b854fb5
ms.openlocfilehash: 3f358f66d1e8a64c5042b60d7385de26a559642e
ms.sourcegitcommit: 18d3b1e9cdb4fc3a76f7a650c31994bdbd2bde64
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/29/2019
ms.locfileid: "64877542"
---
# <a name="walkthrough-debugging-a-c-amp-application"></a>Procedura dettagliata: Debug di un'applicazione C++ AMP

In questo argomento viene illustrato come eseguire il debug di un'applicazione che usa C++ Accelerated Massive Parallelism (C++ AMP) per sfruttare i vantaggi di unità di elaborazione grafica (GPU). Usa un programma parallelo riduzione di riassumere una grande matrice di numeri interi. Questa procedura dettagliata illustra le attività seguenti:

- Avviare il debugger della GPU.

- Controllo dei thread GPU nella finestra thread GPU.

- Usando il **stack in parallelo** finestra contemporaneamente osservare gli stack di chiamate di più thread GPU.

- Usando il **espressioni di controllo parallela** finestra da controllare i valori di una singola espressione attraverso più thread contemporaneamente.

- I contrassegni, il blocco, sblocco e raggruppamento thread GPU.

- L'esecuzione di tutti i thread di un riquadro in un percorso specifico nel codice.

## <a name="prerequisites"></a>Prerequisiti

Prima di iniziare questa procedura dettagliata:

- Lettura [Panoramica di C++ AMP](../../parallel/amp/cpp-amp-overview.md).

- Assicurarsi che tale riga i numeri vengono visualizzati nell'editor di testo. Per altre informazioni, vedere [Procedura: Visualizzare i numeri di riga nell'Editor](/visualstudio/ide/reference/how-to-display-line-numbers-in-the-editor).

- Assicurarsi che sia in esecuzione almeno Windows 8 o Windows Server 2012 per supportare il debug nell'emulatore software. 

[!INCLUDE[note_settings_general](../../mfc/includes/note_settings_general_md.md)]

### <a name="to-create-the-sample-project"></a>Per creare il progetto di esempio

Le istruzioni per la creazione di un progetto variano a seconda di quale versione di Visual Studio in uso. Assicurarsi di avere la versione corretta selezionata in alto a sinistra della pagina.

::: moniker range="vs-2019"

### <a name="to-create-the-sample-project-in-visual-studio-2019"></a>Per creare il progetto di esempio in Visual Studio 2019

1. Nella barra dei menu, scegliere **File** > **New** > **progetto** per aprire la **crea un nuovo progetto** nella finestra di dialogo.

1. Nella parte superiore della finestra di dialogo, impostare **Language** al **C++**, impostare **Platform** al **Windows**e impostare **tipodiprogetto** al **Console**. 

1. Nell'elenco filtrato dei tipi di progetto, scegliere **applicazione Console** quindi scegliere **successivo**. Nella pagina successiva, immettere `AMPMapReduce` nella **nome** casella per specificare un nome per il progetto e specificare il percorso del progetto se si desidera.

   ![Denominare il progetto](../../build/media/mathclient-project-name-2019.png "denominare il progetto")

1. Scegliere il **Create** pulsante per creare il progetto client.

::: moniker-end

::: moniker range="<=vs-2017"

### <a name="to-create-the-sample-project-in-visual-studio-2017-or-visual-studio-2015"></a>Per creare il progetto di esempio in Visual Studio 2017 o Visual Studio 2015

1. Avviare Visual Studio.

2. Nella barra dei menu scegliere **File** > **Nuovo** > **Progetto**.

3. Sotto **Installed** nel riquadro dei modelli, scegliere **Visual C++**.

4. Scegliere **applicazione Console Win32**, digitare `AMPMapReduce` nel **nome** casella e quindi scegliere il **OK** pulsante.

5. Fare clic su **Avanti**.

6. Cancella il **intestazione precompilata** casella di controllo e quindi scegliere il **fine** pulsante.

7. Nelle **Esplora soluzioni**, eliminare dal progetto stdafx. h, targetver e stdafx. cpp.

::: moniker-end


8. Aprire AMPMapReduce.cpp e sostituirne il contenuto con il codice seguente.

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

9. Sulla barra dei menu scegliere **File** > **Salva tutto**.

10. Nella **Esplora soluzioni**, aprire il menu di scelta rapida **AMPMapReduce**, quindi scegliere **proprietà**.

11. Nel **pagine delle proprietà** nella finestra di dialogo **delle proprietà di configurazione**, scegliere **C/C++** > **intestazioni precompilate**.

12. Per il **intestazioni precompilate** proprietà, selezionare **senza intestazioni precompilate**, quindi scegliere il **OK** pulsante.

13. Nella barra dei menu scegliere **Compila** > **Compila soluzione**.

## <a name="debugging-the-cpu-code"></a>Debug del codice della CPU

In questa procedura, si utilizzerà il Debugger Windows locale per assicurarsi che il codice della CPU in questa applicazione sia corretto. Il segmento di codice della CPU in questa applicazione particolarmente interessante è il `for` ciclo di `reduction_sum_gpu_kernel` (funzione). Controlla la riduzione parallela basati su albero che viene eseguita sulla GPU.

### <a name="to-debug-the-cpu-code"></a>Per il debug del codice della CPU

1. Nella **Esplora soluzioni**, aprire il menu di scelta rapida **AMPMapReduce**, quindi scegliere **proprietà**.

2. Nel **pagine delle proprietà** nella finestra di dialogo **delle proprietà di configurazione**, scegliere **debug**. Verificare che **Debugger Windows locale** sia selezionato nel **Debugger da avviare** elenco.

3. Tornare al **Editor di codice**.

4. Impostare punti di interruzione nelle righe di codice riportato di seguito (di circa con riga di linee 67 70).

   ![Punti di interruzione CPU](../../parallel/amp/media/campcpubreakpoints.png "punti di interruzione CPU") <br/>
   Punti di interruzione CPU

5. Sulla barra dei menu scegliere **Debug** > **Avvia debug**.

6. Nel **variabili locali** finestra, osservare il valore per `stride_size` fino a quando non viene raggiunto il punto di interruzione alla riga 70.

7. Sulla barra dei menu scegliere **Debug** > **Termina debug**.

## <a name="debugging-the-gpu-code"></a>Debug del codice GPU

Questa sezione illustra come eseguire il debug di codice della GPU, ovvero il codice contenuto nel `sum_kernel_tiled` (funzione). Il codice della GPU calcola la somma di numeri interi per ogni "blocco" in parallelo.

### <a name="to-debug-the-gpu-code"></a>Per il debug del codice GPU

1. Nella **Esplora soluzioni**, aprire il menu di scelta rapida **AMPMapReduce**, quindi scegliere **proprietà**.

2. Nel **pagine delle proprietà** nella finestra di dialogo **delle proprietà di configurazione**, scegliere **debug**.

3. Nell'elenco **Debugger da avviare** selezionare **Debugger Windows locale**.

4. Nel **tipo di Debugger** elenco, verificare che **automatico** sia selezionata.

    **Auto** è il valore predefinito. Prima di Windows 10 **solo GPU** è il valore richiesto invece di **Auto**.

5. Fare clic sul pulsante **OK** .

6. Impostare un punto di interruzione alla riga 30, come illustrato nella figura seguente.

   ![Punti di interruzione GPU](../../parallel/amp/media/campgpubreakpoints.png "punti di interruzione GPU") <br/>
   Punto di interruzione GPU

7. Sulla barra dei menu scegliere **Debug** > **Avvia debug**. I punti di interruzione nel codice della CPU alle righe 67 e 70 non vengono eseguiti durante il debug perché queste righe di codice vengono eseguite sulla CPU della GPU.

### <a name="to-use-the-gpu-threads-window"></a>Usare la finestra thread GPU

1. Per aprire la **thread GPU** finestra nella barra dei menu, scegliere **Debug** > **Windows** > **thread GPU**.

   È possibile controllare lo stato dei thread GPU nel **thread GPU** finestra visualizzata.

2. Ancorare il **thread GPU** finestra nella parte inferiore di Visual Studio. Scegliere il **commutatore Thread espandere** pulsante per visualizzare le caselle di testo riquadro e un thread. Il **thread GPU** finestra Mostra il numero totale di thread GPU attivi e bloccato, come illustrato nella figura seguente.

   ![Finestra thread GPU con 4 thread attivi](../../parallel/amp/media/campc.png "finestra thread GPU con 4 thread attivi") <br/>
   Finestra Thread GPU

   Sono presenti 313 riquadri allocati per il calcolo. Ogni riquadro contiene 32 thread. Poiché il debug di GPU locale si verifica in un emulatore software, sono disponibili quattro thread GPU attivi. I quattro thread di esecuzione simultanea di istruzioni e quindi passare insieme alla successiva istruzione.

   Nel **thread GPU** finestra, vi sono quattro thread GPU attivi e 28 thread GPU bloccati nel [tile_barrier:: Wait](reference/tile-barrier-class.md#wait) istruzione definita pressoché alla riga 21 (`t_idx.barrier.wait();`). Tutte le 32 thread GPU appartengono al primo riquadro `tile[0]`. Una freccia punta alla riga che include il thread corrente. Per passare a un altro thread, usare uno dei metodi seguenti:

    - Nella riga relativa al thread di passare nel **thread GPU** finestra, aprire il menu di scelta rapida e scegliere **passa a Thread**. Se la riga rappresenta più di un thread, passerà al primo thread che secondo le coordinate di thread.

    - Immettere i valori del riquadro e un thread del thread nelle caselle di testo corrispondente e quindi scegliere il **commutatore Thread** pulsante.

   Il **Stack di chiamate** finestra consente di visualizzare lo stack di chiamate del thread GPU corrente.

### <a name="to-use-the-parallel-stacks-window"></a>Usare la finestra Stack in parallelo

1. Per aprire la **stack in parallelo** finestra nella barra dei menu, scegliere **Debug** > **Windows** > **stack in parallelo**.

   È possibile usare la **stack in parallelo** finestra da controllare simultaneamente gli stack frame di più thread GPU.

2. Ancorare il **stack in parallelo** finestra nella parte inferiore di Visual Studio.

3. Verificare che l'opzione **thread** sia selezionata nell'elenco nell'angolo superiore sinistro. Nella figura seguente, il **stack in parallelo** finestra Mostra una visualizzazione dello stack di chiamate con stato attivato del thread GPU che hai visto nel **thread GPU** finestra.

   ![Finestra Stack in parallelo con 4 thread attivi](../../parallel/amp/media/campd.png "finestra Stack in parallelo con 4 thread attivi") <br/>
   Finestra Stack in parallelo

   32 thread è passata dallo `_kernel_stub` verso la lambda espressione nel `parallel_for_each` chiamata di funzione e quindi al `sum_kernel_tiled` funzione, in cui si verifica la riduzione parallela. 28 all'esterno di 32 thread sono avanzati per il [tile_barrier:: Wait](reference/tile-barrier-class.md#wait) istruzione e restano bloccati nella riga 22, mentre altri 4 thread rimangono attivi il `sum_kernel_tiled` funzione alla riga 30.

   È possibile esaminare le proprietà di un thread GPU disponibili nel **thread GPU** finestra nel suggerimento dati avanzati delle **stack in parallelo** finestra. A tale scopo, posizionare il puntatore del mouse sul frame dello stack di **sum_kernel_tiled**. La figura seguente mostra il suggerimento dati.

   ![Suggerimento dati per finestra Stack in parallelo](../../parallel/amp/media/campe.png "suggerimento dati per finestra Stack in parallelo") <br/>
   Thread GPU suggerimento dati

   Per altre informazioni sul **stack in parallelo** finestra, vedere [usando la finestra Stack in parallelo](/visualstudio/debugger/using-the-parallel-stacks-window).

### <a name="to-use-the-parallel-watch-window"></a>Usare la finestra Espressioni di controllo parallela

1. Per aprire la **espressioni di controllo parallela** finestra nella barra dei menu, scegliere **Debug** > **Windows** > **espressioni di controllo parallela**  >  **Espressioni di controllo 1 in parallelo**.

   È possibile usare la **espressioni di controllo parallela** finestra per controllare i valori di un'espressione in più thread.

2. Ancorare il **parallele espressioni di controllo 1** finestra verso il basso di Visual Studio. Sono disponibili 32 righe nella tabella del **espressioni di controllo parallela** finestra. Ognuna corrisponde a un thread GPU che venivano visualizzate sia nella finestra thread GPU e il **stack in parallelo** finestra. A questo punto, è possibile immettere espressioni con valori che si desidera ispezionare in tutte le 32 thread GPU.

3. Selezionare il **Aggiungi espressione di controllo** intestazione di colonna, immettere `localIdx`, quindi scegliere il **invio** chiave.

4. Selezionare il **Aggiungi espressione di controllo** anche in questo caso l'intestazione di colonna, tipo `globalIdx`, quindi scegliere il **invio** chiave.

5. Selezionare il **Aggiungi espressione di controllo** anche in questo caso l'intestazione di colonna, tipo `localA[localIdx[0]]`, quindi scegliere il **invio** chiave.

   È possibile ordinare da un'espressione specificata, selezionando l'intestazione di colonna corrispondente.

   Selezionare il **localA [localIdx [0]]** intestazione di colonna per ordinare la colonna. La figura seguente mostra i risultati dell'ordinamento in base a **localA [localIdx [0]]**.

   ![Finestra Espressioni di controllo in parallelo con risultati ordinati](../../parallel/amp/media/campf.png "finestra Espressioni di controllo parallelo con i risultati ordinati") <br/>
   Risultati ordinamento

   È possibile esportare il contenuto nel **espressioni di controllo parallela** finestra di Excel, scegliere il **Excel** pulsante e quindi scegliendo **Apri in Excel**. Se si dispone di Excel sia installato nel computer di sviluppo, verrà aperto un foglio di lavoro di Excel che contiene il contenuto.

6. Nell'angolo superiore destro del **espressioni di controllo parallela** finestra è disponibile un filtro di controllo che è possibile usare per filtrare il contenuto usando le espressioni booleane. Invio `localA[localIdx[0]] > 20000` nel testo del controllo filtro e quindi selezionare il **invio** chiave.

   La finestra contiene ora solo i thread in cui il `localA[localIdx[0]]` è superiore a 20000. È ancora ordinato in base al contenuto di `localA[localIdx[0]]` colonna, ovvero l'azione di ordinamento eseguito in precedenza.

## <a name="flagging-gpu-threads"></a>Quando si contrassegna thread GPU

È possibile contrassegnare thread GPU specifici contrassegnando nel **thread GPU** finestra, il **espressioni di controllo parallela** finestra o il suggerimento dati nella **stack in parallelo** finestra. Se una riga nella finestra thread GPU contiene più di un thread, quando si contrassegna tale riga contrassegna tutti i thread che sono contenuti nella riga.

### <a name="to-flag-gpu-threads"></a>Per contrassegnare thread GPU

1. Selezionare il **[Thread]** intestazione di colonna nel **Watch1 parallele** finestra per ordinare dal riquadro e thread dell'indice.

2. Nella barra dei menu, scegliere **Debug** > **Continue**, in modo che i quattro thread che erano attive per lo stato di avanzamento alla barriera successiva (definita in 32 line-of-AMPMapReduce.cpp).

3. Fare clic sul simbolo di contrassegno sul lato sinistro della riga che contiene i quattro thread sono ora attivi.

   La figura seguente mostra i quattro thread con flag attivi nel **thread GPU** finestra.

   ![Finestra thread GPU con thread con flag](../../parallel/amp/media/campg.png "finestra thread GPU con thread con flag") <br/>
   Thread attivi nella finestra Thread GPU

   Il **espressioni di controllo parallela** finestra e il suggerimento dati delle **stack in parallelo** finestra entrambi indicano i thread con flag.

4. Se si desidera concentrarsi sui quattro thread contrassegnati dall'utente, è possibile scegliere di visualizzare, nelle **thread GPU**, **espressioni di controllo parallela**, e **stack in parallelo** windows, solo il flag thread.

   Scegliere il **Mostra solo con flag** pulsante in uno qualsiasi di windows oppure i **posizione di Debug** sulla barra degli strumenti. La figura seguente mostra le **Mostra solo con flag** pulsante il **posizione di Debug** sulla barra degli strumenti.

   ![Eseguire il debug sulla barra degli strumenti posizione con icona Mostra solo con contrassegno](../../parallel/amp/media/camph.png "barra degli strumenti posizione di Debug con icona Mostra solo con contrassegno") <br/>
   **Mostra solo con flag** pulsante

   A questo punto il **thread GPU**, **espressioni di controllo parallela**, e **stack in parallelo** finestre vengono visualizzate solo i thread con flag.

## <a name="freezing-and-thawing-gpu-threads"></a>Blocco e sblocco dei thread GPU

È possibile bloccare (sospendere) e sbloccare (riprendere) GPU thread dal **thread GPU** finestra o il **espressioni di controllo parallela** finestra. È possibile bloccare e sbloccare i thread della CPU stesso modo. Per informazioni, vedere [come: Utilizzare la finestra thread](/visualstudio/debugger/how-to-use-the-threads-window).

### <a name="to-freeze-and-thaw-gpu-threads"></a>Per bloccare e sbloccare i thread GPU

1. Scegliere il **Mostra solo con flag** pulsante per visualizzare tutti i thread.

2. Nella barra dei menu, scegliere **Debug** > **Continue**.

3. Aprire il menu di scelta rapida per la riga attiva e quindi scegliere **Freeze**.

   Nella figura seguente del **thread GPU** finestra mostra che tutti i quattro thread sono bloccati.

   ![Finestre thread GPU con thread bloccati](../../parallel/amp/media/campk.png "finestre thread GPU con thread bloccati") <br/>
   Congelato thread le **thread GPU** finestra

   Analogamente, il **espressioni di controllo parallela** finestra mostra che tutti i quattro thread sono bloccati.

4. Nella barra dei menu, scegliere **Debug** > **Continue** per consentire i quattro thread GPU per procedere oltre la barriera nella riga 22 e raggiungere il punto di interruzione alla riga 30. Il **thread GPU** finestra mostra che i quattro thread bloccato in precedenza rimangono bloccata e lo stato attivo.

5. Nella barra dei menu, scegliere **Debug**, **continua**.

6. Dal **espressioni di controllo parallela** finestra, è inoltre possibile sbloccare o singoli o più thread GPU.

### <a name="to-group-gpu-threads"></a>Per raggruppare i thread GPU

1. Menu di scelta rapida per uno dei thread di **thread GPU** finestra, scegliere **Group By**, **indirizzo**.

   I thread nel **thread GPU** finestra vengono raggruppati in base all'indirizzo. L'indirizzo corrisponde all'istruzione nel disassemblaggio in cui si trova ciascun gruppo di thread. 24 thread sono nella riga 22 in cui il [metodo tile_barrier:: Wait](reference/tile-barrier-class.md#wait) viene eseguita. 12 thread sono l'istruzione per la barriera alla riga 32. Quattro di questi thread sono contrassegnate. Otto thread sono nel punto di interruzione alla riga 30. Quattro di questi thread sono bloccati. La figura seguente mostra i thread raggruppati nel **thread GPU** finestra.

   ![Finestra thread GPU con thread raggruppati in base all'indirizzo](../../parallel/amp/media/campl.png "finestra thread GPU con thread raggruppati in base all'indirizzo") <br/>
   Raggruppare i thread nel **thread GPU** finestra

2. È anche possibile eseguire la **Group By** operazione aprendo il menu di scelta rapida per la griglia dei dati del **espressioni di controllo parallela** finestra scegliendo **Group By**e quindi scegliendo il menu di scelta elemento che corrisponde al modo in cui si desidera raggruppare i thread.

## <a name="running-all-threads-to-a-specific-location-in-code"></a>Tutti i thread in esecuzione in un percorso specifico nel codice

Si esegue tutti i thread in un riquadro specifico per la riga che contiene il cursore utilizzando **Esegui corrente riquadro fino al cursore**.

### <a name="to-run-all-threads-to-the-location-marked-by-the-cursor"></a>Per eseguire tutti i thread nella posizione contrassegnata dal cursore

1. Scegliere il menu di scelta rapida per il thread bloccati **Sblocca**.

2. Nel **Editor di codice**, posizionare il cursore nella riga 30.

3. Nel menu di scelta rapida per il **Editor di codice**, scegliere **Esegui corrente riquadro fino al cursore**.

   Riga 32 hanno acquisito i 24 thread che sono stati bloccati in precedenza alla barriera alla riga 21. Come illustrato nel **thread GPU** finestra.

## <a name="see-also"></a>Vedere anche

[Panoramica di C++ AMP](../../parallel/amp/cpp-amp-overview.md)<br/>
[Debug del codice GPU](/visualstudio/debugger/debugging-gpu-code)<br/>
[Procedura: Usare la finestra Thread GPU](/visualstudio/debugger/how-to-use-the-gpu-threads-window)<br/>
[Procedura: Usare la finestra Espressione di controllo in parallelo](/visualstudio/debugger/how-to-use-the-parallel-watch-window)<br/>
[Analisi del codice AMP C++ con il Visualizzatore di concorrenza](https://blogs.msdn.microsoft.com/nativeconcurrency/2012/03/09/analyzing-c-amp-code-with-the-concurrency-visualizer/)
