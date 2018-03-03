---
title: Migrazione da OpenMP al Runtime di concorrenza | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- Concurrency Runtime, migrating from OpenMP
- OpenMP, migrating to the Concurrency Runtime
ms.assetid: 9bab7bb1-e45d-44b2-8509-3b226be2c93b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 65359e76e036a0d8d33de2de9f6c96c6425d2152
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="migrating-from-openmp-to-the-concurrency-runtime"></a>Migrazione da OpenMP al runtime di concorrenza
Il runtime di concorrenza consente diversi modelli di programmazione. Questi modelli possono sovrapporsi ai modelli di altre librerie o integrarsi con essi. I documenti in questa sezione Confronta [OpenMP](../../parallel/concrt/comparing-the-concurrency-runtime-to-other-concurrency-models.md#openmp) al Runtime di concorrenza e vengono forniti esempi su come eseguire la migrazione del codice OpenMP esistente per utilizzare il Runtime di concorrenza.  
  
 Il modello di programmazione OpenMP è definito da uno standard aperto e include associazioni ben definite ai linguaggi di programmazione Fortran e C/C++. Le versioni di OpenMP 2.0 e 2.5, che sono supportati dal compilatore Visual C++, sono ideali per gli algoritmi paralleli che sono iterativi; vale a dire eseguono iterazione parallela su una matrice di dati. OpenMP 3.0 supporta attività non iterative oltre alle attività iterativa.  
  
 OpenMP è molto efficiente quando il grado di parallelismo è predeterminato e corrisponde alle risorse disponibili nel sistema. Il modello di OpenMP è una corrispondenza valida soprattutto per il calcolo ad alte prestazioni, in cui notevoli problemi di calcolo vengono distribuiti tra le risorse di elaborazione di un computer. In questo scenario, l'ambiente hardware è in genere fisso e lo sviluppatore potrà accedere in modo esclusivo a tutte le risorse di elaborazione quando viene eseguito l'algoritmo.  
  
 Tuttavia, meno vincolati ambienti di elaborazione non può essere una corrispondenza valida per OpenMP. Ad esempio, i problemi ricorsivi (ad esempio, l'algoritmo quicksort o la ricerca di una struttura di dati) sono più difficili da implementare tramite OpenMP 2.0 e 2.5. Il Runtime di concorrenza si integra con le funzionalità di OpenMP fornendo il [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) e [Parallel Patterns Library](../../parallel/concrt/parallel-patterns-library-ppl.md) (PPL). Libreria di agenti asincroni supporta il parallelismo con granularità grossolana attività; la libreria PPL supporta più granulari per le attività in parallelo. Il Runtime di concorrenza fornisce l'infrastruttura necessaria per eseguire operazioni in parallelo in modo che sia possibile concentrarsi sulla logica dell'applicazione. Tuttavia, poiché il Runtime di concorrenza consente un'ampia gamma di modelli di programmazione, il sovraccarico di pianificazione può essere maggiore di altre librerie di concorrenza, ad esempio OpenMP. È pertanto consigliabile testare le prestazioni in modo incrementale quando si esegue la conversione del codice OpenMP esistente per utilizzare il Runtime di concorrenza.  
  
## <a name="when-to-migrate-from-openmp-to-the-concurrency-runtime"></a>Quando eseguire la migrazione da OpenMP al Runtime di concorrenza  
 Può risultare utile per eseguire la migrazione del codice OpenMP esistente per utilizzare il Runtime di concorrenza nei casi seguenti.  
  
|Cases|Vantaggi del Runtime di concorrenza|  
|-----------|-------------------------------------------|  
|È necessario un framework di programmazione simultanea estendibile.|Molte delle funzionalità del runtime di concorrenza possono essere estese. È anche possibile combinare le funzionalità esistenti per crearne delle nuove. Poiché OpenMP si basa sulle direttive del compilatore, non può essere esteso facilmente.|  
|L'applicazione può costituire un vantaggio blocco cooperativo.|Quando un'attività è bloccata perché richiede una risorsa che non è ancora disponibile, il Runtime di concorrenza può eseguire altre attività mentre la prima attività in attesa della risorsa.|  
|L'applicazione può costituire un vantaggio dal bilanciamento del carico dinamico.|Il Runtime di concorrenza Usa un algoritmo di pianificazione che consente di modificare l'allocazione delle risorse di elaborazione quando cambiano i carichi di lavoro. In OpenMP, quando l'utilità di pianificazione alloca le risorse di elaborazione a un'area parallela, tali assegnazioni di risorse sono fissi in tutto il calcolo.|  
|È necessario il supporto di gestione delle eccezioni.|La libreria PPL consente di rilevare le eccezioni generate all'interno e all'esterno di un'area parallela o un ciclo. In OpenMP, è necessario gestire l'eccezione all'interno di un ciclo o dell'area parallela.|  
|È necessario un meccanismo di annullamento.|La libreria PPL consente alle applicazioni di annullare singole attività e alberi di lavoro parallelo. OpenMP richiede che l'applicazione per implementare un proprio meccanismo di annullamento.|  
|È necessario completare in un contesto diverso da cui inizia il codice parallelo.|Il Runtime di concorrenza consente di avviare un'attività in un contesto e quindi attendere o annullare l'attività in un altro contesto. In OpenMP, tutto il lavoro parallelo deve essere completata nel contesto da cui viene avviato.|  
|È necessario il supporto di debug avanzato.|Visual Studio fornisce il **stack in parallelo** e **attività in parallelo** windows in modo da poter eseguire più facilmente il debug applicazioni multithreading.<br /><br /> Per ulteriori informazioni sul supporto del debug per il Runtime di concorrenza, vedere [utilizzando la finestra attività](/visualstudio/debugger/using-the-tasks-window), [utilizzando la finestra Stack in parallelo](/visualstudio/debugger/using-the-parallel-stacks-window), e [procedura dettagliata: debug di un'operazione parallela Applicazione](/visualstudio/debugger/walkthrough-debugging-a-parallel-application).|  
  
## <a name="when-not-to-migrate-from-openmp-to-the-concurrency-runtime"></a>Quando non eseguire la migrazione da OpenMP al Runtime di concorrenza  
 Di seguito vengono descritti i casi potrebbe non essere appropriato eseguire la migrazione del codice OpenMP esistente per utilizzare il Runtime di concorrenza.  
  
|Cases|Descrizione|  
|-----------|-----------------|  
|L'applicazione soddisfa già i requisiti.|Se si è soddisfatti delle prestazioni delle applicazioni e supporto di debug corrente, la migrazione potrebbe non essere appropriata.|  
|I corpi di ciclo parallelo eseguono poco lavoro.|L'overhead dell'utilità di pianificazione di attività di Runtime di concorrenza potrebbe non superare i vantaggi dell'esecuzione del corpo del ciclo in parallelo, soprattutto quando il corpo del ciclo è relativamente piccolo.|  
|L'applicazione è scritta in C.|Poiché il Runtime di concorrenza utilizza molte funzionalità di C++, potrebbe non essere adatto quando non è possibile scrivere codice che consente all'applicazione C completamente usarlo.|  
  
## <a name="related-topics"></a>Argomenti correlati  
 [Procedura: Convertire un ciclo OpenMP parallel for per l'uso del runtime di concorrenza](../../parallel/concrt/how-to-convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime.md)  

 Dato un ciclo di base che utilizza il OpenMP [parallela](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel) e [per](../../parallel/openmp/reference/for-openmp.md) direttive, viene illustrato come convertire in modo che utilizzi il Runtime di concorrenza [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algoritmo.  

  
 [Procedura: Convertire un ciclo OpenMP che usa l'annullamento per l'uso del runtime di concorrenza](../../parallel/concrt/convert-an-openmp-loop-that-uses-cancellation.md)  
 Dato una OpenMP [parallela](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[per](../../parallel/openmp/reference/for-openmp.md) ciclo che non richiede tutte le iterazioni da eseguire, di seguito viene illustrato come convertire in modo che utilizzi il meccanismo di annullamento del Runtime di concorrenza.  
  
 [Procedura: Convertire un ciclo OpenMP che usa la gestione delle eccezioni per l'uso del runtime di concorrenza](../../parallel/concrt/convert-an-openmp-loop-that uses-exception-handling.md)  
 Dato una OpenMP [parallela](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[per](../../parallel/openmp/reference/for-openmp.md) ciclo che esegue la gestione delle eccezioni, viene illustrato come convertire in modo che utilizzi il meccanismo di eccezioni di Runtime di concorrenza.  
  
 [Procedura: Convertire un ciclo OpenMP che usa una variabile di riduzione per l'uso del runtime di concorrenza](../../parallel/concrt/convert-an-openmp-loop-that-uses-a-reduction-variable.md)  
 Dato una OpenMP [parallela](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[per](../../parallel/openmp/reference/for-openmp.md) ciclo che utilizza il [riduzione](../../parallel/openmp/reference/reduction.md) clausola, viene illustrato come convertire in modo che utilizzi il Runtime di concorrenza.  
  
## <a name="see-also"></a>Vedere anche  
 [Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)   
 [OpenMP](../../parallel/concrt/comparing-the-concurrency-runtime-to-other-concurrency-models.md#openmp)   
 [PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md)   
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)

