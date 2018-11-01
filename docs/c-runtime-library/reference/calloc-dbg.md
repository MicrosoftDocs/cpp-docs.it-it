---
title: _calloc_dbg
ms.date: 11/04/2016
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
helpviewer_keywords:
- _calloc_dbg function
- calloc_dbg function
ms.assetid: 7f62c42b-eb9f-4de5-87d0-df57036c87de
ms.openlocfilehash: c525aa2f19b39ba3cb8304c59c96196707ad859c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50454392"
---
# <a name="callocdbg"></a>_calloc_dbg

Alloca un numero di blocchi di memoria nell'heap con spazio aggiuntivo per un'intestazione di debug e buffer di sovrascrittura (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
void *_calloc_dbg(
   size_t num,
   size_t size,
   int blockType,
   const char *filename,
   int linenumber
);
```

### <a name="parameters"></a>Parametri

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

Il *nomefile* e *linenumber* parametri sono disponibili solo quando **calloc_dbg** è stato chiamato in modo esplicito o [CRTDBG_MAP_ALLOC](../../c-runtime-library/crtdbg-map-alloc.md)è stata definita la costante del preprocessore.

## <a name="return-value"></a>Valore restituito

Al termine, questa funzione restituisce un puntatore alla porzione utente dell'ultimo blocco di memoria allocato, chiama la nuova funzione di gestione o restituisce **NULL**. Per una descrizione completa del comportamento di restituzione, vedere la sezione Note. Per altre informazioni sull'uso della nuova funzione di gestione, vedere la funzione [calloc](calloc.md).

## <a name="remarks"></a>Note

**realloc_dbg** è una versione di debug di [calloc](calloc.md) (funzione). Quando [debug](../../c-runtime-library/debug.md) non è definito, ogni chiamata a **calloc_dbg** viene ridotta a una chiamata a **calloc**. Entrambe **calloc** e **calloc_dbg** allocare *numero* blocchi di memoria nell'heap di base, ma **realloc_dbg** offre diversi debug funzionalità:

- Buffer presenti su entrambi i lati della porzione utente del blocco in cui verificare la presenza di perdite.

- Un parametro di tipo di blocco per tenere traccia di tipi specifici di allocazione.

- *nome file*/*linenumber* informazioni per determinare l'origine delle richieste di allocazione.

**realloc_dbg** alloca ogni blocco di memoria con quantità di spazio leggermente superiore al valore richiesto *dimensioni*. Lo spazio aggiuntivo viene usato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire all'applicazione informazioni di intestazione di debug e buffer di sovrascrittura. Quando il blocco è allocato, la porzione utente del blocco viene riempita con il valore 0xCD e ciascuno dei buffer di sovrascrittura viene riempito con 0xFD.

**realloc_dbg** imposta **errno** al **ENOMEM** se un'allocazione di memoria ha esito negativo; **EINVAL** viene restituito se la quantità di memoria richiesta (incluso l'overhead menzionato precedentemente) supera **heap_maxreq**. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra la chiamata di una funzione standard dell'heap e la chiamata della relativa versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_calloc_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_callocd.c
// This program uses _calloc_dbg to allocate space for
// 40 long integers. It initializes each element to zero.

#include <stdio.h>
#include <malloc.h>
#include <crtdbg.h>

int main( void )
{
    long *bufferN, *bufferC;

    // Call _calloc_dbg to include the filename and line number
    // of our allocation request in the header and also so we can
    // allocate CLIENT type blocks specifically
    bufferN = (long *)_calloc_dbg( 40, sizeof(long), _NORMAL_BLOCK, __FILE__, __LINE__ );
    bufferC = (long *)_calloc_dbg( 40, sizeof(long), _CLIENT_BLOCK, __FILE__, __LINE__ );
    if( bufferN != NULL && bufferC != NULL )
        printf( "Allocated memory successfully\n" );
    else
        printf( "Problem allocating memory\n" );

    / _free_dbg must be called to free CLIENT type blocks
    free( bufferN );
    _free_dbg( bufferC, _CLIENT_BLOCK );
}
```

```Output
Allocated memory successfully
```

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[calloc](calloc.md)<br/>
[_malloc_dbg](malloc-dbg.md)<br/>
[_DEBUG](../../c-runtime-library/debug.md)<br/>
