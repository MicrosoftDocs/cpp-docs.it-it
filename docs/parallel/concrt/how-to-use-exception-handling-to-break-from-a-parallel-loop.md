---
title: 'Procedura: Usare la gestione delle eccezion per interrompere un ciclo Parallel'
ms.date: 11/04/2016
helpviewer_keywords:
- search algorithm, writing [Concurrency Runtime]
- writing a search algorithm [Concurrency Runtime]
ms.assetid: 16d7278c-2d10-4014-9f58-f1899e719ff9
ms.openlocfilehash: f6842e3093a577289c0c4432d96298e3c7b2bb92
ms.sourcegitcommit: 43cee7a0d41a062661229043c2f7cbc6ace17fa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/13/2020
ms.locfileid: "92008498"
---
# <a name="how-to-use-exception-handling-to-break-from-a-parallel-loop"></a>Procedura: Usare la gestione delle eccezion per interrompere un ciclo Parallel

In questo argomento viene illustrato come scrivere un algoritmo di ricerca per una struttura ad albero di base.

Nell'argomento [annullamento](cancellation-in-the-ppl.md) viene illustrato il ruolo dell'annullamento nella libreria di modelli paralleli. L'uso della gestione delle eccezioni è un metodo meno efficiente per annullare il lavoro parallelo rispetto all'uso dei metodi [Concurrency:: task_group:: Cancel](reference/task-group-class.md#cancel) e [Concurrency:: structured_task_group:: Cancel](reference/structured-task-group-class.md#cancel) . Tuttavia, uno scenario in cui l'utilizzo della gestione delle eccezioni per annullare il lavoro è appropriato è quando si effettua una chiamata in una libreria di terze parti che utilizza attività o algoritmi paralleli, ma non fornisce un `task_group` `structured_task_group` oggetto o da annullare.

## <a name="example-basic-tree-type"></a>Esempio: tipo di albero di base

Nell'esempio seguente viene illustrato un `tree` tipo di base che contiene un elemento dati e un elenco di nodi figlio. Nella sezione seguente viene illustrato il corpo del `for_all` metodo, che esegue in modo ricorsivo una funzione lavoro in ogni nodo figlio.

[!code-cpp[concrt-task-tree-search#2](../../parallel/concrt/codesnippet/cpp/how-to-use-exception-handling-to-break-from-a-parallel-loop_1.cpp)]

## <a name="example-perform-work-in-parallel"></a>Esempio: eseguire il lavoro in parallelo

Nell'esempio seguente viene illustrato il `for_all` metodo. Usa l'algoritmo [Concurrency::p arallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) per eseguire una funzione lavoro in ogni nodo dell'albero in parallelo.

[!code-cpp[concrt-task-tree-search#1](../../parallel/concrt/codesnippet/cpp/how-to-use-exception-handling-to-break-from-a-parallel-loop_2.cpp)]

## <a name="example--search-the-tree-for-a-value"></a>Esempio: ricerca di un valore nell'albero

Nell'esempio seguente viene illustrata la funzione `search_for_value` che cerca un valore nell'oggetto `tree` fornito. Questa funzione passa al `for_all` Metodo una funzione lavoro che genera un'eccezione quando trova un nodo della struttura ad albero che contiene il valore fornito.

Si supponga che la `tree` classe venga fornita da una libreria di terze parti e che non sia possibile modificarla. In questo caso, l'utilizzo della gestione delle eccezioni è appropriato perché il `for_all` metodo non fornisce un `task_group` `structured_task_group` oggetto o al chiamante. Pertanto, la funzione lavoro non è in grado di annullare direttamente il gruppo di attività padre.

Quando la funzione lavoro fornita a un gruppo di attività genera un'eccezione, il runtime arresta tutte le attività presenti nel gruppo di attività (inclusi i gruppi di attività figlio) ed Elimina tutte le attività non ancora avviate. La `search_for_value` funzione usa un **`try`** - **`catch`** blocco per acquisire l'eccezione e stampare il risultato nella console.

[!code-cpp[concrt-task-tree-search#3](../../parallel/concrt/codesnippet/cpp/how-to-use-exception-handling-to-break-from-a-parallel-loop_3.cpp)]

## <a name="example-create-and-search-a-tree-in-parallel"></a>Esempio: creare ed eseguire ricerche in un albero in parallelo

Nell'esempio seguente viene creato un `tree` oggetto e viene eseguita la ricerca di diversi valori in parallelo. La `build_tree` funzione viene illustrata più avanti in questo argomento.

[!code-cpp[concrt-task-tree-search#4](../../parallel/concrt/codesnippet/cpp/how-to-use-exception-handling-to-break-from-a-parallel-loop_4.cpp)]

In questo esempio viene utilizzato l'algoritmo [Concurrency::p arallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) per cercare i valori in parallelo. Per ulteriori informazioni su questo algoritmo, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

## <a name="example-finished-exception-handling-code-sample"></a>Esempio: fine dell'esempio di codice di gestione delle eccezioni

Nell'esempio completo seguente viene utilizzata la gestione delle eccezioni per la ricerca di valori in una struttura ad albero di base.

[!code-cpp[concrt-task-tree-search#5](../../parallel/concrt/codesnippet/cpp/how-to-use-exception-handling-to-break-from-a-parallel-loop_5.cpp)]

Questo esempio produce l'output di esempio seguente.

```Output
Found a node with value 32614.
Found a node with value 86131.
Did not find node with value 17522.
```

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `task-tree-search.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **cl.exe/EHsc Task-tree-search. cpp**

## <a name="see-also"></a>Vedere anche

[Annullamento nella libreria PPL](cancellation-in-the-ppl.md)<br/>
[Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)<br/>
[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[Classe task_group](reference/task-group-class.md)<br/>
[Classe structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md)<br/>
[Funzione parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each)
