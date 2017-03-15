---
title: "Procedura: Convertire un ciclo OpenMP che usa la gestione delle eccezioni per l&#39;utilizzo del runtime di concorrenza | Microsoft Docs"
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
  - "gestione delle eccezioni, conversione da OpenMP al runtime di concorrenza"
  - "conversione da OpenMP al runtime di concorrenza, gestione delle eccezioni"
ms.assetid: 03c28196-21ba-439e-8641-afab1c283e1a
caps.latest.revision: 11
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: Convertire un ciclo OpenMP che usa la gestione delle eccezioni per l&#39;utilizzo del runtime di concorrenza
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo esempio viene illustrato come convertire un ciclo [parallel](../../parallel/openmp/reference/parallel.md) [for](../../parallel/openmp/reference/for-openmp.md) di OpenMP che esegue la gestione delle eccezioni in modo da utilizzare il meccanismo di gestione delle eccezioni del runtime di concorrenza.  
  
 In OpenMP un'eccezione generata in un'area parallela deve essere intercettata e gestita nella stessa area dallo stesso thread.  Un'eccezione ignorata nell'area parallela viene rilevata dal gestore delle eccezioni non gestite che per impostazione predefinita termina il processo.  
  
 Nel runtime di concorrenza quando viene generata un'eccezione nel corpo di una funzione lavoro passata a un gruppo di attività come un oggetto [concurrency::task\_group](../Topic/task_group%20Class.md) o [concurrency::structured\_task\_group](../../parallel/concrt/reference/structured-task-group-class.md) o a un algoritmo parallelo come [concurrency::parallel\_for](../Topic/parallel_for%20Function.md), il runtime archivia l'eccezione e ne esegue il marshalling nel contesto che attende il completamento del gruppo di attività o dell'algoritmo.  Per i gruppi di attività il contesto di attesa è il contesto che chiama [concurrency::task\_group::wait](../Topic/task_group::wait%20Method.md), [concurrency::structured\_task\_group::wait](../Topic/structured_task_group::wait%20Method.md), [concurrency::task\_group::run\_and\_wait](../Topic/task_group::run_and_wait%20Method.md) o [concurrency::structured\_task\_group::run\_and\_wait](../Topic/structured_task_group::run_and_wait%20Method.md).  Per un algoritmo parallelo, il contesto di attesa è il contesto che ha chiamato l'algoritmo.  Il runtime arresta inoltre tutte le attività attive presenti nel gruppo di attività, comprese quelle presenti nei gruppi di attività figlio, ed elimina le attività che non sono ancora state avviate.  
  
## Esempio  
 In questo esempio viene illustrato come gestire le eccezioni in un'area `parallel` di OpenMP e in una chiamata a `parallel_for`.  La funzione `do_work` esegue una richiesta di allocazione della memoria che non ha esito positivo e pertanto genera un'eccezione di tipo [std::bad\_alloc](../../standard-library/bad-alloc-class.md).  Nella versione che utilizza OpenMP il thread che genera l'eccezione deve anche intercettarla.  In altre parole, ogni iterazione di un ciclo parallelo OpenMP deve gestire l'eccezione.  Nella versione che utilizza il runtime di concorrenza, il thread principale intercetta un'eccezione generata da un altro thread.  
  
 [!code-cpp[concrt-openmp#3](../../parallel/concrt/codesnippet/CPP/convert-an-openmp-loop-that uses-exception-handling_1.cpp)]  
  
 Questo esempio produce l'output che segue.  
  
  **Tramite OpenMP...**  
**Un errore di tipo "classe std::bad\_alloc" si è verificato.**  
**Un errore di tipo "classe std::bad\_alloc" si è verificato.**  
**Un errore di tipo "classe std::bad\_alloc" si è verificato.**  
**Un errore di tipo "classe std::bad\_alloc" si è verificato.**  
**Un errore di tipo "classe std::bad\_alloc" si è verificato.**  
**Un errore di tipo "classe std::bad\_alloc" si è verificato.**  
**Un errore di tipo "classe std::bad\_alloc" si è verificato.**  
**Un errore di tipo "classe std::bad\_alloc" si è verificato.**  
**Un errore di tipo "classe std::bad\_alloc" si è verificato.**  
**Un errore di tipo "classe std::bad\_alloc" si è verificato.**  
**Utilizzando il Runtime di concorrenza...**  
**Un errore di tipo "classe std::bad\_alloc" si è verificato.** Nella versione di questo esempio in cui viene utilizzato OpenMP l'eccezione viene generata e gestita da ogni iterazione del ciclo.  Nella versione che utilizza il runtime di concorrenza, il runtime archivia l'eccezione, arresta inoltre tutte le attività attive, elimina le attività che non sono ancora state avviate ed esegue il marshalling dell'eccezione nel contesto che chiama `parallel_for`.  
  
 Se è necessario che la versione che utilizza OpenMP termini dopo la generazione dell'eccezione, è possibile utilizzare un flag booleano per segnalare alle altre iterazioni del ciclo che si è verificato l'errore.  Come nell'esempio riportato nell'argomento [Procedura: Convertire un ciclo OpenMP che usa l'annullamento per l'utilizzo del runtime di concorrenza](../../parallel/concrt/convert-an-openmp-loop-that-uses-cancellation.md), se è impostato il flag le iterazioni successive del ciclo non eseguono alcuna operazione.  Al contrario, se è necessario che il ciclo che utilizza il runtime di concorrenza continui dopo la generazione dell'eccezione, gestire l'eccezione nel corpo del ciclo parallelo stesso.  
  
 Gli altri componenti del runtime di concorrenza, ad esempio gli agenti asincroni e le attività leggere, non trasportano le eccezioni.  Le eccezioni non gestite vengono invece rilevate dal gestore delle eccezioni non gestite che per impostazione predefinita termina il processo.  Per ulteriori informazioni sulla gestione delle eccezioni, vedere [Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).  
  
 Per ulteriori informazioni su `parallel_for` e altri algoritmi paralleli, vedere [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
## Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto Visual Studio, oppure incollarlo in un file denominato `concrt-omp-exceptions.cpp` e quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc \/openmp concrt\-omp\-exceptions.cpp**  
  
## Vedere anche  
 [Migrazione da OpenMP al runtime di concorrenza](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)   
 [Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)   
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)