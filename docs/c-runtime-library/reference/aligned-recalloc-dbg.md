---
title: "_aligned_recalloc_dbg | Microsoft Docs"
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
  - "_aligned_recalloc_dbg"
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
  - "_aligned_recalloc_dbg"
  - "aligned_recalloc_dbg"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_aligned_recalloc_dbg (funzione)"
  - "aligned_recalloc_dbg (funzione)"
ms.assetid: 55c3c27e-561c-4d6b-9bf9-1e34cc556e4b
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _aligned_recalloc_dbg
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Modifica la dimensione di un blocco di memoria allocato mediante [\_aligned\_malloc](../../c-runtime-library/reference/aligned-malloc.md) o [\_aligned\_offset\_malloc](../../c-runtime-library/reference/aligned-offset-malloc.md) e inizializza la memoria su 0 \(solo versione di debug\).  
  
## Sintassi  
  
```  
void * _aligned_recalloc_dbg(    void * memblock,     size_t num,    size_t size,     size_t alignment,    const char *filename,    int linenumber );  
```  
  
#### Parametri  
 \[in\] `memblock`  
 Puntatore al blocco di memoria corrente.  
  
 \[in\] `num`  
 Numero di elementi.  
  
 \[in\] `size`  
 Dimensione in byte di ogni elemento.  
  
 \[in\] `alignment`  
 Valore di allineamento, che deve essere una potenza intera di 2.  
  
 \[in\] `filename`  
 Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o `NULL`.  
  
 \[in\] `linenumber`  
 Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o `NULL`.  
  
## Valore restituito  
 `_aligned_recalloc_dbg` restituisce un puntatore void al blocco di memoria riallocato \(e possibilmente spostato\).  Il valore restituito è `NULL` se la dimensione è pari a zero e l'argomento relativo al buffer non è `NULL` o se non è disponibile memoria sufficiente per espandere il blocco alla dimensione specificata.  Nel primo caso il blocco originale viene liberato.  Nel secondo caso il blocco originale resta invariato.  Il valore restituito punta a uno spazio di archiviazione che garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto.  Per ottenere un puntatore a un tipo diverso da void, usare un cast del tipo sul valore restituito.  
  
 Riallocare memoria modificando l'allineamento di un blocco è un errore.  
  
## Note  
 `_aligned_recalloc_dbg` è una versione di debug della funzione [\_aligned\_recalloc](../../c-runtime-library/reference/aligned-recalloc.md).  Quando [\_DEBUG](../../c-runtime-library/debug.md) non è definito, ogni chiamata a `_aligned_recalloc_dbg` viene ridotta a una chiamata a `_aligned_recalloc`.  Sia `_aligned_recalloc` che `_aligned_recalloc_dbg` riallocano un blocco di memoria nell'heap di base, ma `_aligned_recalloc_dbg` contiene diverse funzionalità di debug, come buffer presenti alle estremità della porzione utente del blocco in cui verificare la presenza di perdite, un parametro di tipo del blocco per registrare i tipi specifici di allocazioni e informazioni su `filename`\/`linenumber` per determinare l'origine delle richieste di allocazione.  
  
 `_aligned_recalloc_dbg` rialloca il blocco di memoria specificato con una quantità di spazio leggermente superiore alla dimensione richiesta \(`num` \* `size`\) che può essere maggiore o minore delle dimensioni del blocco di memoria allocato in origine.  Lo spazio aggiuntivo viene usato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire all'applicazione informazioni di intestazione di debug e buffer di sovrascrittura.  La riallocazione potrebbe comportare lo spostamento del blocco di memoria originale in un'altra posizione nell'heap nonché la modifica della dimensione del blocco di memoria.  La porzione utente del blocco viene riempita con il valore 0xCD e i buffer di sovrascrittura vengono riempiti con 0xFD.  
  
 `_aligned_recalloc_dbg` imposta `errno` su `ENOMEM` se fallisce un'allocazione di memoria; `EINVAL` viene restituito se la quantità di memoria richiesta \(incluso l'overhead menzionato precedentemente\) supera `_HEAP_MAXREQ`.  Per informazioni su questo e altri codici di errore, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 `_aligned_recalloc_dbg`, inoltre, convalida i propri parametri.  Se `alignment` non è una potenza di 2, questa funzione richiama il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce `NULL` e imposta `errno` su `EINVAL`.  
  
 Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [Tipi di blocchi sull'heap di debug](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Types_of_blocks_on_the_debug_heap).  Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](../Topic/Debug%20Versions%20of%20Heap%20Allocation%20Functions.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_aligned_recalloc_dbg`|\<crtdbg.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Solo versioni di debug delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)