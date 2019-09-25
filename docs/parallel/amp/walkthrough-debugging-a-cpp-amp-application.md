---
title: "Procedura dettagliata: Debug di C++ un'applicazione amp"
ms.date: 04/23/2019
helpviewer_keywords:
- debugging, C++ Accelerated Massive Parallelism
- C++ AMP, debugging
- C++ Accelerated Massive Parallelism, debugging
- debugging, C++ AMP
ms.assetid: 40e92ecc-f6ba-411c-960c-b3047b854fb5
ms.openlocfilehash: 0c9fb5588cfd44c83d8fe72c7c4aede0fedab672
ms.sourcegitcommit: 389c559918d9bfaf303d262ee5430d787a662e92
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/25/2019
ms.locfileid: "69631592"
---
# <a name="walkthrough-debugging-a-c-amp-application"></a>Procedura dettagliata: Debug di C++ un'applicazione amp

Questo argomento illustra come eseguire il debug di un'applicazione C++ che usa Accelerated MassiveC++ parallelism (amp) per sfruttare i vantaggi dell'unità di elaborazione grafica (GPU). Usa un programma di riduzione in parallelo che somma una grande matrice di numeri interi. Questa procedura dettagliata illustra le attività seguenti:

- Avvio del debugger della GPU.

- Controllo dei thread GPU nella finestra thread GPU.

- Uso della finestra **stack in parallelo** per osservare contemporaneamente gli stack di chiamate di più thread GPU.

- Uso della finestra espressione di **controllo in parallelo** per esaminare i valori di una singola espressione in più thread contemporaneamente.

- Contrassegno, blocco, sblocco e raggruppamento di thread GPU.

- Esecuzione di tutti i thread di un riquadro in una posizione specifica nel codice.

## <a name="prerequisites"></a>Prerequisiti

Prima di iniziare questa procedura dettagliata:

- Leggere [ C++ la Panoramica di amp](../../parallel/amp/cpp-amp-overview.md).

- Verificare che i numeri di riga siano visualizzati nell'editor di testo. Per altre informazioni, vedere [Procedura: Visualizza i numeri di riga nell'](/visualstudio/ide/reference/how-to-display-line-numbers-in-the-editor)editor.

- Verificare che sia in esecuzione almeno Windows 8 o Windows Server 2012 per supportare il debug nell'emulatore software. 

[!INCLUDE[note_settings_general](../../mfc/includes/note_settings_general_md.md)]

### <a name="to-create-the-sample-project"></a>Per creare il progetto di esempio

Le istruzioni per la creazione di un progetto variano a seconda della versione di Visual Studio in uso. Verificare che sia selezionata la versione corretta nella parte superiore sinistra della pagina.

::: moniker range="vs-2019"

### <a name="to-create-the-sample-project-in-visual-studio-2019"></a>Per creare il progetto di esempio in Visual Studio 2019

1. Sulla barra dei menu scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Crea nuovo progetto**.

1. Nella parte superiore della finestra di dialogo impostare **Linguaggio** su **C++** , impostare **Piattaforma** su **Windows** e impostare **Tipo di progetto** su **Console**. 

1. Nell'elenco filtrato dei tipi di progetto scegliere **App console** e quindi scegliere **Avanti**. Nella pagina successiva immettere `AMPMapReduce` nella casella **Nome** per specificare un nome per il progetto e specificare facoltativamente il percorso del progetto.

   ![Assegnare un nome al progetto](../../build/media/mathclient-project-name-2019.png "Assegnare un nome al progetto")

1. Scegliere il pulsante **Crea** per creare il progetto client.

::: moniker-end

::: moniker range="<=vs-2017"

### <a name="to-create-the-sample-project-in-visual-studio-2017-or-visual-studio-2015"></a>Per creare il progetto di esempio in Visual Studio 2017 o Visual Studio 2015

1. Avviare Visual Studio.

1. Nella barra dei menu scegliere **File** > **Nuovo** > **Progetto**.

1. In **installato** nel riquadro Modelli scegliere oggetto **visivo C++** .

1. Scegliere **applicazione console Win32**, digitare `AMPMapReduce` nella casella **nome** , quindi scegliere il pulsante **OK** .

1. Fare clic su **Avanti**.

1. Deselezionare la casella di controllo **intestazione precompilata** , quindi scegliere il pulsante **fine** .

1. In **Esplora soluzioni**eliminare *stdafx. h*, *targetver. h*e *stdafx. cpp* dal progetto.

::: moniker-end

Successivo:

8. Aprire AMPMapReduce. cpp e sostituirne il contenuto con il codice seguente.

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

10. In **Esplora soluzioni**aprire il menu di scelta rapida per **AMPMapReduce**, quindi scegliere **proprietà**.

11. Nella finestra di dialogo **pagine delle proprietà** , in **proprietà di configurazione**, scegliere **C/C++**  > intestazioni precompilate.

12. Per la proprietà dell' **intestazione precompilata** , selezionare **non usare le intestazioni precompilate**, quindi scegliere il pulsante **OK** .

13. Nella barra dei menu scegliere **Compila** > **Compila soluzione**.

## <a name="debugging-the-cpu-code"></a>Debug del codice CPU

In questa procedura verrà usato il debugger Windows locale per assicurarsi che il codice CPU in questa applicazione sia corretto. Il segmento del codice CPU in questa applicazione particolarmente interessante è il `for` ciclo `reduction_sum_gpu_kernel` nella funzione. Controlla la riduzione parallela basata sulla struttura ad albero eseguita sulla GPU.

### <a name="to-debug-the-cpu-code"></a>Per eseguire il debug del codice CPU

1. In **Esplora soluzioni**aprire il menu di scelta rapida per **AMPMapReduce**, quindi scegliere **proprietà**.

2. Nella finestra di dialogo **pagine delle proprietà** , in **proprietà di configurazione**, scegliere **debug**. Verificare che sia selezionato **debugger Windows locale** nell'elenco **debugger da avviare** .

3. Tornare all' **editor di codice**.

4. Impostare punti di interruzione nelle righe di codice mostrate nella figura seguente (approssimativamente linee 67 riga 70).

   Punti di ![interruzione CPU] Punti di (../../parallel/amp/media/campcpubreakpoints.png "interruzione CPU") <br/>
   Punti di interruzione CPU

5. Sulla barra dei menu scegliere **Debug** > **Avvia debug**.

6. Nella finestra **variabili locali** osservare il valore di `stride_size` fino a quando non viene raggiunto il punto di interruzione alla riga 70.

7. Sulla barra dei menu scegliere **Debug** > **Termina debug**.

## <a name="debugging-the-gpu-code"></a>Debug del codice GPU

Questa sezione illustra come eseguire il debug del codice GPU, che è il codice contenuto nella `sum_kernel_tiled` funzione. Il codice GPU calcola la somma dei numeri interi per ogni "blocco" in parallelo.

### <a name="to-debug-the-gpu-code"></a>Per eseguire il debug del codice GPU

1. In **Esplora soluzioni**aprire il menu di scelta rapida per **AMPMapReduce**, quindi scegliere **proprietà**.

2. Nella finestra di dialogo **pagine delle proprietà** , in **proprietà di configurazione**, scegliere **debug**.

3. Nell'elenco **Debugger da avviare** selezionare **Debugger Windows locale**.

4. Nell'elenco **tipo di debugger** verificare che sia selezionata l'opzione **automatico** .

    **Auto** è il valore predefinito. Prima di Windows 10, **solo la GPU** è il valore richiesto anziché **auto**.

5. Fare clic sul pulsante **OK** .

6. Impostare un punto di interruzione alla riga 30, come illustrato nella figura seguente.

   Punti di ![interruzione GPU] Punti di (../../parallel/amp/media/campgpubreakpoints.png "interruzione GPU") <br/>
   Punto di interruzione GPU

7. Sulla barra dei menu scegliere **Debug** > **Avvia debug**. I punti di interruzione nel codice della CPU alle righe 67 e 70 non vengono eseguiti durante il debug della GPU, perché tali righe di codice vengono eseguite sulla CPU.

### <a name="to-use-the-gpu-threads-window"></a>Per utilizzare la finestra thread GPU

1. Per aprire la finestra **thread GPU** , sulla barra dei menu scegliere **debug** > **thread GPU** **Windows** > .

   È possibile controllare lo stato dei thread GPU nella finestra **thread GPU** visualizzata.

2. Ancorare la finestra **thread GPU** nella parte inferiore di Visual Studio. Scegliere il pulsante di **opzione Espandi thread** per visualizzare le caselle di testo riquadro e thread. Nella finestra **thread GPU** viene visualizzato il numero totale di thread GPU attivi e bloccati, come illustrato nella figura seguente.

   ![Finestra thread GPU con 4 thread attivi](../../parallel/amp/media/campc.png "Finestra thread GPU con 4 thread attivi") <br/>
   Finestra Thread GPU

   Per questo calcolo sono allocate 313 riquadri. Ogni riquadro contiene 32 thread. Poiché il debug della GPU locale si verifica in un emulatore software, sono disponibili quattro thread GPU attivi. I quattro thread eseguono le istruzioni simultaneamente e quindi si spostano insieme all'istruzione successiva.

   Nella finestra **thread GPU** sono disponibili quattro thread GPU attivi e 28 thread GPU bloccati nell'istruzione [tile_barrier:: wait](reference/tile-barrier-class.md#wait) definita a circa la riga 21 (`t_idx.barrier.wait();`). Tutti i thread GPU 32 appartengono al primo riquadro, `tile[0]`. Una freccia punta alla riga che include il thread corrente. Per passare a un thread diverso, usare uno dei metodi seguenti:

    - Nella riga per il thread a cui passare nella finestra **thread GPU** aprire il menu di scelta rapida e scegliere **passa a thread**. Se la riga rappresenta più di un thread, si passerà al primo thread secondo le coordinate del thread.

    - Immettere i valori del riquadro e del thread del thread nelle caselle di testo corrispondenti, quindi scegliere il pulsante **Cambia thread** .

   Nella finestra **stack di chiamate** viene visualizzato lo stack di chiamate del thread GPU corrente.

### <a name="to-use-the-parallel-stacks-window"></a>Per utilizzare la finestra stack in parallelo

1. Per aprire la **finestra stack in parallelo** , sulla barra dei menu scegliere **debug** > stack in**parallelo**di**Windows** > .

   È possibile utilizzare la finestra **stack in parallelo** per controllare contemporaneamente gli stack frame di più thread GPU.

2. Ancorare la finestra **stack in parallelo** nella parte inferiore di Visual Studio.

3. Assicurarsi che i **thread** siano selezionati nell'angolo superiore sinistro dell'elenco. Nella figura seguente, la finestra **stack in parallelo** Mostra una visualizzazione mirata dello stack di chiamate dei thread GPU che è stato visualizzato nella finestra **thread GPU** .

   ![Finestra stack in parallelo con 4 thread attivi](../../parallel/amp/media/campd.png "Finestra stack in parallelo con 4 thread attivi") <br/>
   Finestra Stack in parallelo

   32 thread passati dall' `_kernel_stub` istruzione lambda `parallel_for_each` nella `sum_kernel_tiled` chiamata di funzione e quindi alla funzione, in cui si verifica la riduzione parallela. 28 i thread 32 hanno progredito nell'istruzione [tile_barrier:: wait](reference/tile-barrier-class.md#wait) e rimangono bloccati alla riga 22, mentre gli altri 4 thread rimangono attivi nella `sum_kernel_tiled` funzione alla riga 30.

   È possibile esaminare le proprietà di un thread GPU disponibili nella finestra **thread GPU** nel DataTip completo della finestra **stack in parallelo** . A tale scopo, posizionare il puntatore del mouse sul stack frame di **sum_kernel_tiled**. La figura seguente mostra DataTip.

   ![DataTip per la finestra stack in parallelo](../../parallel/amp/media/campe.png "DataTip per la finestra stack in parallelo") <br/>
   DataTip thread GPU

   Per ulteriori informazioni sulla finestra **stack in parallelo** , vedere [utilizzo della finestra stack in parallelo](/visualstudio/debugger/using-the-parallel-stacks-window).

### <a name="to-use-the-parallel-watch-window"></a>Per utilizzare la finestra Espressioni di controllo parallela

1. Per aprire la finestra espressione di **controllo in parallelo** , sulla barra dei menu scegliere **debug** > **Windows** > **Parallel Watch** > **Parallel Watch 1**.

   È possibile usare la finestra espressione di **controllo in parallelo** per esaminare i valori di un'espressione tra più thread.

2. Ancorare la finestra espressione di **controllo in parallelo 1** alla parte inferiore di Visual Studio. Sono presenti 32 righe nella tabella della finestra espressione di **controllo in parallelo** . Ogni corrisponde a un thread GPU visualizzato nella finestra thread GPU e nella finestra stack in **parallelo** . A questo punto, è possibile immettere espressioni i cui valori si desidera controllare in tutti i thread GPU 32.

3. Selezionare l'intestazione **Aggiungi** colonna espressione di controllo `localIdx`, immettere, quindi premere il tasto **invio** .

4. Selezionare di nuovo l'intestazione **Aggiungi** colonna espressione di `globalIdx`controllo, digitare, quindi premere il tasto **invio** .

5. Selezionare di nuovo l'intestazione **Aggiungi** colonna espressione di `localA[localIdx[0]]`controllo, digitare, quindi premere il tasto **invio** .

   È possibile ordinare in base a un'espressione specificata selezionando l'intestazione di colonna corrispondente.

   Selezionare l'intestazione di colonna **localA [localIdx [0]]** per ordinare la colonna. Nella figura seguente vengono illustrati i risultati dell'ordinamento in base a **localA [localIdx [0]]** .

   ![Finestra espressioni di controllo parallelo con risultati ordinati](../../parallel/amp/media/campf.png "Finestra espressioni di controllo parallelo con risultati ordinati") <br/>
   Risultati ordinamento

   È possibile esportare il contenuto nella finestra espressione di **controllo in parallelo** in Excel scegliendo il pulsante **Excel** e scegliendo **Apri in Excel**. Se nel computer di sviluppo è installato Excel, viene aperto un foglio di lavoro di Excel che contiene il contenuto.

6. Nell'angolo superiore destro della finestra espressione di controllo in **parallelo** è disponibile un controllo filtro che è possibile usare per filtrare il contenuto usando espressioni booleane. Immettere `localA[localIdx[0]] > 20000` nella casella di testo controllo filtro, quindi premere il tasto **invio** .

   La finestra contiene ora solo i thread in cui `localA[localIdx[0]]` il valore è maggiore di 20000. Il contenuto è ancora ordinato in base `localA[localIdx[0]]` alla colonna, ovvero l'operazione di ordinamento eseguita in precedenza.

## <a name="flagging-gpu-threads"></a>Contrassegno di thread GPU

È possibile contrassegnare specifici thread GPU contrassegnando tali thread nella finestra **thread GPU** , nella finestra espressione di **controllo** in parallelo o in DataTip nella finestra **stack in parallelo** . Se una riga nella finestra thread GPU contiene più di un thread, contrassegnando la riga vengono contrassegnati tutti i thread contenuti nella riga.

### <a name="to-flag-gpu-threads"></a>Per contrassegnare i thread GPU

1. Selezionare l'intestazione di colonna **[thread]** nella finestra espressione di **controllo in parallelo 1** per eseguire l'ordinamento in base all'indice del riquadro e all'indice del thread.

2. Sulla barra dei menu scegliere **debug** > **continua**, in modo che i quattro thread attivi passino alla barriera successiva (definita alla riga 32 di AMPMapReduce. cpp).

3. Scegliere il simbolo del flag sul lato sinistro della riga contenente i quattro thread ora attivi.

   Nella figura seguente vengono mostrati i quattro thread contrassegnati attivi nella finestra **thread GPU** .

   ![Finestra thread GPU con thread contrassegnati](../../parallel/amp/media/campg.png "Finestra thread GPU con thread contrassegnati") <br/>
   Thread attivi nella finestra Thread GPU

   La finestra espressione di **controllo in parallelo** e la DataTip della finestra **stack in parallelo** indicano entrambi i thread contrassegnati.

4. Se si desidera concentrarsi sui quattro thread contrassegnati, è possibile scegliere di visualizzare, nelle finestre **thread GPU**, espressione di **controllo in parallelo**e **stack in parallelo** , solo i thread contrassegnati.

   Scegliere il pulsante **Mostra solo con flag** in qualsiasi finestra o nella barra degli strumenti **posizione di debug** . Nella figura seguente viene illustrato il pulsante **Mostra solo con flag** nella barra degli strumenti **posizione di debug** .

   ![Barra degli strumenti posizione di debug con icona Mostra solo con flag](../../parallel/amp/media/camph.png "Barra degli strumenti posizione di debug con icona Mostra solo con flag") <br/>
   **Mostra pulsante solo con flag**

   Ora le finestre **thread GPU**, espressione di **controllo in parallelo**e stack in **parallelo** visualizzano solo i thread contrassegnati.

## <a name="freezing-and-thawing-gpu-threads"></a>Blocco e sblocco di thread GPU

È possibile bloccare (sospendere) e scongelare (riprendere) i thread GPU dalla finestra **thread GPU** o dalla finestra espressione di **controllo in parallelo** . È possibile bloccare e scongelare i thread della CPU nello stesso modo; per informazioni, vedere [procedura: Utilizzare la finestra](/visualstudio/debugger/how-to-use-the-threads-window)thread.

### <a name="to-freeze-and-thaw-gpu-threads"></a>Per bloccare e sbloccare i thread GPU

1. Scegliere il pulsante **Mostra solo con flag** per visualizzare tutti i thread.

2. Nella barra dei menu scegliere **debug** > **continua**.

3. Aprire il menu di scelta rapida per la riga attiva, quindi scegliere **blocca**.

   La seguente illustrazione della finestra **thread GPU** Mostra che tutti e quattro i thread sono bloccati.

   ![Finestre thread GPU che mostrano thread bloccati](../../parallel/amp/media/campk.png "Finestre thread GPU che mostrano thread bloccati") <br/>
   Thread bloccati nella finestra **thread GPU**

   Analogamente, la finestra espressione di **controllo in parallelo** Mostra che tutti e quattro i thread sono bloccati.

4. Sulla barra dei menu scegliere **debug** > **continua** per consentire ai successivi quattro thread GPU di avanzare oltre la barriera alla riga 22 e raggiungere il punto di interruzione alla riga 30. La finestra **thread GPU** Mostra che i quattro thread precedentemente bloccati rimangono bloccati e nello stato attivo.

5. Sulla barra dei menu scegliere **debug**, **continua**.

6. Dalla finestra **espressioni di controllo in parallelo** , è anche possibile scongelare singoli o più thread GPU.

### <a name="to-group-gpu-threads"></a>Per raggruppare i thread GPU

1. Nel menu di scelta rapida per uno dei thread nella finestra **thread GPU** scegliere **Raggruppa per**, **Indirizzo**.

   I thread nella finestra **thread GPU** sono raggruppati in base all'indirizzo. L'indirizzo corrisponde all'istruzione nel disassembly in cui si trova ogni gruppo di thread. 24 thread sono alla riga 22 in cui viene eseguito il [Metodo tile_barrier:: wait](reference/tile-barrier-class.md#wait) . 12 thread sono in corrispondenza dell'istruzione per la barriera alla riga 32. Quattro di questi thread sono contrassegnati. Otto thread si trovano nel punto di interruzione alla riga 30. Quattro di questi thread sono bloccati. Nella figura seguente sono illustrati i thread raggruppati nella finestra **thread GPU** .

   ![Finestra thread GPU con thread raggruppati per indirizzo](../../parallel/amp/media/campl.png "Finestra thread GPU con thread raggruppati per indirizzo") <br/>
   Thread raggruppati nella finestra **thread GPU**

2. È anche possibile eseguire l'operazione **Group by** aprendo il menu di scelta rapida per la griglia dati della finestra espressione di **controllo in parallelo** , scegliendo **raggruppa**per e quindi scegliendo la voce di menu che corrisponde a come si desidera raggruppare i thread.

## <a name="running-all-threads-to-a-specific-location-in-code"></a>Esecuzione di tutti i thread in una posizione specifica nel codice

Si eseguono tutti i thread di un determinato riquadro alla riga che contiene il cursore usando Esegui il **riquadro corrente fino al cursore**.

### <a name="to-run-all-threads-to-the-location-marked-by-the-cursor"></a>Per eseguire tutti i thread nel percorso contrassegnato dal cursore

1. Scegliere **Sblocca**dal menu di scelta rapida per i thread bloccati.

2. Nell' **editor di codice**posizionare il cursore nella riga 30.

3. Nel menu di scelta rapida per l' **editor di codice**scegliere **Esegui riquadro corrente fino al cursore**.

   I 24 thread precedentemente bloccati alla barriera alla riga 21 sono passati alla riga 32. Questa operazione viene visualizzata nella finestra **thread GPU** .

## <a name="see-also"></a>Vedere anche

[Panoramica di C++ AMP](../../parallel/amp/cpp-amp-overview.md)<br/>
[Debug del codice GPU](/visualstudio/debugger/debugging-gpu-code)<br/>
[Procedura: Usare la finestra Thread GPU](/visualstudio/debugger/how-to-use-the-gpu-threads-window)<br/>
[Procedura: Usare la finestra Espressione di controllo in parallelo](/visualstudio/debugger/how-to-use-the-parallel-watch-window)<br/>
[Analisi del C++ codice amp con il Visualizzatore di concorrenza](https://blogs.msdn.microsoft.com/nativeconcurrency/2012/03/09/analyzing-c-amp-code-with-the-concurrency-visualizer/)
