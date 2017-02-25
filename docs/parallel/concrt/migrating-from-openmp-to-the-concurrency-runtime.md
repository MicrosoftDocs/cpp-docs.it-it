---
title: "Migrazione da OpenMP al runtime di concorrenza | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Runtime di concorrenza, migrazione da OpenMP"
  - "OpenMP, migrazione al runtime di concorrenza"
ms.assetid: 9bab7bb1-e45d-44b2-8509-3b226be2c93b
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Migrazione da OpenMP al runtime di concorrenza
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il runtime di concorrenza consente diversi modelli di programmazione.  Questi modelli possono sovrapporsi ai modelli di altre librerie o integrarsi con essi.  Nei documenti di questa sezione viene eseguito un confronto tra [OpenMP](../../parallel/openmp/openmp-in-visual-cpp.md) e il runtime di concorrenza e vengono forniti esempi su come eseguire la migrazione del codice OpenMP esistente per l'utilizzo del runtime di concorrenza.  
  
 Il modello di programmazione OpenMP è definito da uno standard aperto e dispone di associazioni ben definite ai linguaggi di programmazione Fortran e C\/C\+\+.  Le versioni 2.0 e 2.5 di OpenMP supportate dal compilatore Visual C\+\+ sono particolarmente adatte per gli algoritmi paralleli che sono iterativi, ovvero eseguono l'iterazione parallela su una matrice di dati.  OpenMP 3.0 supporta le attività non iterative oltre alle attività iterative.  
  
 OpenMP è molto efficiente quando il grado di parallelismo è predeterminato e corrisponde alle risorse disponibili nel sistema.  Il modello OpenMP rappresenta un sistema valido soprattutto per il calcolo a elevate prestazioni, che prevede la distribuzione di problemi di calcolo molto estesi tra le risorse di elaborazione di un unico computer.  In questo scenario, l'ambiente dell'hardware è in genere fisso e lo sviluppatore potrà accedere in modo esclusivo a tutte le risorse di elaborazione quando viene eseguito l'algoritmo.  
  
 Tuttavia, ambienti di elaborazione meno vincolati possono non rappresentare una corrispondenza valida per OpenMP.  I problemi ricorsivi, quale l'algoritmo QuickSort o la ricerca in un albero di dati, sono ad esempio più difficili da implementare tramite OpenMP 2.0 e 2.5.  Il runtime di concorrenza completa le funzionalità di OpenMP offrendo la [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) e la [libreria PPL \(Parallel Patterns Library\)](../../parallel/concrt/parallel-patterns-library-ppl.md).  La libreria di agenti asincroni supporta il parallelismo delle attività con granularità grossolana, mentre la libreria PPL supporta le attività in parallelo con granularità più fine.  Il runtime di concorrenza fornisce l'infrastruttura necessaria per eseguire le operazioni in parallelo in modo che sia possibile concentrarsi sulla logica dell'applicazione.  Tuttavia, poiché il runtime di concorrenza consente vari modelli di programmazione, il sovraccarico di programmazione può essere maggiore rispetto ad altre librerie di concorrenza come OpenMP.  È pertanto consigliabile testare le prestazioni in modo incrementale quando si converte il codice OpenMP esistente per utilizzare il runtime di concorrenza.  
  
## Quando eseguire la migrazione da OpenMP al runtime di concorrenza  
 Può essere vantaggioso eseguire la migrazione del codice OpenMP esistente per utilizzare il runtime di concorrenza nei casi seguenti.  
  
|Casi|Vantaggi del runtime di concorrenza|  
|----------|-----------------------------------------|  
|È necessario un framework di programmazione simultanea estendibile.|Molte delle funzionalità del runtime di concorrenza possono essere estese.  È inoltre possibile combinare le funzionalità esistenti per crearne delle nuove.  Poiché OpenMP si basa sulle direttive del compilatore, non può essere esteso facilmente.|  
|Potrebbe risultare vantaggioso per l'applicazione utilizzare il blocco cooperativo.|Quando un'attività è bloccata poiché richiede una risorsa che non è ancora disponibile, il runtime di concorrenza può eseguire altre attività mentre la prima attività è in attesa della risorsa.|  
|Potrebbe risultare vantaggioso per l'applicazione utilizzare il bilanciamento del carico dinamico.|Il runtime di concorrenza utilizza un algoritmo di pianificazione che regola l'allocazione delle risorse di elaborazione in base alla modifica dei carichi di lavoro.  In OpenMP, quando l'utilità di pianificazione alloca le risorse di elaborazione a un'area parallela, tali allocazioni delle risorse sono fisse in tutto il calcolo.|  
|È necessario il supporto della gestione delle eccezioni.|La libreria PPL consente di rilevare le eccezioni sia all'interno che all'esterno di un ciclo o un'area parallela.  In OpenMP, è necessario gestire l'eccezione all'interno del ciclo o dell'area parallela.|  
|È necessario un meccanismo di annullamento.|La libreria PPL consente alle applicazioni di annullare singole attività e alberi di lavoro parallelo.  OpenMP richiede all'applicazione di implementare il proprio meccanismo di annullamento.|  
|È necessario completare il codice parallelo in un contesto diverso da quello da cui è stato avviato.|Il runtime di concorrenza consente di avviare un'attività in un contesto, quindi attendere o annullare tale attività in un altro contesto.  In OpenMP, tutto il lavoro parallelo deve essere completato nel contesto da cui è stato avviato.|  
|È necessario il supporto del debug avanzato.|In Visual Studio sono disponibili le finestre **Attività in parallelo** e **Stack in parallelo** in modo da poter eseguire più facilmente il debug delle applicazioni multithreading.<br /><br /> Per ulteriori informazioni sul supporto del debug per il runtime di concorrenza, vedere [Utilizzo della finestra Attività](../Topic/Using%20the%20Tasks%20Window.md), [Utilizzo della finestra Stack in parallelo](../Topic/Using%20the%20Parallel%20Stacks%20Window.md) e [Procedura dettagliata: debug di un'applicazione parallela](../Topic/Walkthrough:%20Debugging%20a%20Parallel%20Application.md).|  
  
## Quando non eseguire la migrazione da OpenMP al runtime di concorrenza  
 Di seguito vengono descritti i casi in cui la migrazione del codice OpenMP esistente per utilizzare il runtime di concorrenza potrebbe non essere appropriata.  
  
|Casi|Descrizione|  
|----------|-----------------|  
|L'applicazione soddisfa già i requisiti.|Se si ritiene che le prestazioni dell'applicazione e il supporto di debug corrente siano soddisfacenti, la migrazione potrebbe non essere appropriata.|  
|I corpi del ciclo parallelo eseguono poco lavoro.|Il sovraccarico dell'utilità di pianificazione del runtime di concorrenza potrebbe non superare i vantaggi dell'esecuzione del corpo del ciclo in parallelo, soprattutto quando il corpo del ciclo è relativamente piccolo.|  
|L'applicazione è scritta in C.|Poiché il runtime di concorrenza utilizza molte funzionalità di C\+\+, potrebbe non essere appropriato quando non è possibile scrivere codice che sia completamente utilizzabile dall'applicazione C.|  
  
## Argomenti correlati  
 [Procedura: Convertire un ciclo OpenMP parallel for per l'utilizzo del runtime di concorrenza](../../parallel/concrt/how-to-convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime.md)  
 Viene illustrato come convertire un ciclo di base che utilizza le direttive [parallel](../../parallel/openmp/reference/parallel.md) e [for](../../parallel/openmp/reference/for-openmp.md) di OpenMP per utilizzare l'algoritmo [concurrency::parallel\_for](../Topic/parallel_for%20Function.md) del runtime di concorrenza.  
  
 [Procedura: Convertire un ciclo OpenMP che usa l'annullamento per l'utilizzo del runtime di concorrenza](../../parallel/concrt/convert-an-openmp-loop-that-uses-cancellation.md)  
 Viene illustrato come convertire un ciclo [parallel](../../parallel/openmp/reference/parallel.md) [for](../../parallel/openmp/reference/for-openmp.md) di OpenMP che non richiede l'esecuzione di tutte le iterazioni per utilizzare il meccanismo di annullamento del runtime di concorrenza.  
  
 [Procedura: Convertire un ciclo OpenMP che usa la gestione delle eccezioni per l'utilizzo del runtime di concorrenza](../../parallel/concrt/convert-an-openmp-loop-that uses-exception-handling.md)  
 Viene illustrato come convertire un ciclo [parallel](../../parallel/openmp/reference/parallel.md) [for](../../parallel/openmp/reference/for-openmp.md) di OpenMP che esegue la gestione delle eccezioni per utilizzare il meccanismo di gestione delle eccezioni del runtime di concorrenza.  
  
 [Procedura: Convertire un ciclo OpenMP che usa una variabile di riduzione per l'utilizzo del runtime di concorrenza](../../parallel/concrt/convert-an-openmp-loop-that-uses-a-reduction-variable.md)  
 Viene illustrato come convertire un ciclo [parallel](../../parallel/openmp/reference/parallel.md) [for](../../parallel/openmp/reference/for-openmp.md) di OpenMP che utilizza la clausola [reduction](../../parallel/openmp/reference/reduction.md) per utilizzare il runtime di concorrenza.  
  
## Vedere anche  
 [Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)   
 [OpenMP](../../parallel/openmp/openmp-in-visual-cpp.md)   
 [PPL \(Parallel Patterns Library\)](../../parallel/concrt/parallel-patterns-library-ppl.md)   
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)