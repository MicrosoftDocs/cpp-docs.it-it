---
title: _mkgmtime, _mkgmtime32, _mkgmtime64 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _mkgmtime32
- _mkgmtime64
- _mkgmtime
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
- _mkgmtime64
- mkgmtime32
- _mkgmtime32
- mkgmtime
- mkgmtime64
- _mkgmtime
dev_langs:
- C++
helpviewer_keywords:
- mkgmtime32 function
- time functions
- mkgmtime function
- _mkgmtime function
- converting times
- mkgmtime64 function
- _mkgmtime64 function
- _mkgmtime32 function
- time, converting
ms.assetid: b4ca2b67-e198-4f43-b3e2-e8ad6bd01867
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7eec9b123c47b13c73836fd41a2c490951e4fecd
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="mkgmtime-mkgmtime32-mkgmtime64"></a>_mkgmtime, _mkgmtime32, _mkgmtime64
Converte un'ora UTC rappresentata da un `tm struct` in un'ora UTC rappresentata da un tipo `time_t`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      time_t _mkgmtime(  
   struct tm* timeptr  
);  
__time32_t _mkgmtime32(  
   struct tm* timeptr  
);  
__time64_t _mkgmtime64(  
   struct tm* timeptr  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `timeptr`  
 Puntatore all'ora UTC come `struct tm` da convertire.  
  
## <a name="return-value"></a>Valore restituito  
 Una quantità di tipo `__time32_t` o `__time64_t` che rappresenta il numero di secondi trascorsi dalla mezzanotte del 1 gennaio 1970 nel formato UTC (Coordinated Universal Time). Se la data è compresa nell'intervallo (vedere la sezione Osservazioni) o l'input non può essere interpretato come un'ora valida, il valore restituito è -1.  
  
## <a name="remarks"></a>Note  
 Le funzioni `_mkgmtime32` e `_mkgmtime64` convertono un'ora UTC in un `__time32_t` o in un tipo `__time64_t` che rappresenta l'ora nel formato UTC. Per convertire un'ora locale in ora UTC, usare invece `mktime`, `_mktime32` e `_mktime64`.  
  
 `_mkgmtime` è una funzione inline equivalente a `_mkgmtime64` e `time_t` è equivalente a `__time64_t`. Se è necessario forzare il compilatore in modo che interpreti `time_t` come il vecchio `time_t`a 32 bit, è possibile definire `_USE_32BIT_TIME_T`. Questa operazione non è consigliabile perché potrebbero verificarsi errori per l'applicazione dopo il 18 gennaio 2038 (intervallo massimo per un `time_t` a 32 bit) e l'uso non è consentito in piattaforme a 64 bit.  
  
 La struttura dell'ora passata verrà modificata come segue, allo stesso modo delle funzioni `_mktime`: i campi `tm_wday` e `tm_yday` vengono impostati su nuovi valori in base ai valori di `tm_mday` e `tm_year`. Quando si specifica una struttura temporale `tm`,impostare il campo `tm_isdst` su:  
  
-   Zero (0) per indicare che è attiva l'ora solare.  
  
-   Un valore maggiore di 0 per indicare che è attiva l'ora legale.  
  
-   Un valore minore di zero per fare in modo che il codice della libreria di runtime del linguaggio C calcoli se è attiva l'ora legale o l'ora solare.  
  
 La libreria di runtime C usa la variabile di ambiente TZ per determinare l'ora legale corretta. Se la variabile TZ non è impostata, viene eseguita una query nel sistema operativo per ottenere il comportamento corretto per l'ora legale regionale. `tm_isdst` è un campo obbligatorio. Se non impostato, il relativo valore è non definito e il valore restituito da `mktime` è imprevedibile.  
  
 L'intervallo della funzione `_mkgmtime32` è compreso tra la mezzanotte del 1 gennaio 1970 UTC alle 23.59.59 del 18 gennaio 2038 UTC. L'intervallo di `_mkgmtime64` è compreso tra la mezzanotte del 1 gennaio 1970 UTC alle 23.59.59 del 31 dicembre 3000 UTC. Una data out-of-range restituisce un valore restituito-1. L'intervallo di `_mkgmtime` dipende dal fatto che sia definito `_USE_32BIT_TIME_T`. Se non è definito (impostazione predefinita) l'intervallo è quello di `_mkgmtime64`. In caso contrario, l'intervallo è limitato all'intervallo a 32 bit di `_mkgmtime32`.  
  
 Si noti che `gmtime` e `localtime` usano un singolo buffer allocato in modo statico per la conversione. Se si fornisce questo buffer a `mkgmtime`, i contenuti precedenti verranno eliminati.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_mkgmtime.c  
#include <stdio.h>  
#include <time.h>  
  
int main()  
{  
    struct tm t1, t2;  
    time_t now, mytime, gmtime;  
    char buff[30];  
  
    time( & now );  
  
    _localtime64_s( &t1, &now );  
    _gmtime64_s( &t2, &now );  
  
    mytime = mktime(&t1);  
    gmtime = _mkgmtime(&t2);  
  
    printf("Seconds since midnight, January 1, 1970\n");  
    printf("My time: %I64d\nGM time (UTC): %I64d\n\n", mytime, gmtime);  
  
    /* Use asctime_s to display these times. */  
  
    _localtime64_s( &t1, &mytime );  
    asctime_s( buff, sizeof(buff), &t1 );  
    printf( "Local Time: %s\n", buff );  
  
    _gmtime64_s( &t2, &gmtime );  
    asctime_s( buff, sizeof(buff), &t2 );  
    printf( "Greenwich Mean Time: %s\n", buff );  
  
}  
```  
  
## <a name="sample-output"></a>Esempio di output  
  
```  
Seconds since midnight, January 1, 1970  
My time: 1171588492  
GM time (UTC): 1171588492  
  
Local Time: Thu Feb 15 17:14:52 2007  
  
Greenwich Mean Time: Fri Feb 16 01:14:52 2007  
```  
  
 L'esempio seguente mostra come viene compilata la struttura incompleta con i valori calcolati del giorno della settimana e del giorno dell'anno.  
  
```  
// crt_mkgmtime2.c  
#include <stdio.h>  
#include <time.h>  
#include <memory.h>  
  
int main()  
{  
    struct tm t1, t2;  
    time_t gmtime;  
    char buff[30];  
  
    memset(&t1, 0, sizeof(struct tm));  
    memset(&t2, 0, sizeof(struct tm));  
  
    t1.tm_mon = 1;  
    t1.tm_isdst = 0;  
    t1.tm_year = 103;  
    t1.tm_mday = 12;  
  
    // The day of the week and year will be incorrect in the output here.  
    asctime_s( buff, sizeof(buff), &t1);  
    printf("Before calling _mkgmtime, t1 = %s t.tm_yday = %d\n",  
            buff, t1.tm_yday );  
  
    gmtime = _mkgmtime(&t1);  
  
    // The correct day of the week and year were determined.  
    asctime_s( buff, sizeof(buff), &t1);  
    printf("After calling _mkgmtime, t1 = %s t.tm_yday = %d\n",  
            buff, t1.tm_yday );  
  
}  
```  
  
## <a name="output"></a>Output  
  
```  
Before calling _mkgmtime, t1 = Sun Feb 12 00:00:00 2003  
 t.tm_yday = 0  
After calling _mkgmtime, t1 = Wed Feb 12 00:00:00 2003  
 t.tm_yday = 42  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione del tempo](../../c-runtime-library/time-management.md)   
 [asctime, _wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [asctime_s, _wasctime_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md)   
 [gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [gmtime_s, _gmtime32_s, _gmtime64_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)   
 [localtime_s, _localtime32_s, _localtime64_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)   
 [mktime, _mktime32, _mktime64](../../c-runtime-library/reference/mktime-mktime32-mktime64.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)