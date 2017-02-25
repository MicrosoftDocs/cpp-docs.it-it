---
title: "_realloc_dbg | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_realloc_dbg"
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
  - "_realloc_dbg"
  - "realloc_dbg"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "riallocazione di blocchi di memoria"
  - "realloc_dbg (funzione)"
  - "blocchi di memoria, riallocazione"
  - "memoria, riallocazione"
  - "_realloc_dbg (funzione)"
ms.assetid: 7c3cb780-51ed-4d9c-9929-cdde606d846a
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# _realloc_dbg
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ridistribuisce un blocco di memoria specificato nell'heap spostando e\/o ridimensionando il blocco \(solo versione di debug\).  
  
## Sintassi  
  
```  
void *_realloc_dbg(  
   void *userData,  
   size_t newSize,  
   int blockType,  
   const char *filename,  
   int linenumber   
);  
```  
  
#### Parametri  
 `userData`  
 Puntatore al blocco di memoria allocato precedentemente.  
  
 `newSize`  
 Nuova dimensione richiesta dal blocco riallocato \(in byte\).  
  
 `blockType`  
 Tipo richiesto per il blocco ridistribuito: `_CLIENT_BLOCK` o `_NORMAL_BLOCK`.  
  
 `filename`  
 Puntatore al nome del file di origine che ha richiesto l'operazione `realloc` o NULL.  
  
 `linenumber`  
 Numero di riga del codice sorgente in cui è stata richiesta l'operazione `realloc` o NULL.  
  
 I parametri `linenumber` `filename` sono disponibili solo quando `_realloc_dbg` è stato chiamato in modo esplicito o è stata definita una costante del preprocessore [\_CRTDBG\_MAP\_ALLOC](../../c-runtime-library/crtdbg-map-alloc.md).  
  
## Valore restituito  
 Al termine, questa funzione restituisce all'utente un puntatore del blocco di memoria riallocato, chiama la nuova funzione di gestione, o restituisce NULL.  Per una descrizione completa del comportamento di ritorno, consultare la sezione relativa alle osservazioni.  Per ulteriori informazioni su come la nuova funzione di gestione viene utilizzata, consultare la funzione [realloc](../../c-runtime-library/reference/realloc.md).  
  
## Note  
 `_realloc_dbg` è una versione di debug della funzione [realloc](../../c-runtime-library/reference/realloc.md).  Quando [\_DEBUG](../../c-runtime-library/debug.md) non è definito, ogni chiamata a `_realloc_dbg` viene ridotta ad una chiamata a `realloc`.  Sia `realloc` che `_realloc_dbg` riallocano un blocco di memoria nell'heap di base, ma `_realloc_dbg` contiene diverse funzionalità di debug: buffer presenti da entrambi i lati della parte del blocco da verificare per le perdite, un parametro di tipo del blocco per registrare i tipi specifici di allocazioni e informazioni sul `filename`\/`linenumber` per determinare l'origine delle richieste di allocazione.  
  
 `_realloc_dbg` rialloca il blocco di memoria specificato con più spazio rispetto a `newSize` richiesto.  `newSize` potrebbe essere maggiore o minore delle dimensioni del blocco di memoria allocata.  Lo spazio aggiuntivo viene utilizzato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire l'applicazione con informazioni di intestazione di debug e sovrascrivere i buffer.  La riallocazione potrebbe comportare lo spostamento del blocco di memoria originale in un'altra posizione nell'heap nonché modificare le dimensioni del blocco di memoria.  Se il blocco di memoria viene spostato, il contenuto del blocco originale viene sovrascritto.  
  
 `_realloc_dbg` imposta `errno` a `ENOMEM` se fallisce un'allocazione di memoria o se la quantità di memoria necessaria \(incluso il sovraccarico menzionato precedentemente\) supera `_HEAP_MAXREQ`.  Per informazioni su questo e altri codici di errore, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Per informazioni su come i blocchi di memoria allocati, vengono inizializzati e vengono gestiti nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  Per informazioni sui tipi di blocchi di allocazione e su come vengono utilizzati, consultare [Tipi di blocchi sull'heap di debug](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Types_of_blocks_on_the_debug_heap).  Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la versione di debug in una build di debug di un'applicazione, consultare [Versioni di debug di funzioni di allocazione heap](../Topic/Debug%20Versions%20of%20Heap%20Allocation%20Functions.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_realloc_dbg`|\<crtdbg.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Solo versioni di debug di [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
 Vedere l'esempio in [\_msize\_dbg](../../c-runtime-library/reference/msize-dbg.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [\_malloc\_dbg](../../c-runtime-library/reference/malloc-dbg.md)