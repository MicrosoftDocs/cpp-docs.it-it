---
title: _recalloc_dbg
ms.date: 11/04/2016
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
helpviewer_keywords:
- _recalloc_dbg function
- recalloc_dbg function
ms.assetid: 43c3e9b2-be6d-4508-9b0f-3220c8a47ca3
ms.openlocfilehash: e2782492d3338b5b548db0153b6123fb82ff5e72
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50653271"
---
# <a name="recallocdbg"></a>_recalloc_dbg

Rialloca una matrice e ne inizializza gli elementi a 0 (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
void *_recalloc_dbg(
   void *userData,
   size_t num,
   size_t size,
   int blockType,
   const char *filename,
   int linenumber
);
```

### <a name="parameters"></a>Parametri

*userData*<br/>
Puntatore al blocco di memoria allocato precedentemente.

*Numero*<br/>
Numero di blocchi di memoria richiesto.

*size*<br/>
Dimensione richiesta di ciascun blocco di memoria (byte).

*blockType*<br/>
Tipo di blocco di memoria richiesto: **CLIENT_BLOCK** oppure **NORMAL_BLOCK**.

Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details).

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o **NULL**.

*linenumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o **NULL**.

Il *nomefile* e *linenumber* parametri sono disponibili solo quando **recalloc_dbg** è stato chiamato in modo esplicito o [CRTDBG_MAP_ALLOC](../../c-runtime-library/crtdbg-map-alloc.md) è stata definita la costante del preprocessore.

## <a name="return-value"></a>Valore restituito

Al termine, questa funzione restituisce un puntatore alla porzione utente del blocco di memoria riallocato, chiama la nuova funzione di gestione o restituisce **NULL**. Per una descrizione completa del comportamento di restituzione, vedere la sezione relativa alle osservazioni. Per altre informazioni sull'uso della nuova funzione di gestione, vedere la funzione [_recalloc](recalloc.md).

## <a name="remarks"></a>Note

**recalloc_dbg** è una versione di debug di [recalloc](recalloc.md) (funzione). Quando [debug](../../c-runtime-library/debug.md) non è definito, ogni chiamata a **recalloc_dbg** viene ridotta a una chiamata a **recalloc**. Entrambe **recalloc** e **recalloc_dbg** riallocano un blocco di memoria nell'heap di base, ma **recalloc_dbg** contiene diverse funzionalità di debug: buffer presenti a entrambi i lati della porzione utente del blocco da verificare per le perdite, un blocco di tipo parametro per tenere traccia di tipi specifici di allocazioni e *nomefile*/*linenumber* informazioni per determinare il origine delle richieste di allocazione.

**recalloc_dbg** rialloca il blocco di memoria specificato con quantità di spazio leggermente superiore alla dimensione richiesta (*numero* * *dimensioni*) che può essere maggiore o minore della dimensione di il blocco di memoria allocato in origine. Lo spazio aggiuntivo viene usato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire all'applicazione informazioni di intestazione di debug e buffer di sovrascrittura. La riallocazione potrebbe comportare lo spostamento del blocco di memoria originale in un'altra posizione nell'heap nonché la modifica della dimensione del blocco di memoria. La porzione utente del blocco viene riempita con il valore 0xCD e ciascuno dei buffer di sovrascrittura viene riempito con 0xFD.

**recalloc_dbg** imposta **errno** al **ENOMEM** se un'allocazione di memoria ha esito negativo; **EINVAL** viene restituito se la quantità di memoria richiesta (incluso l'overhead menzionato precedentemente) supera **heap_maxreq**. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_recalloc_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
