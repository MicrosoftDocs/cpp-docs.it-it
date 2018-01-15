---
title: 'Procedura: convertire un ciclo OpenMP che usa l''annullamento per l''utilizzo del Runtime di concorrenza | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- converting from OpenMP to the Concurrency Runtime, cancellation
- cancellation, converting from OpenMP to the Concurrency Runtime
ms.assetid: 4b0b3c33-bfa9-4e96-ae08-aef245a39cbb
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d3c4d37dfe5182e375e7581d6f5ef8188b922e5d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-convert-an-openmp-loop-that-uses-cancellation-to-use-the-concurrency-runtime"></a>Procedura: Convertire un ciclo OpenMP che usa l'annullamento per l'utilizzo del runtime di concorrenza
Alcuni cicli paralleli non richiedono che tutte le iterazioni da eseguire. Ad esempio, un algoritmo che cerca un valore può terminare dopo che il valore viene trovato. OpenMP non fornisce un meccanismo per interrompere un ciclo parallelo. Tuttavia, è possibile utilizzare un valore booleano o flag, per consentire a un'iterazione del ciclo per indicare che la soluzione è stata trovata. Il Runtime di concorrenza fornisce funzionalità che consente a un'attività di annullare altre attività che non sono ancora avviate.  
  
 In questo esempio viene illustrato come convertire una OpenMP [parallela](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[per](../../parallel/openmp/reference/for-openmp.md) ciclo che non richiede di eseguire tutte le iterazioni per utilizzare il meccanismo di annullamento del Runtime di concorrenza.  
  
## <a name="example"></a>Esempio  

 In questo esempio utilizza sia OpenMP che il Runtime di concorrenza per implementare una versione parallela del [std:: any_of](../../standard-library/algorithm-functions.md#any_of) algoritmo. La versione di OpenMP di questo esempio utilizza un flag per il coordinamento tra tutte le iterazioni del ciclo parallelo che è stata soddisfatta la condizione. La versione che utilizza il Runtime di concorrenza Usa il [structured_task_group](reference/structured-task-group-class.md#cancel) metodo per interrompere l'operazione globale quando viene soddisfatta la condizione.  

  
 [!code-cpp[concrt-openmp#2](../../parallel/concrt/codesnippet/cpp/convert-an-openmp-loop-that-uses-cancellation_1.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
Using OpenMP...  
9114046 is in the array.  
Using the Concurrency Runtime...  
9114046 is in the array.  
```  
  
 Nella versione di OpenMP che utilizza, eseguire tutte le iterazioni del ciclo, anche quando è impostato il flag. Inoltre, se un'attività dispongono di qualsiasi attività figlio, il flag sarebbe inoltre deve essere disponibile per le attività figlio per comunicare l'annullamento. Nel Runtime di concorrenza, quando un gruppo di attività viene annullato, il runtime Annulla l'intero albero di lavoro, incluse le attività figlio. Il [Concurrency:: parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) algoritmo vengono utilizzate attività per eseguire operazioni. Pertanto, quando un'iterazione del ciclo Annulla l'attività radice, l'intero albero di calcolo viene anche annullata. Quando un albero di lavoro viene annullato, il runtime non Avvia nuova attività. Tuttavia, il runtime consente operazioni che sono già iniziato a fine. Pertanto, in caso del `parallel_for_each` algoritmo, iterazioni del ciclo active possono pulire le risorse.  
  
 In entrambe le versioni di questo esempio, se la matrice contiene più di una copia del valore da cercare, più iterazioni del ciclo possono impostare contemporaneamente il risultato e annullare l'intera operazione. È possibile utilizzare una primitiva di sincronizzazione, ad esempio una sezione critica, se il problema richiede che solo un'attività esegue il lavoro quando viene soddisfatta una condizione.  
  
 È inoltre possibile utilizzare eccezioni per annullare le attività che utilizzano la libreria PPL. Per ulteriori informazioni sull'annullamento, vedere [annullamento nella libreria PPL](cancellation-in-the-ppl.md).  
  
 Per ulteriori informazioni su `parallel_for_each` e altri algoritmi paralleli, vedere [gli algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `concrt-omp-parallel-any-of.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc /openmp concrt-omp-parallelo-any-of. cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Migrazione da OpenMP al Runtime di concorrenza](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)   
 [Annullamento nella libreria PPL](cancellation-in-the-ppl.md)   
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)

