---
title: "Procedura: Usare la gestione delle eccezion per interrompere un ciclo Parallel | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "algoritmo di ricerca, scrittura [Runtime di concorrenza]"
  - "scrittura di algoritmi di ricerca [Runtime di concorrenza]"
ms.assetid: 16d7278c-2d10-4014-9f58-f1899e719ff9
caps.latest.revision: 15
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: Usare la gestione delle eccezion per interrompere un ciclo Parallel
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come scrivere un algoritmo di ricerca per una struttura ad albero di base.  
  
 Nell'argomento [Annullamento](../../parallel/concrt/cancellation-in-the-ppl.md) viene illustrato il ruolo dell'annullamento nella libreria PPL \(Parallel Patterns Library\).  L'utilizzo della gestione delle eccezioni rappresenta il modo meno efficiente per annullare un lavoro parallelo rispetto all'utilizzo dei metodi [concurrency::task\_group::cancel](../Topic/task_group::cancel%20Method.md) e [concurrency::structured\_task\_group::cancel](../Topic/structured_task_group::cancel%20Method.md).  Tuttavia, uno scenario in cui l'utilizzo della gestione delle eccezioni per annullare un lavoro risulta appropriato è quando si effettua una chiamata in una libreria di terze parti che utilizza attività o algoritmi paralleli ma non fornisce un oggetto `task_group` or `structured_task_group` per l'annullamento.  
  
## Esempio  
 Nell'esempio seguente viene illustrato un tipo `tree` di base che contiene un elemento dati e un elenco di nodi figlio.  Nella sezione seguente viene illustrato il corpo del metodo `for_all`, che esegue in modo ricorsivo una funzione lavoro in ogni nodo figlio.  
  
 [!code-cpp[concrt-task-tree-search#2](../../parallel/concrt/codesnippet/CPP/how-to-use-exception-handling-to-break-from-a-parallel-loop_1.cpp)]  
  
## Esempio  
 Nell'esempio seguente viene illustrato il metodo `for_all`.  Viene utilizzato l'algoritmo [concurrency::parallel\_for\_each](../Topic/parallel_for_each%20Function.md) per eseguire una funzione lavoro in ogni nodo dell'albero in parallelo.  
  
 [!code-cpp[concrt-task-tree-search#1](../../parallel/concrt/codesnippet/CPP/how-to-use-exception-handling-to-break-from-a-parallel-loop_2.cpp)]  
  
## Esempio  
 Nell'esempio seguente viene illustrata la funzione `search_for_value` che cerca un valore nell'oggetto `tree` fornito.  Questa funzione passa al metodo `for_all` una funzione lavoro generata quando trova un nodo della struttura ad albero che contiene il valore fornito.  
  
 Si supponga che la classe `tree` venga fornita da una libreria di terze parti e che non sia possibile modificarla.  In questo caso, l'utilizzo della gestione delle eccezioni è appropriato poiché il metodo `for_all` non fornisce un oggetto `task_group` o `structured_task_group` al chiamante.  Pertanto, la funzione lavoro non è in grado di annullare direttamente il gruppo di attività padre.  
  
 Quando la funzione lavoro fornita a un gruppo di attività genera un'eccezione, il runtime arresta tutte le attività presenti nel gruppo di attività, compresi i gruppi di attività figlio, ed elimina le attività che non sono ancora state avviate.  La funzione `search_for_value` utilizza un blocco `try`\-`catch` per acquisire l'eccezione e visualizzare il risultato nella console.  
  
 [!code-cpp[concrt-task-tree-search#3](../../parallel/concrt/codesnippet/CPP/how-to-use-exception-handling-to-break-from-a-parallel-loop_3.cpp)]  
  
## Esempio  
 Nell'esempio seguente viene creato un oggetto `tree`, in cui vengono ricercati diversi valori in parallelo.  La funzione `build_tree` viene illustrata più avanti in questo argomento.  
  
 [!code-cpp[concrt-task-tree-search#4](../../parallel/concrt/codesnippet/CPP/how-to-use-exception-handling-to-break-from-a-parallel-loop_4.cpp)]  
  
 In questo esempio viene utilizzato l'algoritmo [concurrency::parallel\_invoke](../Topic/parallel_invoke%20Function.md) per cercare i valori in parallelo.  Per ulteriori informazioni su questo algoritmo, vedere [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
## Esempio  
 Nell'esempio completo seguente viene utilizzata la gestione delle eccezioni per cercare i valori in una struttura ad albero di base.  
  
 [!code-cpp[concrt-task-tree-search#5](../../parallel/concrt/codesnippet/CPP/how-to-use-exception-handling-to-break-from-a-parallel-loop_5.cpp)]  
  
 Questo esempio produce l'output seguente:  
  
  **Found a node with value 32614.**  
**Found a node with value 86131.**  
**Did not find node with value 17522.**   
## Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio o incollarlo in un file denominato `task-tree-search.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc task\-tree\-search.cpp**  
  
## Vedere anche  
 [Annullamento](../../parallel/concrt/cancellation-in-the-ppl.md)   
 [Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)   
 [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)   
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)   
 [Classe task\_group](../Topic/task_group%20Class.md)   
 [Classe structured\_task\_group](../../parallel/concrt/reference/structured-task-group-class.md)   
 [Funzione parallel\_for\_each](../Topic/parallel_for_each%20Function.md)