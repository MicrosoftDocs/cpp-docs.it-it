---
title: 'Procedura: eseguire mapping e riduzione delle operazioni in parallelo | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- parallel_transform function, example
- parallel map and reduce, example
- parallel_reduce function, example
ms.assetid: 9d19fac0-4ab6-4380-a375-3b18eeb87720
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 84e38dd845f3503512f48c19e226d56d9978cc21
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-perform-map-and-reduce-operations-in-parallel"></a>Procedura: eseguire operazioni di mapping e riduzione in parallelo

In questo esempio viene illustrato come utilizzare il [Concurrency:: parallel_reduce](reference/concurrency-namespace-functions.md#parallel_transform) e [Concurrency:: parallel_transform](reference/concurrency-namespace-functions.md#parallel_reduce) algoritmi e [Concurrency:: concurrent_unordered_map](../../parallel/concrt/reference/concurrent-unordered-map-class.md)classe per contare le occorrenze delle parole nei file.  
  
 Oggetto *mappa* operazione si applica una funzione a ogni valore in una sequenza. Oggetto *ridurre* operazione combina gli elementi di una sequenza in un unico valore. È possibile utilizzare la libreria Standard C++ [std:: Transform](../../standard-library/algorithm-functions.md#transform) e [std:: accumulate](../../standard-library/numeric-functions.md#accumulate) funzioni per eseguire mapping e riduzione delle operazioni. Tuttavia, per migliorare le prestazioni per molti problemi, è possibile usare l'algoritmo `parallel_transform` per eseguire l'operazione di mapping in parallelo e l'algoritmo `parallel_reduce` per eseguire l'operazione di riduzione in parallelo. In alcuni casi, è possibile usare `concurrent_unordered_map` per eseguire le operazioni di mapping e di riduzione in un'unica operazione.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente si contano le occorrenze delle parole nei file. Usa [std:: Vector](../../standard-library/vector-class.md) per rappresentare il contenuto di due file. L'operazione di mapping calcola le occorrenze di ogni parola in ogni vettore. L'operazione di riduzione accumula i conteggi delle parole per entrambi i vettori.  
  
 [!code-cpp[concrt-parallel-map-reduce#1](../../parallel/concrt/codesnippet/cpp/how-to-perform-map-and-reduce-operations-in-parallel_1.cpp)]  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-map-reduce.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc parallelo-mappa-reduce.cpp**  
  
## <a name="robust-programming"></a>Programmazione efficiente  
 In questo esempio, è possibile usare la classe `concurrent_unordered_map`, definita in concurrent_unordered_map.h, per esegue le operazioni di mapping e di riduzione in un'unica operazione.  
  
 [!code-cpp[concrt-parallel-map-reduce#2](../../parallel/concrt/codesnippet/cpp/how-to-perform-map-and-reduce-operations-in-parallel_2.cpp)]  
  
 In genere, si parallelizza solo il ciclo esterno o quello interno. Parallelizzare il ciclo interno se si dispone di un numero relativamente basso di file e ogni file contiene numerose parole. Parallelizzare il ciclo esterno se si dispone di un numero relativamente alto di file e ogni file contiene poche parole.  
  
## <a name="see-also"></a>Vedere anche  
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)   
 [Funzione parallel_transform](reference/concurrency-namespace-functions.md#parallel_transform)   
 [Funzione parallel_reduce](reference/concurrency-namespace-functions.md#parallel_reduce)   
 [Classe concurrent_unordered_map](../../parallel/concrt/reference/concurrent-unordered-map-class.md)
