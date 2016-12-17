---
title: "ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64 | Microsoft Docs"
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
  - "_ctime64"
  - "_wctime32"
  - "ctime"
  - "_wctime64"
  - "_ctime32"
  - "_wctime"
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
  - "_wctime64"
  - "_ctime32"
  - "_tctime"
  - "_wctime"
  - "_wctime32"
  - "_tctime64"
  - "_ctime64"
  - "ctime"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "tctime64 (funzione)"
  - "_ctime32 (funzione)"
  - "ctime32 (funzione)"
  - "_wctime (funzione)"
  - "wctime64 (funzione)"
  - "_tctime64 (funzione)"
  - "_tctime32 (funzione)"
  - "_ctime64 (funzione)"
  - "_wctime64 (funzione)"
  - "ctime (funzione)"
  - "wctime32 (funzione)"
  - "ctime64 (funzione)"
  - "_wctime32 (funzione)"
  - "_tctime (funzione)"
  - "tctime32 (funzione)"
  - "tctime (funzione)"
  - "wctime (funzione)"
  - "ora, conversione"
ms.assetid: 2423de37-a35c-4f0a-a378-3116bc120a9d
caps.latest.revision: 25
caps.handback.revision: 25
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Convertire un valore di ora in una stringa e regolare per le impostazioni di fuso orario locale. Le versioni più sicure di queste funzioni sono disponibili. vedere [ctime\_s, \_ctime32\_s, \_ctime64\_s, \_wctime\_s, \_wctime32\_s, \_wctime64\_s](../../c-runtime-library/reference/ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md).  
  
## Sintassi  
  
```  
char *ctime(   
   const time_t *timer   
);  
char *_ctime32(   
   const __time32_t *timer )  
;  
char *_ctime64(   
   const __time64_t *timer )  
;  
wchar_t *_wctime(   
   const time_t *timer   
);  
wchar_t *_wctime32(   
   const __time32_t *timer  
);  
wchar_t *_wctime64(   
   const __time64_t *timer   
);  
```  
  
#### Parametri  
 `timer`  
 Puntatore al tempo di archiviazione.  
  
## Valore restituito  
 Puntatore al risultato di stringa di caratteri.`NULL` Se viene restituito:  
  
-   `time` rappresenta una data precedente alla mezzanotte dell'1 gennaio 1970, UTC.  
  
-   Se si utilizza `_ctime32` o `_wctime32` e `time` rappresenta una data successiva 23:59:59 18 gennaio 2038 UTC.  
  
-   Se si utilizza `_ctime64` o `_wctime64` e `time` rappresenta una data successiva 23:59:59, 31 dicembre 3000 UTC.  
  
 `ctime` è una funzione inline che restituisce `_ctime64` e `time_t` equivale a `__time64_t`. Se è necessario forzare il compilatore a interpretare `time_t` come il precedente 32\-bit `time_t`, è possibile definire `_USE_32BIT_TIME_T`. Questo determinerebbe `ctime` restituisca `_ctime32`. Questa operazione è sconsigliata perché l'applicazione potrebbe non riuscire dopo il 18 gennaio 2038, e non è consentito in piattaforme a 64 bit.  
  
## Note  
 Il `ctime` funzione converte un valore di ora archiviato come un [time\_t](../../c-runtime-library/standard-types.md) valore in una stringa di caratteri. Il `timer` valore viene in genere ottenuto da una chiamata a [tempo](../../c-runtime-library/reference/time-time32-time64.md), che restituisce il numero di secondi trascorsi dalla mezzanotte \(00: 00:00\), 1 gennaio 1970, ora UTC \(coordinated universal time\). Stringa del valore restituito contiene esattamente 26 caratteri e ha il formato:  
  
```  
Wed Jan 02 02:03:55 1980\n\0  
```  
  
 Viene utilizzato un formato a 24 ore. Tutti i campi hanno una larghezza costante. Il carattere di nuova riga \('\\n'\) e il carattere null \('\\0'\) occupano le ultime due posizioni della stringa.  
  
 La stringa di caratteri convertito anche viene regolata in base alle impostazioni di fuso orario locale. Vedere il `time`, [ftime](../../c-runtime-library/reference/ftime-ftime32-ftime64.md), e [localtime](../../c-runtime-library/reference/localtime-localtime32-localtime64.md) funzioni per informazioni sulla configurazione dell'ora locale e il [tzset](../../c-runtime-library/reference/tzset.md) funzione per informazioni dettagliate sulla definizione di fuso orario ambiente e variabili globali.  
  
 Una chiamata a `ctime` consente di modificare un singolo buffer allocato in modo statico utilizzato dal `gmtime` e `localtime` funzioni. Ogni chiamata a una di queste routine Elimina il risultato della chiamata precedente.`ctime` condivide un buffer statico con il `asctime` \(funzione\). Pertanto, una chiamata a `ctime` Elimina i risultati di qualsiasi chiamata precedente a `asctime`, `localtime`, o `gmtime`.  
  
 `_wctime` e `_wctime64` sono la versione a caratteri wide di `ctime` e `_ctime64`; restituisce un puntatore alla stringa di caratteri wide. In caso contrario, `_ctime64`, `_wctime`, e `_wctime64` si comportano in modo identico alle `ctime`.  
  
 Queste funzioni convalidano i relativi parametri. Se `timer` è un puntatore null o se il valore del timer è negativo, queste funzioni richiamano il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiscono `NULL` e impostare `errno` a `EINVAL`.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tctime`|`ctime`|`ctime`|`_wctime`|  
|`_tctime32`|`_ctime32`|`_ctime32`|`_wctime32`|  
|`_tctime64`|`_ctime64`|`_ctime64`|`_wctime64`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`ctime`|\<time.h\>|  
|`_ctime32`|\<time.h\>|  
|`_ctime64`|\<time.h\>|  
|`_wctime`|\<time.h\> o \<wchar.h\>|  
|`_wctime32`|\<time.h\> o \<wchar.h\>|  
|`_wctime64`|\<time.h\> o \<wchar.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_ctime64.c  
// compile with: /W3  
/* This program gets the current  
 * time in _time64_t form, then uses ctime to  
 * display the time in string form.  
 */  
  
#include <time.h>  
#include <stdio.h>  
  
int main( void )  
{  
   __time64_t ltime;  
  
   _time64( &ltime );  
   printf( "The time is %s\n", _ctime64( &ltime ) ); // C4996  
   // Note: _ctime64 is deprecated; consider using _ctime64_s  
}  
```  
  
```Output  
Il tempo è 13 Feb mercoledì 16:04:43 2002  
```  
  
## Equivalente .NET Framework  
  
-   [System::DateTime::GetDateTimeFormats](https://msdn.microsoft.com/en-us/library/system.datetime.getdatetimeformats.aspx)  
  
-   [System::DateTime::ToString](https://msdn.microsoft.com/en-us/library/system.datetime.tostring.aspx)  
  
-   [System::DateTime::ToLongTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongtimestring.aspx)  
  
-   [System::DateTime::ToShortTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.toshorttimestring.aspx)  
  
## Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [asctime, \_wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [ctime\_s, \_ctime32\_s, \_ctime64\_s, \_wctime\_s, \_wctime32\_s, \_wctime64\_s](../../c-runtime-library/reference/ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md)   
 [\_ftime, \_ftime32, \_ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime, \_gmtime32, \_gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime, \_localtime32, \_localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)