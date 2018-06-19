---
title: _heapchk | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- debugging [CRT], heap-related problems
- consistency checking of heaps
- heapchk function
- heaps, checking consistency
- _heapchk function
ms.assetid: 859619a5-1e35-4f02-9e09-11d9fa266ec0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b3fc500ee86bde40def0e1e2d3dd3edad3127daf
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32399634"
---
# <a name="heapchk"></a>_heapchk

Esegue verifiche della coerenza sull'heap.

## <a name="syntax"></a>Sintassi

```C
int _heapchk( void );
```

## <a name="return-value"></a>Valore restituito

**heapchk** restituisce una delle seguenti costanti manifesto integer definite in malloc. h.

|Valore restituito|Condizione|
|-|-|
**HEAPBADBEGIN**|Le informazioni di intestazione iniziali non sono valide o non è possibile trovarle.
**HEAPBADNODE**|È stato trovato un nodo non valido o l'heap è danneggiato.
**HEAPBADPTR**|Il puntatore nell'heap non è valido.
**HEAPEMPTY**|L'heap non è stato inizializzato.
**HEAPOK**|L'heap risulta coerente.

Inoltre, se si verifica un errore, **heapchk** imposta **errno** al **ENOSYS**.

## <a name="remarks"></a>Note

Il **heapchk** funzione consente di eseguire il debug di problemi di heap controllando la coerenza minima dell'heap. Se il sistema operativo non supporta **heapchk**(ad esempio, Windows 98), la funzione restituisce **heapok** e imposta **errno** a **ENOSYS**.

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
