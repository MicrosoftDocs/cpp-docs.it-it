---
title: "_ftime, _ftime32, _ftime64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_ftime64"
  - "_ftime"
  - "_ftime32"
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
  - "_ftime32"
  - "_ftime"
  - "_ftime64"
  - "ftime64"
  - "ftime"
  - "ftime32"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ftime64 (funzione)"
  - "_ftime64 (funzione)"
  - "ora corrente"
  - "_ftime (funzione)"
  - "ftime (funzione)"
  - "_ftime32 (funzione)"
  - "ftime32 (funzione)"
  - "ora, recupero di quella corrente"
ms.assetid: 96bc464c-3bcd-41d5-a212-8bbd836b814a
caps.latest.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 27
---
# _ftime, _ftime32, _ftime64
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene l'ora corrente.  Sono disponibili versioni più sicure di queste funzioni. Vedere [\_ftime\_s, \_ftime32\_s, \_ftime64\_s](../../c-runtime-library/reference/ftime-s-ftime32-s-ftime64-s.md).  
  
## Sintassi  
  
```  
void _ftime(   
   struct _timeb *timeptr   
);  
void _ftime32(   
   struct __timeb32 *timeptr   
);  
void _ftime64(   
   struct __timeb64 *timeptr   
);  
```  
  
#### Parametri  
 `timeptr`  
 Puntatore ad una struttura `_timeb`,`__timeb32` o `__timeb64`.  
  
## Note  
 La funzione `_ftime` ottiene l'ora locale corrente e la memorizza nella struttura indicata da `timeptr`*.* Le strutture `_timeb`, `__timeb32`,e`__timeb64` sono definite in SYS\\Timeb.h.  Esse contengono quattro campi, elencati nella tabella seguente.  
  
 `dstflag`  
 Diverso da zero se viene tenuto conto dell'ora legale è correntemente attiva per il fuso orario locale. \(Vedere [\_tzset](../../c-runtime-library/reference/tzset.md) per una spiegazione su come viene determinato il cambio dell'ora legale\).  
  
 `millitm`  
 Frazione di un secondo in millisecondi.  
  
 `time`  
 Tempo in secondi dalla mezzanotte \(00:00:00\), 1° gennaio 1970, coordinated universal time \(UTC\).  
  
 `timezone`  
 Differenza in minuti, spostamento verso occidente, tra l'ora UTC e l'ora locale.  Il valore di `timezone` viene impostato dal valore della variabile globale `_timezone` \(vedere `_tzset`\).  
  
 `_ftime64`, che utilizza la struttura `__timeb64`, permette alle date di creazione file di essere espresse fino alle 23:59:59 del 31 dicembre 3000, UTC; mentre `_ftime32` permette di rappresentare solo date fino alle 03:14:07 del 19 gennaio 2038, UTC.  Per tutte queste funzioni, la mezzanotte, del 1° gennaio 1970, è il limite inferiore dell'intervallo di date.  
  
 `_ftime` è equivalente a `_ftime64` e `_timeb` contiene un'ora a 64 bit.  Questo vale a meno che non sia definito `_USE_32BIT_TIME_T`, in questo caso, è attivo il comportamento precedente; `_ftime` utilizza un tempo a 32 bit e `_timeb` contiene un tempo a 32 bit.  
  
 `_ftime` convalida i suoi parametri.  Se viene passato un puntatore null come `timeptr`, la funzione invoca il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se all'esecuzione è consentito continuare, la funzione imposta `errno` a `EINVAL`.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_ftime`|\<sys\/types.h\> e \<sys\/timeb.h\>|  
|`_ftime32`|\<sys\/types.h\> e \<sys\/timeb.h\>|  
|`_ftime64`|\<sys\/types.h\> e \<sys\/timeb.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_ftime.c  
// compile with: /W3  
// This program uses _ftime to obtain the current  
// time and then stores this time in timebuffer.  
  
#include <stdio.h>  
#include <sys/timeb.h>  
#include <time.h>  
  
int main( void )  
{  
   struct _timeb timebuffer;  
   char timeline[26];  
   errno_t err;  
   time_t time1;  
   unsigned short millitm1;  
   short timezone1;  
   short dstflag1;  
  
   _ftime( &timebuffer ); // C4996  
   // Note: _ftime is deprecated; consider using _ftime_s instead  
  
   time1 = timebuffer.time;  
   millitm1 = timebuffer.millitm;  
   timezone1 = timebuffer.timezone;  
   dstflag1 = timebuffer.dstflag;  
  
   printf( "Seconds since midnight, January 1, 1970 (UTC): %I64d\n",   
   time1);  
   printf( "Milliseconds: %d\n", millitm1);  
   printf( "Minutes between UTC and local time: %d\n", timezone1);  
   printf( "Daylight savings time flag (1 means Daylight time is in "  
           "effect): %d\n", dstflag1);   
  
   err = ctime_s( timeline, 26, & ( timebuffer.time ) );  
   if (err)  
   {  
       printf("Invalid argument to ctime_s. ");  
   }  
   printf( "The time is %.19s.%hu %s", timeline, timebuffer.millitm,  
           &timeline[20] );  
}  
```  
  
  **Seconds since midnight, January 1, 1970 \(UTC\): 1051553334**  
**Milliseconds: 230**  
**Minutes between UTC and local time: 480**  
**Daylight savings time flag \(1 means Daylight time is in effect\): 1**  
**The time is Mon Apr 28 11:08:54.230 2003**   
## Equivalente .NET Framework  
 [System::DateTime::Now](https://msdn.microsoft.com/en-us/library/system.datetime.now.aspx)  
  
## Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [asctime, \_wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [ctime, \_ctime32, \_ctime64, \_wctime, \_wctime32, \_wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [gmtime, \_gmtime32, \_gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime, \_localtime32, \_localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)