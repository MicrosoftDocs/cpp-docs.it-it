---
title: "difftime, _difftime32, _difftime64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_difftime32"
  - "difftime"
  - "_difftime64"
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
  - "_difftime64"
  - "difftime"
  - "difftime64"
  - "_difftime32"
  - "difftime32"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_difftime32 (funzione)"
  - "difftime (funzione)"
  - "ora, ricerca della differenza"
  - "difftime64 (funzione)"
  - "_difftime64 (funzione)"
  - "difftime32 (funzione)"
ms.assetid: 4cc0ac2b-fc7b-42c0-8283-8c9d10c566d0
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 21
---
# difftime, _difftime32, _difftime64
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Trova la differenza tra i due tempi.  
  
## Sintassi  
  
```  
double difftime(   
   time_t timer1,  
   time_t timer0   
);  
double _difftime32(   
   __time32_t timer1,  
   __time32_t timer0   
);  
double _difftime64(   
   __time64_t timer1,  
   __time64_t timer0   
);  
```  
  
#### Parametri  
 `timer1`  
 Tempo finale.  
  
 `timer0`  
 Tempo iniziale.  
  
## Valore restituito  
 `difftime` restituisce il tempo trascorso in secondi, da `timer0` a `timer1`. Il valore restituito è un numero a virgola mobile e precisione doppia. Il valore restituito può essere 0 e indica un errore.  
  
## Note  
 La funzione `difftime` calcola la differenza tra i due valori temporali forniti `timer0` e `timer1`.  
  
 Il valore di ora fornito deve essere compreso nell'intervallo di `time_t`.`time_t` è un valore a 64 bit. Pertanto, la fine dell'intervallo è stata estesa da 23:59:59 18 gennaio 2038 UTC a 23:59:59, dicembre 31, 3000. L'intervallo inferiore di `time_t` è ancora mezzanotte del 1° gennaio 1970.  
  
 `difftime` è una funzione inline che restituisce `_difftime32` o `_difftime64` a seconda che `_USE_32BIT_TIME_T` sia definito. \_difftime32 e \_difftime64 possono essere utilizzati direttamente per imporre l'utilizzo di una determinata dimensione del tipo di tempo.  
  
 Queste funzioni convalidano i relativi parametri. Se il parametro è uguale a zero o negativo, il gestore di parametro non valido viene richiamato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono 0 e impostare `errno` a `EINVAL`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`difftime`|\<time.h\>|  
|`_difftime32`|\<time.h\>|  
|`_difftime64`|\<time.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
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
Utilizzo casuale a virgola mobile numeri 1.04749e 038 2.01482e 038 1.72737e + 038Multiplying 2 a virgola mobile numero 100 milioni di volte... Programma dura 3 secondi. Moltiplicazione 2 mobile numeri a virgola 500 milioni di volte... Program takes      5 seconds.  
```  
  
## Equivalente .NET Framework  
 [System::DateTime::Subtract](https://msdn.microsoft.com/en-us/library/system.datetime.subtract.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)