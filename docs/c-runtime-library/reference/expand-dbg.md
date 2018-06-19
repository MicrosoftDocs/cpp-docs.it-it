---
title: _expand_dbg | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _expand_dbg
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
- expand_dbg
- _expand_dbg
dev_langs:
- C++
helpviewer_keywords:
- memory blocks, changing size
- expand_dbg function
- _expand_dbg function
ms.assetid: dc58c91f-72a8-48c6-b643-fe130fb6c1fd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 023bda761454a6a1e18ce68c8e7576af2759abbf
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32403635"
---
# <a name="expanddbg"></a>_expand_dbg

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

*Dati utente*<br/>
Puntatore al blocco di memoria allocato precedentemente.

*newSize*<br/>
Nuove dimensioni richieste per il blocco, in byte.

*blockType*<br/>
Tipo di blocco ridimensionato richiesto: **CLIENT_BLOCK** oppure **NORMAL_BLOCK**.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto espandere operazione o **NULL**.

*linenumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione di espansione o **NULL**.

Il *filename* e *linenumber* parametri sono disponibili solo quando **expand_dbg** è stato chiamato in modo esplicito o [CRTDBG_MAP_ALLOC](../../c-runtime-library/crtdbg-map-alloc.md)è stata definita una costante del preprocessore.

## <a name="return-value"></a>Valore restituito

Al termine, **expand_dbg** restituisce un puntatore al blocco di memoria ridimensionato. Poiché la memoria non viene spostata, l'indirizzo è lo stesso usato per userData. Se si è verificato un errore o il blocco non può essere estesa per la dimensione richiesta, viene restituito **NULL**. Se si verifica un errore, **errno** con informazioni dal sistema operativo sulla natura dell'errore. Per ulteriori informazioni **errno**, vedere [errno, doserrno, sys_errlist e sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **expand_dbg** funzione è una versione di debug nel _[espandere](expand.md) (funzione). Quando si [debug](../../c-runtime-library/debug.md) non è definito, ogni chiamata a **expand_dbg** viene ridotta a una chiamata a **Espandi sito**. Entrambi **Espandi sito** e **expand_dbg** ridimensiona un blocco di memoria nell'heap di base, ma **expand_dbg** contiene diverse funzionalità di debug: buffer presenti a entrambi i lati dell'utente parte del blocco in cui verificare la presenza di perdite, un parametro di tipo blocco per registrare i tipi specifici di allocazioni e *filename*/*linenumber* informazioni per determinare l'origine di richieste di allocazione.

**expand_dbg** ridimensiona il blocco di memoria specificato con una quantità di spazio a quella richiesta *newSize*. *newSize* potrebbe essere maggiore o minore della dimensione del blocco di memoria allocato in origine. Lo spazio aggiuntivo viene usato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire all'applicazione informazioni di intestazione di debug e buffer di sovrascrittura. Il ridimensionamento viene eseguito espandendo o contraendo il blocco di memoria originale. **expand_dbg** non consente di spostare il blocco di memoria, come avviene la [realloc_dbg](realloc-dbg.md) (funzione).

Quando si *newSize* è superiore a quella del blocco originale viene espanso dimensioni, il blocco di memoria. Durante un'espansione, se il blocco di memoria non può essere espanso per contenere la dimensione richiesta **NULL** viene restituito. Quando si *newSize* è inferiore a quello del blocco originale viene ristretta dimensioni, il blocco di memoria fino a quando non viene ottenuta le nuove dimensioni.

Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

Questa funzione convalida i relativi parametri. Se *memblock* è un puntatore null, o se le dimensioni sono maggiori **heap_maxreq**, questa funzione richiama un gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e la funzione restituisce **NULL**.

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
