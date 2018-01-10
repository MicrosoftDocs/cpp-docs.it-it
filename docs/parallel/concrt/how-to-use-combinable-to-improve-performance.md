---
title: 'Procedura: usare la classe combinable per migliorare le prestazioni | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- combinable class, example
- improving parallel performance with combinable [Concurrency Runtime]
ms.assetid: fa730580-1c94-4b2d-8aec-57c91dc0497e
caps.latest.revision: "17"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: dea28bd31812449e34bb481d316070f8f21aaede
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-use-combinable-to-improve-performance"></a>Procedura: Usare la classe combinable per migliorare le prestazioni
In questo esempio viene illustrato come utilizzare il [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) classe per calcolare la somma dei numeri in un [std:: Array](../../standard-library/array-class-stl.md) oggetto primi. La `combinable` classe migliora le prestazioni eliminando lo stato condiviso.  
  
> [!TIP]
>  In alcuni casi, i mapping parallelo ([Concurrency:: parallel_reduce](reference/concurrency-namespace-functions.md#parallel_transform)) e ridurre ([concurrency:: parallel_reduce](reference/concurrency-namespace-functions.md#parallel_reduce)) può offrire miglioramenti delle prestazioni su `combinable`. Per un esempio che utilizza il mapping e riduzione delle operazioni per produrre gli stessi risultati questo esempio, vedere [gli algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente usa il [std:: accumulate](../../standard-library/numeric-functions.md#accumulate) funzione per calcolare la somma degli elementi in una matrice di numeri primi. In questo esempio, `a` è un `array` oggetto e `is_prime` funzione determina se il valore di input è un numero primo.  
  
 [!code-cpp[concrt-parallel-sum-of-primes#1](../../parallel/concrt/codesnippet/cpp/how-to-use-combinable-to-improve-performance_1.cpp)]  
  
## <a name="example"></a>Esempio  

 Nell'esempio seguente viene illustrato un modo naïve per parallelizzare l'esempio precedente. Questo esempio viene utilizzato il [Concurrency:: parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) algoritmo per elaborare la matrice in parallelo e un [Concurrency:: critical_section](../../parallel/concrt/reference/critical-section-class.md) oggetto per sincronizzare l'accesso per il `prime_sum` variabile . In questo esempio non è scalabile poiché ogni thread deve attendere che la risorsa condivisa diventi disponibile.  
  
 [!code-cpp[concrt-parallel-sum-of-primes#2](../../parallel/concrt/codesnippet/cpp/how-to-use-combinable-to-improve-performance_2.cpp)]  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene utilizzato un `combinable` oggetto per migliorare le prestazioni dell'esempio precedente. In questo esempio elimina la necessità per gli oggetti di sincronizzazione. scalabile, in quanto il `combinable` consente di ogni thread per l'esecuzione dell'attività in modo indipendente.  
  
 Oggetto `combinable` oggetto viene utilizzato in genere in due passaggi. Innanzitutto, è possibile produrre una serie di calcoli accurati eseguendo il lavoro in parallelo. Successivamente, combinare o ridurre i calcoli in un risultato finale. Questo esempio viene utilizzato il [concurrency::combinable::local](reference/combinable-class.md#local) per ottenere un riferimento alla somma locale. Viene quindi utilizzato il [concurrency::combinable::combine](reference/combinable-class.md#combine) (metodo) e un [std:: Plus](../../standard-library/plus-struct.md) oggetto per combinare i calcoli locali nel risultato finale.  

  
 [!code-cpp[concrt-parallel-sum-of-primes#3](../../parallel/concrt/codesnippet/cpp/how-to-use-combinable-to-improve-performance_3.cpp)]  
  
## <a name="example"></a>Esempio  
 L'esempio completo seguente calcola la somma dei numeri primi sia in serie e in parallelo. Nell'esempio viene stampato nella console il tempo necessario per eseguire entrambi i calcoli.  
  
 [!code-cpp[concrt-parallel-sum-of-primes#4](../../parallel/concrt/codesnippet/cpp/how-to-use-combinable-to-improve-performance_4.cpp)]  
  
 L'output di esempio seguente è relativo a un computer con quattro processori.  
  
```Output  
1709600813  
serial time: 6178 ms  
 
1709600813  
parallel time: 1638 ms  
```  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-sum-of-primes.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc parallelo-sum-of-primes. cpp**  
  
## <a name="robust-programming"></a>Programmazione efficiente  
 Per un esempio che utilizza il mapping e riduzione delle operazioni per produrre gli stessi risultati, vedere [gli algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)   
 [combinable (classe)](../../parallel/concrt/reference/combinable-class.md)   
 [Classe critical_section](../../parallel/concrt/reference/critical-section-class.md)
