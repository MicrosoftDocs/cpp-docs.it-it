---
title: "Allocazione di memoria | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.memory"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "allocazione di memoria, routine"
  - "memoria, allocazione"
  - "memoria, gestione"
ms.assetid: b4470556-a128-4782-9943-2ccf7a7d9979
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Allocazione di memoria
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Usare queste routine per allocare, liberare e riallocare memoria.  
  
### Routine di allocazione della memoria  
  
|Routine|Uso|Equivalente .NET Framework|  
|-------------|---------|--------------------------------|  
|[\_alloca](../c-runtime-library/reference/alloca.md), [\_malloca](../c-runtime-library/reference/malloca.md)|Allocare memoria dallo stack|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[calloc](../c-runtime-library/reference/calloc.md)|Allocare memoria per la matrice, inizializzando ogni byte nel blocco allocato a 0|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_calloc\_dbg](../c-runtime-library/reference/calloc-dbg.md)|Versione di debug di `calloc`; disponibile solo nelle versioni di debug delle librerie runtime|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[operator delete](../c-runtime-library/operator-delete-crt.md)|Liberare un blocco allocato|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[operator delete&#91;&#93;](../c-runtime-library/delete-operator-crt.md)|Liberare un blocco allocato|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_expand](../c-runtime-library/reference/expand.md)|Espandere o ridurre un blocco di memoria senza spostarlo|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_expand\_dbg](../c-runtime-library/reference/expand-dbg.md)|Versione di debug di `_expand`; disponibile solo nelle versioni di debug delle librerie runtime|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[free](../c-runtime-library/reference/free.md)|Liberare un blocco allocato|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_free\_dbg](../c-runtime-library/reference/free-dbg.md)|Versione di debug di `free`; disponibile solo nelle versioni di debug delle librerie runtime|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_freea](../c-runtime-library/reference/freea.md)|Liberare un blocco allocato dallo stack|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_get\_heap\_handle](../c-runtime-library/reference/get-heap-handle.md)|Recuperare l'handle Win32 dell'heap CRT.|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_heapadd](../c-runtime-library/heapadd.md)|Aggiungere memoria all'heap|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_heapchk](../c-runtime-library/reference/heapchk.md)|Verificare la coerenza dell'heap|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_heapmin](../c-runtime-library/reference/heapmin.md)|Rilasciare la memoria inutilizzata nell'heap|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_heapset](../c-runtime-library/heapset.md)|Riempire le voci dell'heap vuote con un valore specificato|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_heapwalk](../c-runtime-library/reference/heapwalk.md)|Restituire informazioni su ogni voce dell'heap|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[malloc](../c-runtime-library/reference/malloc.md)|Allocare un blocco di memoria dall'heap|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_malloc\_dbg](../c-runtime-library/reference/malloc-dbg.md)|Versione di debug di `malloc`; disponibile solo nelle versioni di debug delle librerie runtime|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_msize](../c-runtime-library/reference/msize.md)|Restituire le dimensioni di un blocco allocato|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_msize\_dbg](../c-runtime-library/reference/msize-dbg.md)|Versione di debug di `_msize`; disponibile solo nelle versioni di debug delle librerie runtime|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[new](../c-runtime-library/operator-new-crt.md)|Allocare un blocco di memoria dall'heap|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[new&#91;&#93;](../c-runtime-library/new-operator-crt.md)|Allocare un blocco di memoria dall'heap|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_query\_new\_handler](../c-runtime-library/reference/query-new-handler.md)|Restituire l'indirizzo della routine del nuovo gestore corrente, come impostato da `_set_new_handler`|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_query\_new\_mode](../c-runtime-library/reference/query-new-mode.md)|Restituire un Integer che indica la nuova modalità di gestione impostata da `_set_new_mode` per `malloc`|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[realloc](../c-runtime-library/reference/realloc.md)|Riallocare un blocco a nuove dimensioni|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_realloc\_dbg](../c-runtime-library/reference/realloc-dbg.md)|Versione di debug di `realloc`; disponibile solo nelle versioni di debug delle librerie runtime|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_set\_new\_handler](../c-runtime-library/reference/set-new-handler.md)|Abilitare il meccanismo di gestione degli errori quando l'operatore `new` non riesce ad allocare memoria e abilitare la compilazione di librerie di modelli standard \(STL\)|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_set\_new\_mode](../c-runtime-library/reference/set-new-mode.md)|Impostare una nuova modalità di gestione per `malloc`|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
  
## Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)