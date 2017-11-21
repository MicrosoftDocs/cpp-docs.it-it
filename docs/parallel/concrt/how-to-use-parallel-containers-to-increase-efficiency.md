---
title: 'Procedura: usare i contenitori paralleli per aumentare l''efficienza | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- increasing efficiency with parallel containers [Concurrency Runtime]
- concurrent_queue class, examples
- concurrent_vector class, examples
ms.assetid: bd00046d-e9b6-4ae1-b661-3995f671b867
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: c6fd904db5d01bf1464da522d7209f8d15502556
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="how-to-use-parallel-containers-to-increase-efficiency"></a>Procedura: Usare i contenitori paralleli per aumentare l'efficienza
In questo argomento viene illustrato come utilizzare i contenitori paralleli per archiviare in modo efficiente e accedere ai dati in parallelo.  
  
 Nell'esempio di codice calcola il set di numeri primi e Carmichael in parallelo. Quindi, per ogni numero Carmichael, il codice calcola i fattori principali di tale numero.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente il `is_prime` funzione, che determina se un valore di input è un numero primo, e `is_carmichael` funzione, che determina se il valore di input è un numero di Carmichael.  
  
 [!code-cpp[concrt-carmichael-primes#1](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-containers-to-increase-efficiency_1.cpp)]  
  
## <a name="example"></a>Esempio  
 L'esempio seguente usa il `is_prime` e `is_carmichael` funzioni per calcolare i set di numeri primi e i numeri di Carmichael. Nell'esempio viene utilizzato il [Concurrency:: parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) e [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algoritmi per calcolare ogni set in parallelo. Per ulteriori informazioni sugli algoritmi paralleli, vedere [gli algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
 Questo esempio viene utilizzato un [Concurrency:: concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md) oggetto per contenere il set di Carmichael numeri perché tale oggetto verrà utilizzato come una coda di lavoro. Usa un [Concurrency:: concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) oggetto per contenere il set di numeri primi, poiché sarà necessario scorrere questa impostazione per individuare i fattori primi.  
  
 [!code-cpp[concrt-carmichael-primes#2](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-containers-to-increase-efficiency_2.cpp)]  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente il `prime_factors_of` (funzione), che utilizza la divisione di valutazione per trovare tutti i fattori primi del valore specificato.  
  
 Questa funzione utilizza il [Concurrency:: parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) algoritmo per scorrere la raccolta di numeri primi. Il `concurrent_vector` consente di aggiungere contemporaneamente i fattori primi al risultato del ciclo parallelo.  
  
 [!code-cpp[concrt-carmichael-primes#3](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-containers-to-increase-efficiency_3.cpp)]  
  
## <a name="example"></a>Esempio  
 Questo esempio viene elaborato ogni elemento nella coda di numeri di Carmichael chiamando il `prime_factors_of` funzione per calcolare i fattori relativi primi. Usa un gruppo di attività per eseguire questa operazione in parallelo. Per ulteriori informazioni sui gruppi di attività, vedere [parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md).  
  
 In questo esempio consente di visualizzare i fattori principali per ogni numero Carmichael se tale numero dispone di più di quattro fattori primi.  
  
 [!code-cpp[concrt-carmichael-primes#4](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-containers-to-increase-efficiency_4.cpp)]  
  
## <a name="example"></a>Esempio  
 Il codice seguente viene illustrato un esempio completo che usa i contenitori paralleli per calcolare i fattori primi dei numeri di Carmichael.  
  
 [!code-cpp[concrt-carmichael-primes#5](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-containers-to-increase-efficiency_5.cpp)]  
  
 Questo esempio produce il seguente output di esempio.  
  
```Output  
Prime factors of 9890881 are: 7 11 13 41 241.  
Prime factors of 825265 are: 5 7 17 19 73.  
Prime factors of 1050985 are: 5 13 19 23 37.  
```  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `carmichael-primes.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc carmichael-primes. cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)   
 [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)   
 [Classe concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md)   
 [Classe concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md)   
 [Funzione parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke)   
 [Funzione parallel_for](reference/concurrency-namespace-functions.md#parallel_for)   
 [Classe task_group](reference/task-group-class.md)
