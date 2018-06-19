---
title: 'Procedura: usare parallel_invoke per scrivere una Routine di ordinamento parallelo | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- task_handle class, example
- task_group class, example
- make_task function, example
- structured_task_group class, example
- improving parallel performance with task groups [Concurrency Runtime]
ms.assetid: 53979a2a-525d-4437-8952-f1ff85b37673
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 53b9699c7ee5d2bd4775f2d6b97dc4d1c5155ce0
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33689168"
---
# <a name="how-to-use-parallelinvoke-to-write-a-parallel-sort-routine"></a>Procedura: Usare parallel_invoke per scrivere una routine di ordinamento in parallelo
Questo documento viene descritto come utilizzare il [parallel_invoke](../../parallel/concrt/parallel-algorithms.md#parallel_invoke) algoritmo per migliorare le prestazioni dell'algoritmo di ordinamento bitonico. L'in modo ricorsivo algoritmo di ordinamento bitonico divide la sequenza di input in partizioni ordinate più piccole. Algoritmo di ordinamento bitonico è possibile eseguire in parallelo poiché ogni operazione della partizione è indipendente da tutte le altre operazioni.  
  
 Anche se l'ordinamento bitonico è riportato un esempio di un *ordinamento rete* che ordina tutte le combinazioni di sequenze di input, in questo esempio consente di ordinare le sequenze la cui lunghezza è una potenza di due.  
  
> [!NOTE]
>  In questo esempio viene utilizzata, a scopo illustrativo, una routine di ordinamento in parallelo. È inoltre possibile utilizzare gli algoritmi di ordinamento predefiniti forniti dalla libreria PPL: [Concurrency:: parallel_sort](reference/concurrency-namespace-functions.md#parallel_sort), [Concurrency:: parallel_buffered_sort](reference/concurrency-namespace-functions.md#parallel_buffered_sort), e [concurrency::parallel_ radixsort](reference/concurrency-namespace-functions.md#parallel_radixsort). Per ulteriori informazioni, vedere [gli algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
##  <a name="top"></a> Sezioni  
 Questo documento descrive le attività seguenti:  
  
- [L'esecuzione di ordinamento bitonico in serie](#serial)  
  
- [Utilizzare parallel_invoke per eseguire l'ordinamento bitonico in parallelo](#parallel)  
  
##  <a name="serial"></a> L'esecuzione di ordinamento bitonico in serie  
 L'esempio seguente mostra la versione seriale dell'algoritmo di ordinamento bitonico. Il `bitonic_sort` funzione divide la sequenza in due partizioni, ordina tali partizioni in direzioni opposte e quindi unisce i risultati. Questa funzione chiama se stessa in modo ricorsivo due volte per ordinare ogni partizione.  
  
 [!code-cpp[concrt-parallel-bitonic-sort#1](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_1.cpp)]  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="parallel"></a> Utilizzare parallel_invoke per eseguire l'ordinamento bitonico in parallelo  
 In questa sezione viene descritto come utilizzare il `parallel_invoke` algoritmo per eseguire l'algoritmo di ordinamento bitonico in parallelo.  
  
### <a name="procedures"></a>Procedure  
  
##### <a name="to-perform-the-bitonic-sort-algorithm-in-parallel"></a>Per eseguire l'algoritmo di ordinamento bitonico in parallelo  
  
1.  Aggiungere un `#include` direttiva per il PPL di file di intestazione.  
  
 [!code-cpp[concrt-parallel-bitonic-sort#10](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_2.cpp)]  
  
2.  Aggiungere un `using` direttiva per il `concurrency` dello spazio dei nomi.  
  
 [!code-cpp[concrt-parallel-bitonic-sort#11](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_3.cpp)]  
  
3.  Creare una funzione nuova, denominata `parallel_bitonic_mege`, che utilizza il `parallel_invoke` algoritmo per unire le sequenze in parallelo se è presente una quantità sufficiente di operazioni da eseguire. In caso contrario, chiamare `bitonic_merge` per unire le sequenze in modo seriale.  
  
 [!code-cpp[concrt-parallel-bitonic-sort#2](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_4.cpp)]  
  
4.  Eseguire un processo simile a quello nel passaggio precedente, ma per il `bitonic_sort` (funzione).  
  
 [!code-cpp[concrt-parallel-bitonic-sort#3](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_5.cpp)]  
  
5.  Creare una versione di overload di `parallel_bitonic_sort` funzione che consente di ordinare la matrice in ordine crescente.  
  
 [!code-cpp[concrt-parallel-bitonic-sort#4](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_6.cpp)]  
  
 Il `parallel_invoke` algoritmo riduce il sovraccarico eseguendo l'ultima delle serie di attività nel contesto di chiamata. Ad esempio, nel `parallel_bitonic_sort` funzione, la prima attività viene eseguito in un contesto separato, mentre la seconda attività nel contesto di chiamata.  
  
 [!code-cpp[concrt-parallel-bitonic-sort#5](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_7.cpp)]  
  
 L'esempio completo seguente esegue sia il numero di serie e le versioni parallele dell'algoritmo di ordinamento bitonico. L'esempio inoltre visualizza nella console il tempo necessario per eseguire ogni calcolo.  
  
 [!code-cpp[concrt-parallel-bitonic-sort#8](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_8.cpp)]  
  
 L'output di esempio seguente è relativo a un computer con quattro processori.  
  
```Output  
serial time: 4353  
parallel time: 1248  
```  
  
 [[Torna all'inizio](#top)]  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-bitonic-sort.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc parallelo-bitonico-Sort. cpp**  
  
## <a name="robust-programming"></a>Programmazione efficiente  
 Questo esempio viene utilizzato il `parallel_invoke` algoritmo anziché il [Concurrency:: task_group](reference/task-group-class.md) classe affinché la durata di ogni gruppo di attività non venga estesa oltre una funzione. È consigliabile utilizzare `parallel_invoke` quando è possibile perché contiene meno il sovraccarico di esecuzione `task group` oggetti e pertanto consente di scrivere codice dalle prestazioni migliori.  
  
 Le versioni di alcuni algoritmi parallele offrono prestazioni migliori solo quando è sufficiente operazioni da eseguire. Ad esempio, il `parallel_bitonic_merge` funzione chiama la versione seriale, `bitonic_merge`, se sono presenti elementi o inferiore a 500 nella sequenza. È anche possibile pianificare la strategia complessiva di ordinamento in base alla quantità di lavoro. Ad esempio, potrebbe essere più efficiente di utilizzare la versione seriale dell'algoritmo di ordinamento rapido se la matrice contiene meno di 500 articoli, come illustrato nell'esempio seguente:  
  
 [!code-cpp[concrt-parallel-bitonic-sort#9](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_9.cpp)]  
  
 Come con qualsiasi algoritmo parallelo, è consigliabile profilare e ottimizzare il codice come appropriato.  
  
## <a name="see-also"></a>Vedere anche  
 [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)   
 [Funzione parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke)

