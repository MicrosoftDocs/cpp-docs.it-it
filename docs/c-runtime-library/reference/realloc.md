---
title: realloc | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- realloc
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
- api-ms-win-crt-heap-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _brealloc
- _nrealloc
- realloc
- _frealloc
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6452d14e0a8630c68d5e179fd94d531db1b667ab
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32408094"
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

*memblock*<br/>
Puntatore al blocco di memoria allocato in precedenza.

*size*<br/>
Nuova dimensione in byte.

## <a name="return-value"></a>Valore restituito

**realloc** restituisce un **void** puntatore al blocco di memoria riallocato (e possibilmente spostato).

Se non è disponibile memoria sufficiente per espandere il blocco alla dimensione specificata, il blocco originale resta invariato, e **NULL** viene restituito.

Se *dimensioni* è zero, il blocco a cui punta *memblock* viene liberato; il valore restituito è **NULL**, e *memblock* punta a un blocco liberato.

Il valore restituito punta a uno spazio di archiviazione che garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Per ottenere un puntatore a un tipo diverso da **void**, usare un cast del tipo sul valore restituito.

## <a name="remarks"></a>Note

Il **realloc** funzione modifica la dimensione di un blocco di memoria allocata. Il *memblock* argomento punta all'inizio del blocco di memoria. Se *memblock* viene **NULL**, **realloc** si comporta esattamente come **malloc** e assegna un nuovo blocco di *dimensioni*byte. Se *memblock* non **NULL**, deve essere un puntatore restituito da una precedente chiamata a **calloc**, **malloc**, o **realloc** .

Il *dimensioni* argomento fornisce la nuova dimensione del blocco, in byte. Il contenuto del blocco rimane invariato fino alla più breve dimensione, tra la nuova e la precedente, anche se il nuovo blocco può trovarsi in una posizione diversa. Poiché il nuovo blocco può trovarsi in una nuova posizione di memoria, il puntatore restituito da **realloc** non è necessariamente il puntatore passato tramite il *memblock* argomento. **realloc** zero non appena allocati di memoria in caso di aumento delle dimensioni del buffer.

**realloc** imposta **errno** a **ENOMEM** se l'allocazione di memoria ha esito negativo o se la quantità di memoria richiesto supera **heap_maxreq**. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

**realloc** chiamate **malloc** per usare C++ [set_new_mode](set-new-mode.md) funzione per impostare la nuova modalità di gestione. Indica la nuova modalità di gestione se, in caso di errore, **malloc** consiste nel chiamare la routine del gestore di nuovo l'impostazione [set_new_handler](set-new-handler.md). Per impostazione predefinita **malloc** non chiama la nuova routine del gestore in caso di errore di allocazione della memoria. È possibile eseguire l'override di questo comportamento predefinito in modo che, quando **realloc** non riesce ad allocare memoria, **malloc** chiama la routine del gestore nuovo nello stesso modo in cui il **nuova** (operatore) Quando non riesce per lo stesso motivo. Per eseguire l'override del comportamento predefinito, chiamare

```C
_set_new_mode(1);
```

all'inizio del programma o collegarsi a NEWMODE.OBJ (vedere [Opzioni di collegamento](../../c-runtime-library/link-options.md)).

Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C **realloc** risolve [realloc_dbg](realloc-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details) (Informazioni dettagliate sull'heap di debug CRT).

**realloc** contrassegnato `__declspec(noalias)` e `__declspec(restrict)`, vale a dire che la funzione è sicuramente non per modificare le variabili globali e che il puntatore restituito non è associato un alias. Per altre informazioni, vedere [noalias](../../cpp/noalias.md) e [restrict](../../cpp/restrict.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**realloc**|\<stdlib.h> e \<malloc.h>|

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

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
[calloc](calloc.md)<br/>
[free](free.md)<br/>
[malloc](malloc.md)<br/>
