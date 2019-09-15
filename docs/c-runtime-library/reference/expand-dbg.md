---
title: _expand_dbg
ms.date: 11/04/2016
api_name:
- _expand_dbg
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
- expand_dbg
- _expand_dbg
helpviewer_keywords:
- memory blocks, changing size
- expand_dbg function
- _expand_dbg function
ms.assetid: dc58c91f-72a8-48c6-b643-fe130fb6c1fd
ms.openlocfilehash: 836b9cffcf0367f248a14469b30c1a355e2bdec2
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70941584"
---
# <a name="_expand_dbg"></a>_expand_dbg

Ridimensiona un blocco di memoria specificato nell'heap espandendo o contraendo il blocco (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
void *_expand_dbg(
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
Nuove dimensioni richieste per il blocco, in byte.

*blockType*<br/>
Tipo richiesto per il blocco ridimensionato: **_CLIENT_BLOCK** o **_NORMAL_BLOCK**.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto l'operazione di espansione o **null**.

*linenumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione di espansione o **null**.

I parametri *filename* e *lineNumber* sono disponibili solo quando **_expand_dbg** è stato chiamato in modo esplicito o è stata definita la costante del preprocessore [_CRTDBG_MAP_ALLOC](../../c-runtime-library/crtdbg-map-alloc.md) .

## <a name="return-value"></a>Valore restituito

Al termine, **_expand_dbg** restituisce un puntatore al blocco di memoria ridimensionato. Poiché la memoria non viene spostata, l'indirizzo è lo stesso usato per userData. Se si è verificato un errore o non è stato possibile espandere il blocco fino alla dimensione richiesta, viene restituito **null**. Se si verifica un errore, **errno** è con le informazioni del sistema operativo sulla natura dell'errore. Per ulteriori informazioni su **errno**, vedere [errno, doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

La funzione **_expand_dbg** è una versione di debug della funzione _[expand](expand.md) . Quando _ [debug](../../c-runtime-library/debug.md) non è definito, ogni chiamata a **_expand_dbg** viene ridotta a una chiamata a **_expand**. Sia **_expand** che **_expand_dbg** ridimensionano un blocco di memoria nell'heap di base, ma **_expand_dbg** include diverse funzionalità di debug: buffer su entrambi i lati della parte utente del blocco in cui verificare la presenza di perdite, un parametro di tipo blocco da rilevare tipi di allocazione specifici e informazioni sul *nome del file*/*lineNumber* per determinare l'origine delle richieste di allocazione.

**_expand_dbg** ridimensiona il blocco di memoria specificato con una quantità di spazio leggermente superiore a quella richiesta dal *newSize*. *newSize* potrebbe essere maggiore o minore delle dimensioni del blocco di memoria allocato in origine. Lo spazio aggiuntivo viene usato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire all'applicazione informazioni di intestazione di debug e buffer di sovrascrittura. Il ridimensionamento viene eseguito espandendo o contraendo il blocco di memoria originale. **_expand_dbg** non sposta il blocco di memoria, così come la funzione [_realloc_dbg](realloc-dbg.md) .

Quando *newSize* è maggiore della dimensione del blocco originale, il blocco di memoria viene espanso. Durante un'espansione, se il blocco di memoria non può essere espanso per soddisfare le dimensioni richieste, viene restituito **null** . Quando *newSize* è inferiore alle dimensioni del blocco originale, il blocco di memoria viene contratto fino a quando non viene ottenuta la nuova dimensione.

Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

Questa funzione convalida i relativi parametri. Se *memblock* è un puntatore null o se size è maggiore di **_HEAP_MAXREQ**, questa funzione richiama un gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e la funzione restituisce **null**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_expand_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_expand_dbg.c
//
// This program allocates a block of memory using _malloc_dbg
// and then calls _msize_dbg to display the size of that block.
// Next, it uses _expand_dbg to expand the amount of
// memory used by the buffer and then calls _msize_dbg again to
// display the new amount of memory allocated to the buffer.
//

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <crtdbg.h>

int main( void )
{
   long *buffer;
   size_t size;

   // Call _malloc_dbg to include the filename and line number
   // of our allocation request in the header
   buffer = (long *)_malloc_dbg( 40 * sizeof(long),
                                 _NORMAL_BLOCK, __FILE__, __LINE__ );
   if( buffer == NULL )
      exit( 1 );

   // Get the size of the buffer by calling _msize_dbg
   size = _msize_dbg( buffer, _NORMAL_BLOCK );
   printf( "Size of block after _malloc_dbg of 40 longs: %u\n", size );

   // Expand the buffer using _expand_dbg and show the new size
   buffer = (long *)_expand_dbg( buffer, size + sizeof(long),
                                 _NORMAL_BLOCK, __FILE__, __LINE__ );

   if( buffer == NULL )
      exit( 1 );
   size = _msize_dbg( buffer, _NORMAL_BLOCK );
   printf( "Size of block after _expand_dbg of 1 more long: %u\n",
           size );

   free( buffer );
   exit( 0 );
}
```

```Output
Size of block after _malloc_dbg of 40 longs: 160
Size of block after _expand_dbg of 1 more long: 164
```

## <a name="comment"></a>Commento

L'output di questo programma dipende dalla capacità del computer di espandere tutte le sezioni. Se tutte le sezioni sono espanse, l'output è nella sezione Output.

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_malloc_dbg](malloc-dbg.md)<br/>
