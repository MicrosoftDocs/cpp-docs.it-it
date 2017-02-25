---
title: "asctime, _wasctime | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wasctime"
  - "asctime"
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
  - "_tasctime"
  - "asctime"
  - "_wasctime"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_tasctime (funzione)"
  - "_wasctime (funzione)"
  - "asctime (funzione)"
  - "tasctime (funzione)"
  - "conversione della struttura di ora"
  - "ora, conversione"
  - "wasctime (funzione)"
ms.assetid: 974f1727-10ff-4ed4-8cac-2eb2d681f576
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# asctime, _wasctime
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Convertire una struttura di tempo `tm` in una stringa di caratteri.  Sono disponibili versioni più sicure di queste funzioni. Vedere [asctime\_s, \_wasctime\_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md).  
  
## Sintassi  
  
```  
char *asctime(   
   const struct tm *timeptr   
);  
wchar_t *_wasctime(   
   const struct tm *timeptr   
);  
```  
  
#### Parametri  
 `timeptr`  
 Struttura Orario\/Data  
  
## Valore restituito  
 `asctime` restituisce un puntatore al risultato della stringa di caratteri; `_wasctime` restituisce un puntatore al risultato della stringa con caratteri estesi.  Nessun valore di errore di ritorno.  
  
## Note  
 Sono disponibili versioni più sicure di queste funzioni. Consultare [asctime\_s, \_wasctime\_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md).  
  
 La funzione `asctime` converte un'ora archiviata come struttura in una stringa di caratteri.  Il valore di `timeptr` in genere viene ottenuto da una chiamata a `gmtime` o a `localtime`, che entrambe restituiscono un puntatore a una struttura di `tm`, definito in TIME.H.  
  
|membro del timeptr|Valore|  
|------------------------|------------|  
|`tm_hour`|Ore da mezzanotte \(0\-23\)|  
|`tm_isdst`|Positivo se l'ora legale è attiva, 0 altrimenti; negativo se lo stato dell'ora legale è sconosciuto.  La libreria di runtime C utilizza le direttive degli Stati Uniti per implementare il calcolo dell'ora legale \(DST\).|  
|`tm_mday`|Giorno del mese \(1–31\)|  
|`tm_min`|Minuti dopo l'ora \(0\-59\)|  
|`tm_mon`|Mese \(0\-11; Gennaio \= 0\)|  
|`tm_sec`|Secondi dopo il minuto \(0\-59\)|  
|`tm_wday`|Giorno della settimana \(0–6; Domenica \= 0\)|  
|`tm_yday`|Giorno dell'anno \(0–365; Gennaio 1 \= 0\)|  
|`tm_year`|Anno \(anno corrente meno 1900\)|  
  
 Una stringa di caratteri convertita viene regolata in base alle impostazioni del fuso orario locali.  Per informazioni sulla configurazione dell'ora locale, vedere [orario](../../c-runtime-library/reference/time-time32-time64.md), [\_ftime](../../c-runtime-library/reference/ftime-ftime32-ftime64.md) e funzioni di [localtime](../../c-runtime-library/reference/localtime-localtime32-localtime64.md) e la funzione di [\_tzset](../../c-runtime-library/reference/tzset.md) per informazioni sulla definizione dell'ambiente e variabili globali del fuso orario.  
  
 Il risultato della stringa fornito da `asctime` contiene esattamente 26 caratteri e ha il seguente formato `Wed Jan 02 02:03:55 1980\n\0`.  Viene utilizzato un orario nel formato a 24 ore.  Tutti i campi hanno una larghezza costante.  Il carattere di nuova riga e il carattere null occupano le ultime due posizioni della stringa.  `asctime` utilizza un singolo, buffer allocato staticamente per utilizzare la stringa restituita.  Ogni chiamata alla funzione elimina il risultato della chiamata precedente.  
  
 `_wasctime` è una versione a caratteri di tipo "wide" di `asctime`.  `_wasctime` e `asctime` si comportano in modo identico in caso contrario.  
  
 Queste funzioni convalidano i parametri.  Se `timeptr` è un puntatore null, o se contiene valori esterni intervallo, il gestore non valido di parametro viene richiamato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce `NULL` e imposta `errno` su `EINVAL`.  
  
### Mapping di routine a Testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tasctime`|`asctime`|`asctime`|`_wasctime`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`asctime`|\<time.h\>|  
|`_wasctime`|\<time.h\> o \<wchar.h\>|  
  
## Esempio  
 Questo programma imposta l'ora di sistema in un long integer `aclock`, la traduce nella struttura `newtime` e quindi la convertite in stringa per l'output, utilizzando la funzione `asctime`.  
  
```  
// crt_asctime.c  
// compile with: /W3  
  
#include <time.h>  
#include <stdio.h>  
  
int main( void )  
{  
    struct tm   *newTime;  
    time_t      szClock;  
  
    // Get time in seconds  
    time( &szClock );  
  
    // Convert time to struct tm form   
    newTime = localtime( &szClock );  
  
    // Print local time as a string.  
    printf_s( "Current date and time: %s", asctime( newTime ) ); // C4996  
    // Note: asctime is deprecated; consider using asctime_s instead  
}  
```  
  
  **Data e ora correnti: Dom 3 febbraio 2002 11:38:58**   
## Equivalente .NET Framework  
  
-   [System::DateTime::ToLongDateString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongdatestring.aspx)  
  
-   [System::DateTime::ToLongTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongtimestring.aspx)  
  
-   [System::DateTime::ToShortDateString](https://msdn.microsoft.com/en-us/library/system.datetime.toshortdatestring.aspx)  
  
-   [System::DateTime::ToShortTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.toshorttimestring.aspx)  
  
-   [System::DateTime::ToString](https://msdn.microsoft.com/en-us/library/system.datetime.tostring.aspx)  
  
## Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [ctime, \_ctime32, \_ctime64, \_wctime, \_wctime32, \_wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [\_ftime, \_ftime32, \_ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime, \_gmtime32, \_gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime, \_localtime32, \_localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [\_tzset](../../c-runtime-library/reference/tzset.md)   
 [asctime\_s, \_wasctime\_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md)