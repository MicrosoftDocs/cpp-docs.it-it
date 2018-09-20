---
title: Migrazione da OpenMP al Runtime di concorrenza | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Concurrency Runtime, migrating from OpenMP
- OpenMP, migrating to the Concurrency Runtime
ms.assetid: 9bab7bb1-e45d-44b2-8509-3b226be2c93b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e6c6ca3da9e1f66e068980deebce938a5603a4cc
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46428180"
---
# <a name="migrating-from-openmp-to-the-concurrency-runtime"></a>Migrazione da OpenMP al runtime di concorrenza

Il runtime di concorrenza consente diversi modelli di programmazione. Questi modelli possono sovrapporsi ai modelli di altre librerie o integrarsi con essi. I documenti in questa sezione Confronta [OpenMP](../../parallel/concrt/comparing-the-concurrency-runtime-to-other-concurrency-models.md#openmp) al Runtime di concorrenza e vengono forniti esempi su come eseguire la migrazione del codice OpenMP esistente per usare il Runtime di concorrenza.

Il modello di programmazione OpenMP è definito da uno standard aperto e include associazioni ben definite ai linguaggi di programmazione Fortran e C/C++. Le versioni di OpenMP 2.0 e 2.5, che sono supportati dal compilatore Visual C++, sono particolarmente adatte per gli algoritmi paralleli che sono iterativi; vale a dire, eseguono iterazione parallela su una matrice di dati. OpenMP 3.0 supporta attività non iterativa, oltre ad attività iterativa.

OpenMP è molto efficiente quando il grado di parallelismo è predeterminato e corrisponde alle risorse disponibili nel sistema. Il modello OpenMP rappresenta una corrispondenza valida soprattutto per il calcolo ad alte prestazioni, in cui notevoli problemi di calcolo vengono distribuiti tra le risorse di elaborazione di un solo computer. In questo scenario, l'ambiente hardware è in genere risolto e lo sviluppatore potrà accedere in modo esclusivo per tutte le risorse di elaborazione quando viene eseguito l'algoritmo.

Tuttavia, meno vincolati ambienti di elaborazione non può essere una corrispondenza valida per OpenMP. Ad esempio, i problemi ricorsivi (ad esempio, l'algoritmo quicksort o la ricerca di una struttura ad albero dei dati) sono più difficili da implementare tramite OpenMP 2.0 e 2.5. Il Runtime di concorrenza completa le funzionalità di OpenMP offrendo la [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) e il [Parallel Patterns Library](../../parallel/concrt/parallel-patterns-library-ppl.md) (PPL). Asynchronous Agents Library supporta il parallelismo fra attività con granularità grossolana; la libreria PPL supporta più granulari per le attività in parallelo. Il Runtime di concorrenza fornisce l'infrastruttura necessaria per eseguire operazioni in parallelo in modo che è possibile concentrarsi sulla logica dell'applicazione. Tuttavia, poiché il Runtime di concorrenza consente un'ampia gamma di modelli di programmazione, il sovraccarico di pianificazione può essere maggiore di altre librerie di concorrenza, ad esempio OpenMP. Pertanto, è consigliabile testare le prestazioni in modo incrementale quando si converte codice OpenMP esistente per usare il Runtime di concorrenza.

## <a name="when-to-migrate-from-openmp-to-the-concurrency-runtime"></a>Quando eseguire la migrazione da OpenMP al Runtime di concorrenza

Può risultare utile per eseguire la migrazione del codice OpenMP esistente per usare il Runtime di concorrenza nei casi seguenti.

|Cases|Vantaggi del Runtime di concorrenza|
|-----------|-------------------------------------------|
|È necessario un framework di programmazione simultaneo estendibili.|Molte delle funzionalità del runtime di concorrenza possono essere estese. È anche possibile combinare le funzionalità esistenti per crearne delle nuove. Poiché OpenMP si basa sulle direttive del compilatore, non può essere esteso facilmente.|
|Le applicazioni possono trarre vantaggio dal blocco cooperativo.|Quando un'attività è bloccata perché è necessaria una risorsa che non è ancora disponibile, il Runtime di concorrenza può eseguire altre attività mentre la prima attività in attesa della risorsa.|
|Le applicazioni possono trarre vantaggio dal bilanciamento del carico dinamico.|Il Runtime di concorrenza Usa un algoritmo di pianificazione che consente di modificare l'allocazione delle risorse di calcolo man mano che cambiano i carichi di lavoro. In OpenMP, quando l'utilità di pianificazione consente di allocare le risorse di calcolo per un'area parallela, le allocazioni di risorse sono fissi durante il calcolo.|
|È necessario il supporto di gestione delle eccezioni.|La libreria PPL consente di rilevare le eccezioni generate all'interno e all'esterno di un'area parallela o un ciclo. In OpenMP, è necessario gestire l'eccezione all'interno di loop o un'area parallela.|
|È necessario un meccanismo di annullamento.|La libreria PPL consente alle applicazioni annullare le singole attività e alberi di lavoro parallelo. OpenMP richiede che l'applicazione per implementare un proprio meccanismo di annullamento.|
|È necessario completare in un contesto diverso da cui inizia il codice parallelo.|Il Runtime di concorrenza consente di avviare un'attività in un contesto e quindi attendere o annullare l'attività in un altro contesto. In OpenMP, è necessario completare tutto il lavoro parallelo nel contesto da cui inizia.|
|È necessario il supporto di debug migliorato.|Visual Studio fornisce il **stack in parallelo** e **attività in parallelo** windows in modo che si possono più facilmente il debug di applicazioni a thread multipli.<br /><br /> Per altre informazioni sul supporto del debug per il Runtime di concorrenza, vedere [utilizzando la finestra attività](/visualstudio/debugger/using-the-tasks-window), [usando la finestra Stack in parallelo](/visualstudio/debugger/using-the-parallel-stacks-window), e [procedura dettagliata: debug di un'operazione parallela Applicazione](/visualstudio/debugger/walkthrough-debugging-a-parallel-application).|

## <a name="when-not-to-migrate-from-openmp-to-the-concurrency-runtime"></a>Quando non eseguire la migrazione da OpenMP al Runtime di concorrenza

Di seguito vengono descritti i casi potrebbe non essere appropriato eseguire la migrazione del codice OpenMP esistente per usare il Runtime di concorrenza.

|Cases|Descrizione|
|-----------|-----------------|
|L'applicazione soddisfa già i requisiti.|Se si è soddisfatti con le prestazioni dell'applicazione e il supporto di debug corrente, la migrazione potrebbe non essere appropriata.|
|I corpi di ciclo parallelo eseguono quantità minima di lavoro.|L'overhead dell'utilità di pianificazione di Runtime di concorrenza potrebbe non superare i vantaggi dell'esecuzione del corpo del ciclo in parallelo, in particolare quando il corpo del ciclo è relativamente piccolo.|
|L'applicazione viene scritta in C.|Poiché il Runtime di concorrenza Usa molte delle funzionalità di C++, potrebbe non essere adatto quando non è possibile scrivere codice che consente all'applicazione C di usarla completamente.|

## <a name="related-topics"></a>Argomenti correlati

[Procedura: Convertire un ciclo OpenMP parallel for per l'uso del runtime di concorrenza](../../parallel/concrt/how-to-convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime.md)

Dato un ciclo di base che usa il OpenMP [parallele](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel) e [per](../../parallel/openmp/reference/for-openmp.md) direttive, viene illustrato come convertire in modo che usi il Runtime di concorrenza [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algoritmo.

[Procedura: Convertire un ciclo OpenMP che usa l'annullamento per l'uso del runtime di concorrenza](../../parallel/concrt/convert-an-openmp-loop-that-uses-cancellation.md)<br/>
Dato una OpenMP [parallele](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[per](../../parallel/openmp/reference/for-openmp.md) ciclo che non richiede tutte le iterazioni da eseguire, viene illustrato come convertire in modo che utilizzi il meccanismo di annullamento di Runtime di concorrenza.

[Procedura: Convertire un ciclo OpenMP che usa la gestione delle eccezioni per l'uso del runtime di concorrenza](../../parallel/concrt/convert-an-openmp-loop-that uses-exception-handling.md)<br/>
Dato una OpenMP [parallele](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[per](../../parallel/openmp/reference/for-openmp.md) ciclo che esegue la gestione delle eccezioni, viene illustrato come convertire in modo che utilizzi il meccanismo di gestione delle eccezioni Runtime di concorrenza.

[Procedura: Convertire un ciclo OpenMP che usa una variabile di riduzione per l'uso del runtime di concorrenza](../../parallel/concrt/convert-an-openmp-loop-that-uses-a-reduction-variable.md)<br/>
Dato una OpenMP [parallele](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[per](../../parallel/openmp/reference/for-openmp.md) ciclo che usa il [riduzione](../../parallel/openmp/reference/reduction.md) clausola, viene illustrato come convertire in modo che usi il Runtime di concorrenza.

## <a name="see-also"></a>Vedere anche

[Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)<br/>
[OpenMP](../../parallel/concrt/comparing-the-concurrency-runtime-to-other-concurrency-models.md#openmp)<br/>
[PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md)<br/>
[Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)

