---
title: 'Procedura: usare la classe combinable per combinare set | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- combinable class, example
- combining sets with combinable [Concurrency Runtime]
ms.assetid: 66ffe8e3-6bbb-4e9f-b790-b612922a68a7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 689dacb98bc9f8053686a02414151b4982edca67
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33695772"
---
# <a name="how-to-use-combinable-to-combine-sets"></a>Procedura: Usare l'oggetto combinable per combinare set
In questo argomento viene illustrato come utilizzare il [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) classe per calcolare il set di numeri primi.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene calcolato il set di numeri primi due volte. Ogni calcolo archivia il risultato in un [std:: bitset](../../standard-library/bitset-class.md) oggetto. Nell'esempio viene innanzitutto calcola il set in modo seriale e quindi Calcola in parallelo. L'esempio inoltre visualizza nella console il tempo necessario per eseguire entrambi i calcoli.  
  
 Questo esempio viene utilizzato il [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algoritmo e un `combinable` oggetto per generare set di thread locali. Viene quindi utilizzato il [concurrency::combinable::combine_each](reference/combinable-class.md#combine_each) metodo per combinare i set di thread locali nel set finale.  

  
 [!code-cpp[concrt-parallel-combine-primes#1](../../parallel/concrt/codesnippet/cpp/how-to-use-combinable-to-combine-sets_1.cpp)]  
  
 L'output di esempio seguente è relativo a un computer con quattro processori.  
  
```Output  
serial time: 312 ms  
 
parallel time: 78 ms  
```  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-combine-primes.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc parallel-combine-primes. cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)   
 [combinable (classe)](../../parallel/concrt/reference/combinable-class.md)   
 [Metodo combinable:: combine_each](reference/combinable-class.md#combine_each)


