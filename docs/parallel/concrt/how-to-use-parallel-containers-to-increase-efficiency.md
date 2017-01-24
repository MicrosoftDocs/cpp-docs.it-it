---
title: "Procedura: Usare i contenitori paralleli per aumentare l&#39;efficienza | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "miglioramento dell'efficienza con contenitori paralleli [Runtime di concorrenza]"
  - "concurrent_queue (classe), esempios"
  - "concurrent_vector (classe), esempios"
ms.assetid: bd00046d-e9b6-4ae1-b661-3995f671b867
caps.latest.revision: 13
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: Usare i contenitori paralleli per aumentare l&#39;efficienza
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come utilizzare i contenitori paralleli per archiviare e accedere ai dati in parallelo in modo efficiente.  
  
 Nel codice di esempio viene calcolato il set di numeri primi e di Carmichael in parallelo.  Per ogni numero di Carmichael vengono quindi calcolati i fattori primi di tale numero.  
  
## Esempio  
 Nell'esempio seguente viene illustrata la funzione `is_prime` che determina se il valore di input è un numero primo e la funzione `is_carmichael` che determina se il valore di input è un numero di Carmichael.  
  
 [!code-cpp[concrt-carmichael-primes#1](../../parallel/concrt/codesnippet/CPP/how-to-use-parallel-containers-to-increase-efficiency_1.cpp)]  
  
## Esempio  
 Nell'esempio seguente vengono utilizzate le funzioni `is_prime` e `is_carmichael` per calcolare i set di numeri primi e di Carmichael.  Nell'esempio vengono utilizzati gli algoritmi [concurrency::parallel\_invoke](../Topic/parallel_invoke%20Function.md) e [concurrency::parallel\_for](../Topic/parallel_for%20Function.md) per calcolare ogni set in parallelo.  Per ulteriori informazioni sugli algoritmi paralleli, vedere [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
 In questo esempio viene utilizzato un oggetto [concurrency::concurrent\_queue](../../parallel/concrt/reference/concurrent-queue-class.md) per contenere il set di numeri di Carmichael poiché tale oggetto verrà utilizzato come coda di lavoro.  Viene utilizzato un oggetto [concurrency::concurrent\_vector](../../parallel/concrt/reference/concurrent-vector-class.md) per contenere il set di numeri primi poiché sarà necessario scorrere questo set per trovare i fattori primi.  
  
 [!code-cpp[concrt-carmichael-primes#2](../../parallel/concrt/codesnippet/CPP/how-to-use-parallel-containers-to-increase-efficiency_2.cpp)]  
  
## Esempio  
 Nell'esempio seguente viene illustrata la funzione `prime_factors_of` che utilizza la divisione semplice \(trial division\) per trovare tutti i fattori primi del valore specificato.  
  
 Questa funzione utilizza l'algoritmo [concurrency::parallel\_for\_each](../Topic/parallel_for_each%20Function.md) per scorrere la raccolta di numeri primi.  L'oggetto `concurrent_vector` consente al ciclo parallelo di aggiungere contemporaneamente i fattori primi al risultato.  
  
 [!code-cpp[concrt-carmichael-primes#3](../../parallel/concrt/codesnippet/CPP/how-to-use-parallel-containers-to-increase-efficiency_3.cpp)]  
  
## Esempio  
 In questo esempio viene elaborato ogni elemento nella coda dei numeri di Carmichael chiamando la funzione `prime_factors_of` per calcolarne i relativi fattori primi.  Viene utilizzato un gruppo di attività per eseguire questo lavoro in parallelo.  Per ulteriori informazioni sui gruppi di attività, vedere [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md).  
  
 In questo esempio vengono stampati i fattori primi per ogni numero di Carmichael se tale numero dispone di più di quattro fattori primi.  
  
 [!code-cpp[concrt-carmichael-primes#4](../../parallel/concrt/codesnippet/CPP/how-to-use-parallel-containers-to-increase-efficiency_4.cpp)]  
  
## Esempio  
 Nel codice seguente viene illustrato l'esempio completo che utilizza i contenitori paralleli per calcolare i fattori primi dei numeri di Carmichael.  
  
 [!code-cpp[concrt-carmichael-primes#5](../../parallel/concrt/codesnippet/CPP/how-to-use-parallel-containers-to-increase-efficiency_5.cpp)]  
  
 Questo esempio produce l'output seguente:  
  
  **Prime factors of 9890881 are: 7 11 13 41 241.**  
**Prime factors of 825265 are: 5 7 17 19 73.**  
**Prime factors of 1050985 are: 5 13 19 23 37.**   
## Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio o incollarlo in un file denominato `carmichael-primes.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc carmichael\-primes.cpp**  
  
## Vedere anche  
 [Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)   
 [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)   
 [Classe concurrent\_vector](../../parallel/concrt/reference/concurrent-vector-class.md)   
 [Classe concurrent\_queue](../../parallel/concrt/reference/concurrent-queue-class.md)   
 [Funzione parallel\_invoke](../Topic/parallel_invoke%20Function.md)   
 [Funzione parallel\_for](../Topic/parallel_for%20Function.md)   
 [Classe task\_group](../Topic/task_group%20Class.md)