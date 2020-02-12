---
title: "Procedura: Convertire un ciclo OpenMP che usa la gestione delle eccezioni per l'utilizzo del runtime di concorrenza"
ms.date: 11/04/2016
helpviewer_keywords:
- exception handling, converting from OpenMP to the Concurrency Runtime
- converting from OpenMP to the Concurrency Runtime, exception handling
ms.assetid: 03c28196-21ba-439e-8641-afab1c283e1a
ms.openlocfilehash: 380a96eedb8a70965197c4a5ce0c5199bc268db5
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77141806"
---
# <a name="how-to-convert-an-openmp-loop-that-uses-exception-handling-to-use-the-concurrency-runtime"></a>Procedura: Convertire un ciclo OpenMP che usa la gestione delle eccezioni per l'utilizzo del runtime di concorrenza

Questo esempio illustra come convertire un ciclo OpenMP [Parallel](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[for](../../parallel/openmp/reference/for-openmp.md) che esegue la gestione delle eccezioni per usare il meccanismo di gestione delle eccezioni runtime di concorrenza.

In OpenMP un'eccezione generata in un'area parallela deve essere rilevata e gestita nella stessa area dallo stesso thread. Un'eccezione che ignora l'area parallela viene rilevata dal gestore di eccezioni non gestite, che termina il processo per impostazione predefinita.

Nel runtime di concorrenza, quando si genera un'eccezione nel corpo di una funzione lavoro passata a un gruppo di attività, ad esempio un oggetto [Concurrency:: task_group](reference/task-group-class.md) o [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) o a un algoritmo parallelo come [Concurrency::p arallel_for](reference/concurrency-namespace-functions.md#parallel_for), il runtime archivia tale eccezione e ne esegue il marshalling al contesto che attende il completamento dell'algoritmo o del gruppo di attività. Per i gruppi di attività, il contesto di attesa è il contesto che chiama [Concurrency:: task_group:: wait](reference/task-group-class.md#wait), [Concurrency:: structured_task_group:: wait](reference/structured-task-group-class.md#wait), [Concurrency:: task_group:: run_and_wait](reference/task-group-class.md#run_and_wait)o [concurrency:: structured_task_group:: run_and_wait](reference/structured-task-group-class.md#run_and_wait). Per un algoritmo parallelo, il contesto di attesa è il contesto che ha chiamato tale algoritmo. Il runtime arresta anche tutte le attività attive presenti nel gruppo di attività, incluse quelle nei gruppi di attività figlio, e rimuove le attività non ancora avviate.

## <a name="example"></a>Esempio

Questo esempio illustra come gestire le eccezioni in un'area `parallel` OpenMP e in una chiamata a `parallel_for`. La funzione `do_work` esegue una richiesta di allocazione della memoria che ha esito negativo e genera quindi un'eccezione di tipo [std:: bad_alloc](../../standard-library/bad-alloc-class.md). Nella versione che usa OpenMP, il thread che genera l'eccezione deve anche intercettarlo. In altre parole, ogni iterazione di un ciclo parallelo OpenMP deve gestire l'eccezione. Nella versione che usa la runtime di concorrenza, il thread principale rileva un'eccezione generata da un altro thread.

[!code-cpp[concrt-openmp#3](../../parallel/concrt/codesnippet/cpp/convert-an-openmp-loop-that-uses-exception-handling_1.cpp)]

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

Nella versione di questo esempio che usa OpenMP, l'eccezione si verifica in e viene gestita da ogni iterazione del ciclo. Nella versione che usa la runtime di concorrenza, il runtime archivia l'eccezione, arresta tutte le attività attive, ignora tutte le attività non ancora avviate e ne esegue il marshalling al contesto che chiama `parallel_for`.

Se è necessario che la versione che usa OpenMP termini quando si verifica l'eccezione, è possibile usare un flag booleano per segnalare ad altre iterazioni del ciclo che si è verificato l'errore. Come nell'esempio nell'argomento [procedura: convertire un ciclo OpenMP che usa l'annullamento per usare la runtime di concorrenza](../../parallel/concrt/convert-an-openmp-loop-that-uses-cancellation.md), le iterazioni del ciclo successive non eseguono alcuna operazione se il flag è impostato. Viceversa, se è necessario che il ciclo che utilizza il runtime di concorrenza continui a verificarsi quando si verifica l'eccezione, gestire l'eccezione nel corpo del ciclo parallelo.

Gli altri componenti del runtime di concorrenza, ad esempio gli agenti asincroni e le attività leggere, non trasportano eccezioni. Al contrario, le eccezioni non gestite vengono intercettate dal gestore di eccezioni non gestite, che termina il processo per impostazione predefinita. Per ulteriori informazioni sulla gestione delle eccezioni, vedere [gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

Per ulteriori informazioni su `parallel_for` e altri algoritmi paralleli, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `concrt-omp-exceptions.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **CL. exe/EHsc/OpenMP concrt-omp-exceptions. cpp**

## <a name="see-also"></a>Vedere anche

[Migrazione da OpenMP al runtime di concorrenza](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)<br/>
[Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)<br/>
[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)
