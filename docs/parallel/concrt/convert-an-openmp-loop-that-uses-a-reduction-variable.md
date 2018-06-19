---
title: 'Procedura: convertire un ciclo OpenMP che utilizza una variabile di riduzione per utilizzare il Runtime di concorrenza | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- converting from OpenMP to the Concurrency Runtime, reduction variables
- reduction variables, converting from OpenMP to the Concurrency Runtime
ms.assetid: 96623f36-5e57-4d3f-8c13-669e6cd535b1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0191f88eea47d21c730172ddb3594db7655006ca
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33692769"
---
# <a name="how-to-convert-an-openmp-loop-that-uses-a-reduction-variable-to-use-the-concurrency-runtime"></a>Procedura: Convertire un ciclo OpenMP che usa una variabile di riduzione per l'utilizzo del runtime di concorrenza
In questo esempio viene illustrato come convertire una OpenMP [parallela](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[per](../../parallel/openmp/reference/for-openmp.md) ciclo che utilizza il [riduzione](../../parallel/openmp/reference/reduction.md) clausola da utilizzare il Runtime di concorrenza.  
  
 Il OpenMP `reduction` clausola consente di specificare uno o più variabili di thread privato che sono soggette a un'operazione di riduzione alla fine di tale area. OpenMP sono disponibili un set di operatori di riduzione. Ogni variabile di riduzione deve essere un valore scalare (ad esempio, `int`, `long`, e `float`). OpenMP definisce inoltre numerose restrizioni sull'utilizzo di variabili di riduzione in un'area parallela.  
  
 Parallel Patterns Library (PPL) fornisce il [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) (classe), che fornisce l'archiviazione locale di thread e riutilizzabile che consente di eseguire calcoli accurati e quindi unire i calcoli in un finale risultato. La `combinable` classe è un modello che agisce su tipi complessi e scalari. Utilizzare il `combinable` classe, eseguire calcoli secondari nel corpo di un costrutto parallelo e quindi chiamare il [concurrency::combinable::combine](reference/combinable-class.md#combine) o [concurrency::combinable::combine_each](reference/combinable-class.md#combine_each) metodo per produrre il risultato finale. Il `combine` e `combine_each` ogni metodi accettano un *combinare funzione* che specifica come combinare ogni coppia di elementi. Pertanto, la `combinable` classe non è limitata a un set fisso di operatori di riduzione.  
  
## <a name="example"></a>Esempio  
 In questo esempio Usa OpenMP sia il Runtime di concorrenza per calcolare la somma dei numeri di Fibonacci innanzitutto 35.  
  
 [!code-cpp[concrt-openmp#7](../../parallel/concrt/codesnippet/cpp/convert-an-openmp-loop-that-uses-a-reduction-variable_1.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
Using OpenMP...  
The sum of the first 35 Fibonacci numbers is 14930351.  
Using the Concurrency Runtime...  
The sum of the first 35 Fibonacci numbers is 14930351.  
```  
  
 Per ulteriori informazioni sul `combinable` classe, vedere [contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md).  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `concrt-omp-fibonacci-reduction.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc /openmp concrt-omp-fibonacci-Reduction. cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Migrazione da OpenMP al Runtime di concorrenza](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)   
 [Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)

