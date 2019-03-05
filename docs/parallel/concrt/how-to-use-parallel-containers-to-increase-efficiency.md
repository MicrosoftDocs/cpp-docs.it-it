---
title: "Procedura: Usare i contenitori paralleli per aumentare l'efficienza"
ms.date: 11/04/2016
helpviewer_keywords:
- increasing efficiency with parallel containers [Concurrency Runtime]
- concurrent_queue class, examples
- concurrent_vector class, examples
ms.assetid: bd00046d-e9b6-4ae1-b661-3995f671b867
ms.openlocfilehash: 2479915b167ee3dbc2ce43d9c2733efc74818bbe
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57300635"
---
# <a name="how-to-use-parallel-containers-to-increase-efficiency"></a>Procedura: Usare i contenitori paralleli per aumentare l'efficienza

In questo argomento viene illustrato come usare i contenitori paralleli in modo efficiente archiviare e accedere ai dati in parallelo.

L'esempio di codice calcola il set di numeri primi e Carmichael in parallelo. Quindi, per ogni numero Carmichael, il codice calcola i fattori principali di tale numero.

## <a name="example"></a>Esempio

L'esempio seguente mostra le `is_prime` funzione, che determina se un valore di input è un numero primo, e il `is_carmichael` funzione, che determina se il valore di input è un numero Carmichael.

[!code-cpp[concrt-carmichael-primes#1](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-containers-to-increase-efficiency_1.cpp)]

## <a name="example"></a>Esempio

L'esempio seguente usa il `is_prime` e `is_carmichael` funzioni per calcolare i set di numeri Carmichael e dei numeri primi. L'esempio Usa la [Concurrency:: parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) e [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algoritmi per calcolare ogni set in parallelo. Per altre informazioni sugli algoritmi paralleli, vedere [gli algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

Questo esempio Usa un' [Concurrency:: concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md) oggetto per contenere il set di Carmichael numeri perché tale oggetto verrà utilizzato come una coda di lavoro. Usa un' [Concurrency:: concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) oggetto per contenere il set di numeri primi, poiché in un secondo momento si ripete attraverso questo impostato per individuare i fattori primi.

[!code-cpp[concrt-carmichael-primes#2](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-containers-to-increase-efficiency_2.cpp)]

## <a name="example"></a>Esempio

L'esempio seguente illustra il `prime_factors_of` (funzione), che utilizza la versione di valutazione divisione per trovare tutti i fattori primi del valore specificato.

Questa funzione utilizza il [Concurrency:: parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) algoritmo per scorrere la raccolta di numeri primi. Il `concurrent_vector` oggetto consente al ciclo parallelo aggiungere contemporaneamente i fattori primi sul risultato.

[!code-cpp[concrt-carmichael-primes#3](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-containers-to-increase-efficiency_3.cpp)]

## <a name="example"></a>Esempio

Questo esempio viene elaborato ogni elemento nella coda di numeri Carmichael chiamando il `prime_factors_of` funzione per calcolare i fattori relativi primi. Usa un gruppo di attività per eseguire questa operazione in parallelo. Per altre informazioni sui gruppi di attività, vedere [Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md).

Questo esempio visualizza i principali fattori per ogni numero Carmichael se tale numero ha più di quattro fattori principali.

[!code-cpp[concrt-carmichael-primes#4](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-containers-to-increase-efficiency_4.cpp)]

## <a name="example"></a>Esempio

Il codice seguente illustra un esempio completo che usa i contenitori paralleli per calcolare i fattori principali dei numeri Carmichael.

[!code-cpp[concrt-carmichael-primes#5](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-containers-to-increase-efficiency_5.cpp)]

Questo esempio produce l'output di esempio seguente.

```Output
Prime factors of 9890881 are: 7 11 13 41 241.
Prime factors of 825265 are: 5 7 17 19 73.
Prime factors of 1050985 are: 5 13 19 23 37.
```

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `carmichael-primes.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**cl.exe /EHsc carmichael-primes.cpp**

## <a name="see-also"></a>Vedere anche

[Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)<br/>
[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[Classe concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md)<br/>
[Classe concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md)<br/>
[parallel_invoke (funzione)](reference/concurrency-namespace-functions.md#parallel_invoke)<br/>
[parallel_for (funzione)](reference/concurrency-namespace-functions.md#parallel_for)<br/>
[Classe task_group](reference/task-group-class.md)
