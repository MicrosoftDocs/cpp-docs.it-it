---
title: "F. Nuove funzionalità e i chiarimenti nella versione 2.0 | Documenti Microsoft"
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
ms.assetid: 0d4beb66-f2d5-468c-8cd3-4b00dcbab061
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b9a661f183816fec0f7a71c990f1508338100f4d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="f-new-features-and-clarifications-in-version-20"></a>F. Nuove funzionalità e i chiarimenti nella versione 2.0
Questa appendice sono riepilogate le principali modifiche apportate alla specifica di C/C++ OpenMP nel passaggio dalla versione 1.0 alla versione 2.0. Gli elementi seguenti sono nuove funzionalità aggiunte alla specifica:  
  
-   Le virgole sono consentite nelle direttive OpenMP ([sezione 2.1](../../parallel/openmp/2-1-directive-format.md) nella pagina 7).  
  
-   Aggiunta del `num_threads` clausola. Questa clausola consente agli utenti di richiedere un numero specifico di thread per un costrutto parallelo ([sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8).  
  
-   Il `threadprivate` direttiva è stata estesa per accettare le variabili statiche con ambito blocco ([sezione 2.7.1](../../parallel/openmp/2-7-1-threadprivate-directive.md) nella pagina 23).  
  
-   Le matrici a lunghezza variabile C99 sono tipi completi e pertanto può essere specificate in un punto qualsiasi tipi completi sono consentiti, ad esempio negli elenchi di `private`, `firstprivate`, e `lastprivate` clausole ([sezione 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) nella pagina 25).  
  
-   Una variabile privata in un'area parallela può essere contrassegnata come privata nuovamente in una direttiva annidata ([sezione 2.7.2.1](../../parallel/openmp/2-7-2-1-private.md) nella pagina 25).  
  
-   Il `copyprivate` clausola è stato aggiunto. Fornisce un meccanismo per l'utilizzo di una variabile privata per la trasmissione di un valore da un membro di un gruppo per gli altri membri. È un'alternativa all'utilizzo di una variabile condivisa per il valore quando tale variabile condivisa fornendo sarebbe difficile (ad esempio, in una ricorsione di richiedere una variabile diversa a ogni livello). Il `copyprivate` clausola può apparire solo il **singolo** (direttiva) ([sezione 2.7.2.8](../../parallel/openmp/2-7-2-8-copyprivate.md) nella pagina 32).  
  
-   Aggiunta di routine di temporizzazione `omp_get_wtick` e `omp_get_wtime` simile alle routine MPI. Queste funzioni sono necessarie per l'esecuzione nella finestra di clock parete ([sezione 3.3.1](../../parallel/openmp/3-3-1-omp-get-wtime-function.md) nella pagina 44 e [sezione 3.3.2](../../parallel/openmp/3-3-2-omp-get-wtick-function.md) nella pagina 45).  
  
-   È stata aggiunta un'appendice con un elenco di comportamenti definito dall'implementazione in C/C++ OpenMP. Un'implementazione è necessaria definire e documentare il comportamento in questi casi ([appendice](../../parallel/openmp/e-implementation-defined-behaviors-in-openmp-c-cpp.md) nella pagina 97).  
  
-   Le modifiche seguenti hanno lo scopo di chiarire o correggere le funzionalità nelle specifiche API OpenMP precedente per C/C++:  
  
    -   È stato chiarito che il comportamento di `omp_set_nested` e `omp_set_dynamic` quando `omp_in_parallel` restituisce diverso da zero non è definito ([sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina, 39 e [sezione 3.1.9](../../parallel/openmp/3-1-9-omp-set-nested-function.md) nella pagina 40).  
  
    -   È stato chiarito annidamento di direttive quando viene utilizzato parallelo annidato ([sezione 2.9](../../parallel/openmp/2-9-directive-nesting.md) nella pagina 33).  
  
    -   Le funzioni di distruzione inizializzazione e di blocco di blocco possono essere chiamate in un'area parallela ([sezione 3.2.1](../../parallel/openmp/3-2-1-omp-init-lock-and-omp-init-nest-lock-functions.md) nella pagina 42 e [sezione 3.2.2](../../parallel/openmp/3-2-2-omp-destroy-lock-and-omp-destroy-nest-lock-functions.md) nella pagina 42).  
  
    -   Sono stati aggiunti nuovi esempi ([appendice](../../parallel/openmp/a-examples.md) nella pagina 51).