---
description: 'Altre informazioni su: _malloc_dbg'
title: _malloc_dbg
ms.date: 11/04/2016
api_name:
- _malloc_dbg
api_location:
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- malloc_dbg
- _malloc_dbg
helpviewer_keywords:
- malloc_dbg function
- memory allocation
- _malloc_dbg function
ms.assetid: c97eca51-140b-4461-8bd2-28965b49ecdb
ms.openlocfilehash: 56b39ecbbe5f90d9eee378d4ce42016e5960ff63
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97299813"
---
# <a name="_malloc_dbg"></a>_malloc_dbg

Alloca un blocco di memoria nell'heap con spazio aggiuntivo per un'intestazione di debug e buffer di sovrascrittura (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
void *_malloc_dbg(
   size_t size,
   int blockType,
   const char *filename,
   int linenumber
);
```

### <a name="parameters"></a>Parametri

*size*<br/>
Dimensione richiesta di ciascun blocco di memoria (byte).

*blockType*<br/>
Tipo richiesto di blocco di memoria: **_CLIENT_BLOCK** o **_NORMAL_BLOCK**.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o **null**.

*LineNumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o **null**.

I parametri *filename* e *lineNumber* sono disponibili solo quando **_malloc_dbg** è stato chiamato in modo esplicito o è stata definita la costante del preprocessore [_CRTDBG_MAP_ALLOC](../../c-runtime-library/crtdbg-map-alloc.md) .

## <a name="return-value"></a>Valore restituito

Al termine, questa funzione restituisce un puntatore alla parte utente del blocco di memoria allocato, chiama la nuova funzione di gestione o restituisce **null**. Per una descrizione completa del comportamento di restituzione, vedere la sezione relativa alle osservazioni. Per altre informazioni sull'uso della nuova funzione di gestione, vedere la funzione [malloc](malloc.md).

## <a name="remarks"></a>Commenti

**_malloc_dbg** è una versione di debug della funzione [malloc](malloc.md) . Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, ogni chiamata a **_malloc_dbg** viene ridotta a una chiamata a **malloc**. Sia **malloc** che **_malloc_dbg** allocano un blocco di memoria nell'heap di base, ma **_malloc_dbg** offre diverse funzionalità di debug: buffer su entrambi i lati della parte utente del blocco in cui verificare la presenza di perdite, un parametro di tipo blocco per tenere traccia di tipi di allocazione specifici e informazioni sul *nome del file* / *lineNumber* per determinare l'origine delle richieste di allocazione.

**_malloc_dbg** alloca il blocco di memoria con una quantità di spazio leggermente superiore alla *dimensione* richiesta. Lo spazio aggiuntivo viene usato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire all'applicazione informazioni di intestazione di debug e buffer di sovrascrittura. Quando il blocco è allocato, la porzione utente del blocco viene riempita con il valore 0xCD e ciascuno dei buffer di sovrascrittura viene riempito con 0xFD.

**_malloc_dbg** imposta **errno** su **ENOMEM** se un'allocazione di memoria ha esito negativo o se la quantità di memoria necessaria (incluso l'overhead indicato in precedenza) supera **_HEAP_MAXREQ**. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_malloc_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Per un esempio di come usare **_malloc_dbg**, vedere [crt_dbg1](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg1).

## <a name="see-also"></a>Vedi anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[malloc](malloc.md)<br/>
[_calloc_dbg](calloc-dbg.md)<br/>
