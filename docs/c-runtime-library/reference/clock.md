---
title: clock | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
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
dev_langs:
- C++
helpviewer_keywords:
- processor time used, calculating
- time, calculating processor
- clock function
- processor time used
- calculating processor time used
ms.assetid: 3e1853dd-498f-49ba-b06a-f2315f20904e
caps.latest.revision: 15
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 3a226377499df1747a022325b762b3cdfdd35ea6
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="clock"></a>clock
Calcola il tempo usato dal processo chiamante.  
  
## <a name="syntax"></a>Sintassi  
  
```  
clock_t clock( void );  
```  
  
## <a name="return-value"></a>Valore restituito  
Il tempo trascorso dopo l'inizializzazione di CRT all'avvio del processo, misurato in `CLOCKS_PER_SEC` unità al secondo. Se il tempo trascorso non è disponibile o ha superato il tempo positivo massimo che può essere registrato come tipo `clock_t`, la funzione restituisce il valore `(clock_t)(-1)`.   
  
## <a name="remarks"></a>Note  
La funzione `clock` indica quanto tempo è trascorso dall'inizializzazione di CRT durante l'avvio del processo. Si noti che questa funzione non è strettamente conforme a ISO C, che specifica il tempo di CPU net come valore restituito. Per ottenere i tempi di CPU, usare la funzione [GetProcessTimes](https://msdn.microsoft.com/library/windows/desktop/ms683223) di Win32. Per determinare il tempo trascorso in secondi, dividere il valore restituito dalla funzione `clock` per la macro `CLOCKS_PER_SEC`.  
  
Dopo un tempo sufficiente, il valore restituito da `clock` può superare il valore positivo massimo di `clock_t`. Quando il processo viene eseguito per più tempo, il valore restituito da `clock` è sempre `(clock_t)(-1)`, come specificato dallo standard ISO C99 (7.23.2.1) e dallo standard ISO C11 (7.27.2.1). Microsoft implementa `clock_t` come `long`, un valore intero a 32 bit con segno e la `CLOCKS_PER_SEC` macro viene definita come 1000. In questo modo il valore massimo restituito dalla funzione `clock` è 2147483,647 secondi o circa 24,8 giorni. Non fare affidamento sul valore restituito da `clock` nei processi che sono stati eseguiti per un periodo di tempo superiore a questo. È possibile usare la funzione `time` a 64 bit o la funzione [QueryPerformanceCounter](https://msdn.microsoft.com/library/windows/desktop/ms644904) di Windows per registrare il tempo trascorso dei processi nell'arco di molti anni.  

## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`clock`|\<time.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
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
 [Gestione del tempo](../../c-runtime-library/time-management.md)   
 [difftime, _difftime32, _difftime64](../../c-runtime-library/reference/difftime-difftime32-difftime64.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)
