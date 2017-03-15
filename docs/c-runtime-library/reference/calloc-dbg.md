---
title: _calloc_dbg | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _calloc_dbg
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
- _calloc_dbg
- calloc_dbg
dev_langs:
- C++
helpviewer_keywords:
- _calloc_dbg function
- calloc_dbg function
ms.assetid: 7f62c42b-eb9f-4de5-87d0-df57036c87de
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: f505aa045dcee661bfddec2ed1d01a7b77efcc51
ms.lasthandoff: 02/24/2017

---
# <a name="callocdbg"></a>_calloc_dbg
Alloca un numero di blocchi di memoria nell'heap con spazio aggiuntivo per un'intestazione di debug e buffer di sovrascrittura (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void *_calloc_dbg(   
   size_t num,  
   size_t size,  
   int blockType,  
   const char *filename,  
   int linenumber   
);  
```  
  
#### <a name="parameters"></a>Parametri  
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
  
 I parametri `filename` e `linenumber` sono disponibili solo quando la funzione `_calloc_dbg` viene chiamata in modo esplicito o è stata definita la costante del preprocessore [_CRTDBG_MAP_ALLOC](../../c-runtime-library/crtdbg-map-alloc.md).  
  
## <a name="return-value"></a>Valore restituito  
 Al termine, questa funzione restituisce un puntatore alla porzione utente dell'ultimo blocco di memoria allocato, chiama la nuova funzione di gestione o restituisce `NULL`. Per una descrizione completa del comportamento di restituzione, vedere la sezione Note. Per altre informazioni sull'uso della nuova funzione di gestione, vedere la funzione [calloc](../../c-runtime-library/reference/calloc.md).  
  
## <a name="remarks"></a>Note  
 `_calloc_dbg` è una versione di debug della funzione [calloc](../../c-runtime-library/reference/calloc.md). Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, ogni chiamata a `_calloc_dbg` viene ridotta a una chiamata a `calloc`. Sia `calloc` che `_calloc_dbg` allocano blocchi di memoria `num` nell'heap di base, ma `_calloc_dbg` offre diverse funzionalità di debug:  
  
-   Buffer presenti su entrambi i lati della porzione utente del blocco in cui verificare la presenza di perdite.  
  
-   Un parametro di tipo di blocco per tenere traccia di tipi specifici di allocazione.  
  
-   `filename`/`linenumber` informazioni per determinare l'origine delle richieste di allocazione.  
  
 `_calloc_dbg` alloca ogni blocco di memoria con una quantità di spazio leggermente superiore a quella richiesta, ovvero `size`. Lo spazio aggiuntivo viene usato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire all'applicazione informazioni di intestazione di debug e buffer di sovrascrittura. Quando il blocco è allocato, la porzione utente del blocco viene riempita con il valore 0xCD e ciascuno dei buffer di sovrascrittura viene riempito con 0xFD.  
  
 `_calloc_dbg` imposta `errno` su `ENOMEM` se fallisce un'allocazione di memoria; `EINVAL` viene restituito se la quantità di memoria richiesta (incluso l'overhead menzionato precedentemente) supera `_HEAP_MAXREQ`. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra la chiamata di una funzione standard dell'heap e la chiamata della relativa versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_calloc_dbg`|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_callocd.c  
/*  
 * This program uses _calloc_dbg to allocate space for  
 * 40 long integers. It initializes each element to zero.  
 */  
#include <stdio.h>  
#include <malloc.h>  
#include <crtdbg.h>  
  
int main( void )  
{  
        long *bufferN, *bufferC;  
  
        /*   
         * Call _calloc_dbg to include the filename and line number  
         * of our allocation request in the header and also so we can  
         * allocate CLIENT type blocks specifically  
         */  
        bufferN = (long *)_calloc_dbg( 40, sizeof(long), _NORMAL_BLOCK, __FILE__, __LINE__ );  
        bufferC = (long *)_calloc_dbg( 40, sizeof(long), _CLIENT_BLOCK, __FILE__, __LINE__ );  
        if( bufferN != NULL && bufferC != NULL )  
              printf( "Allocated memory successfully\n" );  
        else  
              printf( "Problem allocating memory\n" );  
  
        /*   
         * _free_dbg must be called to free CLIENT type blocks  
         */  
        free( bufferN );  
        _free_dbg( bufferC, _CLIENT_BLOCK );  
}  
```  
  
```Output  
Allocated memory successfully  
```  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [_malloc_dbg](../../c-runtime-library/reference/malloc-dbg.md)   
 [_DEBUG](../../c-runtime-library/debug.md)
