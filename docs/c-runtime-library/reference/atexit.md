---
description: 'Altre informazioni su: atexit'
title: atexit
ms.date: 11/04/2016
api_name:
- atexit
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
- atexit
helpviewer_keywords:
- processing, at exit
- atexit function
ms.assetid: 92c156d2-8052-4e58-96dc-00128baac6f9
ms.openlocfilehash: 82c0bbfdb9af62faff9239781b5db340183e25fa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97117536"
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

## <a name="remarks"></a>Commenti

Alla funzione **atexit** viene passato l'indirizzo di una funzione *Func* da chiamare quando il programma termina normalmente. Le chiamate successive a **atexit** creano un registro di funzioni che vengono eseguite in ordine LIFO (Last-in, First-out). Le funzioni passate a **atexit** non possono assumere parametri. **atexit** e **_onexit** usano l'heap per conservare il registro delle funzioni. Per questa ragione, il numero di funzioni che possono essere registrate è limitato solo dalla memoria dell'heap.

Il codice nella funzione **atexit** non deve contenere alcuna dipendenza da alcuna dll che potrebbe essere già stata scaricata quando viene chiamata la funzione **atexit** .

Per generare un'applicazione conforme a ANSI, usare la funzione **atexit** standard ANSI (anziché la funzione **_onexit** simile).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**atexit**|\<stdlib.h>|

## <a name="example"></a>Esempio

Questo programma effettua il push di quattro funzioni nello stack di funzioni da eseguire quando viene chiamato **atexit** . Alla chiusura del programma, questi programmi vengono eseguiti in ordine LIFO (last-in-first-out).

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

## <a name="see-also"></a>Vedi anche

[Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[interruzione](abort.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_onexit, _onexit_m](onexit-onexit-m.md)<br/>
