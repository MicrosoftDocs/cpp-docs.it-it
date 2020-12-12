---
description: 'Altre informazioni su: procedura: eseguire operazioni di mapping e riduzione in parallelo'
title: 'Procedura: eseguire operazioni di mapping e riduzione in parallelo'
ms.date: 11/04/2016
helpviewer_keywords:
- parallel_transform function, example
- parallel map and reduce, example
- parallel_reduce function, example
ms.assetid: 9d19fac0-4ab6-4380-a375-3b18eeb87720
ms.openlocfilehash: f35c9bf4df5a79cf9568bc286ff628e2f9fd45c1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97209841"
---
# <a name="how-to-perform-map-and-reduce-operations-in-parallel"></a>Procedura: eseguire operazioni di mapping e riduzione in parallelo

Questo esempio illustra come usare gli algoritmi Concurrency [::p arallel_transform](reference/concurrency-namespace-functions.md#parallel_transform) e [concurrency::p arallel_reduce](reference/concurrency-namespace-functions.md#parallel_reduce) e la classe [Concurrency:: concurrent_unordered_map](../../parallel/concrt/reference/concurrent-unordered-map-class.md) per contare le occorrenze delle parole nei file.

Un'operazione di *mapping* applica una funzione a ogni valore in una sequenza. Un'operazione di *riduzione* combina gli elementi di una sequenza in un unico valore. Per eseguire operazioni di mapping e riduzione, è possibile usare le funzioni [std:: Transform](../../standard-library/algorithm-functions.md#transform) e [std:: accumulate](../../standard-library/numeric-functions.md#accumulate) della libreria standard C++. Tuttavia, per migliorare le prestazioni per molti problemi, è possibile usare l'algoritmo `parallel_transform` per eseguire l'operazione di mapping in parallelo e l'algoritmo `parallel_reduce` per eseguire l'operazione di riduzione in parallelo. In alcuni casi, è possibile usare `concurrent_unordered_map` per eseguire le operazioni di mapping e di riduzione in un'unica operazione.

## <a name="example"></a>Esempio

Nell'esempio seguente si contano le occorrenze delle parole nei file. USA [std:: Vector](../../standard-library/vector-class.md) per rappresentare il contenuto di due file. L'operazione di mapping calcola le occorrenze di ogni parola in ogni vettore. L'operazione di riduzione accumula i conteggi delle parole per entrambi i vettori.

[!code-cpp[concrt-parallel-map-reduce#1](../../parallel/concrt/codesnippet/cpp/how-to-perform-map-and-reduce-operations-in-parallel_1.cpp)]

## <a name="compiling-the-code"></a>Compilazione del codice

Per compilare il codice, copiarlo e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `parallel-map-reduce.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **cl.exe/EHsc parallel-map-reduce. cpp**

## <a name="robust-programming"></a>Programmazione efficiente

In questo esempio, è possibile usare la classe `concurrent_unordered_map`, definita in concurrent_unordered_map.h, per esegue le operazioni di mapping e di riduzione in un'unica operazione.

[!code-cpp[concrt-parallel-map-reduce#2](../../parallel/concrt/codesnippet/cpp/how-to-perform-map-and-reduce-operations-in-parallel_2.cpp)]

In genere, si parallelizza solo il ciclo esterno o quello interno. Parallelizzare il ciclo interno se si dispone di un numero relativamente basso di file e ogni file contiene numerose parole. Parallelizzare il ciclo esterno se si dispone di un numero relativamente alto di file e ogni file contiene poche parole.

## <a name="see-also"></a>Vedi anche

[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[Funzione parallel_transform](reference/concurrency-namespace-functions.md#parallel_transform)<br/>
[Funzione parallel_reduce](reference/concurrency-namespace-functions.md#parallel_reduce)<br/>
[Classe concurrent_unordered_map](../../parallel/concrt/reference/concurrent-unordered-map-class.md)
