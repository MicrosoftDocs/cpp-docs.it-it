---
title: _recalloc_dbg | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _recalloc_dbg
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
- recalloc_dbg
- _recalloc_dbg
dev_langs:
- C++
helpviewer_keywords:
- _recalloc_dbg function
- recalloc_dbg function
ms.assetid: 43c3e9b2-be6d-4508-9b0f-3220c8a47ca3
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 18c1e36c2671c1c04ae8dd317a14234eda4c09a3
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="recallocdbg"></a>_recalloc_dbg
Rialloca una matrice e ne inizializza gli elementi a 0 (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void *_recalloc_dbg(   
   void *userData,  
   size_t num,  
   size_t size,  
   int blockType,  
   const char *filename,  
   int linenumber   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `userData`  
 Puntatore al blocco di memoria allocato precedentemente.  
  
 `num`  
 Numero di blocchi di memoria richiesto.  
  
 `size`  
 Dimensione richiesta di ciascun blocco di memoria (byte).  
  
 `blockType`  
 Tipo richiesto di blocco di memoria: `_CLIENT_BLOCK` o `_NORMAL_BLOCK`.  
  
 Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details).  
  
 `filename`  
 Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o `NULL`.  
  
 `linenumber`  
 Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o `NULL`.  
  
 I parametri `filename` e `linenumber` sono disponibili solo quando la funzione `_recalloc_dbg` viene chiamata in modo esplicito o è stata definita la costante del preprocessore [_CRTDBG_MAP_ALLOC](../../c-runtime-library/crtdbg-map-alloc.md).  
  
## <a name="return-value"></a>Valore restituito  
 Al termine, questa funzione restituisce un puntatore alla porzione utente del blocco di memoria riallocato, chiama la nuova funzione di gestione o restituisce NULL. Per una descrizione completa del comportamento di restituzione, vedere la sezione relativa alle osservazioni. Per altre informazioni sull'uso della nuova funzione di gestione, vedere la funzione [_recalloc](../../c-runtime-library/reference/recalloc.md).  
  
## <a name="remarks"></a>Note  
 `_recalloc_dbg` è una versione di debug della funzione [_recalloc](../../c-runtime-library/reference/recalloc.md). Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, ogni chiamata a `_recalloc_dbg` viene ridotta a una chiamata a `_recalloc`. Sia `_recalloc` che `_recalloc_dbg` riallocano un blocco di memoria nell'heap di base, ma `_recalloc_dbg` contiene diverse funzionalità di debug: buffer presenti a entrambi i lati della parte del blocco da verificare per le perdite, un parametro di tipo del blocco per registrare i tipi specifici di allocazioni e informazioni su `filename`/`linenumber` per determinare l'origine delle richieste di allocazione.  
  
 `_recalloc_dbg` rialloca il blocco di memoria specificato con una quantità di spazio leggermente superiore alla dimensione richiesta (`num` * `size`) che può essere maggiore o minore delle dimensioni del blocco di memoria allocato in origine. Lo spazio aggiuntivo viene usato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire all'applicazione informazioni di intestazione di debug e buffer di sovrascrittura. La riallocazione potrebbe comportare lo spostamento del blocco di memoria originale in un'altra posizione nell'heap nonché la modifica della dimensione del blocco di memoria. La porzione utente del blocco viene riempita con il valore 0xCD e ciascuno dei buffer di sovrascrittura viene riempito con 0xFD.  
  
 `_recalloc_dbg` imposta `errno` su `ENOMEM` se fallisce un'allocazione di memoria; `EINVAL` viene restituito se la quantità di memoria richiesta (incluso l'overhead menzionato precedentemente) supera `_HEAP_MAXREQ`. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_recalloc_dbg`|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)
