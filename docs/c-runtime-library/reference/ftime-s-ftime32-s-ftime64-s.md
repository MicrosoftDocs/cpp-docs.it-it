---
title: "_ftime_s, _ftime32_s, _ftime64_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_ftime_s"
  - "_ftime64_s"
  - "_ftime32_s"
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
  - "_ftime_s"
  - "_ftime64_s"
  - "ftime_s"
  - "_ftime32_s"
  - "ftime32_s"
  - "ftime64_s"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ftime32_s (funzione)"
  - "ftime_s (funzione)"
  - "_ftime64_s (funzione)"
  - "ora corrente"
  - "ftime64_s (funzione)"
  - "ora, recupero di quella corrente"
  - "_ftime_s (funzione)"
  - "_ftime32_s (funzione)"
ms.assetid: d03080d9-a520-45be-aa65-504bdb197e8b
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 24
---
# _ftime_s, _ftime32_s, _ftime64_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene l'ora corrente. Queste sono versioni di [\_ftime, \_ftime32, \_ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md) con miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t _ftime_s(   
   struct _timeb *timeptr   
);  
errno_t _ftime32_s(   
   struct __timeb32 *timeptr   
);  
errno_t _ftime64_s(   
   struct __timeb64 *timeptr   
);  
```  
  
#### Parametri  
 `timeptr`  
 Puntatore a un `_timeb,``__timeb32`, o `__timeb64` struttura.  
  
## Valore restituito  
 Zero se ha esito positivo, un codice di errore. Se `timeptr` è `NULL`, il valore restituito è `EINVAL`.  
  
## Note  
 Il `_ftime_s` funzione Ottiene l'ora locale corrente e lo memorizza nella struttura a cui puntata `timeptr`*.* Il `_timeb,``__timeb32`,e`__timeb64` strutture sono definite in SYS\\Timeb.h. Contengono quattro campi, elencati nella tabella seguente.  
  
 `dstflag`  
 Diverso da zero se l'ora legale è attualmente attivo per il fuso orario locale. \(Vedere [tzset](../../c-runtime-library/reference/tzset.md) per una spiegazione del modo in cui viene determinato l'ora legale.\)  
  
 `millitm`  
 Frazione di secondo in millisecondi.  
  
 `time`  
 Tempo in secondi trascorsi dalla mezzanotte \(00: 00:00\), 1 gennaio 1970, ora UTC \(coordinated universal time\).  
  
 `timezone`  
 Differenza in minuti, lo spostamento westward, tra l'ora UTC e l'ora locale. Il valore di `timezone` è impostato il valore della variabile globale `_timezone` \(vedere `_tzset`\).  
  
 `_ftime64_s`, che utilizza il `__timeb64` struttura, consente le date di creazione di file può essere espresso backup tramite 23:59:59, 31 dicembre 3000 UTC; mentre `_ftime32_s` rappresenta solo le date tramite 23:59:59 18 gennaio 2038 UTC. Mezzanotte del 1 gennaio 1970, è il limite inferiore dell'intervallo di date per tutte queste funzioni.  
  
 `_ftime_s` equivale a `_ftime64_s` e `_timeb` contiene l'ora a 64 bit. Ciò è vero, a meno che \_`USE_32BIT_TIME_T` è definito, nel qual caso il comportamento precedente è attiva; \_`ftime_s` utilizza un tempo a 32 bit e `_timeb` contiene l'ora a 32 bit.  
  
 `_ftime_s` convalida i propri parametri. Se passato un puntatore null come `timeptr`, la funzione richiama il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta `errno` a `EINVAL`.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_ftime_s`|\< sys\/types.h \> e \< sys\/timeb.h \>|  
|`_ftime32_s`|\< sys\/types.h \> e \< sys\/timeb.h \>|  
|`_ftime64_s`|\< sys\/types.h \> e \< sys\/timeb.h \>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_ftime64_s.c  
// This program uses _ftime64_s to obtain the current  
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
  
   _ftime64_s( &timebuffer );  
  
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
  
```Output  
Secondi trascorsi dalla mezzanotte del 1 gennaio 1970 (UTC): 1051553334 millisecondi: 230 minuti tra UTC e l'ora locale: flag (1 significa che è attiva l'ora legale) dell'ora 480 legale: 1 il tempo è 28 aprile MES 11:08:54.230 2003  
```  
  
## Equivalente .NET Framework  
 [System::DateTime::Now](https://msdn.microsoft.com/en-us/library/system.datetime.now.aspx)  
  
## Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [asctime, \_wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [ctime, \_ctime32, \_ctime64, \_wctime, \_wctime32, \_wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [gmtime, \_gmtime32, \_gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime, \_localtime32, \_localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)