---
title: calloc
description: La funzione della libreria di runtime C calloc alloca memoria inizializzata su zero.
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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: fb4f7d6dc059023d34cb0b811edf5dfb48cb7a34
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81333642"
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

*Numero*<br/>
Numero di elementi.

*Dimensione*<br/>
Lunghezza in byte di ogni elemento.

## <a name="return-value"></a>Valore restituito

**calloc** restituisce un puntatore allo spazio allocato. Lo spazio di archiviazione a cui punta il valore restituito garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Per ottenere un puntatore a un tipo diverso da **void**, utilizzare un cast di tipo sul valore restituito.

## <a name="remarks"></a>Osservazioni

La funzione **calloc alloca** spazio di archiviazione per una matrice di elementi *number,* ognuno dei byte di *dimensione* della lunghezza. Ogni elemento viene inizializzato a 0.

**calloc** imposta **errno** su **ENOMEM** se un'allocazione di memoria non riesce o se la quantità di memoria richiesta supera **_HEAP_MAXREQ**. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Nell'implementazione Microsoft, se *num* o *size* è zero, **calloc** restituisce un puntatore a un blocco allocato di dimensioni diverse da zero. Un tentativo di leggere o scrivere tramite il puntatore restituito comporta un comportamento indefinito.

**calloc** utilizza la funzione [di _set_new_mode](set-new-mode.md) di C, per impostare la *nuova modalità di gestione*. La nuova modalità del gestore indica se, in caso di errore, **calloc** consiste nel chiamare la nuova routine del gestore come impostato da [_set_new_handler](set-new-handler.md). Per impostazione predefinita, **calloc** non chiama la nuova routine del gestore in caso di errore nell'allocazione della memoria. È possibile eseguire l'override di questo comportamento predefinito in modo che, quando **calloc** non riesce ad allocare memoria, chiama la nuova routine del gestore nello stesso modo in cui l'operatore **new** esegue quando non riesce per lo stesso motivo. Per eseguire l'override del comportamento predefinito, chiamare

```C
_set_new_mode(1);
```

all'inizio del programma o il collegamento con *NEWMODE. OBJ* (vedere [Opzioni di collegamento](../../c-runtime-library/link-options.md)).

Quando l'applicazione è collegata a una versione di debug delle librerie di runtime del linguaggio C, **calloc** viene risolto [in _calloc_dbg](calloc-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details) (Informazioni dettagliate sull'heap di debug CRT).

**calloc** è `__declspec(noalias)` `__declspec(restrict)`contrassegnato e , ovvero la funzione non modifica le variabili globali e che il puntatore restituito non ha un alias. Per altre informazioni, vedere [noalias](../../cpp/noalias.md) e [restrict](../../cpp/restrict.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

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

[Allocazione della memoria](../../c-runtime-library/memory-allocation.md)<br/>
[Gratuito](free.md)<br/>
[malloc](malloc.md)<br/>
[realloc](realloc.md)<br/>
