---
title: "_freea | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_freea"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
apitype: "DLLExport"
f1_keywords: 
  - "freea"
  - "_freea"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_freea (funzione)"
  - "freea (funzione)"
  - "deallocazione di memoria"
ms.assetid: dcd30584-dd9d-443b-8c4c-13237a1cecac
caps.latest.revision: 18
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _freea
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rilascia o libera un blocco di memoria.  
  
## Sintassi  
  
```  
void _freea(   
   void *memblock   
);  
```  
  
#### Parametri  
 `memblock`  
 Blocco di memoria precedentemente allocata da liberare.  
  
## Valore restituito  
 Nessuno.  
  
## Note  
 La funzione `_freea` dealloca un blocco di memoria \(`memblock`\) precedentemente allocato da una chiamata a [\_malloca](../../c-runtime-library/reference/malloca.md).  `_freea` controlla se la memoria è stata allocata nell'heap o nello stack.  Se è stata allocata sullo stack, `_freea` non esegue alcuna operazione.  Se è stata allocata nell'heap, il numero di byte liberati equivale al numero di byte richiesto quando il blocco è stato allocato.  Se `memblock` è `NULL`, il puntatore viene ignorato e `_freea` terminerà immediatamente.  Il tentativo di liberare un puntatore non valido \(un puntatore a un blocco di memoria che non è stato allocato da `_malloca`\) potrebbe influire sulle richieste di allocazione successive e provocare errori.  
  
 \_`freea` chiama internamente `free` se rileva che è allocata la memoria nell'heap.  Se la memoria è nell'heap o nello stack è determinato da un marcatore inserito nella memoria all'indirizzo immediatamente precedente alla memoria allocata.  
  
 Se si verifica un errore nella liberazione della memoria, `errno` viene fornito con informazioni dal sistema operativo sulla natura dell'errore.  Per ulteriori informazioni, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Dopo che un blocco di memoria è stato liberato, [\_heapmin](../../c-runtime-library/reference/heapmin.md) riduce la quantità di memoria libera nell'heap mediante l'unione delle aree inutilizzate e rilasciandole nuovamente al sistema operativo.  La memoria liberata che non viene rilasciata al sistema operativo viene ripristinata al pool libero ed è disponibile nuovamente per l'allocazione.  
  
 Una chiamata a `_freea` deve associare a tutte le chiamate a `_malloca`.  È anche un errore chiamare due volte `_freea` sulla stessa memoria.  Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime del linguaggio C, in particolare con le funzionalità di [\_malloc\_dbg](../../c-runtime-library/reference/malloc-dbg.md) definendo `_CRTDBG_MAP_ALLOC`, è più facile trovare le chiamate mancanti o duplicate a `_freea`.  Per ulteriori informazioni su come viene gestito l'heap durante il processo di debug, vedere [L'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
 `_freea` è contrassegnato `__declspec(noalias)`, pertanto si garantisce che la funzione non modifichi variabili globali.  Per ulteriori informazioni, vedere [noalias](../../cpp/noalias.md).  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_freea`|\<stdlib.h\> e \<malloc.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
 Vedere l'esempio per [\_malloca](../../c-runtime-library/reference/malloca.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [\_malloca](../../c-runtime-library/reference/malloca.md)   
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [malloc](../../c-runtime-library/reference/malloc.md)   
 [\_malloc\_dbg](../../c-runtime-library/reference/malloc-dbg.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)   
 [\_free\_dbg](../../c-runtime-library/reference/free-dbg.md)   
 [\_heapmin](../../c-runtime-library/reference/heapmin.md)