---
title: _onexit, _onexit_m | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _onexit
- _onexit_m
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
- _onexit
- onexit_m
- onexit
- _onexit_m
dev_langs:
- C++
helpviewer_keywords:
- onexit function
- registry, registering exit routines
- _onexit_m function
- onexit_m function
- _onexit function
- registering exit routines
- registering to be called on exit
ms.assetid: 45743298-0e2f-46cf-966d-1ca44babb443
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ac59e64c1e47d699170af772aeba60a7895dfdc2
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="onexit-onexitm"></a>_onexit, _onexit_m

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

**OnExit** restituisce un puntatore alla funzione se ha esito positivo o **NULL** se non è disponibile spazio per archiviare il puntatore a funzione.

## <a name="remarks"></a>Note

Il **OnExit** funzione viene passata l'indirizzo di una funzione (*funzione*) da chiamare quando il programma termina normalmente. Le chiamate successive a **OnExit** creano un registro di funzioni che vengono eseguite in ordine LIFO (last-in-first-out). Le funzioni passate a **OnExit** non possono accettare parametri.

Nel caso quando **OnExit** viene chiamato dall'interno di una DLL, le routine registrate con **OnExit** scaricamento di esecuzione in una DLL dopo **DllMain** viene chiamato con DLL_PROCESS_DETACH.

**OnExit** è un'estensione Microsoft. Per la portabilità ANSI, usare [atexit](atexit.md). Il **onexit_m** versione della funzione è per l'utilizzo in modalità mista.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_onexit**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[atexit](atexit.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[__dllonexit](../../c-runtime-library/dllonexit.md)<br/>
