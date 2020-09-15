---
title: realloc
description: Informazioni di riferimento sulle API per realloc (); che rialloca i blocchi di memoria.
ms.date: 9/11/2020
api_name:
- realloc
- _o_realloc
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
- _brealloc
- _nrealloc
- realloc
- _frealloc
helpviewer_keywords:
- _brealloc function
- realloc function
- nrealloc function
- frealloc function
- _nrealloc function
- memory blocks, reallocating
- memory, reallocating
- _frealloc function
- reallocate memory blocks
ms.assetid: 2b2239de-810b-4b11-9438-32ab0a244185
ms.openlocfilehash: c68909b2f5d73959465d63af522ceeb00c8ce23e
ms.sourcegitcommit: b492516cc65120250b9ea23f96f7f63f37f99fae
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/14/2020
ms.locfileid: "90075816"
---
# <a name="realloc"></a>realloc

Riallocare blocchi di memoria.

## <a name="syntax"></a>Sintassi

```C
void *realloc(
   void *memblock,
   size_t size
);
```

### <a name="parameters"></a>Parametri

*`memblock`*\
Puntatore al blocco di memoria allocato in precedenza.

*`size`*\
Nuova dimensione in byte.

## <a name="return-value"></a>Valore restituito

**`realloc`** Restituisce un **`void`** puntatore al blocco di memoria riallocato (e possibilmente spostato).

Se la memoria disponibile non è sufficiente per espandere il blocco alla dimensione specificata, il blocco originale viene lasciato invariato e **`NULL`** viene restituito.

Se *`size`* è zero, il blocco puntato da *`memblock`* viene liberato; il valore restituito è **`NULL`** e *`memblock`* viene lasciato puntare a un blocco liberato.

Il valore restituito punta a uno spazio di archiviazione adeguatamente allineato per l'archiviazione di qualsiasi tipo di oggetto. Per ottenere un puntatore a un tipo diverso da **`void`** , usare un cast del tipo sul valore restituito.

## <a name="remarks"></a>Osservazioni

> [!NOTE]
> **`realloc`** non è stato aggiornato per implementare il comportamento di C17 perché il nuovo comportamento non è compatibile con il sistema operativo Windows.

La **`realloc`** funzione modifica la dimensione di un blocco di memoria allocato. L' *`memblock`* argomento punta all'inizio del blocco di memoria. Se *`memblock`* è **`NULL`** , si **`realloc`** comporta allo stesso modo di **`malloc`** e alloca un nuovo blocco di *`size`* byte. Se *`memblock`* non è **`NULL`** , deve essere un puntatore restituito da una precedente chiamata a **`calloc`** , **`malloc`** o **`realloc`** .

L' *`size`* argomento fornisce la nuova dimensione del blocco, in byte. Il contenuto del blocco rimane invariato fino alla più breve dimensione, tra la nuova e la precedente, anche se il nuovo blocco può trovarsi in una posizione diversa. Poiché il nuovo blocco può trovarsi in una nuova posizione di memoria, **`realloc`** non è garantito che il puntatore restituito da sia il puntatore passato tramite l' *`memblock`* argomento. **`realloc`** non azzera la nuova memoria allocata in caso di crescita del buffer.

**`realloc`** imposta **`errno`** su **`ENOMEM`** se l'allocazione di memoria ha esito negativo o se la quantità di memoria richiesta supera **`_HEAP_MAXREQ`** . Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

**`realloc`** chiama per **`malloc`** usare la funzione C++ [_set_new_mode](set-new-mode.md) per impostare la nuova modalità del gestore. La nuova modalità del gestore indica se, in caso di errore, deve **`malloc`** chiamare la routine del nuovo gestore come impostato da [_set_new_handler](set-new-handler.md). Per impostazione predefinita, non **`malloc`** chiama la routine del nuovo gestore in caso di errore di allocazione della memoria. È possibile eseguire l'override di questo comportamento predefinito in modo che, quando **`realloc`** non riesce ad allocare memoria, **`malloc`** chiami la routine del nuovo gestore nello stesso modo in cui l' **`new`** operatore esegue in caso di errore per lo stesso motivo. Per eseguire l'override del comportamento predefinito, chiamare

```C
_set_new_mode(1);
```

all'inizio del programma o collegarsi a NEWMODE.OBJ (vedere [Opzioni di collegamento](../../c-runtime-library/link-options.md)).

Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C, viene **`realloc`** risolta in [_realloc_dbg](realloc-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details) (Informazioni dettagliate sull'heap di debug CRT).

**`realloc`** è contrassegnato `__declspec(noalias)` `__declspec(restrict)` come e, pertanto la funzione non modifica le variabili globali e il puntatore restituito non viene associato a un alias. Per altre informazioni, vedere [noalias](../../cpp/noalias.md) e [restrict](../../cpp/restrict.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**`realloc`**|\<stdlib.h> e \<malloc.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_realloc.c
// This program allocates a block of memory for
// buffer and then uses _msize to display the size of that
// block. Next, it uses realloc to expand the amount of
// memory used by buffer and then calls _msize again to
// display the new amount of memory allocated to buffer.

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main( void )
{
   long *buffer, *oldbuffer;
   size_t size;

   if( (buffer = (long *)malloc( 1000 * sizeof( long ) )) == NULL )
      exit( 1 );

   size = _msize( buffer );
   printf_s( "Size of block after malloc of 1000 longs: %u\n", size );

   // Reallocate and show new size:
   oldbuffer = buffer;     // save pointer in case realloc fails
   if( (buffer = realloc( buffer, size + (1000 * sizeof( long )) ))
        ==  NULL )
   {
      free( oldbuffer );  // free original block
      exit( 1 );
   }
   size = _msize( buffer );
   printf_s( "Size of block after realloc of 1000 more longs: %u\n",
            size );

   free( buffer );
   exit( 0 );
}
```

```Output
Size of block after malloc of 1000 longs: 4000
Size of block after realloc of 1000 more longs: 8000
```

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)\
[calloc](calloc.md)\
[libero](free.md)\
[malloc](malloc.md)
