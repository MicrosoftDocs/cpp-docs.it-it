---
title: 'Procedura: Usare parallel_invoke per scrivere una routine di ordinamento in parallelo'
ms.date: 11/04/2016
helpviewer_keywords:
- task_handle class, example
- task_group class, example
- make_task function, example
- structured_task_group class, example
- improving parallel performance with task groups [Concurrency Runtime]
ms.assetid: 53979a2a-525d-4437-8952-f1ff85b37673
ms.openlocfilehash: e72d99cb1b9168e3de1e109d93c163e21cb7fad7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50440157"
---
# <a name="how-to-use-parallelinvoke-to-write-a-parallel-sort-routine"></a>Procedura: Usare parallel_invoke per scrivere una routine di ordinamento in parallelo

Questo documento descrive come usare il [parallel_invoke](../../parallel/concrt/parallel-algorithms.md#parallel_invoke) algoritmo per migliorare le prestazioni dell'algoritmo di ordinamento bitonico. L'in modo ricorsivo algoritmo di ordinamento bitonico divide la sequenza di input in partizioni ordinate più piccole. L'algoritmo di ordinamento bitonico eseguibili in parallelo poiché ogni operazione della partizione è indipendente da tutte le altre operazioni.

Anche se l'ordinamento bitonico è riportato un esempio di un *ordinamento rete* che ordina tutte le combinazioni di sequenze di input, in questo esempio vengono ordinate cui lunghezza è una potenza di due sequenze.

> [!NOTE]
>  In questo esempio viene utilizzata, a scopo illustrativo, una routine di ordinamento in parallelo. È inoltre possibile utilizzare algoritmi di ordinamento predefiniti che fornisce la libreria PPL: [Concurrency:: parallel_sort](reference/concurrency-namespace-functions.md#parallel_sort), [Concurrency:: parallel_buffered_sort](reference/concurrency-namespace-functions.md#parallel_buffered_sort), e [concurrency::parallel_ radixsort](reference/concurrency-namespace-functions.md#parallel_radixsort). Per altre informazioni, vedere [gli algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

##  <a name="top"></a> Sezioni

Questo documento descrive le attività seguenti:

- [Esecuzione dell'ordinamento bitonico in modo seriale](#serial)

- [Utilizzare parallel_invoke per eseguire l'ordinamento bitonico in parallelo](#parallel)

##  <a name="serial"></a> Esecuzione dell'ordinamento bitonico in modo seriale

Nell'esempio seguente mostra la versione seriale dell'algoritmo di ordinamento bitonico. Il `bitonic_sort` funzione divide la sequenza in due partizioni, Ordina queste partizioni in direzioni opposte e quindi unisce i risultati. Questa funzione chiama se stessa in modo ricorsivo due volte per ordinare ogni partizione.

[!code-cpp[concrt-parallel-bitonic-sort#1](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_1.cpp)]

[[Torna all'inizio](#top)]

##  <a name="parallel"></a> Utilizzare parallel_invoke per eseguire l'ordinamento bitonico in parallelo

In questa sezione viene descritto come utilizzare il `parallel_invoke` algoritmo per eseguire l'algoritmo di ordinamento bitonico in parallelo.

### <a name="procedures"></a>Procedure

##### <a name="to-perform-the-bitonic-sort-algorithm-in-parallel"></a>Per eseguire l'algoritmo di ordinamento bitonico in parallelo

1. Aggiungere un `#include` direttiva per il PPL di file di intestazione.

[!code-cpp[concrt-parallel-bitonic-sort#10](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_2.cpp)]

1. Aggiungere un `using` direttiva per il `concurrency` dello spazio dei nomi.

[!code-cpp[concrt-parallel-bitonic-sort#11](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_3.cpp)]

1. Creare una nuova funzione, denominata `parallel_bitonic_mege`, che usa il `parallel_invoke` algoritmo per unire le sequenze in parallelo se è presente una quantità sufficiente di operazioni da eseguire. In caso contrario, chiamare `bitonic_merge` per unire le sequenze in modo seriale.

[!code-cpp[concrt-parallel-bitonic-sort#2](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_4.cpp)]

1. Eseguire un processo simile a quello nel passaggio precedente, ma per il `bitonic_sort` (funzione).

[!code-cpp[concrt-parallel-bitonic-sort#3](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_5.cpp)]

1. Creare una versione di overload di `parallel_bitonic_sort` funzione che consente di ordinare la matrice in ordine crescente.

[!code-cpp[concrt-parallel-bitonic-sort#4](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_6.cpp)]

Il `parallel_invoke` algoritmo riduce il sovraccarico eseguendo l'ultima delle serie di attività nel contesto del chiama. Ad esempio, nel `parallel_bitonic_sort` funzione, la prima attività viene eseguita in un contesto separato e la seconda attività viene eseguita nel contesto del chiama.

[!code-cpp[concrt-parallel-bitonic-sort#5](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_7.cpp)]

L'esempio completo seguente esegue sia il numero di serie e le versioni parallele dell'algoritmo di ordinamento bitonico. Nell'esempio viene inoltre stampato nella console l'ora in cui è necessaria per eseguire ogni calcolo.

[!code-cpp[concrt-parallel-bitonic-sort#8](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_8.cpp)]

L'output di esempio seguente è relativo a un computer con quattro processori.

```Output
serial time: 4353
parallel time: 1248
```

[[Torna all'inizio](#top)]

## <a name="compiling-the-code"></a>Compilazione del codice

Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-bitonic-sort.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc parallelo-bitonico-Sort. cpp**

## <a name="robust-programming"></a>Programmazione efficiente

Questo esempio Usa la `parallel_invoke` algoritmo anziché il [Concurrency:: task_group](reference/task-group-class.md) classe perché la durata di ogni gruppo di attività non si estende oltre una funzione. È consigliabile usare `parallel_invoke` quando è possibile perché contiene meno overhead di esecuzione `task group` oggetti e pertanto consente di scrivere codice dalle prestazioni migliori.

Le versioni parallele di alcuni algoritmi offrono prestazioni migliori solo quando è sufficiente operazioni da eseguire. Ad esempio, il `parallel_bitonic_merge` funzione viene chiamata la versione seriale, `bitonic_merge`, se sono presenti un massimo di 500 elementi nella sequenza. È anche possibile pianificare la strategia di ordinamento complessiva in base alla quantità di lavoro. Ad esempio, potrebbe essere più efficiente di utilizzare la versione seriale dell'algoritmo di ordinamento rapido se la matrice contiene meno di 500 articoli, come illustrato nell'esempio seguente:

[!code-cpp[concrt-parallel-bitonic-sort#9](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_9.cpp)]

Come con qualsiasi algoritmo parallelo, è consigliabile profilare e ottimizzare il codice come appropriato.

## <a name="see-also"></a>Vedere anche

[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[parallel_invoke (funzione)](reference/concurrency-namespace-functions.md#parallel_invoke)

