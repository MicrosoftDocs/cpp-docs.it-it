---
title: "Procedura: convertire un ciclo OpenMP parallel for per l'utilizzo del Runtime di concorrenza | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- converting from OpenMP to the Concurrency Runtime, parallel for loops
- converting from OpenMP to the Concurrency Runtime, parallel loops
- parallel for loops, converting from OpenMP to the Concurrency Runtime
- parallel loops, converting from OpenMP to the Concurrency Runtime
ms.assetid: d8a7b656-f86c-456e-9c5d-a7d52f94646e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 93538e3188f0086039ecc0b681f936954d82ae97
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33687023"
---
# <a name="how-to-convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime"></a>Procedura: Convertire un ciclo OpenMP parallel for per l'utilizzo del runtime di concorrenza

In questo esempio viene illustrato come convertire un ciclo di base che utilizza il OpenMP [parallela](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel) e [per](../../parallel/openmp/reference/for-openmp.md) direttive da utilizzare il Runtime di concorrenza [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algoritmo.  
  
## <a name="example"></a>Esempio  
 In questo esempio viene utilizzato sia OpenMP che il Runtime di concorrenza per calcolare il conteggio dei numeri primi in una matrice di valori casuali.  
  
 [!code-cpp[concrt-openmp#1](../../parallel/concrt/codesnippet/cpp/how-to-convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime_1.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
Using OpenMP...  
found 107254 prime numbers.  
Using the Concurrency Runtime...  
found 107254 prime numbers.  
```  
  
 Il `parallel_for` algoritmo e OpenMP 3.0 consentire per il tipo di indice deve essere un tipo integrale signed o un tipo integrale senza segno. Il `parallel_for` algoritmo assicura anche che l'intervallo specificato non causa un overflow a un tipo con segno. Versioni OpenMP 2.0 e 2.5 supporta solo i tipi di indice integrali con segno. OpenMP non convalida l'intervallo di indici.  
  
 La versione di questo esempio che usa il Runtime di concorrenza Usa anche un [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) oggetto al posto del [atomica](../../parallel/openmp/reference/atomic.md) direttiva per incrementare il valore del contatore senza sincronizzazione.  
  
 Per ulteriori informazioni su `parallel_for` e altri algoritmi paralleli, vedere [gli algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md). Per ulteriori informazioni sul `combinable` classe, vedere [contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md).  
  
## <a name="example"></a>Esempio  

 In questo esempio viene modificato l'esempio precedente per agire su un [std:: Array](../../standard-library/array-class-stl.md) oggetto anziché una matrice nativa. Perché le versioni di OpenMP 2.0 e 2.5 consentono per firmati solo in tipi integrali indice un `parallel_for` costrutto, è possibile utilizzare gli iteratori per accedere agli elementi di un contenitore della libreria Standard C++ in parallelo. Parallel Patterns Library (PPL) fornisce il [Concurrency:: parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) algoritmo, che esegue attività in parallelo, in un contenitore iterativo, ad esempio quelli forniti dalla libreria Standard C++. Usa la stessa logica di partizionamento che il `parallel_for` viene utilizzato l'algoritmo. Il `parallel_for_each` libreria C++ Standard è simile all'algoritmo [std:: for_each](../../standard-library/algorithm-functions.md#for_each) algoritmo, con la differenza che il `parallel_for_each` algoritmo esegue le attività contemporaneamente.  
  
 [!code-cpp[concrt-openmp#10](../../parallel/concrt/codesnippet/cpp/how-to-convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime_2.cpp)]  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `concrt-omp-count-primes.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc /openmp concrt-omp-count-primes. cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Migrazione da OpenMP al Runtime di concorrenza](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)   
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)   
 [Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)

