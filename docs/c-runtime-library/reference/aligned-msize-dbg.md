---
title: "_aligned_msize_dbg | Microsoft Docs"
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
  - "_aligned_msize_dbg"
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
  - "_aligned_msize_dbg"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_aligned_msize_dbg"
ms.assetid: f1c44af0-3f66-4033-81d1-d71d3afecba0
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _aligned_msize_dbg
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce le dimensioni di un blocco di memoria allocato nell'heap \(solo per versione di debug\).  
  
## Sintassi  
  
```  
size_t _aligned_msize_dbg(  
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
 I valori `alignment` e `offset` devono corrispondere ai valori passati alla funzione che ha allocato il blocco.  
  
 `_aligned_msize_dbg` è una versione di debug della funzione [\_aligned\_msize](../../c-runtime-library/reference/aligned-msize.md).  Quando [\_DEBUG](../../c-runtime-library/debug.md) non è definito, ogni chiamata a `_aligned_msize_dbg` viene ridotta a una chiamata a `_aligned_msize`.  Sia `_aligned_msize` che `_aligned_msize_dbg` calcolano le dimensioni di un blocco di memoria nell'heap di base, ma `_aligned_msize_dbg` aggiunge una funzionalità di debug: include i buffer presenti su entrambi i lati del blocco di memoria nella dimensione restituita.  
  
 Questa funzione convalida il parametro.  Se `memblock` è un puntatore a null o `alignment` non è una potenza di 2, `_msize` viene invocato un gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'errore viene gestito, la funzione imposta `errno` a `EINVAL` e restituisce \-1.  
  
 Per informazioni su come i blocchi di memoria allocati, vengono inizializzati e vengono gestiti nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  Per informazioni sui tipi di blocchi di allocazione e su come vengono utilizzati, vedere [Tipi di blocchi sull'heap di debug](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Types_of_blocks_on_the_debug_heap).  Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la versione di debug in una build di debug di un'applicazione, consultare [Versioni di debug di funzioni di allocazione heap](../Topic/Debug%20Versions%20of%20Heap%20Allocation%20Functions.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_aligned_msize_dbg`|\<crtdbg.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Solo versioni di debug di [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)