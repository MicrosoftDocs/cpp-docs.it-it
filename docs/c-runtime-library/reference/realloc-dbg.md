---
description: 'Altre informazioni su: _realloc_dbg'
title: _realloc_dbg
ms.date: 11/04/2016
api_name:
- _realloc_dbg
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
- _realloc_dbg
- realloc_dbg
helpviewer_keywords:
- reallocating memory blocks
- realloc_dbg function
- memory blocks, reallocating
- memory, reallocating
- _realloc_dbg function
ms.assetid: 7c3cb780-51ed-4d9c-9929-cdde606d846a
ms.openlocfilehash: 1a211ac886de34d6b251622dec2f4500bb290d14
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97274788"
---
# <a name="_realloc_dbg"></a>_realloc_dbg

Rialloca un blocco specificato di memoria nell'heap spostando e/o ridimensionando il blocco (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
void *_realloc_dbg(
   void *userData,
   size_t newSize,
   int blockType,
   const char *filename,
   int linenumber
);
```

### <a name="parameters"></a>Parametri

*userData*<br/>
Puntatore al blocco di memoria allocato precedentemente.

*newSize*<br/>
Dimensioni richieste per il blocco riallocato (byte).

*blockType*<br/>
Tipo richiesto per il blocco riallocato: **_CLIENT_BLOCK** o **_NORMAL_BLOCK**.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto l'operazione **realloc** o **null**.

*LineNumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione **realloc** o **null**.

I parametri *filename* e *lineNumber* sono disponibili solo quando **_realloc_dbg** è stato chiamato in modo esplicito o è stata definita la costante del preprocessore [_CRTDBG_MAP_ALLOC](../../c-runtime-library/crtdbg-map-alloc.md) .

## <a name="return-value"></a>Valore restituito

Al termine, questa funzione restituisce un puntatore alla parte utente del blocco di memoria riallocato, chiama la nuova funzione di gestione o restituisce **null**. Per una descrizione completa del comportamento di restituzione, vedere la sezione relativa alle osservazioni. Per altre informazioni sull'uso della nuova funzione di gestione, vedere la funzione [recalloc](realloc.md).

## <a name="remarks"></a>Commenti

**_realloc_dbg** è una versione di debug della funzione [realloc](realloc.md) . Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, ogni chiamata a **_realloc_dbg** viene ridotta a una chiamata a **realloc**. Sia **realloc** che **_realloc_dbg** riallocano un blocco di memoria nell'heap di base, ma **_realloc_dbg** supporta diverse funzionalità di debug: buffer su entrambi i lati della parte utente del blocco per cui verificare la presenza di perdite, un parametro di tipo blocco per tenere traccia di tipi di allocazione specifici e informazioni sul *nome del file* / *lineNumber* per determinare l'origine delle richieste di allocazione.

**_realloc_dbg** rialloca il blocco di memoria specificato con una quantità di spazio leggermente superiore a quella richiesta dal *newSize*. *newSize* potrebbe essere maggiore o minore delle dimensioni del blocco di memoria allocato in origine. Lo spazio aggiuntivo viene usato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire all'applicazione informazioni di intestazione di debug e buffer di sovrascrittura. La riallocazione potrebbe comportare lo spostamento del blocco di memoria originale in un'altra posizione nell'heap nonché la modifica della dimensione del blocco di memoria. Se il blocco di memoria viene spostato, i contenuti del blocco originale verranno sovrascritti.

**_realloc_dbg** imposta **errno** su **ENOMEM** se un'allocazione di memoria ha esito negativo o se la quantità di memoria necessaria (incluso l'overhead indicato in precedenza) supera **_HEAP_MAXREQ**. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_realloc_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Vedere l'esempio nell'argomento [_msize_dbg](msize-dbg.md).

## <a name="see-also"></a>Vedi anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_malloc_dbg](malloc-dbg.md)<br/>
