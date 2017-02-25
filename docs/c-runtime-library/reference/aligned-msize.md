---
title: "_aligned_msize | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_aligned_msize"
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
  - "_aligned_msize"
  - "aligned_msize"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_aligned_msize (funzione)"
  - "aligned_msize (funzione)"
ms.assetid: 10995edc-2110-4212-9ca9-5e0220a464f4
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# _aligned_msize
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce la dimensione di un blocco di memoria allocato nell'heap.  
  
## Sintassi  
  
```  
size_t _msize(  
   void *memblock,  
   size_t alignment,  
   size_t offset  
);  
```  
  
#### Parametri  
 \[in\] `memblock`  
 Puntatore al blocco di memoria.  
  
 \[in\] `alignment`  
 Il valore di allineamento, che deve essere una potenza intera di 2.  
  
 \[in\] `offset`  
 L'offset dell'allocazione di memoria per forzare l'allineamento.  
  
## Valore restituito  
 Restituisce la dimensione \(in byte\) come unsigned integer.  
  
## Note  
 La funzione `_aligned_msize` restituisce la dimensione, in byte, del blocco di memoria allocato da una chiamata a [\_aligned\_malloc](../../c-runtime-library/reference/aligned-malloc.md), a [\_aligned\_realloc](../../c-runtime-library/reference/aligned-realloc.md).  I valori `alignment` e `offset` devono corrispondere ai valori passati alla funzione che ha allocato il blocco.  
  
 Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime del linguaggio C, `_aligned_msize` viene identificata come [\_aligned\_msize\_dbg](../../c-runtime-library/reference/aligned-msize-dbg.md).  Per ulteriori informazioni su come viene gestito l'heap durante il processo di debug, vedere [L'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
 Questa funzione convalida il parametro.  Se `memblock` è un puntatore a null o `alignment` non è una potenza di 2, `_msize` viene invocato un gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'errore viene gestito, la funzione imposta `errno` a `EINVAL` e restituisce \-1.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_msize`|\<malloc.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)