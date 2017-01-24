---
title: "localtime_s, _localtime32_s, _localtime64_s | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_localtime64_s"
  - "_localtime32_s"
  - "localtime_s"
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
  - "_localtime32_s"
  - "localtime32_s"
  - "localtime_s"
  - "localtime64_s"
  - "_localtime64_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_localtime64_s (funzione)"
  - "localtime32_s (funzione)"
  - "_localtime32_s (funzione)"
  - "localtime64_s (funzione)"
  - "ora, conversione di valori"
  - "localtime_s (funzione)"
ms.assetid: 842d1dc7-d6f8-41d3-b340-108d4b90df54
caps.latest.revision: 23
caps.handback.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# localtime_s, _localtime32_s, _localtime64_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte un valore di ora e corregge per il fuso orario locale. Queste sono versioni di [localtime, localtime32, localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md) con miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t localtime_s(  
   struct tm* _tm,  
   const time_t *time   
);  
errno_t _localtime32_s(  
   struct tm* _tm,  
   const time32_t *time   
);  
errno_t _localtime64_s(  
   struct tm* _tm,  
   const _time64_t *time   
);  
```  
  
#### Parametri  
 `_tm`  
 Puntatore alla struttura di ora deve essere compilato.  
  
 `time`  
 Puntatore al tempo di archiviazione.  
  
## Valore restituito  
 Zero se ha esito positivo. Il valore restituito è un codice di errore se si verifica un errore. Codici di errore sono definiti in errno. h. Per un elenco di questi errori, vedere [errno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
### Condizioni di errore  
  
|`_tm`|`time`|Valore restituito|Valore in `_tm`|Richiama il gestore di parametro non valido|  
|-----------|------------|-----------------------|---------------------|-------------------------------------------------|  
|`NULL`|any|`EINVAL`|Non modificato|Sì|  
|Non `NULL` \(punta alla memoria valida\)|`NULL`|`EINVAL`|Tutti i campi impostati su \-1|Sì|  
|Non `NULL` \(punta alla memoria valida\)|minore di 0 o maggiore di `_MAX__TIME64_T`|`EINVAL`|Tutti i campi impostati su \-1|No|  
  
 Nel caso di condizioni di due errore prima, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono `EINVAL`.  
  
## Note  
 Il `_localtime32_s` funzione converte un'ora archiviata come un [time\_t](../../c-runtime-library/standard-types.md) valore e archivia il risultato in una struttura di tipo `tm`. Il `long` valore `timer` rappresenta i secondi trascorsi dalla mezzanotte \(00: 00:00\), 1 gennaio 1970, ora UTC. Questo valore viene in genere ottenuto dal `time` \(funzione\).  
  
 `_localtime32_s` correzione per il fuso orario locale, se l'utente imposta innanzitutto la variabile di ambiente globale `TZ`. Quando `TZ` è impostata, altre tre variabili di ambiente \(`_timezone`, `_daylight`, e `_tzname`\) vengono impostati automaticamente anche. Se il `TZ` variabile non è impostata, `localtime32_s` tenta di utilizzare le informazioni sul fuso orario specificati nell'applicazione di data\/ora nel Pannello di controllo. Se non è possibile ottenere queste informazioni, PST8PDT, che indica il fuso orario del Pacifico, viene utilizzato per impostazione predefinita. Vedere [tzset](../../c-runtime-library/reference/tzset.md) per una descrizione di queste variabili.`TZ` è un'estensione Microsoft e non fa parte della definizione dello standard ANSI di `localtime`.  
  
> [!NOTE]
>  L'ambiente di destinazione è consigliabile provare a determinare se è in vigore l'ora legale.  
  
 `_localtime64_s`, che utilizza il `__time64_t` struttura, consente le date di esprimere alle 23:59:59, dicembre 31, 3000, ora UTC \(coordinated universal time\), mentre `_localtime32_s` rappresenta le date tramite 23:59:59 18 gennaio 2038 UTC.  
  
 `localtime_s` è una funzione inline che restituisce `_localtime64_s`, e `time_t` equivale a `__time64_t`. Se è necessario forzare il compilatore in modo che interpreti `time_t` come il vecchio `time_t` a 32 bit, è possibile definire `_USE_32BIT_TIME_T`. Questo determinerebbe `localtime_s` restituisca `_localtime32_s`. Questa operazione è sconsigliata perché l'applicazione potrebbe non riuscire dopo il 18 gennaio 2038, e non è consentito in piattaforme a 64 bit.  
  
 I campi del tipo di struttura [tm](../../c-runtime-library/standard-types.md) archiviare i valori seguenti, ognuno dei quali è un `int`.  
  
 `tm_sec`  
 Secondi dopo il minuto \(0 – 59\).  
  
 `tm_min`  
 Minuti dopo l'ora \(0 – 59\).  
  
 `tm_hour`  
 Ore dopo la mezzanotte \(0\-23\).  
  
 `tm_mday`  
 Giorno del mese \(1 – 31\).  
  
 `tm_mon`  
 Mese \(da 0 a 11; Gennaio \= 0\).  
  
 `tm_year`  
 Year \(anno meno 1900\).  
  
 `tm_wday`  
 Giorno della settimana \(0\-6; Domenica \= 0\).  
  
 `tm_yday`  
 Giorno dell'anno \(da 0 a 365; Il 1 ° gennaio \= 0\).  
  
 `tm_isdst`  
 Valore positivo se è attivo, l'ora legale 0 se l'ora legale non è attivo; valore negativo se lo stato dell'ora legale è sconosciuto. Se il `TZ` variabile di ambiente viene impostata, la libreria di run\-time C si presuppone che le regole appropriate negli Stati Uniti per implementare il calcolo dell'ora legale \(DST\).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`localtime_s`|\<time.h\>|  
|`_localtime32_s`|\<time.h\>|  
|`_localtime64_s`|\<time.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_localtime_s.c  
/* This program uses _time64 to get the current time   
 * and then uses _localtime64_s() to convert this time to a structure   
 * representing the local time. The program converts the result   
 * from a 24-hour clock to a 12-hour clock and determines the   
 * proper extension (AM or PM).  
 */  
  
#include <stdio.h>  
#include <string.h>  
#include <time.h>  
  
int main( void )  
{  
        struct tm newtime;  
        char am_pm[] = "AM";  
        __time64_t long_time;  
        char timebuf[26];  
        errno_t err;  
  
        // Get time as 64-bit integer.  
        _time64( &long_time );   
        // Convert to local time.  
        err = _localtime64_s( &newtime, &long_time );   
        if (err)  
        {  
            printf("Invalid argument to _localtime64_s.");  
            exit(1);  
        }  
        if( newtime.tm_hour > 12 )        // Set up extension.   
                strcpy_s( am_pm, sizeof(am_pm), "PM" );  
        if( newtime.tm_hour > 12 )        // Convert from 24-hour   
                newtime.tm_hour -= 12;    // to 12-hour clock.   
        if( newtime.tm_hour == 0 )        // Set hour to 12 if midnight.  
                newtime.tm_hour = 12;  
  
        // Convert to an ASCII representation.   
        err = asctime_s(timebuf, 26, &newtime);  
        if (err)  
        {  
           printf("Invalid argument to asctime_s.");  
           exit(1);  
        }  
        printf( "%.19s %s\n", timebuf, am_pm );  
}  
```  
  
## Esempio di output  
  
```  
Fri Apr 25 01:19:27 PM  
```  
  
## Equivalente .NET Framework  
 [System::DateTime::ToLocalTime](https://msdn.microsoft.com/en-us/library/system.datetime.tolocaltime.aspx)  
  
## Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [asctime\_s, \_wasctime\_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md)   
 [ctime, \_ctime32, \_ctime64, \_wctime, \_wctime32, \_wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [\_ftime, \_ftime32, \_ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime\_s, \_gmtime32\_s, \_gmtime64\_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)   
 [localtime, \_localtime32, \_localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [\_tzset](../../c-runtime-library/reference/tzset.md)