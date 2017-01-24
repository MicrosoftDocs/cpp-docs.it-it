---
title: "F. New Features and Clarifications in Version 2.0 | Microsoft Docs"
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
ms.assetid: 0d4beb66-f2d5-468c-8cd3-4b00dcbab061
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# F. New Features and Clarifications in Version 2.0
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa appendice riepilogate le modifiche della chiave apportate alla specifica di OpenMP C\/C\+\+ lo spostamento dalla versione 1,0 alla versione 2,0.  I punti seguito sono elencate le nuove funzionalità aggiunte alla specifica:  
  
-   Virgole sono consentiti nelle direttive di OpenMP \([parte 2,1](../../parallel/openmp/2-1-directive-format.md) a pagina 7\).  
  
-   Aggiunta di `num_threads` clausola.  Questa clausola consente a un utente richiede un numero specifico dei thread per un costrutto parallelo \([parte 2,3](../../parallel/openmp/2-3-parallel-construct.md) a pagina 8\).  
  
-   `threadprivate` la direttiva è stata estesa accettare le variabili statiche di ambito blocco \([parte 2.7.1](../../parallel/openmp/2-7-1-threadprivate-directive.md) nella pagina 23\).  
  
-   Le matrici a lunghezza variabile di C99 sono tipi completi e pertanto possono essere in qualsiasi punto tipi completi specificati sono consentite, ad esempio gli elenchi di `private`,  `firstprivate`e  `lastprivate` \(clausole[parte 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) nella pagina 25\).  
  
-   Una variabile privata in un'area parallela può essere privato contrassegnato nuovamente in una direttiva \(annidata[parte 2.7.2.1](../../parallel/openmp/2-7-2-1-private.md) nella pagina 25\).  
  
-   `copyprivate` la clausola è stata aggiunta.  Fornisce un meccanismo per utilizzare una variabile privata per trasmettere per comunicare a un valore da un membro di un team agli altri membri.  Rappresenta un'alternativa all'utilizzo di una variabile condivisa per il valore per fornire una variabile condivisa che sarebbe difficile, ad esempio in una ricorsione che richiede una variabile diverso a ogni livello\).  `copyprivate` la clausola può apparire solo su  **singolo** direttiva \([parte 2.7.2.8](../../parallel/openmp/2-7-2-8-copyprivate.md) nella pagina 32\).  
  
-   Aggiunta delle routine di intervallo `omp_get_wtick` e  `omp_get_wtime` analogamente alle routine MPI.  Queste funzioni sono necessarie per l'esecuzione degli oggetti clock di muro \([parte 3.3.1](../../parallel/openmp/3-3-1-omp-get-wtime-function.md) a pagina 44 e  [parte 3.3.2](../../parallel/openmp/3-3-2-omp-get-wtick-function.md) nella pagina 45\).  
  
-   Un'appendice con un elenco dei comportamenti implementazione\-definiti in OpenMP C\/C\+\+ è stata aggiunta.  Un'implementazione è obbligatoria definire e documentare il comportamento in questi casi \([appendice E](../../parallel/openmp/e-implementation-defined-behaviors-in-openmp-c-cpp.md) nella pagina 97\).  
  
-   Le seguenti modifiche hanno chiarire o correggere le funzionalità della specifica precedente di OpenMP API per C\/C\+\+:  
  
    -   È stato chiarito che il comportamento di `omp_set_nested` e  `omp_set_dynamic` quando  `omp_in_parallel` restituisce diversi da zero è definito \([parte 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) a pagina 39 e  [parte 3.1.9](../../parallel/openmp/3-1-9-omp-set-nested-function.md) nella pagina 40\).  
  
    -   Annidamento la direttiva chiarimento relativo al parallelo annidato viene utilizzato \([parte 2,9](../../parallel/openmp/2-9-directive-nesting.md) nella pagina 33\).  
  
    -   L'inizializzazione del blocco e le funzioni della distruzione del blocco possono essere chiamate in un'area di parallelo \([parte 3.2.1](../../parallel/openmp/3-2-1-omp-init-lock-and-omp-init-nest-lock-functions.md) a pagina 42 e  [parte 3.2.2](../../parallel/openmp/3-2-2-omp-destroy-lock-and-omp-destroy-nest-lock-functions.md) nella pagina 42\).  
  
    -   I nuovi esempi sono stati aggiunti \([appendice A](../../parallel/openmp/a-examples.md) nella pagina 51\).