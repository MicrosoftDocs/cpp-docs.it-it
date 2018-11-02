---
title: _heapchk
ms.date: 11/04/2016
apiname:
- _heapchk
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
- _heapchk
- heapchk
helpviewer_keywords:
- debugging [CRT], heap-related problems
- consistency checking of heaps
- heapchk function
- heaps, checking consistency
- _heapchk function
ms.assetid: 859619a5-1e35-4f02-9e09-11d9fa266ec0
ms.openlocfilehash: b34b4ea1bb2512628213cabb55e26e2dad6d445c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50580622"
---
# <a name="heapchk"></a>_heapchk

Esegue verifiche della coerenza sull'heap.

## <a name="syntax"></a>Sintassi

```C
int _heapchk( void );
```

## <a name="return-value"></a>Valore restituito

**heapchk** restituisce uno delle costanti manifesto integer seguenti definite in malloc. h.

|Valore restituito|Condizione|
|-|-|
**HEAPBADBEGIN**|Le informazioni di intestazione iniziali non sono valide o non è possibile trovarle.
**HEAPBADNODE**|È stato trovato un nodo non valido o l'heap è danneggiato.
**HEAPBADPTR**|Il puntatore nell'heap non è valido.
**HEAPEMPTY**|L'heap non è stato inizializzato.
**HEAPOK**|L'heap risulta coerente.

Inoltre, se si verifica un errore, **heapchk** imposta **errno** al **ENOSYS**.

## <a name="remarks"></a>Note

Il **heapchk** funzione consente di eseguire il debug di problemi relativi all'heap tramite controllo della coerenza minima dell'heap. Se il sistema operativo non supporta **heapchk**(ad esempio, Windows 98), la funzione restituisce **heapok** e imposta **errno** a **ENOSYS**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_heapchk**|\<malloc.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_heapchk.c
// This program checks the heap for
// consistency and prints an appropriate message.

#include <malloc.h>
#include <stdio.h>

int main( void )
{
   int  heapstatus;
   char *buffer;

   // Allocate and deallocate some memory
   if( (buffer = (char *)malloc( 100 )) != NULL )
      free( buffer );

   // Check heap status
   heapstatus = _heapchk();
   switch( heapstatus )
   {
   case _HEAPOK:
      printf(" OK - heap is fine\n" );
      break;
   case _HEAPEMPTY:
      printf(" OK - heap is empty\n" );
      break;
   case _HEAPBADBEGIN:
      printf( "ERROR - bad start of heap\n" );
      break;
   case _HEAPBADNODE:
      printf( "ERROR - bad node in heap\n" );
      break;
   }
}
```

```Output
OK - heap is fine
```

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
[_heapadd](../../c-runtime-library/heapadd.md)<br/>
[_heapmin](heapmin.md)<br/>
[_heapset](../../c-runtime-library/heapset.md)<br/>
[_heapwalk](heapwalk.md)<br/>
