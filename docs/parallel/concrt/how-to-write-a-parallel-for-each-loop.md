---
title: 'Procedura: Scrivere un ciclo parallel_for_each'
ms.date: 11/04/2016
helpviewer_keywords:
- writing a parallel_for_each loop [Concurrency Runtime]
- parallel_for_each function, example
ms.assetid: fa9c0ba6-ace0-4f88-8681-c7c1f52aff20
ms.openlocfilehash: 10c281b7db92e2706b20a1c7377fcdb9d924152d
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77141880"
---
# <a name="how-to-write-a-parallel_for_each-loop"></a>Procedura: Scrivere un ciclo parallel_for_each

Questo esempio illustra come usare l'algoritmo [Concurrency::p arallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) per calcolare il numero di numeri primi in un oggetto [std:: Array](../../standard-library/array-class-stl.md) in parallelo.

## <a name="example"></a>Esempio

Nell'esempio seguente viene calcolato il numero di numeri primi in una matrice due volte. Nell'esempio viene prima usato l'algoritmo [std:: for_each](../../standard-library/algorithm-functions.md#for_each) per calcolare il conteggio in modo seriale. Nell'esempio viene quindi utilizzato l'algoritmo `parallel_for_each` per eseguire la stessa attività in parallelo. L'esempio inoltre visualizza nella console il tempo necessario per eseguire entrambi i calcoli.

[!code-cpp[concrt-parallel-count-primes#1](../../parallel/concrt/codesnippet/cpp/how-to-write-a-parallel-for-each-loop_1.cpp)]

L'output di esempio seguente è relativo a un computer con quattro processori.

```Output
serial version:
found 17984 prime numbers
took 6115 ms

parallel version:
found 17984 prime numbers
took 1653 ms
```

## <a name="compiling-the-code"></a>Compilazione del codice

Per compilare il codice, copiarlo e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-count-primes.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **CL. exe/EHsc parallel-count-primes. cpp**

## <a name="robust-programming"></a>Programmazione efficiente

L'espressione lambda che l'esempio passa all'algoritmo `parallel_for_each` usa la funzione `InterlockedIncrement` per abilitare le iterazioni parallele del ciclo in modo da incrementare il contatore simultaneamente. Se si usano funzioni come `InterlockedIncrement` per sincronizzare l'accesso alle risorse condivise, è possibile presentare colli di bottiglia delle prestazioni nel codice. È possibile utilizzare un meccanismo di sincronizzazione senza blocco, ad esempio la classe [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) , per eliminare l'accesso simultaneo alle risorse condivise. Per un esempio in cui si usa la classe `combinable` in questo modo, vedere [procedura: usare l'oggetto combinable per migliorare le prestazioni](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md).

## <a name="see-also"></a>Vedere anche

[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[Funzione parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each)
