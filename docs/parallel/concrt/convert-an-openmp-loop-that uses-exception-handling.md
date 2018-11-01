---
title: "Procedura: Convertire un ciclo OpenMP che usa la gestione delle eccezioni per l'utilizzo del runtime di concorrenza"
ms.date: 11/04/2016
helpviewer_keywords:
- exception handling, converting from OpenMP to the Concurrency Runtime
- converting from OpenMP to the Concurrency Runtime, exception handling
ms.assetid: 03c28196-21ba-439e-8641-afab1c283e1a
ms.openlocfilehash: f47beb7deffa0511e707768d2a1a84f47e489d5e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50608403"
---
# <a name="how-to-convert-an-openmp-loop-that-uses-exception-handling-to-use-the-concurrency-runtime"></a>Procedura: Convertire un ciclo OpenMP che usa la gestione delle eccezioni per l'utilizzo del runtime di concorrenza

In questo esempio viene illustrato come convertire una OpenMP [parallele](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[per](../../parallel/openmp/reference/for-openmp.md) ciclo che esegue la gestione delle eccezioni per utilizzare il meccanismo di gestione delle eccezioni Runtime di concorrenza.

In OpenMP, un'eccezione generata in un'area parallela deve essere rilevata e gestita nella stessa area dallo stesso thread. Un'eccezione che esegue l'escape di tale area viene intercettata dal gestore di eccezioni non gestite, che termina il processo per impostazione predefinita.

Nel Runtime di concorrenza, quando si genera un'eccezione nel corpo di una funzione lavoro che viene passato a un gruppo di attività, ad esempio un [Concurrency:: task_group](reference/task-group-class.md) oppure [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) oggetto, o per un algoritmo parallelo, ad esempio [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for), il runtime archivia l'eccezione e ne esegue il marshalling nel contesto di attesa per il gruppo di attività o l'algoritmo per terminare. Per i gruppi di attività, il contesto di attesa è il contesto che chiama [Concurrency:: Canceled](reference/task-group-class.md#wait), [task_group](reference/structured-task-group-class.md#wait), [concurrency::task_group::run_and _wait](reference/task-group-class.md#run_and_wait), oppure [concurrency::structured_task_group::run_and_wait](reference/structured-task-group-class.md#run_and_wait). Per un algoritmo parallelo, il contesto di attesa è il contesto che ha chiamato l'algoritmo. Il runtime anche interrompe tutte le attività attive che sono nel gruppo di attività, incluse quelle nei gruppi di attività figlio, ed Elimina tutte le attività che non sono ancora stata avviata.

## <a name="example"></a>Esempio

In questo esempio viene illustrato come gestire le eccezioni in un'OpenMP `parallel` regione e in una chiamata a `parallel_for`. Il `do_work` la funzione esegue una richiesta di allocazione di memoria che non riesce e verrà pertanto generata un'eccezione di tipo [std:: bad_alloc](../../standard-library/bad-alloc-class.md). Nella versione che usa OpenMP, il thread che genera l'eccezione deve anche intercettarla. In altre parole, ogni iterazione di un ciclo OpenMP parallel deve gestire l'eccezione. Nella versione che usa il Runtime di concorrenza, il thread principale rileva un'eccezione generata da un altro thread.

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

Nella versione di questo esempio che usa OpenMP, l'eccezione si verifica e viene gestita da ogni iterazione del ciclo. Nella versione che usa il Runtime di concorrenza, il runtime archivia l'eccezione, arresta tutte le attività attive, Elimina tutte le attività che non sono ancora stati avviati ed effettua il marshalling di eccezione per il contesto che chiama `parallel_for`.

Se è necessario che la versione che usa OpenMP termina dopo la generazione dell'eccezione, è possibile utilizzare un flag booleano per segnalare alle altre iterazioni del ciclo che si è verificato l'errore. Come illustrato nell'esempio nell'argomento [procedura: convertire un ciclo OpenMP che annullamento per l'uso del Runtime di concorrenza Usa](../../parallel/concrt/convert-an-openmp-loop-that-uses-cancellation.md), iterazioni del ciclo successivo farebbe nulla se il flag è impostato. Viceversa, se è necessario che il ciclo che usa il Runtime di concorrenza continua dopo che l'eccezione si verifica, gestire l'eccezione nel corpo del ciclo parallelo se stesso.

Altri componenti di Runtime di concorrenza, ad esempio gli agenti asincroni e le attività leggere, non il trasferimento delle eccezioni. Al contrario, vengono rilevate le eccezioni non gestite dal gestore di eccezioni non gestite, che termina il processo per impostazione predefinita. Per altre informazioni sulla gestione delle eccezioni, vedere [gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

Per altre informazioni sulle `parallel_for` e altri algoritmi paralleli, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `concrt-omp-exceptions.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc /openmp concrt-omp-Exceptions. cpp**

## <a name="see-also"></a>Vedere anche

[Migrazione da OpenMP al runtime di concorrenza](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)<br/>
[Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)<br/>
[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)

