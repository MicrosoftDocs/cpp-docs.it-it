---
title: difftime, _difftime32, _difftime64
ms.date: 11/04/2016
apiname:
- _difftime32
- difftime
- _difftime64
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
- api-ms-win-crt-time-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _difftime64
- difftime
- difftime64
- _difftime32
- difftime32
helpviewer_keywords:
- _difftime32 function
- difftime function
- time, finding the difference
- difftime64 function
- _difftime64 function
- difftime32 function
ms.assetid: 4cc0ac2b-fc7b-42c0-8283-8c9d10c566d0
ms.openlocfilehash: 80aaac1696fc82db248b097e73a2d89d81a20346
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62288523"
---
# <a name="difftime-difftime32-difftime64"></a>difftime, _difftime32, _difftime64

Trova la differenza tra i due tempi.

## <a name="syntax"></a>Sintassi

```C
double difftime( time_t timeEnd, time_t timeStart );
double _difftime32( __time32_t timeEnd, __time32_t timeStart );
double _difftime64( __time64_t timeEnd, __time64_t timeStart );
```

### <a name="parameters"></a>Parametri

*timeEnd*<br/>
Tempo finale.

*timeStart*<br/>
Tempo iniziale.

## <a name="return-value"></a>Valore restituito

**difftime** restituisce il tempo trascorso in secondi, da *timeStart* al *inizioOra di fine*. Il valore restituito è un numero a virgola mobile e precisione doppia. Il valore restituito può essere 0 e indica un errore.

## <a name="remarks"></a>Note

Il **difftime** funzione calcola la differenza tra i due valori temporali forniti *timeStart* e *inizioOra di fine*.

Il valore di ora fornito deve adattarsi all'interno dell'intervallo di **time_t**. **time_t** è un valore a 64 bit. Pertanto, la fine dell'intervallo è stata estesa da 23:59:59 18 gennaio, 2038, ora UTC a 23:59:59, 31 dicembre, 3000. L'intervallo di inferiore **time_t** è ancora mezzanotte del 1 ° gennaio 1970.

**difftime** è una funzione inline equivalente a una delle due **_difftime32** oppure **_difftime64** a seconda che **_USE_32BIT_TIME_T** è definito. _difftime32 e _difftime64 possono essere utilizzati direttamente per imporre l'utilizzo di una determinata dimensione del tipo di tempo.

Queste funzioni convalidano i relativi parametri. Se i parametri hanno un valore pari a zero o negativo, viene richiamato il gestore dei parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri). Se l'esecuzione può continuare, queste funzioni restituiscono 0 e impostare **errno** al **EINVAL**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**difftime**|\<time.h>|
|**_difftime32**|\<time.h>|
|**_difftime64**|\<time.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```cpp
// crt_difftime.c
// This program calculates the amount of time
// needed to do a floating-point multiply 100 million times.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <float.h>

double RangedRand( float range_min, float range_max)
{
   // Generate random numbers in the half-closed interval
   // [range_min, range_max). In other words,
   // range_min <= random number < range_max
   return ((double)rand() / (RAND_MAX + 1) * (range_max - range_min)
            + range_min);
}

int main( void )
{
   time_t   start, finish;
   long     loop;
   double   result, elapsed_time;
   double   arNums[3];

   // Seed the random-number generator with the current time so that
   // the numbers will be different every time we run.
   srand( (unsigned)time( NULL ) );

   arNums[0] = RangedRand(1, FLT_MAX);
   arNums[1] = RangedRand(1, FLT_MAX);
   arNums[2] = RangedRand(1, FLT_MAX);
   printf( "Using floating point numbers %.5e %.5e %.5e\n", arNums[0], arNums[1], arNums[2] );

   printf( "Multiplying 2 numbers 100 million times...\n" );

   time( &start );
   for( loop = 0; loop < 100000000; loop++ )
      result = arNums[loop%3] * arNums[(loop+1)%3];
   time( &finish );

   elapsed_time = difftime( finish, start );
   printf( "\nProgram takes %6.0f seconds.\n", elapsed_time );
}
```

```Output
Using random floating point numbers 1.04749e+038 2.01482e+038 1.72737e+038
Multiplying 2 floating point numbers 100 million times...
Program takes      3 seconds.
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[Gestione dell'ora](../../c-runtime-library/time-management.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
