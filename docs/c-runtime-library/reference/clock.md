---
title: "clock | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "clock"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-time-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "clock"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "calcolo del tempo processore utilizzato"
  - "clock (funzione)"
  - "tempo processore utilizzato"
  - "tempo processore utilizzato, calcolo"
  - "ora, calcolo processore"
ms.assetid: 3e1853dd-498f-49ba-b06a-f2315f20904e
caps.latest.revision: 15
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# clock
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola il tempo usato dal processo chiamante.  
  
## Sintassi  
  
```  
clock_t clock( void );  
```  
  
## Valore restituito  
 Il tempo trascorso dall'inizio del processo \(tempo trascorso in secondi moltiplicato per `CLOCKS_PER_SEC`\).  Se la quantità di tempo trascorso non è disponibile, la funzione restituisce \-1, sottoposto a cast come `clock_t`.  
  
## Note  
 La funzione `clock` indica il tempo reale usato dal processo chiamante.  Si noti che non è strettamente conforme a ISO C99, che specifica il tempo di CPU net come valore restituito.  Per ottenere il tempo di CPU, usare la funzione [GetProcessTimes](http://msdn.microsoft.com/library/windows/desktop/ms683223) di Win32.  
  
 Un ciclo di timer è più o meno uguale a 1\/`CLOCKS_PER_SEC`secondi.  Dato un tempo sufficiente, il valore restituito da `clock` può superare il massimo valore positivo di `clock_t` e diventare negativo o superare il valore assoluto massimo e il rollover.  Non fare affidamento su questo valore per il tempo trascorso totale di processi che vengono eseguiti per più di 214.748 secondi o circa 59 ore.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`clock`|\<time.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_clock.c  
// This example prompts for how long  
// the program is to run and then continuously  
// displays the elapsed time for that period.  
//  
  
#include <stdio.h>  
#include <stdlib.h>  
#include <time.h>  
  
void sleep( clock_t wait );  
  
int main( void )  
{  
   long    i = 6000000L;  
   clock_t start, finish;  
   double  duration;  
  
   // Delay for a specified time.  
   printf( "Delay for three seconds\n" );  
   sleep( (clock_t)3 * CLOCKS_PER_SEC );  
   printf( "Done!\n" );  
  
   // Measure the duration of an event.  
   printf( "Time to do %ld empty loops is ", i );  
   start = clock();  
   while( i-- )   
      ;  
   finish = clock();  
   duration = (double)(finish - start) / CLOCKS_PER_SEC;  
   printf( "%2.1f seconds\n", duration );  
}  
  
// Pauses for a specified number of milliseconds.  
void sleep( clock_t wait )  
{  
   clock_t goal;  
   goal = wait + clock();  
   while( goal > clock() )  
      ;  
}  
```  
  
  **Ritardo di tre secondi**  
**Completato\!  Il tempo per effettuare 6000000 cicli vuoti è di 0,1 secondi**    
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [difftime, \_difftime32, \_difftime64](../../c-runtime-library/reference/difftime-difftime32-difftime64.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)