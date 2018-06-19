---
title: 'Procedura: scrivere un ciclo parallel_for_each | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- writing a parallel_for_each loop [Concurrency Runtime]
- parallel_for_each function, example
ms.assetid: fa9c0ba6-ace0-4f88-8681-c7c1f52aff20
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 68ba40b7d9ea93e73d9d18d3548b0c0f34c6411f
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33686009"
---
# <a name="how-to-write-a-parallelforeach-loop"></a>Procedura: Scrivere un ciclo parallel_for_each
In questo esempio viene illustrato come utilizzare il [Concurrency:: parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) algoritmo per calcolare il conteggio dei numeri primi in un [std:: Array](../../standard-library/array-class-stl.md) oggetto in parallelo.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente calcola il conteggio dei numeri primi in una matrice di due volte. L'esempio utilizza in primo luogo il [std:: for_each](../../standard-library/algorithm-functions.md#for_each) algoritmo per calcolare il conteggio in modalità seriale. Nell'esempio viene utilizzata la `parallel_for_each` algoritmo per eseguire la stessa attività in parallelo. L'esempio inoltre visualizza nella console il tempo necessario per eseguire entrambi i calcoli.  
  
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
 Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-count-primes.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc parallel-count-primes. cpp**  
  
## <a name="robust-programming"></a>Programmazione efficiente  
 L'espressione lambda che nell'esempio viene passato per il `parallel_for_each` algoritmo utilizza il `InterlockedIncrement` funzione per consentire alle iterazioni parallele del ciclo di incrementare il contatore contemporaneamente. Se si utilizzano funzioni, ad esempio `InterlockedIncrement` per sincronizzare l'accesso alle risorse condivise, è possibile presentare i colli di bottiglia delle prestazioni nel codice. È possibile utilizzare un meccanismo di sincronizzazione senza blocco, ad esempio, il [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) (classe), per eliminare l'accesso simultaneo alle risorse condivise. Per un esempio che utilizza il `combinable` in questo modo, vedere [procedura: usare la classe combinable per migliorare le prestazioni](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)   
 [Funzione parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each)


