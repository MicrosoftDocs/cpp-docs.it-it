---
title: clock
ms.date: 11/04/2016
apiname:
- clock
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
- clock
helpviewer_keywords:
- processor time used, calculating
- time, calculating processor
- clock function
- processor time used
- calculating processor time used
ms.assetid: 3e1853dd-498f-49ba-b06a-f2315f20904e
ms.openlocfilehash: 4b58b33b533250447cf964134de9869bddee4498
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62347470"
---
# <a name="clock"></a>clock

Calcola il tempo usato dal processo chiamante.

## <a name="syntax"></a>Sintassi

```C
clock_t clock( void );
```

## <a name="return-value"></a>Valore restituito

Il tempo trascorso dopo l'inizializzazione di CRT all'inizio del processo, espresso come proporzione **CLOCKS_PER_SEC** unità al secondo. Se il tempo trascorso non è disponibile o ha superato il tempo positivo massimo che può essere registrato come un **clock_t** tipo, la funzione restituisce il valore `(clock_t)(-1)`.

## <a name="remarks"></a>Note

Il **clock** funzione indica quanto tempo trascorso dall'inizializzazione di CRT durante l'avvio del processo. Si noti che questa funzione non è strettamente conforme a ISO C, che specifica il tempo di CPU net come valore restituito. Per ottenere i tempi di CPU, usare la funzione [GetProcessTimes](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-getprocesstimes) di Win32. Per determinare il tempo trascorso in secondi, dividere il valore restituito per il **orologio** funzione dalla macro **CLOCKS_PER_SEC**.

Dato un tempo sufficiente, il valore restituito da **orologio** può superare il massimo valore positivo di **clock_t**. Quando il processo viene eseguito, il valore restituito da **orologio** è sempre `(clock_t)(-1)`, come specificato dalla standard ISO C99 (7.23.2.1) e dallo standard ISO C11 (7.27.2.1). Microsoft implementa **clock_t** come una **long**, un intero con segno a 32 bit e il **CLOCKS_PER_SEC** macro viene definita come 1000. In questo modo un massimo **clock** funzione valore restituito è 2147483,647 secondi o circa 24,8 giorni. Non fare affidamento sul valore restituito da **clock** nei processi che sono stati eseguiti per più di questo periodo di tempo. È possibile usare la a 64 bit [tempo](time-time32-time64.md) funzione o Windows [QueryPerformanceCounter](https://msdn.microsoft.com/library/windows/desktop/ms644904) funzione al record di processo tempo trascorso per molti anni.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**clock**|\<time.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_clock.c
// This sample uses clock() to 'sleep' for three
// seconds, then determines how long it takes
// to execute an empty loop 600000000 times.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Pauses for a specified number of milliseconds.
void do_sleep( clock_t wait )
{
   clock_t goal;
   goal = wait + clock();
   while( goal > clock() )
      ;
}

const long num_loops = 600000000L;

int main( void )
{
   long    i = num_loops;
   clock_t start, finish;
   double  duration;

   // Delay for a specified time.
   printf( "Delay for three seconds\n" );
   do_sleep( (clock_t)3 * CLOCKS_PER_SEC );
   printf( "Done!\n" );

   // Measure the duration of an event.
   start = clock();
   while( i-- )
      ;
   finish = clock();
   duration = (double)(finish - start) / CLOCKS_PER_SEC;
   printf( "Time to do %ld empty loops is ", num_loops );
   printf( "%2.3f seconds\n", duration );
}
```

```Output
Delay for three seconds
Done!
Time to do 600000000 empty loops is 1.354 seconds
```

## <a name="see-also"></a>Vedere anche

[Gestione dell'ora](../../c-runtime-library/time-management.md)<br/>
[difftime, _difftime32, _difftime64](difftime-difftime32-difftime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
