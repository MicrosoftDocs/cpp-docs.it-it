---
description: 'Altre informazioni su: migrazione da OpenMP a runtime di concorrenza'
title: Migrazione da OpenMP al runtime di concorrenza
ms.date: 11/04/2016
helpviewer_keywords:
- Concurrency Runtime, migrating from OpenMP
- OpenMP, migrating to the Concurrency Runtime
ms.assetid: 9bab7bb1-e45d-44b2-8509-3b226be2c93b
ms.openlocfilehash: ab9b50f0cdebcc8fc601565dd19c5c2704c17d95
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97193084"
---
# <a name="migrating-from-openmp-to-the-concurrency-runtime"></a>Migrazione da OpenMP al runtime di concorrenza

Il runtime di concorrenza consente diversi modelli di programmazione. Questi modelli possono sovrapporsi ai modelli di altre librerie o integrarsi con essi. I documenti in questa sezione confrontano [OpenMP](../../parallel/concrt/comparing-the-concurrency-runtime-to-other-concurrency-models.md#openmp) con il runtime di concorrenza e forniscono esempi su come eseguire la migrazione del codice OpenMP esistente per l'uso del runtime di concorrenza.

Il modello di programmazione OpenMP è definito da uno standard aperto e include associazioni ben definite ai linguaggi di programmazione Fortran e C/C++. Le versioni OpenMP 2,0 e 2,5, supportate dal compilatore Microsoft C++, sono particolarmente adatte per gli algoritmi paralleli che sono iterativi. ovvero eseguono l'iterazione parallela su una matrice di dati. OpenMP 3,0 supporta attività non iterative, oltre alle attività iterative.

OpenMP è molto efficiente quando il grado di parallelismo è predeterminato e corrisponde alle risorse disponibili nel sistema. Il modello OpenMP è una corrispondenza particolarmente efficace per il calcolo ad alte prestazioni, in cui i problemi di calcolo molto grandi vengono distribuiti nelle risorse di elaborazione di un computer. In questo scenario, l'ambiente hardware viene in genere risolto e lo sviluppatore può ragionevolmente prevedere l'accesso esclusivo a tutte le risorse di elaborazione quando viene eseguito l'algoritmo.

Gli ambienti di elaborazione meno vincolati, tuttavia, potrebbero non essere una corrispondenza corretta per OpenMP. I problemi ricorsivi, ad esempio l'algoritmo QuickSort o la ricerca di un albero di dati, sono ad esempio più difficili da implementare utilizzando OpenMP 2,0 e 2,5. Il runtime di concorrenza integra le funzionalità di OpenMP fornendo la libreria di [agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) e la libreria PPL ( [Parallel Patterns Library](../../parallel/concrt/parallel-patterns-library-ppl.md) ). La libreria di agenti asincroni supporta il parallelismo delle attività con granularità grossolana. la libreria PPL supporta attività parallele con granularità fine. Il runtime di concorrenza fornisce l'infrastruttura necessaria per eseguire operazioni in parallelo, in modo che sia possibile concentrarsi sulla logica dell'applicazione. Tuttavia, poiché il runtime di concorrenza consente un'ampia gamma di modelli di programmazione, il sovraccarico di pianificazione può essere maggiore di altre librerie di concorrenza, ad esempio OpenMP. Pertanto, si consiglia di testare in modo incrementale le prestazioni quando si converte il codice OpenMP esistente per l'utilizzo del runtime di concorrenza.

## <a name="when-to-migrate-from-openmp-to-the-concurrency-runtime"></a>Quando eseguire la migrazione da OpenMP a runtime di concorrenza

Potrebbe essere vantaggioso eseguire la migrazione del codice OpenMP esistente per utilizzare il runtime di concorrenza nei casi seguenti.

|Casi|Vantaggi della runtime di concorrenza|
|-----------|-------------------------------------------|
|È necessario un Framework di programmazione simultanea estendibile.|Molte delle funzionalità del runtime di concorrenza possono essere estese. È anche possibile combinare le funzionalità esistenti per crearne delle nuove. Poiché OpenMP si basa sulle direttive del compilatore, non è possibile estenderlo facilmente.|
|L'applicazione può trarre vantaggio dal blocco cooperativo.|Quando un'attività è bloccata perché richiede una risorsa non ancora disponibile, il runtime di concorrenza può eseguire altre attività mentre la prima attività è in attesa della risorsa.|
|L'applicazione può trarre vantaggio dal bilanciamento del carico dinamico.|Il runtime di concorrenza utilizza un algoritmo di pianificazione che regola l'allocazione delle risorse di elaborazione in seguito alla modifica dei carichi di lavoro. In OpenMP, quando l'utilità di pianificazione alloca le risorse di calcolo a un'area parallela, le allocazioni delle risorse vengono risolte durante il calcolo.|
|È necessario il supporto per la gestione delle eccezioni.|La libreria PPL consente di intercettare le eccezioni all'interno e all'esterno di un'area o di un ciclo parallelo. In OpenMP è necessario gestire l'eccezione all'interno dell'area o del ciclo parallelo.|
|È necessario un meccanismo di annullamento.|La libreria PPL consente alle applicazioni di annullare le singole attività e gli alberi paralleli di lavoro. OpenMP richiede che l'applicazione implementi un proprio meccanismo di annullamento.|
|È necessario che il codice parallelo venga completato in un contesto diverso da cui viene avviato.|Il runtime di concorrenza consente di avviare un'attività in un contesto e quindi di attendere o annullare l'attività in un altro contesto. In OpenMP, tutto il lavoro parallelo deve terminare nel contesto da cui viene avviato.|
|È necessario il supporto del debug migliorato.|Visual Studio fornisce le finestre **stack in parallelo** e attività in **parallelo** , in modo da poter eseguire più facilmente il debug di applicazioni multithreading.<br /><br /> Per altre informazioni sul supporto del debug per il runtime di concorrenza, vedere [uso della finestra attività](/visualstudio/debugger/using-the-tasks-window), [uso della finestra stack in parallelo](/visualstudio/debugger/using-the-parallel-stacks-window)e [procedura dettagliata: debug di un'applicazione parallela](/visualstudio/debugger/walkthrough-debugging-a-parallel-application).|

## <a name="when-not-to-migrate-from-openmp-to-the-concurrency-runtime"></a>Quando non eseguire la migrazione da OpenMP a runtime di concorrenza

Nei casi seguenti viene descritto quando potrebbe non essere appropriato eseguire la migrazione del codice OpenMP esistente per l'utilizzo del runtime di concorrenza.

|Casi|Spiegazione|
|-----------|-----------------|
|L'applicazione soddisfa già i requisiti.|Se si è soddisfatti delle prestazioni dell'applicazione e del supporto per il debug corrente, è possibile che la migrazione non sia appropriata.|
|I corpi del ciclo parallelo eseguono un po' di lavoro.|Il sovraccarico del runtime di concorrenza utilità di pianificazione potrebbe non superare i vantaggi derivanti dall'esecuzione del corpo del ciclo in parallelo, soprattutto quando il corpo del ciclo è relativamente piccolo.|
|L'applicazione è scritta in C.|Poiché il runtime di concorrenza utilizza numerose funzionalità C++, potrebbe non essere appropriato quando non è possibile scrivere codice che consenta all'applicazione C di utilizzarlo completamente.|

## <a name="related-topics"></a>Argomenti correlati

[Procedura: convertire un ciclo OpenMP parallel for per utilizzare il runtime di concorrenza](../../parallel/concrt/how-to-convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime.md)

Dato un ciclo di base che usa le direttive OpenMP [Parallel](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel) e [for](../openmp/reference/openmp-directives.md#for-openmp) , illustra come convertirlo in modo da usare l'algoritmo runtime di concorrenza [Concurrency::p arallel_for](reference/concurrency-namespace-functions.md#parallel_for) .

[Procedura: convertire un ciclo OpenMP che usa l'annullamento per usare la runtime di concorrenza](../../parallel/concrt/convert-an-openmp-loop-that-uses-cancellation.md)<br/>
Dato un ciclo OpenMP [Parallel](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[for](../openmp/reference/openmp-directives.md#for-openmp) che non richiede l'esecuzione di tutte le iterazioni, illustra come convertirlo per usare il meccanismo di annullamento runtime di concorrenza.

[Procedura: convertire un ciclo OpenMP che usa la gestione delle eccezioni per usare la runtime di concorrenza](../../parallel/concrt/convert-an-openmp-loop-that-uses-exception-handling.md)<br/>
Dato un ciclo OpenMP [Parallel](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[for](../openmp/reference/openmp-directives.md#for-openmp) che esegue la gestione delle eccezioni, illustra come convertirlo per usare il meccanismo di gestione delle eccezioni runtime di concorrenza.

[Procedura: convertire un ciclo OpenMP che usa una variabile di riduzione per usare la runtime di concorrenza](../../parallel/concrt/convert-an-openmp-loop-that-uses-a-reduction-variable.md)<br/>
Dato un ciclo OpenMP [Parallel](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[for](../openmp/reference/openmp-directives.md#for-openmp) che usa la clausola [Reduction](../openmp/reference/openmp-clauses.md#reduction) , viene illustrato come convertirlo per usare la runtime di concorrenza.

## <a name="see-also"></a>Vedi anche

[Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)<br/>
[OpenMP](../../parallel/concrt/comparing-the-concurrency-runtime-to-other-concurrency-models.md#openmp)<br/>
[PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md)<br/>
[libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)
