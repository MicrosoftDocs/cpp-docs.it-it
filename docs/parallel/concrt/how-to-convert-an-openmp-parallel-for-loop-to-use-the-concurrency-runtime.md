---
title: "Procedura: Convertire un ciclo OpenMP parallel for per l'utilizzo del runtime di concorrenza"
ms.date: 11/04/2016
helpviewer_keywords:
- converting from OpenMP to the Concurrency Runtime, parallel for loops
- converting from OpenMP to the Concurrency Runtime, parallel loops
- parallel for loops, converting from OpenMP to the Concurrency Runtime
- parallel loops, converting from OpenMP to the Concurrency Runtime
ms.assetid: d8a7b656-f86c-456e-9c5d-a7d52f94646e
ms.openlocfilehash: 4f523f9f6de7f1ffb4c3b578b60de587239dffb6
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91507882"
---
# <a name="how-to-convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime"></a>Procedura: Convertire un ciclo OpenMP parallel for per l'utilizzo del runtime di concorrenza

In questo esempio viene illustrato come convertire un ciclo di base che utilizza le direttive OpenMP [Parallel](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel) e [for](../openmp/reference/openmp-directives.md#for-openmp) per utilizzare l'algoritmo runtime di concorrenza [Concurrency::p arallel_for](reference/concurrency-namespace-functions.md#parallel_for) .

## <a name="example---prime-count"></a>Esempio-conteggio primi

Questo esempio USA OpenMP e il runtime di concorrenza per calcolare il numero di numeri primi in una matrice di valori casuali.

[!code-cpp[concrt-openmp#1](../../parallel/concrt/codesnippet/cpp/how-to-convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime_1.cpp)]

Questo esempio produce il seguente output:

```Output
Using OpenMP...
found 107254 prime numbers.
Using the Concurrency Runtime...
found 107254 prime numbers.
```

L' `parallel_for` algoritmo e OpenMP 3,0 consentono al tipo di indice di essere un tipo integrale signed o un tipo integrale senza segno. L' `parallel_for` algoritmo consente inoltre di verificare che l'intervallo specificato non riporti un overflow di un tipo con segno. Le versioni OpenMP 2,0 e 2,5 consentono solo i tipi di indice integrale con segno. OpenMP non convalida inoltre l'intervallo di indici.

La versione di questo esempio che usa il runtime di concorrenza usa anche un oggetto [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) al posto della direttiva [Atomic](../openmp/reference/openmp-directives.md#atomic) per incrementare il valore del contatore senza richiedere la sincronizzazione.

Per ulteriori informazioni su `parallel_for` e su altri algoritmi paralleli, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md). Per ulteriori informazioni sulla `combinable` classe, vedere [contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md).

## <a name="example---use-stdarray"></a>Esempio: uso di STD:: Array

Questo esempio modifica quello precedente in modo che agisca su un oggetto [std:: Array](../../standard-library/array-class-stl.md) anziché su una matrice nativa. Poiché le versioni 2,0 e 2,5 OpenMP consentono i tipi di indice integrale con segno solo in un `parallel_for` costrutto, non è possibile usare gli iteratori per accedere agli elementi di un contenitore della libreria standard C++ in parallelo. La libreria PPL (Parallel Patterns Library) fornisce l'algoritmo [Concurrency::p arallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) , che esegue le attività in parallelo in un contenitore iterativo, ad esempio quelli forniti dalla libreria standard C++. Usa la stessa logica di partizionamento usata dall' `parallel_for` algoritmo. L' `parallel_for_each` algoritmo è analogo all'algoritmo [std:: For_each](../../standard-library/algorithm-functions.md#for_each) della libreria standard C++, con la differenza che l' `parallel_for_each` algoritmo esegue le attività contemporaneamente.

[!code-cpp[concrt-openmp#10](../../parallel/concrt/codesnippet/cpp/how-to-convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime_2.cpp)]

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `concrt-omp-count-primes.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **cl.exe/EHsc/OpenMP concrt-omp-count-primes. cpp**

## <a name="see-also"></a>Vedere anche

[Migrazione da OpenMP al runtime di concorrenza](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)<br/>
[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)
