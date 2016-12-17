---
title: "localtime, _localtime32, _localtime64 | Microsoft Docs"
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
  - "_localtime64"
  - "_localtime32"
  - "localtime"
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
  - "localtime64"
  - "_localtime64"
  - "localtime32"
  - "localtime"
  - "_localtime32"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "localtime32 (funzione)"
  - "_localtime32 (funzione)"
  - "_localtime64 (funzione)"
  - "localtime64 (funzione)"
  - "localtime (funzione)"
  - "ora, conversione di valori"
ms.assetid: 4260ec3d-43ee-4538-b998-402a282bb9b8
caps.latest.revision: 28
caps.handback.revision: 28
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# localtime, _localtime32, _localtime64
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Convertire un valore di ora e risolvere per il fuso orario locale. Le versioni più sicure di queste funzioni sono disponibili. vedere [localtime\_s, \_localtime32\_s, \_localtime64\_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md).  
  
## Sintassi  
  
```  
struct tm *localtime(  
   const time_t *timer   
);  
struct tm *_localtime32(  
   const __time32_t *timer  
);  
struct tm *_localtime64(  
   const __time64_t *timer   
);  
```  
  
#### Parametri  
 `timer`  
 Puntatore al tempo di archiviazione.  
  
## Valore restituito  
 Restituisce un puntatore al risultato, struttura o `NULL` Se la data passata alla funzione è:  
  
-   Prima di mezzanotte dell'1 gennaio 1970.  
  
-   Dopo aver 03:14:07, 19 gennaio 2038 UTC \(tramite `_time32` e `time32_t`\).  
  
-   Dopo aver 23:59:59, 31 dicembre 3000 UTC \(tramite `_time64` e `__time64_t`\).  
  
 `_localtime64`, che utilizza il `__time64_t` struttura, consente le date di esprimere alle 23:59:59, dicembre 31, 3000, ora UTC \(coordinated universal time\), mentre `_localtime32` rappresenta le date tramite 23:59:59 18 gennaio 2038 UTC.  
  
 `localtime` è una funzione inline che restituisce `_localtime64`, e `time_t` equivale a `__time64_t`. Se è necessario forzare il compilatore a interpretare `time_t`come il precedente 32\-bit `time_t`, è possibile definire `_USE_32BIT_TIME_T`. Questo determinerebbe `localtime` restituisca `_localtime32`. Questa operazione è sconsigliata perché l'applicazione potrebbe non riuscire dopo il 18 gennaio 2038, e non è consentito in piattaforme a 64 bit.  
  
 I campi del tipo di struttura [tm](../../c-runtime-library/standard-types.md) archiviare i valori seguenti, ognuno dei quali è un `int`:  
  
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
 Valore positivo se è attivo, l'ora legale 0 se l'ora legale non è attivo; valore negativo se lo stato dell'ora legale è sconosciuto. Se il `TZ` variabile di ambiente viene impostata, la libreria di run\-time C si presuppone che le regole appropriate negli Stati Uniti per implementare il calcolo – ora legale \(DST\).  
  
## Note  
 Il `localtime` funzione converte un'ora archiviata come un [time\_t](../../c-runtime-library/standard-types.md) valore e archivia il risultato in una struttura di tipo `tm`. Il `long` valore `timer` rappresenta i secondi trascorsi dalla mezzanotte \(00: 00:00\), 1 gennaio 1970, ora UTC. Questo valore viene in genere ottenuto dal `time` \(funzione\).  
  
 Entrambe le versioni a 32 bit e 64 bit di `gmtime`, `mktime`, `mkgmtime`, e `localtime` utilizzano un singolo `tm` struttura per ogni thread per la conversione. Ogni chiamata a una di queste routine Elimina il risultato della chiamata precedente.  
  
 `localtime` correzione per il fuso orario locale, se l'utente imposta innanzitutto la variabile di ambiente globale `TZ`. Quando `TZ` è impostata, altre tre variabili di ambiente \(`_timezone`, `_daylight`, e `_tzname`\) vengono impostati automaticamente anche. Se il `TZ` variabile non è impostata, `localtime` tenta di utilizzare le informazioni sul fuso orario specificati nell'applicazione di data\/ora nel Pannello di controllo. Se non è possibile ottenere queste informazioni, PST8PDT, che indica il fuso orario del Pacifico, viene utilizzato per impostazione predefinita. Vedere [tzset](../../c-runtime-library/reference/tzset.md) per una descrizione di queste variabili.`TZ` è un'estensione Microsoft e non fa parte della definizione dello standard ANSI di `localtime`.  
  
> [!NOTE]
>  L'ambiente di destinazione è consigliabile provare a determinare se è in vigore l'ora legale.  
  
 Queste funzioni convalidano i relativi parametri. Se `timer` è un puntatore null o se il valore del timer è negativo, queste funzioni richiamano un gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiscono `NULL` e impostare `errno` a `EINVAL`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`localtime`|\<time.h\>|  
|`_localtime32`|\<time.h\>|  
|`_localtime64`|\<time.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_localtime.cpp  
// compile with: /W3  
/* This program uses _time64 to get the current time   
 * and then uses localtime64() to convert this time to a structure   
 * representing the local time. The program converts the result   
 * from a 24-hour clock to a 12-hour clock and determines the   
 * proper extension (AM or PM).  
 */  
  
#include <stdio.h>  
#include <string.h>  
#include <time.h>  
  
int main( void )  
{  
        struct tm *newtime;  
        char am_pm[] = "AM";  
        __time64_t long_time;  
  
        _time64( &long_time );           // Get time as 64-bit integer.  
                                         // Convert to local time.  
        newtime = _localtime64( &long_time ); // C4996  
        // Note: _localtime64 deprecated; consider _localetime64_s  
  
        if( newtime->tm_hour > 12 )        // Set up extension.  
                strcpy_s( am_pm, sizeof(am_pm), "PM" );  
        if( newtime->tm_hour > 12 )        // Convert from 24-hour  
                newtime->tm_hour -= 12;    //   to 12-hour clock.  
        if( newtime->tm_hour == 0 )        // Set hour to 12 if midnight.  
                newtime->tm_hour = 12;  
  
        char buff[30];  
        asctime_s( buff, sizeof(buff), newtime );  
        printf( "%.19s %s\n", buff, am_pm );  
}  
```  
  
```Output  
12 Feb mar 10:05:58 AM  
```  
  
## Equivalente .NET Framework  
 [System::DateTime::ToLocalTime](https://msdn.microsoft.com/en-us/library/system.datetime.tolocaltime.aspx)  
  
## Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [asctime, \_wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [ctime, \_ctime32, \_ctime64, \_wctime, \_wctime32, \_wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [\_ftime, \_ftime32, \_ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime, \_gmtime32, \_gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime\_s, \_localtime32\_s, \_localtime64\_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [\_tzset](../../c-runtime-library/reference/tzset.md)