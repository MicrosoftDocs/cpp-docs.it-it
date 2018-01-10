---
title: 'Procedura: utilizzare eccezioni per interrompere un ciclo Parallel | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- search algorithm, writing [Concurrency Runtime]
- writing a search algorithm [Concurrency Runtime]
ms.assetid: 16d7278c-2d10-4014-9f58-f1899e719ff9
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 29140c339614e572733988bd7ca5e14561cee5dd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-use-exception-handling-to-break-from-a-parallel-loop"></a>Procedura: Usare la gestione delle eccezion per interrompere un ciclo Parallel
In questo argomento viene illustrato come scrivere un algoritmo di ricerca per una struttura ad albero di base.  
  
 L'argomento [annullamento](cancellation-in-the-ppl.md) viene illustrato il ruolo dell'annullamento nella libreria PPL. L'utilizzo di gestione delle eccezioni è meno efficace per annullare un lavoro parallelo rispetto all'utilizzo della [concurrency::task_group::cancel](reference/task-group-class.md#cancel) e [structured_task_group](reference/structured-task-group-class.md#cancel) metodi. Tuttavia, è di uno scenario in cui l'uso di gestione delle eccezioni per annullare il lavoro è appropriato quando si chiama una libreria di terze parti che utilizza l'attività o gli algoritmi paralleli, ma non fornisce un `task_group` o `structured_task_group` oggetto da annullare.  

  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato un basic `tree` tipo che contiene un elemento dati e un elenco di nodi figlio. Nella sezione seguente illustra il corpo del `for_all` (metodo), che esegue una funzione lavoro in ogni nodo figlio.  
  
 [!code-cpp[concrt-task-tree-search#2](../../parallel/concrt/codesnippet/cpp/how-to-use-exception-handling-to-break-from-a-parallel-loop_1.cpp)]  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente il `for_all` metodo. Usa il [Concurrency:: parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) algoritmo per eseguire una funzione lavoro in ogni nodo della struttura ad albero in parallelo.  
  
 [!code-cpp[concrt-task-tree-search#1](../../parallel/concrt/codesnippet/cpp/how-to-use-exception-handling-to-break-from-a-parallel-loop_2.cpp)]  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrata la funzione `search_for_value` che cerca un valore nell'oggetto `tree` fornito. Questa funzione passa il `for_all` metodo una funzione lavoro che genera un'eccezione quando viene trovato un nodo dell'albero che contiene il valore specificato.  
  
 Si supponga che la `tree` classe viene fornita da una libreria di terze parti e che non è possibile modificare. In questo caso, l'uso di gestione delle eccezioni è appropriato in quanto il `for_all` metodo non fornisce un `task_group` o `structured_task_group` oggetto al chiamante. Pertanto, la funzione lavoro non è possibile annullare direttamente il gruppo di attività padre.  
  
 Quando la funzione lavoro che viene fornito a un gruppo di attività genera un'eccezione, il runtime arresta tutte le attività presenti nel gruppo di attività (inclusi i gruppi di attività figlio) ed Elimina tutte le attività che non sono ancora avviate. Il `search_for_value` funzione Usa un `try` - `catch` blocco per acquisire l'eccezione e stampare il risultato nella console.  
  
 [!code-cpp[concrt-task-tree-search#3](../../parallel/concrt/codesnippet/cpp/how-to-use-exception-handling-to-break-from-a-parallel-loop_3.cpp)]  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene creato un `tree` dell'oggetto e viene eseguita la ricerca di valori diversi in parallelo. Il `build_tree` funzione è illustrata più avanti in questo argomento.  
  
 [!code-cpp[concrt-task-tree-search#4](../../parallel/concrt/codesnippet/cpp/how-to-use-exception-handling-to-break-from-a-parallel-loop_4.cpp)]  
  
 Questo esempio viene utilizzato il [Concurrency:: parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) algoritmo per cercare i valori in parallelo. Per ulteriori informazioni su questo algoritmo, vedere [gli algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
## <a name="example"></a>Esempio  
 L'esempio completo seguente usa la gestione delle eccezioni per cercare i valori in una struttura ad albero di base.  
  
 [!code-cpp[concrt-task-tree-search#5](../../parallel/concrt/codesnippet/cpp/how-to-use-exception-handling-to-break-from-a-parallel-loop_5.cpp)]  
  
 Questo esempio produce il seguente output di esempio.  
  
```Output  
Found a node with value 32614.  
Found a node with value 86131.  
Did not find node with value 17522.  
```  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `task-tree-search.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc attività-struttura-Search. cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Annullamento nella libreria PPL](cancellation-in-the-ppl.md)   
 [Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)   
 [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)   
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)   
 [Classe task_group](reference/task-group-class.md)   
 [Classe structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md)   
 [Funzione parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each)


