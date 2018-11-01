---
title: _realloc_dbg
ms.date: 11/04/2016
apiname:
- _realloc_dbg
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
- _realloc_dbg
- realloc_dbg
helpviewer_keywords:
- reallocating memory blocks
- realloc_dbg function
- memory blocks, reallocating
- memory, reallocating
- _realloc_dbg function
ms.assetid: 7c3cb780-51ed-4d9c-9929-cdde606d846a
ms.openlocfilehash: 9b30dfd6fbae9a4831ff53e7896aeb995657da03
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50640284"
---
# <a name="reallocdbg"></a>_realloc_dbg

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
Tipo richiesto per il blocco riallocato: **CLIENT_BLOCK** oppure **NORMAL_BLOCK**.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto la **realloc** operazione oppure **NULL**.

*linenumber*<br/>
Numero di riga nel file di origine in cui il **realloc** è stato richiesto l'operazione oppure **NULL**.

Il *nomefile* e *linenumber* parametri sono disponibili solo quando **realloc_dbg** è stato chiamato in modo esplicito o [CRTDBG_MAP_ALLOC](../../c-runtime-library/crtdbg-map-alloc.md) è stata definita la costante del preprocessore.

## <a name="return-value"></a>Valore restituito

Al termine, questa funzione restituisce un puntatore alla porzione utente del blocco di memoria riallocato, chiama la nuova funzione di gestione o restituisce **NULL**. Per una descrizione completa del comportamento di restituzione, vedere la sezione relativa alle osservazioni. Per altre informazioni sull'uso della nuova funzione di gestione, vedere la funzione [recalloc](realloc.md).

## <a name="remarks"></a>Note

**realloc_dbg** è una versione di debug di [realloc](realloc.md) (funzione). Quando [debug](../../c-runtime-library/debug.md) non è definito, ogni chiamata a **realloc_dbg** viene ridotta a una chiamata a **realloc**. Entrambe **realloc** e **realloc_dbg** riallocano un blocco di memoria nell'heap di base, ma **realloc_dbg** contiene diverse funzionalità di debug: buffer presenti a entrambi i lati del porzione utente del blocco da verificare per le perdite, un parametro di tipo blocco per tenere traccia di tipi specifici di allocazioni e *nomefile*/*linenumber* informazioni per determinare l'origine di richieste di allocazione.

**realloc_dbg** rialloca il blocco di memoria specificato con quantità di spazio leggermente superiore al valore richiesto *newSize*. *newSize* può essere maggiore o minore della dimensione del blocco di memoria allocato in origine. Lo spazio aggiuntivo viene usato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire all'applicazione informazioni di intestazione di debug e buffer di sovrascrittura. La riallocazione potrebbe comportare lo spostamento del blocco di memoria originale in un'altra posizione nell'heap nonché la modifica della dimensione del blocco di memoria. Se il blocco di memoria viene spostato, i contenuti del blocco originale verranno sovrascritti.

**realloc_dbg** imposta **errno** al **ENOMEM** se un'allocazione di memoria ha esito negativo o se la quantità di memoria richiesta (incluso l'overhead menzionato precedentemente) supera **_HEAP_ MAXREQ**. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_realloc_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Vedere l'esempio nell'argomento [_msize_dbg](msize-dbg.md).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_malloc_dbg](malloc-dbg.md)<br/>
