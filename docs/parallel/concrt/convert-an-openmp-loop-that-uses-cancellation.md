---
title: "Procedura: Convertire un ciclo OpenMP che usa l'annullamento per l'utilizzo del runtime di concorrenza"
ms.date: 11/04/2016
helpviewer_keywords:
- converting from OpenMP to the Concurrency Runtime, cancellation
- cancellation, converting from OpenMP to the Concurrency Runtime
ms.assetid: 4b0b3c33-bfa9-4e96-ae08-aef245a39cbb
ms.openlocfilehash: adde6decc086b883c50e52d12e388197e185fb39
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91505950"
---
# <a name="how-to-convert-an-openmp-loop-that-uses-cancellation-to-use-the-concurrency-runtime"></a>Procedura: Convertire un ciclo OpenMP che usa l'annullamento per l'utilizzo del runtime di concorrenza

Per alcuni cicli paralleli non è necessario che vengano eseguite tutte le iterazioni. Ad esempio, un algoritmo che cerca un valore può terminare dopo che il valore è stato trovato. OpenMP non fornisce un meccanismo per interrompere un ciclo parallelo. Tuttavia, è possibile usare un valore booleano o un flag per consentire a un'iterazione del ciclo di indicare che la soluzione è stata trovata. Il runtime di concorrenza fornisce funzionalità che consentono a un'attività di annullare altre attività che non sono ancora state avviate.

In questo esempio viene illustrato come convertire un ciclo OpenMP [Parallel](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[for](../openmp/reference/openmp-directives.md#for-openmp) che non richiede l'esecuzione di tutte le iterazioni per l'utilizzo del meccanismo di annullamento runtime di concorrenza.

## <a name="example"></a>Esempio

Questo esempio USA OpenMP e il runtime di concorrenza per implementare una versione parallela dell'algoritmo [std:: any_of](../../standard-library/algorithm-functions.md#any_of) . La versione OpenMP di questo esempio usa un flag per coordinare tra tutte le iterazioni del ciclo parallelo che la condizione è stata soddisfatta. La versione che usa la runtime di concorrenza usa il metodo [Concurrency:: structured_task_group:: Cancel](reference/structured-task-group-class.md#cancel) per arrestare l'operazione complessiva quando viene soddisfatta la condizione.

[!code-cpp[concrt-openmp#2](../../parallel/concrt/codesnippet/cpp/convert-an-openmp-loop-that-uses-cancellation_1.cpp)]

Questo esempio produce il seguente output:

```Output
Using OpenMP...
9114046 is in the array.
Using the Concurrency Runtime...
9114046 is in the array.
```

Nella versione di che utilizza OpenMP tutte le iterazioni del ciclo vengono eseguite, anche quando il flag è impostato. Inoltre, se un'attività deve avere attività figlio, il flag deve essere disponibile anche per le attività figlio per comunicare l'annullamento. Nel runtime di concorrenza, quando un gruppo di attività viene annullato, il runtime annulla l'intera struttura ad albero del lavoro, incluse le attività figlio. L'algoritmo [Concurrency::p arallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) usa le attività per eseguire il lavoro. Pertanto, quando un'iterazione del ciclo annulla l'attività radice, viene annullata anche l'intera struttura ad albero del calcolo. Quando un albero di lavoro viene annullato, il runtime non avvia nuove attività. Tuttavia, il runtime consente di completare le attività già avviate. Pertanto, nel caso dell' `parallel_for_each` algoritmo, le iterazioni del ciclo attivo possono pulire le proprie risorse.

In entrambe le versioni di questo esempio, se la matrice contiene più di una copia del valore da cercare, le iterazioni a più cicli possono impostare simultaneamente il risultato e annullare l'operazione complessiva. È possibile usare una primitiva di sincronizzazione, ad esempio una sezione critica, se il problema richiede che una sola attività esegua il lavoro quando viene soddisfatta una condizione.

È inoltre possibile utilizzare la gestione delle eccezioni per annullare le attività che utilizzano la libreria PPL. Per ulteriori informazioni sull'annullamento, vedere [annullamento nella libreria PPL](cancellation-in-the-ppl.md).

Per ulteriori informazioni su `parallel_for_each` e su altri algoritmi paralleli, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `concrt-omp-parallel-any-of.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **cl.exe/EHsc/OpenMP concrt-omp-parallel-any-of. cpp**

## <a name="see-also"></a>Vedere anche

[Migrazione da OpenMP al runtime di concorrenza](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)<br/>
[Annullamento nella libreria PPL](cancellation-in-the-ppl.md)<br/>
[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)
