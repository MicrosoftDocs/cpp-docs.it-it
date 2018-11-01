---
title: atexit
ms.date: 11/04/2016
apiname:
- atexit
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
- atexit
helpviewer_keywords:
- processing, at exit
- atexit function
ms.assetid: 92c156d2-8052-4e58-96dc-00128baac6f9
ms.openlocfilehash: 48f0fbfa1f3350f73899fcdbb3bf7922f1c6174d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50556643"
---
# <a name="atexit"></a>atexit

Elabora la funzione specificata in uscita.

## <a name="syntax"></a>Sintassi

```C
int atexit(
   void (__cdecl *func )( void )
);
```

### <a name="parameters"></a>Parametri

*func*<br/>
Funzione da chiamare.

## <a name="return-value"></a>Valore restituito

**atexit** restituisce 0 se ha esito positivo o un valore diverso da zero se si verifica un errore.

## <a name="remarks"></a>Note

Il **atexit** funzione viene passata l'indirizzo di una funzione *func* da chiamare quando il programma termina normalmente. Le chiamate successive a **atexit** creano un registro di funzioni che vengono eseguite nell'ordine last-in, First-Out (LIFO). Le funzioni passate a **atexit** non possono accettare parametri. **atexit** e **OnExit** usano l'heap per mantenere il Registro di funzioni. Per questa ragione, il numero di funzioni che possono essere registrate è limitato solo dalla memoria dell'heap.

Il codice nel **atexit** funzione non deve contenere alcuna dipendenza da qualsiasi DLL che potrebbe già essere stata scaricata quando il **atexit** funzione viene chiamata.

Per creare un'applicazione compatibile con ANSI, usare lo standard ANSI **atexit** funzione (anziché simili **OnExit** (funzione)).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**atexit**|\<stdlib.h>|

## <a name="example"></a>Esempio

Questo programma inserisce quattro funzioni nello stack di funzioni da eseguire quando **atexit** viene chiamato. Alla chiusura del programma, questi programmi vengono eseguiti in ordine LIFO (last-in-first-out).

```C
// crt_atexit.c
#include <stdlib.h>
#include <stdio.h>

void fn1( void ), fn2( void ), fn3( void ), fn4( void );

int main( void )
{
   atexit( fn1 );
   atexit( fn2 );
   atexit( fn3 );
   atexit( fn4 );
   printf( "This is executed first.\n" );
}

void fn1()
{
   printf( "next.\n" );
}

void fn2()
{
   printf( "executed " );
}

void fn3()
{
   printf( "is " );
}

void fn4()
{
   printf( "This " );
}
```

```Output
This is executed first.
This is executed next.
```

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[abort](abort.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_onexit, _onexit_m](onexit-onexit-m.md)<br/>
