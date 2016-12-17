---
title: "_msize | Microsoft Docs"
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
  - "_msize"
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
  - "msize"
  - "_msize"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_msize (funzione)"
  - "blocchi di memoria"
  - "msize (funzione)"
ms.assetid: 02b1f89e-d0d7-4f12-938a-9eeba48a0f88
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _msize
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce la dimensione di un blocco di memoria allocato nell'heap.  
  
## Sintassi  
  
```  
  
      size_t _msize(  
   void *memblock   
);  
```  
  
#### Parametri  
 `memblock`  
 Puntatore al blocco di memoria.  
  
## Valore restituito  
 `_msize` restituisce la dimensione \(in byte\) come intero senza segno.  
  
## Note  
 La funzione `_msize` restituisce la dimensione, in byte, del blocco di memoria allocato da una chiamata a `calloc`, a `malloc`, o a `realloc`.  
  
 Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime del linguaggio C, `_msize` viene identificato come [\_msize\_dbg](../../c-runtime-library/reference/msize-dbg.md).  Per ulteriori informazioni su come viene gestito l'heap durante il processo di debug, vedere [L'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
 Questa funzione convalida il parametro.  Se `memblock` è un puntatore null, `_msize` richiama un gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'errore viene gestito, la funzione imposta `errno` a `EINVAL` e restituisce \-1.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_msize`|\<malloc.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
 Vedere l'esempio relativo a [realloc](../../c-runtime-library/reference/realloc.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Platform Invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [\_expand](../../c-runtime-library/reference/expand.md)   
 [malloc](../../c-runtime-library/reference/malloc.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)