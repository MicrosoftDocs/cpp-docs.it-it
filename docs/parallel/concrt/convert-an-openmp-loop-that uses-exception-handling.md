---
title: 'Procedura: convertire un ciclo OpenMP che utilizza la gestione delle eccezioni per utilizzare il Runtime di concorrenza | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- exception handling, converting from OpenMP to the Concurrency Runtime
- converting from OpenMP to the Concurrency Runtime, exception handling
ms.assetid: 03c28196-21ba-439e-8641-afab1c283e1a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b96273589fb4e7d7e73e7bc72da03a92d5587de8
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33687803"
---
# <a name="how-to-convert-an-openmp-loop-that-uses-exception-handling-to-use-the-concurrency-runtime"></a>Procedura: Convertire un ciclo OpenMP che usa la gestione delle eccezioni per l'utilizzo del runtime di concorrenza
In questo esempio viene illustrato come convertire una OpenMP [parallela](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[per](../../parallel/openmp/reference/for-openmp.md) ciclo che esegue la gestione delle eccezioni per utilizzare il meccanismo di eccezioni di Runtime di concorrenza.  
  
 In OpenMP, un'eccezione che viene generata in un'area parallela deve essere intercettata e gestita nella stessa area dallo stesso thread. Un'eccezione che l'area parallela delle sequenze di escape viene intercettata dal gestore di eccezioni non gestite, che termina il processo per impostazione predefinita.  
  

 Nel Runtime di concorrenza, quando si genera un'eccezione nel corpo di una funzione lavoro passata a un gruppo di attività, ad esempio un [Concurrency:: task_group](reference/task-group-class.md) o [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) oggetto, o per un algoritmo parallelo, ad esempio [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for), il runtime archivia l'eccezione e ne esegue il marshalling per il contesto in attesa per il gruppo di attività o l'algoritmo di fine. Per i gruppi di attività, il contesto di attesa è il contesto che chiama [Concurrency](reference/task-group-class.md#wait), [Concurrency](reference/structured-task-group-class.md#wait), [concurrency::task_group::run_and _wait](reference/task-group-class.md#run_and_wait), o [concurrency::structured_task_group::run_and_wait](reference/structured-task-group-class.md#run_and_wait). Per un algoritmo parallelo, il contesto in attesa è il contesto che ha chiamato l'algoritmo. Inoltre, il runtime arresta tutte le attività attive che sono nel gruppo di attività, comprese quelle dei gruppi di attività figlio, ed Elimina tutte le attività che non sono ancora state avviate.  


  
## <a name="example"></a>Esempio  
 In questo esempio viene illustrato come gestire le eccezioni in una OpenMP `parallel` area e in una chiamata a `parallel_for`. Il `do_work` funzione esegue una richiesta di allocazione di memoria che non è riuscita e pertanto genera un'eccezione di tipo [std:: bad_alloc](../../standard-library/bad-alloc-class.md). Nella versione che utilizza OpenMP, il thread che genera l'eccezione deve anche intercettarla. In altre parole, ogni iterazione di un ciclo parallelo OpenMP deve gestire l'eccezione. Nella versione che utilizza il Runtime di concorrenza, il thread principale rileva un'eccezione generata da un altro thread.  
  
 [!code-cpp[concrt-openmp#3](../../parallel/concrt/codesnippet/cpp/convert-an-openmp-loop-that uses-exception-handling_1.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
Using OpenMP...  
An error of type 'class std::bad_alloc' occurred.  
An error of type 'class std::bad_alloc' occurred.  
An error of type 'class std::bad_alloc' occurred.  
An error of type 'class std::bad_alloc' occurred.  
An error of type 'class std::bad_alloc' occurred.  
An error of type 'class std::bad_alloc' occurred.  
An error of type 'class std::bad_alloc' occurred.  
An error of type 'class std::bad_alloc' occurred.  
An error of type 'class std::bad_alloc' occurred.  
An error of type 'class std::bad_alloc' occurred.  
Using the Concurrency Runtime...  
An error of type 'class std::bad_alloc' occurred.  
```  
  
 Nella versione di questo esempio che utilizza OpenMP, l'eccezione si verifica e viene gestita da ogni iterazione del ciclo. Nella versione che utilizza il Runtime di concorrenza, il runtime archivia l'eccezione, arresta tutte le attività attive, Elimina tutte le attività che non sono ancora state avviate ed effettua il marshalling nel contesto che chiama la generazione dell'eccezione `parallel_for`.  
  
 Se è necessario che la versione che utilizza OpenMP termina dopo la generazione dell'eccezione, è possibile utilizzare un flag booleano per indicare che si è verificato l'errore altre iterazioni del ciclo. Come illustrato nell'esempio nell'argomento [procedura: convertire un ciclo OpenMP che annullamento utilizzato per l'utilizzo del Runtime di concorrenza](../../parallel/concrt/convert-an-openmp-loop-that-uses-cancellation.md), iterazioni del ciclo successivo potrebbero non eseguire alcuna operazione se il flag è impostato. Viceversa, se è necessario che il ciclo che utilizza il Runtime di concorrenza continua dopo che l'eccezione si verifica, gestire l'eccezione nel corpo del ciclo parallelo stesso.  
  
 Altri componenti di Runtime di concorrenza, ad esempio gli agenti asincroni e le attività leggere, non il trasferimento delle eccezioni. Al contrario, le eccezioni non gestite vengono rilevate dal gestore di eccezioni non gestite, che termina il processo per impostazione predefinita. Per ulteriori informazioni sulla gestione delle eccezioni, vedere [eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).  
  
 Per ulteriori informazioni su `parallel_for` e altri algoritmi paralleli, vedere [gli algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `concrt-omp-exceptions.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc /openmp concrt-omp-Exceptions. cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Migrazione da OpenMP al Runtime di concorrenza](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)   
 [Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)   
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)

