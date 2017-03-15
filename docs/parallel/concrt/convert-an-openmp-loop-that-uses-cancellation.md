---
title: "Procedura: Convertire un ciclo OpenMP che usa l&#39;annullamento per l&#39;utilizzo del runtime di concorrenza | Microsoft Docs"
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
  - "conversione da OpenMP al runtime di concorrenza, annullamento"
  - "annullamento, conversione da OpenMP al runtime di concorrenza"
ms.assetid: 4b0b3c33-bfa9-4e96-ae08-aef245a39cbb
caps.latest.revision: 11
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: Convertire un ciclo OpenMP che usa l&#39;annullamento per l&#39;utilizzo del runtime di concorrenza
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Alcuni cicli paralleli non richiedono l'esecuzione di tutte le iterazioni.  Ad esempio, un algoritmo che cerca un valore può terminare dopo che il valore è stato trovato.  OpenMP non fornisce un meccanismo per uscire da un ciclo parallelo.  Tuttavia, è possibile utilizzare un valore booleano, o flag, per consentire a un'iterazione del ciclo di indicare che la soluzione è stata trovata.  Il runtime di concorrenza fornisce la funzionalità che consente a un'attività di annullare altre attività che non sono ancora state avviate.  
  
 Nell'esempio viene illustrato come convertire un ciclo [parallel](../../parallel/openmp/reference/parallel.md) [for](../../parallel/openmp/reference/for-openmp.md) di OpenMP che non richiede l'esecuzione di tutte le iterazioni per utilizzare il meccanismo di annullamento del runtime di concorrenza.  
  
## Esempio  
 Nell'esempio vengono utilizzati sia OpenMP che il runtime di concorrenza per implementare una versione parallela dell'algoritmo [std::any\_of](../Topic/any_of.md).  La versione di OpenMP dell'esempio utilizza un flag per coordinare tra tutte le iterazioni del ciclo parallelo che la condizione è stata soddisfatta.  La versione che utilizza il runtime di concorrenza utilizza il metodo [concurrency::structured\_task\_group::cancel](../Topic/structured_task_group::cancel%20Method.md) per arrestare l'operazione globale quando la condizione viene soddisfatta.  
  
 [!code-cpp[concrt-openmp#2](../../parallel/concrt/codesnippet/CPP/convert-an-openmp-loop-that-uses-cancellation_1.cpp)]  
  
 Questo esempio produce l'output che segue.  
  
  **Using OpenMP...**  
**9114046 is in the array.**  
**Using the Concurrency Runtime...**  
**9114046 is in the array.** Nella versione che utilizza OpenMP, tutte le iterazioni del ciclo vengono eseguite anche quando il flag è impostato.  Inoltre, se un'attività contiene alcune attività figlio, il flag dovrà essere disponibile anche per tali attività figlio per comunicare l'annullamento.  Nel runtime di concorrenza, quando un gruppo di attività viene annullato, il runtime annulla l'intero albero di lavoro, incluse le attività figlio.  L'algoritmo [concurrency::parallel\_for\_each](../Topic/parallel_for_each%20Function.md) utilizza le attività per eseguire il lavoro.  Pertanto, quando un'iterazione del ciclo annulla l'attività radice, viene annullato anche l'intero albero di calcolo.  Quando un albero di lavoro viene annullato, il runtime non avvia nuove attività.  Tuttavia, il runtime consente il completamento delle attività che sono già state avviate.  Pertanto, nel caso dell'algoritmo `parallel_for_each` le iterazioni del ciclo attive possono eseguire la pulizia delle risorse.  
  
 In entrambe le versioni dell'esempio, se la matrice contiene più di una copia del valore da cercare, più iterazioni del ciclo possono impostare contemporaneamente il risultato e annullare l'operazione globale.  È possibile utilizzare una primitiva di sincronizzazione, ad esempio una sezione critica, se il problema richiede che solo un'attività esegua il lavoro quando viene soddisfatta una condizione.  
  
 È inoltre possibile utilizzare la gestione delle eccezioni per annullare le attività che utilizzano la libreria PPL.  Per ulteriori informazioni sull'annullamento, vedere [Annullamento](../../parallel/concrt/cancellation-in-the-ppl.md).  
  
 Per ulteriori informazioni su `parallel_for_each` e altri algoritmi paralleli, vedere [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
## Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto Visual Studio oppure incollarlo in un file denominato `concrt-omp-parallel-any-of.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc \/openmp concrt\-omp\-parallel\-any\-of.cpp**  
  
## Vedere anche  
 [Migrazione da OpenMP al runtime di concorrenza](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)   
 [Annullamento](../../parallel/concrt/cancellation-in-the-ppl.md)   
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)