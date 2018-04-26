---
title: atexit | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- processing, at exit
- atexit function
ms.assetid: 92c156d2-8052-4e58-96dc-00128baac6f9
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3a5dbe5e8bf71c268783893665e8e95bb587891a
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
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

Il **atexit** funzione viene passata l'indirizzo di una funzione *func* da chiamare quando il programma termina normalmente. Le chiamate successive a **atexit** creano un registro di funzioni che vengono eseguite nell'ordine last-in, First-Out (LIFO). Le funzioni passate a **atexit** non possono accettare parametri. **atexit** e **OnExit** utilizzano l'heap per contenere il Registro di funzioni. Per questa ragione, il numero di funzioni che possono essere registrate è limitato solo dalla memoria dell'heap.

Il codice di **atexit** funzione non deve contenere tutte le dipendenze in qualsiasi DLL che è stato già scaricato quando il **atexit** funzione viene chiamata.

Per generare un'applicazione compatibile con ANSI, utilizzare lo standard ANSI **atexit** funzione (anziché simile **OnExit** funzione).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**atexit**|\<stdlib.h>|

## <a name="example"></a>Esempio

Questo programma push quattro funzioni nello stack di funzioni da eseguire quando **atexit** viene chiamato. Alla chiusura del programma, questi programmi vengono eseguiti in ordine LIFO (last-in-first-out).

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
