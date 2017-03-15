---
title: "PPL (Parallel Patterns Library) | Microsoft Docs"
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
  - "PPL (Parallel Patterns Library)"
ms.assetid: 40fd86b2-69fa-45e5-93d8-98a75636c242
caps.latest.revision: 27
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 27
---
# PPL (Parallel Patterns Library)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La libreria PPL (Parallel Patterns Library) fornisce un modello di programmazione imperativa in grado di offrire scalabilità e semplicità per lo sviluppo di applicazioni simultanee. La libreria PPL si basa sulla pianificazione e sui componenti di gestione delle risorse del runtime di concorrenza. Innalza il livello di astrazione tra il codice dell'applicazione e il meccanismo di threading sottostante fornendo algoritmi generici indipendenti dai tipi e contenitori che agiscono sui dati in parallelo. La libreria PPL consente inoltre di sviluppare applicazioni adeguate fornendo alternative allo stato condiviso.  
  
 La libreria PPL offre le funzionalità seguenti:  
  
- *Parallelismo fra attività*: un meccanismo che funziona su ThreadPool Windows per eseguire diversi elementi di lavoro (attività) in parallelo  
  
- *Gli algoritmi paralleli*: algoritmi generici che funziona su Runtime di concorrenza per agire sulle raccolte di dati in parallelo  
  
- *Contenitori e oggetti paralleli*: tipi di contenitore generici che consentono l'accesso simultaneo sicuro ai relativi elementi  
  
## <a name="example"></a>Esempio  
 La libreria PPL fornisce un modello di programmazione simile alla libreria STL (Standard Template Library). L'esempio seguente illustra molte funzionalità della libreria PPL. Vengono calcolati diversi numeri di Fibonacci in serie e in parallelo. Entrambi i calcoli agiscono su un [std:: Array](../../standard-library/array-class-stl.md) oggetto. L'esempio inoltre visualizza nella console il tempo necessario per eseguire entrambi i calcoli.  
  
 La versione seriale Usa STL [std:: for_each](../Topic/for_each.md) algoritmo per attraversare la matrice e archivia i risultati in un [std:: Vector](vector%20Class.md) oggetto. La versione parallela esegue la stessa attività, ma utilizza la libreria PPL [Concurrency:: parallel_for_each](../Topic/parallel_for_each%20Function.md) algoritmo e archivia i risultati in un [concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) oggetto. La classe `concurrent_vector` consente a ogni iterazione del ciclo di aggiungere contemporaneamente gli elementi senza la necessità di sincronizzare l'accesso in scrittura al contenitore.  
  
 Poiché `parallel_for_each` agisce contemporaneamente, la versione parallela di questo esempio deve ordinare l'oggetto `concurrent_vector` per produrre gli stessi risultati della versione seriale.  
  
 Si noti che nell'esempio viene usato un metodo naïve per calcolare i numeri di Fibonacci; tuttavia, questo metodo illustra come il runtime di concorrenza possa migliorare le prestazioni di calcoli lunghi.  
  
 [!code-cpp[concrt-parallel-fibonacci#1](../../parallel/concrt/codesnippet/CPP/parallel-patterns-library-ppl_1.cpp)]  
  
 L'output di esempio seguente è relativo a un computer con quattro processori.  
  
```Output  
serial time: 9250 ms  
parallel time: 5726 ms  
 
fib(24): 46368  
fib(26): 121393  
fib(41): 165580141  
fib(42): 267914296  
```  
  
 Ogni iterazione del ciclo richiede una quantità di tempo diversa per il completamento. Le prestazioni di `parallel_for_each` dipendono dall'operazione che richiede più tempo. Pertanto, non c'era da aspettarsi un miglioramento lineare delle prestazioni tra la versione seriale e quella parallela di questo esempio.  
  
## <a name="related-topics"></a>Argomenti correlati  
  
|Titolo|Descrizione|  
|-----------|-----------------|  
|[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)|Descrive il ruolo delle attività e dei gruppi di attività nella libreria PPL.|  
|[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)|Descrive come usare gli algoritmi paralleli come `parallel_for` e `parallel_for_each`.|  
|[Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)|Descrive i vari contenitori e oggetti paralleli forniti dalla libreria PPL.|  
|[Annullamento](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md#cancellation_in_the_ppl)|Illustra come annullare il lavoro eseguito da un algoritmo parallelo.|  
|[Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)|Descrive il runtime di concorrenza che semplifica la programmazione parallela e contiene i collegamenti ad argomenti correlati.|

