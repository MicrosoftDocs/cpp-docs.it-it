---
title: _aligned_malloc_dbg | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _aligned_malloc_dbg
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
apitype: DLLExport
f1_keywords:
- _aligned_malloc_dbg
- aligned_malloc_dbg
dev_langs:
- C++
helpviewer_keywords:
- aligned_malloc_dbg function
- _aligned_malloc_dbg function
ms.assetid: fb0429c3-685d-4826-9075-2515c5bdc5c6
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: aca23722103b75c6420ed14132d1fdac9cd097f6
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="alignedmallocdbg"></a>_aligned_malloc_dbg
Alloca memoria in un limite di allineamento specificato con spazio aggiuntivo per un'intestazione di debug e buffer di sovrascrittura (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void * _aligned_malloc_dbg(  
    size_t size,   
    size_t alignment,  
   const char *filename,  
   int linenumber   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `size`  
 Dimensione dell'allocazione di memoria richiesta.  
  
 [in] `alignment`  
 Valore di allineamento, che deve essere una potenza intera di 2.  
  
 [in] `filename`  
 Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o NULL.  
  
 [in] `linenumber`  
 Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o NULL.  
  
## <a name="return-value"></a>Valore restituito  
 Puntatore al blocco di memoria allocato o `NULL` se l'operazione non è riuscita.  
  
## <a name="remarks"></a>Note  
 `_aligned_malloc_dbg` è una versione di debug della funzione [_aligned_malloc](../../c-runtime-library/reference/aligned-malloc.md). Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, ogni chiamata a `_aligned_malloc_dbg` viene ridotta a una chiamata a `_aligned_malloc`. Sia `_aligned_malloc` che `_aligned_malloc_dbg` allocano un blocco di memoria nell'heap di base, ma `_aligned_malloc_dbg` contiene diverse funzionalità di debug: buffer presenti a entrambi i lati della porzione utente del blocco in cui verificare la presenza di perdite e informazioni su `filename`/`linenumber` per determinare l'origine delle richieste di allocazione.  
  
 `_aligned_malloc_dbg` alloca il blocco di memoria con una quantità di spazio appena superiore a quella richiesta da `size`. Lo spazio aggiuntivo viene usato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire all'applicazione informazioni di intestazione di debug e buffer di sovrascrittura. Quando il blocco è allocato, la porzione utente del blocco viene riempita con il valore 0xCD e ciascuno dei buffer di sovrascrittura viene riempito con 0xFD.  
  
 `_aligned_malloc_dbg` imposta `errno` su `ENOMEM` se un'allocazione di memoria ha esito negativo o se la quantità di memoria richiesta (incluso l'overhead citato in precedenza) supera `_HEAP_MAXREQ`. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). `_aligned_malloc_dbg`, inoltre, convalida i propri parametri. Se `alignment` non è una potenza di 2 o `size` è uguale a 0, questa funzione richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce `NULL` e imposta `errno` su `EINVAL`.  
  
 Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_aligned_malloc_dbg`|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)
