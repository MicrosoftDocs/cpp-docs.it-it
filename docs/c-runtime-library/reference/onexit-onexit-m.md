---
description: 'Altre informazioni su: _onexit, _onexit_m'
title: _onexit, _onexit_m
ms.date: 11/04/2016
api_name:
- _onexit
- _onexit_m
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
- _onexit
- onexit_m
- onexit
- _onexit_m
helpviewer_keywords:
- onexit function
- registry, registering exit routines
- _onexit_m function
- onexit_m function
- _onexit function
- registering exit routines
- registering to be called on exit
ms.assetid: 45743298-0e2f-46cf-966d-1ca44babb443
ms.openlocfilehash: 0b79c521b04a4cb1597dda7c7ed2a19ae2dcf905
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97151697"
---
# <a name="_onexit-_onexit_m"></a>_onexit, _onexit_m

Registra una routine da chiamare in fase di uscita.

## <a name="syntax"></a>Sintassi

```C
_onexit_t _onexit(
   _onexit_t function
);
_onexit_t_m _onexit_m(
   _onexit_t_m function
);
```

### <a name="parameters"></a>Parametri

*function*<br/>
Puntatore a una funzione da chiamare all'uscita.

## <a name="return-value"></a>Valore restituito

**_onexit** restituisce un puntatore alla funzione in caso di esito positivo o **null** se non è disponibile spazio per archiviare il puntatore a funzione.

## <a name="remarks"></a>Commenti

Alla funzione **_onexit** viene passato l'indirizzo di una funzione (*funzione*) da chiamare quando il programma termina normalmente. Le chiamate successive a **_onexit** creano un registro di funzioni che vengono eseguite in ordine LIFO (Last-in-First-out). Le funzioni passate a **_onexit** non possono assumere parametri.

Nel caso in cui **_onexit** venga chiamato dall'interno di una dll, le routine registrate con **_onexit** vengono eseguite sullo scaricamento di una dll dopo la chiamata a **DllMain** con DLL_PROCESS_DETACH.

**_onexit** è un'estensione Microsoft. Per la portabilità ANSI, usare [atexit](atexit.md). La versione **_onexit_m** della funzione è per l'utilizzo in modalità mista.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_onexit**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_onexit.c

#include <stdlib.h>
#include <stdio.h>

/* Prototypes */
int fn1(void), fn2(void), fn3(void), fn4 (void);

int main( void )
{
   _onexit( fn1 );
   _onexit( fn2 );
   _onexit( fn3 );
   _onexit( fn4 );
   printf( "This is executed first.\n" );
}

int fn1()
{
   printf( "next.\n" );
   return 0;
}

int fn2()
{
   printf( "executed " );
   return 0;
}

int fn3()
{
   printf( "is " );
   return 0;
}

int fn4()
{
   printf( "This " );
   return 0;
}
```

### <a name="output"></a>Output

```Output
This is executed first.
This is executed next.
```

## <a name="see-also"></a>Vedi anche

[Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[atexit](atexit.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[__dllonexit](../../c-runtime-library/dllonexit.md)<br/>
