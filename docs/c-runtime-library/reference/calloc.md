---
title: calloc
description: La funzione della libreria di runtime C calloc alloca la memoria inizializzata su zero.
ms.date: 4/2/2020
api_name:
- calloc
- _o_calloc
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
- api-ms-win-crt-heap-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- calloc
helpviewer_keywords:
- memory allocation, arrays
- calloc function
ms.assetid: 17bb79a1-98cf-4096-90cb-1f9365cd6829
ms.openlocfilehash: 067ce6f347f4b24ad8c85990e70fe4d79305535c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87213632"
---
# <a name="calloc"></a>calloc

Alloca una matrice in memoria con elementi inizializzati a 0.

## <a name="syntax"></a>Sintassi

```C
void *calloc(
   size_t number,
   size_t size
);
```

### <a name="parameters"></a>Parametri

*number*<br/>
Numero di elementi.

*size*<br/>
Lunghezza in byte di ogni elemento.

## <a name="return-value"></a>Valore restituito

**calloc** restituisce un puntatore allo spazio allocato. Lo spazio di archiviazione a cui punta il valore restituito garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Per ottenere un puntatore a un tipo diverso da **`void`** , usare un cast del tipo sul valore restituito.

## <a name="remarks"></a>Osservazioni

La funzione **calloc** alloca lo spazio di archiviazione per una matrice di elementi *numerici* , ognuno di *dimensioni* di lunghezza di byte. Ogni elemento viene inizializzato a 0.

**calloc** imposta **errno** su **ENOMEM** se un'allocazione di memoria ha esito negativo o se la quantità di memoria richiesta supera **_HEAP_MAXREQ**. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Nell'implementazione Microsoft, se *Number* o *size* è zero, **calloc** restituisce un puntatore a un blocco allocato di dimensioni diverse da zero. Un tentativo di leggere o scrivere tramite il puntatore restituito comporta un comportamento non definito.

**calloc** usa la funzione C++ [_set_new_mode](set-new-mode.md) per impostare la *nuova modalità del gestore*. La nuova modalità del gestore indica se, in caso di errore, **calloc** deve chiamare la routine del nuovo gestore come impostato da [_set_new_handler](set-new-handler.md). Per impostazione predefinita, **calloc** non chiama la routine del nuovo gestore in caso di errore di allocazione della memoria. È possibile eseguire l'override di questo comportamento predefinito in modo che, quando **calloc** non riesce ad allocare memoria, chiami la routine del nuovo gestore nello stesso modo in cui l' **`new`** operatore esegue in caso di errore per lo stesso motivo. Per eseguire l'override del comportamento predefinito, chiamare

```C
_set_new_mode(1);
```

all'inizio del programma o collegarsi a *NewMode. OBJ* (vedere [Opzioni di collegamento](../../c-runtime-library/link-options.md)).

Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C, **calloc** viene risolto in [_calloc_dbg](calloc-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details) (Informazioni dettagliate sull'heap di debug CRT).

**calloc** è contrassegnato `__declspec(noalias)` `__declspec(restrict)` come e, pertanto la funzione non modifica le variabili globali e il puntatore restituito non viene associato a un alias. Per altre informazioni, vedere [noalias](../../cpp/noalias.md) e [restrict](../../cpp/restrict.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**calloc**|\<stdlib.h> e \<malloc.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_calloc.c
// This program uses calloc to allocate space for
// 40 long integers. It initializes each element to zero.

#include <stdio.h>
#include <malloc.h>

int main( void )
{
   long *buffer;

   buffer = (long *)calloc( 40, sizeof( long ) );
   if( buffer != NULL )
      printf( "Allocated 40 long integers\n" );
   else
      printf( "Can't allocate memory\n" );
   free( buffer );
}
```

```Output
Allocated 40 long integers
```

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
[libero](free.md)<br/>
[malloc](malloc.md)<br/>
[realloc](realloc.md)<br/>
