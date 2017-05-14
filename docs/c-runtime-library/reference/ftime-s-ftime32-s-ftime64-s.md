---
title: _ftime_s, _ftime32_s, _ftime64_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _ftime_s
- _ftime64_s
- _ftime32_s
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
- _ftime_s
- _ftime64_s
- ftime_s
- _ftime32_s
- ftime32_s
- ftime64_s
dev_langs:
- C++
helpviewer_keywords:
- ftime32_s function
- ftime_s function
- _ftime64_s function
- current time
- ftime64_s function
- time, getting current
- _ftime_s function
- _ftime32_s function
ms.assetid: d03080d9-a520-45be-aa65-504bdb197e8b
caps.latest.revision: 24
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
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
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: 20611bb1f40ae900ad2653395da6a0d8279252db
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="ftimes-ftime32s-ftime64s"></a>_ftime_s, _ftime32_s, _ftime64_s
Ottiene l'ora corrente. Queste sono versioni di [_ftime, _ftime32, _ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `timeptr`  
 Puntatore a un `_timeb`, `__timeb32`, o `__timeb64` struttura.  
  
## <a name="return-value"></a>Valore restituito  
 Zero in caso di esito positivo, un codice di errore in caso di esito negativo. Se `timeptr` è `NULL`, il valore restituito è `EINVAL`.  
  
## <a name="remarks"></a>Note  
 Il `_ftime_s` funzione Ottiene l'ora locale corrente e la archivia nella struttura a cui puntata `timeptr`. Il `_timeb`, `__timeb32`, e `__timeb64` le strutture sono definiti in SYS\Timeb.h. Le strutture contengono quattro valori, elencati nella tabella seguente.  
  
 `dstflag`  
 Diverso da zero se l'ora legale è in vigore per il fuso orario locale. (Vedere [tzset](../../c-runtime-library/reference/tzset.md) per una spiegazione del modo in cui viene determinata l'ora legale.)  
  
 `millitm`  
 Frazione di secondo in millisecondi.  
  
 `time`  
 Ora in secondi trascorsi dalla mezzanotte (00.00.00) del 1 gennaio 1970 nel formato UTC (Coordinated Universal Time).  
  
 `timezone`  
 La differenza in minuti, in direzione ovest, tra l'ora UTC e l'ora locale. Il valore di `timezone` viene impostato dal valore della variabile globale `_timezone` (vedere `_tzset`).  
  
 `_ftime64_s`, che usa la struttura `__timeb64`, consente di esprimere le date di creazione di file fino alle 23.59.59 del 31 dicembre 3000 UTC, mentre `_ftime32_s` rappresenta solo le date fino alle 23.59.59 del 18 gennaio 2038 UTC. La mezzanotte del 1 gennaio 1970 è il limite inferiore dell'intervallo di date per tutte queste funzioni.  
  
 `_ftime_s` equivale a `_ftime64_s` e `_timeb` contiene un'ora a 64 bit. Questo vale a meno che non venga definito `_USE_32BIT_TIME_T`, nel qual caso è attivo il comportamento precedente. `_ftime_s` usa un'ora a 32 bit e `_timeb` contiene un'ora a 32 bit.  
  
 `_ftime_s` convalida i propri parametri. Se viene passato un puntatore Null come `timeptr`, questa funzione richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta `errno` su `EINVAL`.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`_ftime_s`|\<sys/types.h> e \<sys/timeb.h>|  
|`_ftime32_s`|\<sys/types.h> e \<sys/timeb.h>|  
|`_ftime64_s`|\<sys/types.h> e \<sys/timeb.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
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
Seconds since midnight, January 1, 1970 (UTC): 1051553334  
Milliseconds: 230  
Minutes between UTC and local time: 480  
Daylight savings time flag (1 means Daylight time is in effect): 1  
The time is Mon Apr 28 11:08:54.230 2003  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione del tempo](../../c-runtime-library/time-management.md)   
 [asctime, _wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime, _localtime32, _localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)
