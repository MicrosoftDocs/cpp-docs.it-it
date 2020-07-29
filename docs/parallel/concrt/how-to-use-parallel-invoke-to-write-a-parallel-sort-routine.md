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
ms.openlocfilehash: 9d84cdbecb7cc6d39cb30077780c558db85888c0
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87222719"
---
# <a name="how-to-use-parallel_invoke-to-write-a-parallel-sort-routine"></a>Procedura: Usare parallel_invoke per scrivere una routine di ordinamento in parallelo

In questo documento viene descritto come utilizzare l'algoritmo [parallel_invoke](../../parallel/concrt/parallel-algorithms.md#parallel_invoke) per migliorare le prestazioni dell'algoritmo di ordinamento bitonico. L'algoritmo di ordinamento bitonico divide in modo ricorsivo la sequenza di input in partizioni ordinate più piccole. L'algoritmo di ordinamento bitonico può essere eseguito in parallelo perché ogni operazione di partizione è indipendente da tutte le altre operazioni.

Sebbene l'ordinamento bitonic sia un esempio di una *rete di ordinamento* che ordina tutte le combinazioni di sequenze di input, in questo esempio vengono ordinate le sequenze le cui lunghezze sono una potenza di due.

> [!NOTE]
> In questo esempio viene utilizzata, a scopo illustrativo, una routine di ordinamento in parallelo. È inoltre possibile utilizzare gli algoritmi di ordinamento predefiniti che la libreria PPL fornisce: [concorrenza::p arallel_sort](reference/concurrency-namespace-functions.md#parallel_sort), [concorrenza::p arallel_buffered_sort](reference/concurrency-namespace-functions.md#parallel_buffered_sort)e [concorrenza::p arallel_radixsort](reference/concurrency-namespace-functions.md#parallel_radixsort). Per ulteriori informazioni, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

## <a name="sections"></a><a name="top"></a>Sezioni

In questo documento vengono descritte le attività seguenti:

- [Esecuzione seriale di un ordinamento bitonic](#serial)

- [Uso di parallel_invoke per eseguire l'ordinamento bitonic in parallelo](#parallel)

## <a name="performing-bitonic-sort-serially"></a><a name="serial"></a>Esecuzione seriale di un ordinamento bitonic

Nell'esempio seguente viene illustrata la versione seriale dell'algoritmo di ordinamento bitonico. La `bitonic_sort` funzione divide la sequenza in due partizioni, Ordina le partizioni in direzioni opposte, quindi unisce i risultati. Questa funzione chiama se stessa due volte in modo ricorsivo per ordinare ogni partizione.

[!code-cpp[concrt-parallel-bitonic-sort#1](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_1.cpp)]

[All'[inizio](#top)]

## <a name="using-parallel_invoke-to-perform-bitonic-sort-in-parallel"></a><a name="parallel"></a>Uso di parallel_invoke per eseguire l'ordinamento bitonic in parallelo

In questa sezione viene descritto come utilizzare l' `parallel_invoke` algoritmo per eseguire l'algoritmo di ordinamento bitonico in parallelo.

### <a name="to-perform-the-bitonic-sort-algorithm-in-parallel"></a>Per eseguire l'algoritmo di ordinamento bitonico in parallelo

1. Aggiungere una `#include` direttiva per il file di intestazione ppl. h.

[!code-cpp[concrt-parallel-bitonic-sort#10](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_2.cpp)]

1. Aggiungere una **`using`** direttiva per lo `concurrency` spazio dei nomi.

[!code-cpp[concrt-parallel-bitonic-sort#11](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_3.cpp)]

1. Creare una nuova funzione, denominata `parallel_bitonic_mege` , che usa l' `parallel_invoke` algoritmo per unire le sequenze in parallelo se è presente una quantità di lavoro sufficiente. In caso contrario, chiamare `bitonic_merge` per unire le sequenze in modo seriale.

[!code-cpp[concrt-parallel-bitonic-sort#2](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_4.cpp)]

1. Eseguire un processo simile a quello del passaggio precedente, ma per la `bitonic_sort` funzione.

[!code-cpp[concrt-parallel-bitonic-sort#3](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_5.cpp)]

1. Creare una versione di overload della `parallel_bitonic_sort` funzione che ordina la matrice in ordine crescente.

[!code-cpp[concrt-parallel-bitonic-sort#4](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_6.cpp)]

L' `parallel_invoke` algoritmo riduce l'overhead eseguendo l'ultima serie di attività nel contesto chiamante. Nella funzione, ad esempio, `parallel_bitonic_sort` la prima attività viene eseguita in un contesto separato e la seconda attività viene eseguita nel contesto chiamante.

[!code-cpp[concrt-parallel-bitonic-sort#5](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_7.cpp)]

Nell'esempio completo seguente vengono eseguite sia la versione seriale che quella parallela dell'algoritmo di ordinamento bitonico. Nell'esempio viene inoltre stampato nella console il tempo necessario per l'esecuzione di ogni calcolo.

[!code-cpp[concrt-parallel-bitonic-sort#8](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_8.cpp)]

L'output di esempio seguente è relativo a un computer con quattro processori.

```Output
serial time: 4353
parallel time: 1248
```

[All'[inizio](#top)]

### <a name="compiling-the-code"></a>Compilazione del codice

Per compilare il codice, copiarlo e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `parallel-bitonic-sort.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **cl.exe/EHsc bitonic. cpp**

## <a name="robust-programming"></a>Programmazione efficiente

Questo esempio usa l' `parallel_invoke` algoritmo invece della classe [Concurrency:: task_group](reference/task-group-class.md) perché la durata di ogni gruppo di attività non si estende oltre una funzione. Si consiglia di utilizzare `parallel_invoke` quando è possibile, perché il sovraccarico di esecuzione è inferiore a quello `task group` degli oggetti e pertanto è possibile scrivere codice con prestazioni migliori.

Le versioni parallele di alcuni algoritmi sono migliori solo quando è necessario eseguire operazioni sufficienti. Ad esempio, la `parallel_bitonic_merge` funzione chiama la versione seriale, `bitonic_merge` , se la sequenza contiene 500 o meno elementi. È anche possibile pianificare la strategia di ordinamento globale in base alla quantità di lavoro. Ad esempio, potrebbe essere più efficiente usare la versione seriale dell'algoritmo di ordinamento rapido se la matrice contiene meno di 500 elementi, come illustrato nell'esempio seguente:

[!code-cpp[concrt-parallel-bitonic-sort#9](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_9.cpp)]

Come per qualsiasi algoritmo parallelo, è consigliabile profilare e ottimizzare il codice nel modo appropriato.

## <a name="see-also"></a>Vedere anche

[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[Funzione parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke)
