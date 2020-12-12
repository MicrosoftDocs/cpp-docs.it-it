---
description: 'Altre informazioni su: procedura: usare combinable per migliorare le prestazioni'
title: 'Procedura: Usare la classe combinable per migliorare le prestazioni'
ms.date: 11/04/2016
helpviewer_keywords:
- combinable class, example
- improving parallel performance with combinable [Concurrency Runtime]
ms.assetid: fa730580-1c94-4b2d-8aec-57c91dc0497e
ms.openlocfilehash: b9ab906f00f32fee59e2dd9a1131fe87fcbc53a8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97283303"
---
# <a name="how-to-use-combinable-to-improve-performance"></a>Procedura: Usare la classe combinable per migliorare le prestazioni

In questo esempio viene illustrato come utilizzare la classe [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) per calcolare la somma dei numeri in un oggetto [std:: Array](../../standard-library/array-class-stl.md) che è primo. La `combinable` classe migliora le prestazioni eliminando lo stato condiviso.

> [!TIP]
> In alcuni casi, la mappa parallela ([concorrenza::p arallel_transform](reference/concurrency-namespace-functions.md#parallel_transform)) e reduce ([Concurrency:: parallel_reduce](reference/concurrency-namespace-functions.md#parallel_reduce)) possono offrire miglioramenti delle prestazioni rispetto a `combinable` . Per un esempio in cui vengono utilizzate le operazioni di mapping e riduzione per produrre gli stessi risultati di questo esempio, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

## <a name="example---accumulate"></a>Esempio-accumulo

Nell'esempio seguente viene usata la funzione [std:: Accumule](../../standard-library/numeric-functions.md#accumulate) per calcolare la somma degli elementi di una matrice che sono primi. In questo esempio, `a` è un `array` oggetto e la `is_prime` funzione determina se il valore di input è primo.

[!code-cpp[concrt-parallel-sum-of-primes#1](../../parallel/concrt/codesnippet/cpp/how-to-use-combinable-to-improve-performance_1.cpp)]

## <a name="example---parallel_for_each"></a>Esempio: parallel_for_each

Nell'esempio seguente viene illustrato un modo ingenuo per parallelizzare l'esempio precedente. In questo esempio viene utilizzato l'algoritmo [Concurrency::p arallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) per elaborare la matrice in parallelo e un oggetto [Concurrency:: critical_section](../../parallel/concrt/reference/critical-section-class.md) per sincronizzare l'accesso alla `prime_sum` variabile. Questo esempio non viene ridimensionato perché ogni thread deve attendere che la risorsa condivisa diventi disponibile.

[!code-cpp[concrt-parallel-sum-of-primes#2](../../parallel/concrt/codesnippet/cpp/how-to-use-combinable-to-improve-performance_2.cpp)]

## <a name="example---combinable"></a>Esempio: combinabile

Nell'esempio seguente viene usato un `combinable` oggetto per migliorare le prestazioni dell'esempio precedente. Questo esempio elimina la necessità di oggetti di sincronizzazione. si ridimensiona perché l' `combinable` oggetto consente a ogni thread di eseguire l'attività in modo indipendente.

Un `combinable` oggetto viene in genere utilizzato in due passaggi. Prima di tutto, produrre una serie di calcoli granulari eseguendo il lavoro in parallelo. Successivamente, combinare (o ridurre) i calcoli in un risultato finale. In questo esempio viene utilizzato il metodo [Concurrency:: combinable:: local](reference/combinable-class.md#local) per ottenere un riferimento alla somma locale. USA quindi il metodo [Concurrency:: combinable:: combine](reference/combinable-class.md#combine) e un oggetto [std::p unità logiche](../../standard-library/plus-struct.md) per combinare i calcoli locali nel risultato finale.

[!code-cpp[concrt-parallel-sum-of-primes#3](../../parallel/concrt/codesnippet/cpp/how-to-use-combinable-to-improve-performance_3.cpp)]

## <a name="example---serial-and-parallel"></a>Esempio: seriale e parallelo

Nell'esempio completo seguente viene calcolata la somma dei numeri primi sia in modo seriale che in parallelo. Nell'esempio viene stampato nella console il tempo necessario per eseguire entrambi i calcoli.

[!code-cpp[concrt-parallel-sum-of-primes#4](../../parallel/concrt/codesnippet/cpp/how-to-use-combinable-to-improve-performance_4.cpp)]

L'output di esempio seguente è relativo a un computer con quattro processori.

```Output
1709600813
serial time: 6178 ms

1709600813
parallel time: 1638 ms
```

## <a name="compiling-the-code"></a>Compilazione del codice

Per compilare il codice, copiarlo e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `parallel-sum-of-primes.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **cl.exe/EHsc parallel-sum-of-primes. cpp**

## <a name="robust-programming"></a>Programmazione efficiente

Per un esempio in cui vengono utilizzate le operazioni di mapping e riduzione per produrre gli stessi risultati, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

## <a name="see-also"></a>Vedi anche

[Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)<br/>
[Classe combinable](../../parallel/concrt/reference/combinable-class.md)<br/>
[Classe critical_section](../../parallel/concrt/reference/critical-section-class.md)
