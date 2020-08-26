---
title: _heapset
ms.date: 11/04/2016
api_name:
- _heapset
api_location:
- msvcr90.dll
- msvcr80.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcrt.dll
- msvcr120.dll
- msvcr100.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _heapset
- heapset
helpviewer_keywords:
- checking heap
- heapset function
- heaps, checking
- debugging [CRT], heap-related problems
- _heapset function
ms.assetid: 9667eeb0-55bc-4c19-af5f-d1fd0a142b3c
ms.openlocfilehash: 5bf27ac8287e785b1c799565781842db54edee4d
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88837827"
---
# <a name="_heapset"></a>_heapset

Controlla la coerenza minima negli heap e imposta le voci disponibili su un valore specificato.

> [!IMPORTANT]
> questa funzione è obsoleta. A partire da Visual Studio 2015 non è disponibile in CRT.

## <a name="syntax"></a>Sintassi

```
int _heapset(
   unsigned int fill
);
```

#### <a name="parameters"></a>Parametri

*riempimento*<br/>
Carattere di riempimento.

## <a name="return-value"></a>Valore restituito

`_heapset` restituisce una delle costanti manifesto integer seguenti definite in Malloc.h.

|Valore|Descrizione|
|-|-|
| `_HEAPBADBEGIN`  | Le informazioni di intestazione iniziali non sono valide o non sono state trovate.  |
| `_HEAPBADNODE`  | L'heap è danneggiato o è stato travato un nodo non valido.  |
| `_HEAPEMPTY`  | L'heap non è stato inizializzato.  |
| `_HEAPOK`  | L'heap risulta coerente.  |

Inoltre, se si verifica un errore, `_heapset` imposta `errno` su `ENOSYS`.

## <a name="remarks"></a>Osservazioni

La funzione `_heapset` mostra i nodi o le posizioni di memoria disponibili che sono stati sovrascritti accidentalmente.

`_heapset` verifica la coerenza minima nell'heap e quindi imposta ogni byte delle voci disponibili dell'heap sul valore `fill`. Questo valore noto mostra le posizioni di memoria dell'heap che contengono nodi disponibili e quelle che contengono dati scritti accidentalmente nella memoria liberata. Se il sistema operativo non supporta `_heapset`(ad esempio, Windows 98), la funzione restituisce `_HEAPOK` e imposta `errno` su `ENOSYS`.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|`_heapset`|\<malloc.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../c-runtime-library/compatibility.md) nell'introduzione.

## <a name="example"></a>Esempio

```c
// crt_heapset.c
// This program checks the heap and
// fills in free entries with the character 'Z'.

#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   int heapstatus;
   char *buffer;

   if( (buffer = malloc( 1 )) == NULL ) // Make sure heap is
      exit( 0 );                        //    initialized
   heapstatus = _heapset( 'Z' );        // Fill in free entries
   switch( heapstatus )
   {
   case _HEAPOK:
      printf( "OK - heap is fine\n" );
      break;
   case _HEAPEMPTY:
      printf( "OK - heap is empty\n" );
      break;
   case _HEAPBADBEGIN:
      printf( "ERROR - bad start of heap\n" );
      break;
   case _HEAPBADNODE:
      printf( "ERROR - bad node in heap\n" );
      break;
   }
   free( buffer );
}
```

```Output
OK - heap is fine
```

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../c-runtime-library/memory-allocation.md)<br/>
[_heapadd](../c-runtime-library/heapadd.md)<br/>
[_heapchk](../c-runtime-library/reference/heapchk.md)<br/>
[_heapmin](../c-runtime-library/reference/heapmin.md)<br/>
[_heapwalk](../c-runtime-library/reference/heapwalk.md)
