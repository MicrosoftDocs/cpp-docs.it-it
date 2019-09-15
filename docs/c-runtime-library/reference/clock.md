---
title: clock
ms.date: 11/04/2016
api_name:
- clock
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
- api-ms-win-crt-time-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- clock
helpviewer_keywords:
- processor time used, calculating
- time, calculating processor
- clock function
- processor time used
- calculating processor time used
ms.assetid: 3e1853dd-498f-49ba-b06a-f2315f20904e
ms.openlocfilehash: 836d0c6448adb4c99a251a0e97aa642e30362dcb
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70939122"
---
# <a name="clock"></a>clock

Calcola il tempo usato dal processo chiamante.

## <a name="syntax"></a>Sintassi

```C
clock_t clock( void );
```

## <a name="return-value"></a>Valore restituito

Tempo trascorso dall'inizializzazione CRT all'inizio del processo, misurato in unità **CLOCKS_PER_SEC** al secondo. Se il tempo trascorso non è disponibile o ha superato il tempo massimo positivo che può essere registrato come tipo **clock_t** , la funzione restituisce il valore `(clock_t)(-1)`.

## <a name="remarks"></a>Note

La funzione **Clock** indica la quantità di tempo trascorso dall'inizializzazione CRT durante l'avvio del processo. Si noti che questa funzione non è strettamente conforme a ISO C, che specifica il tempo di CPU net come valore restituito. Per ottenere i tempi di CPU, usare la funzione [GetProcessTimes](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getprocesstimes) di Win32. Per determinare il tempo trascorso in secondi, dividere il valore restituito dalla funzione **Clock** dalla macro **CLOCKS_PER_SEC**.

Dato un tempo sufficiente, il valore restituito da **Clock** può superare il valore positivo massimo di **clock_t**. Quando il processo viene eseguito più a lungo, il valore restituito da clock `(clock_t)(-1)`è sempre, come specificato dallo standard ISO C99 standard (7.23.2.1) e ISO C11 standard (7.27.2.1). Microsoft implementa **clock_t** come **Long**, un Signed Integer a 32 bit e la macro **CLOCKS_PER_SEC** è definita come 1000. In questo modo si ottiene un valore restituito massimo della funzione di **Clock** di 2147483,647 secondi o circa 24,8 giorni. Non fare affidamento sul valore restituito da **Clock** nei processi eseguiti per un periodo di tempo superiore a quello previsto. È possibile usare la funzione [Time](time-time32-time64.md) a 64 bit o la funzione [QueryPerformanceCounter](/windows/win32/api/profileapi/nf-profileapi-queryperformancecounter) di Windows per registrare i tempi di esecuzione del processo di molti anni.

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
