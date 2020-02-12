---
title: "Procedura: Usare i contenitori paralleli per aumentare l'efficienza"
ms.date: 11/04/2016
helpviewer_keywords:
- increasing efficiency with parallel containers [Concurrency Runtime]
- concurrent_queue class, examples
- concurrent_vector class, examples
ms.assetid: bd00046d-e9b6-4ae1-b661-3995f671b867
ms.openlocfilehash: cd120d1fbe0f73ed0974efda5a1aa643a1afde9d
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77143004"
---
# <a name="how-to-use-parallel-containers-to-increase-efficiency"></a>Procedura: Usare i contenitori paralleli per aumentare l'efficienza

Questo argomento illustra come usare i contenitori paralleli per archiviare e accedere in modo efficiente ai dati in parallelo.

Il codice di esempio calcola il set di numeri primi e Carmichael in parallelo. Quindi, per ogni numero di Carmichael, il codice calcola i fattori principali di tale numero.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrata la funzione `is_prime`, che determina se un valore di input è un numero primo e la funzione `is_carmichael`, che determina se il valore di input è un numero Carmichael.

[!code-cpp[concrt-carmichael-primes#1](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-containers-to-increase-efficiency_1.cpp)]

## <a name="example"></a>Esempio

Nell'esempio seguente vengono usate le funzioni `is_prime` e `is_carmichael` per calcolare i set di numeri primi e Carmichael. Nell'esempio vengono utilizzati gli algoritmi [Concurrency::p arallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) e [concurrency::p arallel_for](reference/concurrency-namespace-functions.md#parallel_for) per calcolare ogni set in parallelo. Per ulteriori informazioni sugli algoritmi paralleli, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

In questo esempio viene utilizzato un oggetto [Concurrency:: concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md) per conservare il set di numeri di Carmichael perché in seguito utilizzerà tale oggetto come coda di lavoro. Usa un oggetto [Concurrency:: concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) per conservare il set di numeri primi perché in seguito scorrerà questo set per individuare i fattori principali.

[!code-cpp[concrt-carmichael-primes#2](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-containers-to-increase-efficiency_2.cpp)]

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrata la funzione `prime_factors_of`, che utilizza la divisione della versione di valutazione per trovare tutti i fattori principali del valore specificato.

Questa funzione usa l'algoritmo [Concurrency::p arallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) per scorrere l'insieme dei numeri primi. L'oggetto `concurrent_vector` consente al ciclo parallelo di aggiungere contemporaneamente fattori principali al risultato.

[!code-cpp[concrt-carmichael-primes#3](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-containers-to-increase-efficiency_3.cpp)]

## <a name="example"></a>Esempio

Questo esempio elabora ogni elemento nella coda dei numeri di Carmichael chiamando la funzione `prime_factors_of` per calcolare i fattori principali. Usa un gruppo di attività per eseguire queste operazioni in parallelo. Per ulteriori informazioni sui gruppi di attività, vedere [parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md).

In questo esempio vengono stampati i fattori principali per ogni numero di Carmichael se tale numero ha più di quattro fattori principali.

[!code-cpp[concrt-carmichael-primes#4](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-containers-to-increase-efficiency_4.cpp)]

## <a name="example"></a>Esempio

Il codice seguente illustra l'esempio completo, che usa i contenitori paralleli per calcolare i fattori principali dei numeri di Carmichael.

[!code-cpp[concrt-carmichael-primes#5](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-containers-to-increase-efficiency_5.cpp)]

Questo esempio produce l'output di esempio seguente.

```Output
Prime factors of 9890881 are: 7 11 13 41 241.
Prime factors of 825265 are: 5 7 17 19 73.
Prime factors of 1050985 are: 5 13 19 23 37.
```

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `carmichael-primes.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **CL. exe/EHsc carmichael-primes. cpp**

## <a name="see-also"></a>Vedere anche

[Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)<br/>
[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[Classe concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md)<br/>
[Classe concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md)<br/>
[Funzione parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke)<br/>
[Funzione parallel_for](reference/concurrency-namespace-functions.md#parallel_for)<br/>
[Classe task_group](reference/task-group-class.md)
