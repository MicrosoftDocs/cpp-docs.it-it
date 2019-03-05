---
title: 'Procedura: Convertire un ciclo OpenMP parallel for usare il Runtime di concorrenza'
ms.date: 11/04/2016
helpviewer_keywords:
- converting from OpenMP to the Concurrency Runtime, parallel for loops
- converting from OpenMP to the Concurrency Runtime, parallel loops
- parallel for loops, converting from OpenMP to the Concurrency Runtime
- parallel loops, converting from OpenMP to the Concurrency Runtime
ms.assetid: d8a7b656-f86c-456e-9c5d-a7d52f94646e
ms.openlocfilehash: bc408465f34f0558e9f426ae35b83d4610898414
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57296137"
---
# <a name="how-to-convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime"></a>Procedura: Convertire un ciclo OpenMP parallel for usare il Runtime di concorrenza

In questo esempio viene illustrato come convertire un ciclo di base che usa il OpenMP [parallele](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel) e [per](../../parallel/openmp/reference/for-openmp.md) direttive per usare il Runtime di concorrenza [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algoritmo.

## <a name="example"></a>Esempio

Questo esempio Usa OpenMP sia il Runtime di concorrenza per calcolare il conteggio dei numeri primi in una matrice di valori casuali.

[!code-cpp[concrt-openmp#1](../../parallel/concrt/codesnippet/cpp/how-to-convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime_1.cpp)]

Questo esempio produce il seguente output:

```Output
Using OpenMP...
found 107254 prime numbers.
Using the Concurrency Runtime...
found 107254 prime numbers.
```

Il `parallel_for` algoritmo e OpenMP 3.0 consentire per il tipo di indice deve essere un tipo integrale signed o un tipo integrale senza segno. Il `parallel_for` algoritmo assicura anche che l'intervallo specificato non causa un overflow a un tipo con segno. Nelle versioni 2.0 e 2.5 di OpenMP sono consentono solo i tipi di indice integrale con segno. OpenMP non convalida nemmeno l'intervallo di indici.

La versione di questo esempio che usa il Runtime di concorrenza Usa anche un [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) oggetto anziché il [atomica](../../parallel/openmp/reference/atomic.md) direttiva per incrementare il valore del contatore senza richiedere sincronizzazione.

Per altre informazioni sulle `parallel_for` e altri algoritmi paralleli, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md). Per altre informazioni sul `combinable` classe, vedere [contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md).

## <a name="example"></a>Esempio

In questo esempio viene modificato l'esempio precedente per agire su un [std:: Array](../../standard-library/array-class-stl.md) oggetto anziché a una matrice nativa. Poiché nelle versioni 2.0 e 2.5 di OpenMP sono consentono tipi di indice integrale con segno solo in un `parallel_for` costrutto, è possibile utilizzare gli iteratori per accedere agli elementi di un contenitore della libreria Standard C++ in parallelo. Parallel Patterns Library (PPL) fornisce il [Concurrency:: parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) algoritmo, che esegue attività in parallelo, in un contenitore iterativo, quali quelli forniti dalla libreria Standard C++. Usa la stessa logica di partizionamento che il `parallel_for` algoritmo utilizza. Il `parallel_for_each` la libreria Standard C++ è simile all'algoritmo [std:: for_each](../../standard-library/algorithm-functions.md#for_each) algoritmo, con la differenza che il `parallel_for_each` algoritmo esegue le attività simultaneamente.

[!code-cpp[concrt-openmp#10](../../parallel/concrt/codesnippet/cpp/how-to-convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime_2.cpp)]

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `concrt-omp-count-primes.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**cl.exe /EHsc /openmp concrt-omp-count-primes.cpp**

## <a name="see-also"></a>Vedere anche

[Migrazione da OpenMP al runtime di concorrenza](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)<br/>
[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)
