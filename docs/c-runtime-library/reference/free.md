---
title: "free | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "free"
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
  - "api-ms-win-crt-heap-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "free"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "blocchi di memoria, deallocazione"
  - "free (funzione)"
ms.assetid: 74ded9cf-1863-432e-9306-327a42080bb8
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# free
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rilascia o libera un blocco di memoria.  
  
## Sintassi  
  
```  
void free(   
   void *memblock   
);  
```  
  
#### Parametri  
 `memblock`  
 Blocco di memoria precedentemente allocata da liberare.  
  
## Note  
 La funzione `free` rilascia un blocco di memoria \(`memblock`\) precedentemente allocato da una chiamata a `calloc`, `malloc`, o `realloc`.  Il numero di byte liberati è equivalente al numero di byte richiesto quando il blocco è stato allocato \(o riallocato, nel caso di `realloc`\).  Se `memblock` è `NULL`, il puntatore viene ignorato e `free` terminerà immediatamente.  Il tentativo di liberare un puntatore non valido \(un puntatore a un blocco di memoria che non è stato allocato da `calloc`, `malloc`, o `realloc`\) può influire sulle richieste di allocazione successive e provocare errori.  
  
 Se si verifica un errore nella liberazione della memoria, `errno` viene fornito con informazioni dal sistema operativo sulla natura dell'errore.  Per ulteriori informazioni, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Dopo che un blocco di memoria è stato liberato, [\_heapmin](../../c-runtime-library/reference/heapmin.md) riduce la quantità di memoria libera nell'heap mediante l'unione delle aree inutilizzate e rilasciandole nuovamente al sistema operativo.  La memoria liberata che non viene rilasciata al sistema operativo viene ripristinata al pool libero ed è disponibile nuovamente per l'allocazione.  
  
 Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime del linguaggio C, `free` viene identificato come [\_free\_dbg](../../c-runtime-library/reference/free-dbg.md).  Per ulteriori informazioni su come viene gestito l'heap durante il processo di debug, vedere [L'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
 `free` è contrassegnato `__declspec(noalias)`, pertanto si garantisce che la funzione non modifichi variabili globali.  Per ulteriori informazioni, vedere [noalias](../../cpp/noalias.md).  
  
 Per liberare la memoria allocata con [\_malloca](../../c-runtime-library/reference/malloca.md), utilizzare [\_freea](../../c-runtime-library/reference/freea.md).  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`free`|\<stdlib.h\> e \<malloc.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Vedere l'esempio relativo a [malloc](../../c-runtime-library/reference/malloc.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [\_alloca](../../c-runtime-library/reference/alloca.md)   
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [malloc](../../c-runtime-library/reference/malloc.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)   
 [\_free\_dbg](../../c-runtime-library/reference/free-dbg.md)   
 [\_heapmin](../../c-runtime-library/reference/heapmin.md)   
 [\_freea](../../c-runtime-library/reference/freea.md)