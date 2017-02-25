---
title: "OpenMP Functions | Microsoft Docs"
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
ms.assetid: a55a2e5c-a260-44ee-bbd6-de7e2351b384
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# OpenMP Functions
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Vengono forniti collegamenti alle funzioni utilizzate in OpenMP API.  
  
 L'implementazione di Visual C\+\+ standard di OpenMP sono incluse le seguenti funzioni.  
  
|Funzione|Descrizione|  
|--------------|-----------------|  
|[omp\_destroy\_lock](../../../parallel/openmp/reference/omp-destroy-lock.md)|Uninitializes un blocco.|  
|[omp\_destroy\_nest\_lock](../../../parallel/openmp/reference/omp-destroy-nest-lock.md)|Uninitializes un blocco nidificabile.|  
|[omp\_get\_dynamic](../../../parallel/openmp/reference/omp-get-dynamic.md)|Restituisce un valore che indica se il numero di thread disponibili nell'area parallela successiva può essere regolato dal runtime.|  
|[omp\_get\_max\_threads](../../../parallel/openmp/reference/omp-get-max-threads.md)|Restituisce un Integer che sia uguale o maggiore del numero di thread che sono disponibili se un'area parallela senza [num\_threads](../../../parallel/openmp/reference/num-threads.md) è stato definito in tale punto di codice.|  
|[omp\_get\_nested](../../../parallel/openmp/reference/omp-get-nested.md)|Restituisce un valore che indica se il parallelismo annidato è abilitato.|  
|[omp\_get\_num\_procs](../../../parallel/openmp/reference/omp-get-num-procs.md)|Restituisce il numero di processori disponibili quando viene chiamata la funzione.|  
|[omp\_get\_num\_threads](../../../parallel/openmp/reference/omp-get-num-threads.md)|Restituisce il numero di thread nell'area parallela.|  
|[omp\_get\_thread\_num](../../../parallel/openmp/reference/omp-get-thread-num.md)|Restituisce il numero del thread che esegue all'interno del team di thread.|  
|[omp\_get\_wtick](../../../parallel/openmp/reference/omp-get-wtick.md)|Restituisce il numero di secondi tra i cicli macchina del processore.|  
|[omp\_get\_wtime](../../../parallel/openmp/reference/omp-get-wtime.md)|Restituisce un valore in secondi del tempo trascorso da un certo punto.|  
|[omp\_in\_parallel](../../../parallel/openmp/reference/omp-in-parallel.md)|Restituisce diverso da zero se viene chiamato dall'interno di un'area parallela.|  
|[omp\_init\_lock](../../../parallel/openmp/reference/omp-init-lock.md)|inizializza un blocco semplice.|  
|[omp\_init\_nest\_lock](../../../parallel/openmp/reference/omp-init-nest-lock.md)|inizializza un blocco.|  
|[omp\_set\_dynamic](../../../parallel/openmp/reference/omp-set-dynamic.md)|Indica che il numero di thread disponibili nell'area parallela successiva può essere regolato dal runtime.|  
|[omp\_set\_lock](../../../parallel/openmp/reference/omp-set-lock.md)|I blocchi pertanto l'esecuzione fino a quando un blocco non è disponibile.|  
|[omp\_set\_nest\_lock](../../../parallel/openmp/reference/omp-set-nest-lock.md)|I blocchi pertanto l'esecuzione fino a quando un blocco non è disponibile.|  
|[omp\_set\_nested](../../../parallel/openmp/reference/omp-set-nested.md)|Abilita annidato il parallelismo.|  
|[omp\_set\_num\_threads](../../../parallel/openmp/reference/omp-set-num-threads.md)|Imposta il numero di thread nelle aree parallele successive, a meno che non venga ignorato da un oggetto [num\_threads](../../../parallel/openmp/reference/num-threads.md) clausola.|  
|[omp\_test\_lock](../../../parallel/openmp/reference/omp-test-lock.md)|Tentativo di impostare un blocco ma non blocca l'esecuzione del thread.|  
|[omp\_test\_nest\_lock](../../../parallel/openmp/reference/omp-test-nest-lock.md)|Tentativo di impostare un blocco nidificabile ma non blocca l'esecuzione del thread.|  
|[omp\_unset\_lock](../../../parallel/openmp/reference/omp-unset-lock.md)|rilascia un blocco.|  
|[omp\_unset\_nest\_lock](../../../parallel/openmp/reference/omp-unset-nest-lock.md)|rilascia un blocco nidificabile.|  
  
## Vedere anche  
 [Library Reference](../../../parallel/openmp/reference/openmp-library-reference.md)