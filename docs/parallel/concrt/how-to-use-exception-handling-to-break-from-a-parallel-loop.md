---
title: 'Procedura: Usare la gestione delle eccezion per interrompere un ciclo Parallel'
ms.date: 11/04/2016
helpviewer_keywords:
- search algorithm, writing [Concurrency Runtime]
- writing a search algorithm [Concurrency Runtime]
ms.assetid: 16d7278c-2d10-4014-9f58-f1899e719ff9
ms.openlocfilehash: a9557f2fc809647215dbb5fd928f5c638af6ed62
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50532886"
---
# <a name="how-to-use-exception-handling-to-break-from-a-parallel-loop"></a>Procedura: Usare la gestione delle eccezion per interrompere un ciclo Parallel

Questo argomento illustra come scrivere un algoritmo di ricerca per una struttura ad albero di base.

L'argomento [annullamento](cancellation-in-the-ppl.md) viene illustrato il ruolo dell'annullamento nella libreria PPL. L'uso di gestione delle eccezioni è un modo meno efficiente per annullare un lavoro parallelo rispetto all'utilizzo dei [concurrency::task_group::cancel](reference/task-group-class.md#cancel) e [Concurrency](reference/structured-task-group-class.md#cancel) metodi. Tuttavia, uno scenario in cui l'uso di gestione delle eccezioni per annullare il lavoro è appropriata è quando si chiama una libreria di terze parti che usa gli algoritmi paralleli o attività, ma non è incluso un `task_group` o `structured_task_group` oggetto da annullare.

## <a name="example"></a>Esempio

L'esempio seguente illustra una semplice `tree` tipo che contiene un elemento dati e un elenco di nodi figlio. La sezione seguente illustra il corpo del `for_all` metodo, che in modo ricorsivo esegue una funzione lavoro in ogni nodo figlio.

[!code-cpp[concrt-task-tree-search#2](../../parallel/concrt/codesnippet/cpp/how-to-use-exception-handling-to-break-from-a-parallel-loop_1.cpp)]

## <a name="example"></a>Esempio

L'esempio seguente illustra il `for_all` (metodo). Usa il [Concurrency:: parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) algoritmo per eseguire una funzione lavoro in ogni nodo della struttura ad albero in parallelo.

[!code-cpp[concrt-task-tree-search#1](../../parallel/concrt/codesnippet/cpp/how-to-use-exception-handling-to-break-from-a-parallel-loop_2.cpp)]

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrata la funzione `search_for_value` che cerca un valore nell'oggetto `tree` fornito. Questa funzione passa la `for_all` metodo una funzione lavoro che genera un'eccezione quando viene trovato un nodo dell'albero che contiene il valore specificato.

Si supponga che il `tree` classe viene fornita da una libreria di terze parti e che è possibile modificarla. In questo caso, l'uso di gestione delle eccezioni è appropriato perché le `for_all` metodo non fornisce un `task_group` o `structured_task_group` oggetto al chiamante. Pertanto, la funzione lavoro non riesce a direttamente annullare il gruppo di attività padre.

Quando la funzione lavoro che viene fornito a un gruppo di attività genera un'eccezione, il runtime arresta tutte le attività che fanno parte del gruppo di attività (inclusi i gruppi di attività figlio) ed Elimina tutte le attività che non sono ancora stata avviata. Il `search_for_value` funzione Usa un `try` - `catch` blocco da acquisire l'eccezione e stampare il risultato nella console.

[!code-cpp[concrt-task-tree-search#3](../../parallel/concrt/codesnippet/cpp/how-to-use-exception-handling-to-break-from-a-parallel-loop_3.cpp)]

## <a name="example"></a>Esempio

L'esempio seguente crea un `tree` dell'oggetto e vi cerca valori diversi in parallelo. Il `build_tree` funzione è illustrata più avanti in questo argomento.

[!code-cpp[concrt-task-tree-search#4](../../parallel/concrt/codesnippet/cpp/how-to-use-exception-handling-to-break-from-a-parallel-loop_4.cpp)]

Questo esempio Usa la [Concurrency:: parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) algoritmo per cercare i valori in parallelo. Per altre informazioni su questo algoritmo, vedere [gli algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

## <a name="example"></a>Esempio

L'esempio completo seguente usa la gestione delle eccezioni per cercare i valori in una struttura ad albero di base.

[!code-cpp[concrt-task-tree-search#5](../../parallel/concrt/codesnippet/cpp/how-to-use-exception-handling-to-break-from-a-parallel-loop_5.cpp)]

Questo esempio produce l'output di esempio seguente.

```Output
Found a node with value 32614.
Found a node with value 86131.
Did not find node with value 17522.
```

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `task-tree-search.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc attività-struttura-Search. cpp**

## <a name="see-also"></a>Vedere anche

[Annullamento nella libreria PPL](cancellation-in-the-ppl.md)<br/>
[Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)<br/>
[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[Classe task_group](reference/task-group-class.md)<br/>
[Classe structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md)<br/>
[parallel_for_each (funzione)](reference/concurrency-namespace-functions.md#parallel_for_each)

