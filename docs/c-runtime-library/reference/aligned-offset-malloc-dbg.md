---
title: "_aligned_offset_malloc_dbg | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_aligned_offset_malloc_dbg"
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
  - "_aligned_offset_malloc_dbg"
  - "aligned_offset_malloc_dbg"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_aligned_offset_malloc_dbg (funzione)"
  - "aligned_offset_malloc_dbg (funzione)"
ms.assetid: 6c242307-c59e-4d63-aae5-d8cbec8e021c
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# _aligned_offset_malloc_dbg
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Alloca memoria sul limite di allineamento specificato \(solo per versione di debug\).  
  
## Sintassi  
  
```  
void * _aligned_offset_malloc_dbg(  
   size_t size,   
   size_t alignment,   
   size_t offset,  
   const char *filename,  
   int linenumber   
);  
```  
  
#### Parametri  
 \[in\] `size`  
 La dimensione dell'allocazione di memoria richiesta.  
  
 \[in\] `alignment`  
 Il valore di allineamento, che deve essere una potenza intera di 2.  
  
 \[in\] `offset`  
 L'offset dell'allocazione di memoria per forzare l'allineamento.  
  
 \[in\] `filename`  
 Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o NULL.  
  
 \[in\] `linenumber`  
 Numero di riga del codice sorgente in cui è stata richiesta l'operazione di allocazione o NULL.  
  
## Valore restituito  
 Un puntatore al blocco di memoria allocato o `NULL` se l'operazione ha esito negativo.  
  
## Note  
 `_aligned_offset_malloc_dbg` è una versione di debug della funzione [\_aligned\_offset\_malloc](../../c-runtime-library/reference/aligned-offset-malloc.md).  Quando [\_DEBUG](../../c-runtime-library/debug.md) non è definito, ogni chiamata a `_aligned_offset_malloc_dbg` viene ridotta ad una chiamata a `_aligned_offset_malloc`.  Sia `_aligned_offset_malloc` che `_aligned_offset_malloc_dbg` allocano un blocco di memoria nell'heap di base, ma `_aligned_offset_malloc_dbg` offre diverse funzionalità di debug: buffer presenti da entrambi i lati della parte del blocco da verificare per le perdite, un parametro di tipo del blocco per registrare i tipi specifici di allocazioni e informazioni sul `filename`\/`linenumber` per determinare l'origine delle richieste di allocazione.  
  
 `_aligned_offset_malloc_dbg` assegna il blocco di memoria con più spazio rispetto a `size` richiesto.  Lo spazio aggiuntivo viene utilizzato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire l'applicazione con informazioni di intestazione di debug e sovrascrivere i buffer.  Quando il blocco è allocato, una parte di esso viene riempita con il valore 0xCD e ognuno dei buffer sovrascritti viene riempito con 0xFD.  
  
 `_aligned_offset_malloc_dbg` è utile nelle situazioni in cui l'allineamento è necessario in un elemento annidato; ad esempio, se l'allineamento è necessario in una classe annidata.  
  
 `_aligned_offset_malloc_dbg` si basa su `malloc`; per ulteriori informazioni, consultare [malloc](../../c-runtime-library/reference/malloc.md).  
  
 Questa funzione imposta `errno` in `ENOMEM` se non è riuscita l'allocazione della memoria o se la dimensione richiesta è maggiore di `_HEAP_MAXREQ`.  Per ulteriori informazioni su `errno`, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  Inoltre, `_aligned_offset_malloc` convalida i suoi parametri.  Se `alignment` non è una potenza di 2 o se `offset` è maggiore o uguale a `size` e diverso da zero, questa funzione chiama il gestore del parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, questa funzione restituisce `NULL` e imposta `errno` su `EINVAL`.  
  
 Per informazioni su come i blocchi di memoria allocati, vengono inizializzati e vengono gestiti nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
 Per informazioni sui tipi di blocchi di allocazione e su come vengono utilizzati, consultare [Tipi di blocchi sull'heap di debug](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Types_of_blocks_on_the_debug_heap).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_aligned_offset_malloc_dbg`|\<crtdbg.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Solo versioni di debug di [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)