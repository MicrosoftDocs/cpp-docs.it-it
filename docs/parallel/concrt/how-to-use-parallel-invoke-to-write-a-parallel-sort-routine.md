---
title: "Procedura: Usare parallel_invoke per scrivere una routine di ordinamento in parallelo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "task_handle (classe), esempio"
  - "task_group (classe), esempio"
  - "make_task (funzione), esempio"
  - "structured_task_group (classe), esempio"
  - "miglioramento delle prestazioni in parallelo con gruppi di attività [Runtime di concorrenza]"
ms.assetid: 53979a2a-525d-4437-8952-f1ff85b37673
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 20
---
# Procedura: Usare parallel_invoke per scrivere una routine di ordinamento in parallelo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo documento viene descritto come utilizzare l'algoritmo [parallel\_invoke](../Topic/parallel_invoke%20Function.md) per migliorare le prestazioni dell'algoritmo di ordinamento bitonico.  L'algoritmo di ordinamento bitonico divide in modo ricorsivo la sequenza di input in partizioni ordinate più piccole.  L'algoritmo di ordinamento bitonico può essere eseguito in parallelo poiché ogni operazione della partizione è indipendente da tutte le altre operazioni.  
  
 Sebbene l'ordinamento bitonico sia un esempio di *rete di ordinamento* che ordina tutte le combinazioni di sequenze di input, in questo esempio vengono ordinate le sequenze la cui lunghezza è una potenza di due.  
  
> [!NOTE]
>  Questo esempio utilizza una routine di ordinamento in parallelo a scopo illustrativo.  È inoltre possibile utilizzare gli algoritmi di ordinamento forniti dalla libreria PPL: [concurrency::parallel\_sort](../Topic/parallel_sort%20Function.md), [concurrency::parallel\_buffered\_sort](../Topic/parallel_buffered_sort%20Function.md) e [concurrency::parallel\_radixsort](../Topic/parallel_radixsort%20Function.md).  Per ulteriori informazioni, vedere [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
##  <a name="top"></a> Sezioni  
 In questo documento vengono descritte le attività seguenti:  
  
-   [Esecuzione dell'ordinamento bitonico in serie](#serial)  
  
-   [Utilizzo di parallel\_invoke per eseguire l'ordinamento bitonico in parallelo](#parallel)  
  
##  <a name="serial"></a> Esecuzione dell'ordinamento bitonico in serie  
 Nell'esempio seguente viene illustrata la versione seriale dell'algoritmo di ordinamento bitonico.  La funzione `bitonic_sort` divide la sequenza in due partizioni, ordina tali partizioni in direzioni opposte, quindi unisce i risultati.  Questa funzione chiama se stessa due volte in modo ricorsivo per ordinare ogni partizione.  
  
 [!code-cpp[concrt-parallel-bitonic-sort#1](../../parallel/concrt/codesnippet/CPP/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_1.cpp)]  
  
 \[[Top](#top)\]  
  
##  <a name="parallel"></a> Utilizzo di parallel\_invoke per eseguire l'ordinamento bitonico in parallelo  
 In questa sezione viene descritto come utilizzare l'algoritmo `parallel_invoke` per eseguire l'algoritmo di ordinamento bitonico in parallelo.  
  
### Procedure  
  
##### Per eseguire l'algoritmo di ordinamento bitonico in parallelo  
  
1.  Aggiungere una direttiva `#include` per file di intestazione ppl.h.  
  
     [!code-cpp[concrt-parallel-bitonic-sort#10](../../parallel/concrt/codesnippet/CPP/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_2.cpp)]  
  
2.  Aggiungere una direttiva `using` per lo spazio dei nomi `concurrency`.  
  
     [!code-cpp[concrt-parallel-bitonic-sort#11](../../parallel/concrt/codesnippet/CPP/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_3.cpp)]  
  
3.  Creare una nuova funzione, denominata `parallel_bitonic_mege`, che utilizza l'algoritmo `parallel_invoke` per unire le sequenze in parallelo se esiste una quantità di lavoro sufficiente da eseguire.  In caso contrario, chiamare `bitonic_merge` per unire le sequenze in serie.  
  
     [!code-cpp[concrt-parallel-bitonic-sort#2](../../parallel/concrt/codesnippet/CPP/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_4.cpp)]  
  
4.  Eseguire un processo analogo a quello riportato nel passaggio precedente, ma per la funzione `bitonic_sort`.  
  
     [!code-cpp[concrt-parallel-bitonic-sort#3](../../parallel/concrt/codesnippet/CPP/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_5.cpp)]  
  
5.  Creare una versione di overload della funzione `parallel_bitonic_sort` che ordina la matrice in ordine crescente.  
  
     [!code-cpp[concrt-parallel-bitonic-sort#4](../../parallel/concrt/codesnippet/CPP/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_6.cpp)]  
  
 L'algoritmo `parallel_invoke` riduce il sovraccarico eseguendo l'ultima di una serie di attività nel contesto di chiamata.  Nella funzione `parallel_bitonic_sort`, ad esempio, la prima attività viene eseguita in un contesto separato, mentre la seconda nel contesto di chiamata.  
  
 [!code-cpp[concrt-parallel-bitonic-sort#5](../../parallel/concrt/codesnippet/CPP/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_7.cpp)]  
  
 Nell'esempio completo seguente viene eseguita sia la versione seriale che quella parallela dell'algoritmo di ordinamento bitonico.  L'esempio inoltre visualizza nella console il tempo necessario per eseguire ciascun calcolo.  
  
 [!code-cpp[concrt-parallel-bitonic-sort#8](../../parallel/concrt/codesnippet/CPP/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_8.cpp)]  
  
 L'output di esempio seguente è relativo a un computer con quattro processori.  
  
  **serial time: 4353**  
**parallel time: 1248** \[[Top](#top)\]  
  
## Compilazione del codice  
 Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio o incollarlo in un file denominato `parallel-bitonic-sort.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc parallel\-bitonic\-sort.cpp**  
  
## Programmazione robusta  
 In questo esempio viene utilizzato l'algoritmo `parallel_invoke` anziché la classe [concurrency::task\_group](../Topic/task_group%20Class.md) affinché la durata di ogni gruppo di attività non venga estesa oltre una funzione.  È consigliabile utilizzare `parallel_invoke` quando è possibile poiché ha meno sovraccarico di esecuzione degli oggetti `task group` e consente pertanto di scrivere un codice dalle prestazioni migliori.  
  
 Le prestazioni delle versioni parallele di alcuni algoritmi sono migliori solo in presenza di un discreto numero di operazioni da eseguire.  La funzione `parallel_bitonic_merge`, ad esempio, chiama la versione seriale, `bitonic_merge`, se nella sequenza sono presenti meno di 500 elementi.  È inoltre possibile pianificare la strategia di ordinamento globale in base alla quantità di lavoro.  Ad esempio, potrebbe essere più efficiente utilizzare la versione seriale dell'algoritmo QuickSort se la matrice contiene un massimo di 500 elementi, come illustrato nell'esempio seguente:  
  
 [!code-cpp[concrt-parallel-bitonic-sort#9](../../parallel/concrt/codesnippet/CPP/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_9.cpp)]  
  
 Come per qualsiasi algoritmo parallelo, è consigliabile profilare e ottimizzare il codice in base alle proprie esigenze.  
  
## Vedere anche  
 [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)   
 [Funzione parallel\_invoke](../Topic/parallel_invoke%20Function.md)