---
title: "_mkgmtime, _mkgmtime32, _mkgmtime64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mkgmtime32"
  - "_mkgmtime64"
  - "_mkgmtime"
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
  - "_mkgmtime64"
  - "mkgmtime32"
  - "_mkgmtime32"
  - "mkgmtime"
  - "mkgmtime64"
  - "_mkgmtime"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mkgmtime32 (funzione)"
  - "funzioni ora"
  - "mkgmtime (funzione)"
  - "_mkgmtime (funzione)"
  - "conversione di ore"
  - "mkgmtime64 (funzione)"
  - "_mkgmtime64 (funzione)"
  - "_mkgmtime32 (funzione)"
  - "ora, conversione"
ms.assetid: b4ca2b67-e198-4f43-b3e2-e8ad6bd01867
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 17
---
# _mkgmtime, _mkgmtime32, _mkgmtime64
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte un'ora UTC rappresentata da un `tm``struct` a un'ora UTC rappresentata da un `time_t` tipo.  
  
## Sintassi  
  
```  
  
time_t _mkgmtime(  
   struct tm*   
timeptr  
);  
__time32_t _mkgmtime32(  
   struct tm*   
timeptr  
);  
__time64_t _mkgmtime64(  
   struct tm*   
timeptr  
);  
  
```  
  
#### Parametri  
 `timeptr`  
 Un puntatore all'ora UTC come un `struct``tm` da convertire.  
  
## Valore restituito  
 Una quantità di tipo `__time32_t` o `__time64_t` che rappresenta il numero di secondi trascorsi dalla mezzanotte dell'1 gennaio 1970, in base al formato UTC \(Coordinated Universal Time Coordinated\). Se la data è compreso nell'intervallo \(vedere la sezione Osservazioni\) o l'input non può essere interpretato come un'ora valida, il valore restituito è \-1.  
  
## Note  
 Il `_mkgmtime32` e `_mkgmtime64` funzioni consentono di convertire un'ora UTC per un `__time32_t` o `__time64_t` tipo che rappresenta l'ora UTC. Per convertire un'ora locale in ora UTC, utilizzare `mktime`, `_mktime32`, e `_mktime64` invece.  
  
 `_mkgmtime` è una funzione inline che restituisce `_mkgmtime64`, e `time_t` equivale a `__time64_t`. Se è necessario forzare il compilatore a interpretare `time_t`come il precedente 32\-bit `time_t`, è possibile definire `_USE_32BIT_TIME_T`. Questa operazione è sconsigliata perché l'applicazione potrebbe non riuscire dopo il 18 gennaio 2038 \(l'intervallo massimo di 32 bit `time_t`\), e non è consentito affatto su piattaforme a 64 bit.  
  
 Il tempo passata struttura verrà modificato come segue: nello stesso modo quando vengono modificati con il `_mktime` funzioni: il `tm_wday` e `tm_yday` i campi vengono impostati nuovi valori in base ai valori di `tm_mday` e `tm_year`. Quando si specifica una struttura temporale `tm`,impostare il campo `tm_isdst` su:  
  
-   Zero \(0\) per indicare che è attiva l'ora solare.  
  
-   Un valore maggiore di 0 per indicare che è attiva l'ora legale.  
  
-   Un valore minore di zero per fare in modo che il codice della libreria di runtime del linguaggio C calcoli se è attiva l'ora legale o l'ora solare.  
  
 La libreria di run\-time C utilizza la variabile di ambiente TZ per determinare l'ora legale corretta. Se il fuso orario non è impostata, il sistema operativo viene eseguita una query per ottenere il legale regionale corretto comportamento in fase di.`tm_isdst` è un campo obbligatorio. Se non è impostata, il relativo valore non è definito e il valore restituito da `mktime` è imprevedibile.  
  
 La gamma di `_mkgmtime32` funzione è dalla mezzanotte dell'1 gennaio 1970, ora UTC per 23:59:59 18 gennaio 2038 UTC. L'intervallo di `_mkgmtime64` è da mezzanotte dell'1 gennaio 1970, UTC a 23:59:59, dicembre 31, 3000 UTC. Data out\-of\-range restituisce un valore restituito di – 1. L'intervallo di `_mkgmtime` dipende dal fatto che `_USE_32BIT_TIME_T` è definito. Se non è definito \(impostazione predefinita\) l'intervallo è quello di `_mkgmtime64`; in caso contrario, l'intervallo è limitato all'intervallo a 32 bit di `_mkgmtime32`.  
  
 Si noti che `gmtime` e `localtime` usano un singolo buffer allocato in modo statico per la conversione. Se si fornisce questo buffer a `mkgmtime`, i contenuti precedenti verranno eliminati.  
  
## Esempio  
  
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
  
## Esempio di output  
  
```  
Seconds since midnight, January 1, 1970  
My time: 1171588492  
GM time (UTC): 1171588492  
  
Local Time: Thu Feb 15 17:14:52 2007  
  
Greenwich Mean Time: Fri Feb 16 01:14:52 2007  
```  
  
 Nell'esempio seguente viene illustrato come la struttura incompleta viene riempita con i valori calcolati del giorno della settimana e il giorno dell'anno.  
  
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
  
## Output  
  
```  
Before calling _mkgmtime, t1 = Sun Feb 12 00:00:00 2003  
 t.tm_yday = 0  
After calling _mkgmtime, t1 = Wed Feb 12 00:00:00 2003  
 t.tm_yday = 42  
```  
  
## Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [asctime, \_wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [asctime\_s, \_wasctime\_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md)   
 [gmtime, \_gmtime32, \_gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [gmtime\_s, \_gmtime32\_s, \_gmtime64\_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)   
 [localtime\_s, \_localtime32\_s, \_localtime64\_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)   
 [mktime, \_mktime32, \_mktime64](../../c-runtime-library/reference/mktime-mktime32-mktime64.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)