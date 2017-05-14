---
title: _malloc_dbg | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _malloc_dbg
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
- malloc_dbg
- _malloc_dbg
dev_langs:
- C++
helpviewer_keywords:
- malloc_dbg function
- memory allocation
- _malloc_dbg function
ms.assetid: c97eca51-140b-4461-8bd2-28965b49ecdb
caps.latest.revision: 16
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
ms.openlocfilehash: 7c1d34b3e426149f1e3fc895469ac5ed16a1d2f8
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="mallocdbg"></a>_malloc_dbg
Alloca un blocco di memoria nell'heap con spazio aggiuntivo per un'intestazione di debug e buffer di sovrascrittura (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void *_malloc_dbg(  
   size_t size,  
   int blockType,  
   const char *filename,  
   int linenumber   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `size`  
 Dimensione richiesta di ciascun blocco di memoria (byte).  
  
 `blockType`  
 Tipo di blocco di memoria richiesto: `_CLIENT_BLOCK` o `_NORMAL_BLOCK`.  
  
 `filename`  
 Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o NULL.  
  
 `linenumber`  
 Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o NULL.  
  
 I parametri `filename` e `linenumber` sono disponibili solo quando la funzione `_malloc_dbg` viene chiamata in modo esplicito o è stata definita la costante del preprocessore [_CRTDBG_MAP_ALLOC](../../c-runtime-library/crtdbg-map-alloc.md).  
  
## <a name="return-value"></a>Valore restituito  
 Al termine, questa funzione restituisce un puntatore alla porzione utente del blocco di memoria allocato, chiama la nuova funzione di gestione o restituisce NULL. Per una descrizione completa del comportamento di restituzione, vedere la sezione relativa alle osservazioni. Per altre informazioni sull'uso della nuova funzione di gestione, vedere la funzione [malloc](../../c-runtime-library/reference/malloc.md).  
  
## <a name="remarks"></a>Note  
 `_malloc_dbg` è una versione di debug della funzione [malloc](../../c-runtime-library/reference/malloc.md). Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, ogni chiamata a `_malloc_dbg` viene ridotta a una chiamata a `malloc`. Sia `malloc` che `_malloc_dbg` allocano un blocco di memoria nell'heap di base, ma `_malloc_dbg` contiene diverse funzionalità di debug: buffer presenti a entrambi i lati della porzione utente del blocco in cui verificare la presenza di perdite, un parametro di tipo blocco per tenere traccia di tipi specifici di allocazioni e informazioni su `filename`/`linenumber` per determinare l'origine delle richieste di allocazione.  
  
 `_malloc_dbg` alloca il blocco di memoria con una quantità di spazio appena superiore a quella richiesta da `size`. Lo spazio aggiuntivo viene usato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire all'applicazione informazioni di intestazione di debug e buffer di sovrascrittura. Quando il blocco è allocato, la porzione utente del blocco viene riempita con il valore 0xCD e ciascuno dei buffer di sovrascrittura viene riempito con 0xFD.  
  
 `_malloc_dbg` imposta `errno` su `ENOMEM` se un'allocazione di memoria ha esito negativo o se la quantità di memoria richiesta (incluso l'overhead citato in precedenza) supera `_HEAP_MAXREQ`. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_malloc_dbg`|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
 Per un esempio su come usare `_malloc_dbg`, vedere [crt_dbg1](http://msdn.microsoft.com/en-us/17b4b20c-e849-48f5-8eb5-dca6509cbaf9).  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [malloc](../../c-runtime-library/reference/malloc.md)   
 [_calloc_dbg](../../c-runtime-library/reference/calloc-dbg.md)   
 [_calloc_dbg](../../c-runtime-library/reference/calloc-dbg.md)
