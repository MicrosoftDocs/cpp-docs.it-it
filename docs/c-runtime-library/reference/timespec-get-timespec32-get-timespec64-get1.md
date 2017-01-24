---
title: "timespec_get, _timespec32_get, _timespec64_get | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "timespec_get"
  - "_timespec32_get"
  - "_timespec64_get"
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
  - "timespec_get"
  - "_timespec32_get"
  - "_timespec64_get"
  - "time/timespec_get"
  - "time/_timespec32_get"
  - "time/_timespec64_get"
  - "timespec"
  - "_timespec32"
  - "_timespec64"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "timespec_get function"
  - "_timespec32_get function"
  - "_timespec64_get function"
ms.assetid: ed757258-b4f2-4c1d-a91b-22ea6ffce4ab
caps.latest.revision: 4
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# timespec_get, _timespec32_get, _timespec64_get
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta l'intervallo a cui punta il primo argomento sull'ora di calendario corrente, secondo la base temporale specificata.  
  
## Sintassi  
  
```  
int timespec_get(  
    struct timespec* const time_spec,  
    int const base  
);  
int _timespec32_get(  
    struct _timespec32* const time_spec,  
    int const base  
);  
int _timespec64_get(  
    struct _timespec64* const time_spec,  
    int const base  
);  
  
```  
  
#### Parametri  
 `time_spec`  
 Puntatore a uno struct impostato sul tempo, in secondi e nanosecondi, dall'inizio del periodo.  
  
 `base`  
 Un valore specifico dell'implementazione diverso da zero che specifica la base temporale.  
  
## Valore restituito  
 Il valore di `base` se ha esito positivo; in caso contrario, restituisce zero.  
  
## Note  
 Le funzioni `timespec_get` impostano l'ora corrente nello struct a cui punta l'argomento `time_spec`. Tutte le versioni di questo struct hanno due membri, `tv_sec` e `tv_nsec`. Il valore di `tv_sec` è impostato sul numero intero di secondi e `tv_nsec` sul numero intero di nanosecondi, arrotondato alla risoluzione del clock di sistema, dall'inizio del periodo specificato da `base`.  
  
 **Sezione specifica Microsoft**  
  
 Queste funzioni supportano solo `TIME_UTC` come valore di `base`. Il valore di `time_spec` viene impostato sul numero di secondi e nanosecondi dall'inizio del periodo, ovvero la mezzanotte del 1 gennaio 1970, UTC \(Coordinated Universal Time\). In `struct _timespec32`, `tv_sec` è un valore di `__time32_t`. In `struct _timespec64`, `tv_sec` è un valore di `__time64_t`. In `struct timespec`, `tv_sec` è un tipo `time_t`, da 32 bit o 64 bit di lunghezza a seconda che sia definita o meno la macro del preprocessore \_USE\_32BIT\_TIME\_T. La funzione `timespec_get` è una funzione inline che chiama `_timespec32_get` se è definito \_USE\_32BIT\_TIME\_T; in caso contrario, chiama `_timespec64_get`.  
  
 **Fine sezione specifica Microsoft**  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`timespec_get`, `_timespec32_get`, `_timespec64_get`|C: \<time.h\>; C\+\+: \<ctime\> o \<time.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [asctime, \_wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [asctime\_s, \_wasctime\_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md)   
 [\_ftime, \_ftime32, \_ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime, \_gmtime32, \_gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [gmtime\_s, \_gmtime32\_s, \_gmtime64\_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)   
 [localtime, \_localtime32, \_localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [localtime\_s, \_localtime32\_s, \_localtime64\_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [\_utime, \_utime32, \_utime64, \_wutime, \_wutime32, \_wutime64](../../c-runtime-library/reference/utime-utime32-utime64-wutime-wutime32-wutime64.md)