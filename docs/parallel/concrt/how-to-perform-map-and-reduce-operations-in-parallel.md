---
title: 'Procedura: eseguire mappa e ridurre le operazioni in parallelo | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- parallel_transform function, example
- parallel map and reduce, example
- parallel_reduce function, example
ms.assetid: 9d19fac0-4ab6-4380-a375-3b18eeb87720
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2eb7580b82d336e3a99d89f6bde6c2f8c950b6c3
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46411300"
---
# <a name="how-to-perform-map-and-reduce-operations-in-parallel"></a>Procedura: eseguire operazioni di mapping e riduzione in parallelo

Questo esempio illustra come usare il [Concurrency:: parallel_reduce](reference/concurrency-namespace-functions.md#parallel_transform) e [Concurrency:: parallel_transform](reference/concurrency-namespace-functions.md#parallel_reduce) algoritmi e [Concurrency::concurrent_unordered_map](../../parallel/concrt/reference/concurrent-unordered-map-class.md)classe per contare le occorrenze delle parole nei file.

Oggetto *mappa* operazione si applica una funzione a ciascun valore in una sequenza. Oggetto *ridurre* operazione combina gli elementi di una sequenza in un unico valore. È possibile usare la libreria Standard C++ [std:: Transform](../../standard-library/algorithm-functions.md#transform) e [std:: accumulate](../../standard-library/numeric-functions.md#accumulate) funzioni per eseguire mappa e ridurre le operazioni. Tuttavia, per migliorare le prestazioni per molti problemi, è possibile usare l'algoritmo `parallel_transform` per eseguire l'operazione di mapping in parallelo e l'algoritmo `parallel_reduce` per eseguire l'operazione di riduzione in parallelo. In alcuni casi, è possibile usare `concurrent_unordered_map` per eseguire le operazioni di mapping e di riduzione in un'unica operazione.

## <a name="example"></a>Esempio

Nell'esempio seguente si contano le occorrenze delle parole nei file. Viene utilizzato [std:: Vector](../../standard-library/vector-class.md) per rappresentare il contenuto di due file. L'operazione di mapping calcola le occorrenze di ogni parola in ogni vettore. L'operazione di riduzione accumula i conteggi delle parole per entrambi i vettori.

[!code-cpp[concrt-parallel-map-reduce#1](../../parallel/concrt/codesnippet/cpp/how-to-perform-map-and-reduce-operations-in-parallel_1.cpp)]

## <a name="compiling-the-code"></a>Compilazione del codice

Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-map-reduce.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc parallelo-map-reduce. cpp**

## <a name="robust-programming"></a>Programmazione efficiente

In questo esempio, è possibile usare la classe `concurrent_unordered_map`, definita in concurrent_unordered_map.h, per esegue le operazioni di mapping e di riduzione in un'unica operazione.

[!code-cpp[concrt-parallel-map-reduce#2](../../parallel/concrt/codesnippet/cpp/how-to-perform-map-and-reduce-operations-in-parallel_2.cpp)]

In genere, si parallelizza solo il ciclo esterno o quello interno. Parallelizzare il ciclo interno se si dispone di un numero relativamente basso di file e ogni file contiene numerose parole. Parallelizzare il ciclo esterno se si dispone di un numero relativamente alto di file e ogni file contiene poche parole.

## <a name="see-also"></a>Vedere anche

[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[Funzione parallel_transform](reference/concurrency-namespace-functions.md#parallel_transform)<br/>
[Funzione parallel_reduce](reference/concurrency-namespace-functions.md#parallel_reduce)<br/>
[Classe concurrent_unordered_map](../../parallel/concrt/reference/concurrent-unordered-map-class.md)
