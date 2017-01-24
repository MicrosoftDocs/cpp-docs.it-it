---
title: "_strtime, _wstrtime | Microsoft Docs"
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
  - "_wstrtime"
  - "_strtime"
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
  - "_wstrtime"
  - "_strtime"
  - "wstrtime"
  - "strtime"
  - "_tstrtime"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_strtime (funzione)"
  - "_tstrtime (funzione)"
  - "_wstrtime (funzione)"
  - "copia di valori temporali nei buffer"
  - "strtime (funzione)"
  - "ora, copia"
  - "tstrtime (funzione)"
  - "wstrtime (funzione)"
ms.assetid: 9e538161-cf49-44ec-bca5-c0ab0b9e4ca3
caps.latest.revision: 22
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _strtime, _wstrtime
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Copia il tempo in un buffer.  Sono disponibili versioni più sicure di queste funzioni. Vedere [\_strtime\_s, \_wstrtime\_s](../../c-runtime-library/reference/strtime-s-wstrtime-s.md).  
  
## Sintassi  
  
```  
char *_strtime(  
   char *timestr   
);  
wchar_t *_wstrtime(  
   wchar_t *timestr   
);  
template <size_t size>  
char *_strtime(  
   char (&timestr)[size]  
); // C++ only  
template <size_t size>  
wchar_t *_wstrtime(  
   wchar_t (&timestr)[size]  
); // C++ only  
```  
  
#### Parametri  
 `timestr`  
 Stringhe orarie  
  
## Valore restituito  
 Restituisce un puntatore alla stringa di caratteri risultante `timestr`.  
  
## Note  
 La funzione di `_strtime` copia l'ora locale corrente nel buffer puntato da `timestr`*.* Il tempo viene formattato come `hh:mm:ss` in cui `hh` è composto da due cifre che rappresentano l'ora in notazione di 24 ore, `mm` sono due cifre che rappresentano i minuti dopo l'ora e `ss` sono due cifre che rappresentano i secondi.  Ad esempio, la stringa `18:23:44` rappresenta 23 minuti e 44 secondi dopo le 6 del pomeriggio Il buffer deve essere lungo almeno 9 byte.  
  
 `_wstrtime` è una versione a caratteri estesi di `_strtime`; gli argomenti e i valori restituiti di `_wstrtime` sono stringhe con caratteri estesi.  Queste funzioni si comportano in modo identico in caso contrario. Se `timestr` è un puntatore `NULL` o se `timestr` viene formattato in modo corretto, il gestore non valido di parametro viene richiamato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'eccezione è consentita per continuare, queste funzioni restituiscono un valore NULL e un set `errno` a `EINVAL` se `timestr` è un oggetto NULL o un set `errno` a `ERANGE` se `timestr` è formattato in modo non corretto.  
  
 In C\+\+, queste funzioni presentano overload dei modelli che richiamano le relative controparti sicure e più recenti.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tstrtime`|`_strtime`|`_strtime`|`_wstrtime`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_strtime`|\<time.h\>|  
|`_wstrtime`|\<time.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_strtime.c  
// compile with: /W3  
  
#include <time.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char tbuffer [9];  
   _strtime( tbuffer ); // C4996  
   // Note: _strtime is deprecated; consider using _strtime_s instead  
   printf( "The current time is %s \n", tbuffer );  
}  
```  
  
  **L'ora corrente è 14:21:44**   
## Equivalente .NET Framework  
  
-   [System::DateTime::ToLongDateString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongdatestring.aspx)  
  
-   [System::DateTime::ToLongTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongtimestring.aspx)  
  
-   [System::DateTime::ToShortDateString](https://msdn.microsoft.com/en-us/library/system.datetime.toshortdatestring.aspx)  
  
-   [System::DateTime::ToShortTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.toshorttimestring.aspx)  
  
-   [System::DateTime::ToString](https://msdn.microsoft.com/en-us/library/system.datetime.tostring.aspx)  
  
## Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [asctime, \_wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [ctime, \_ctime32, \_ctime64, \_wctime, \_wctime32, \_wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [gmtime, \_gmtime32, \_gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime, \_localtime32, \_localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [mktime, \_mktime32, \_mktime64](../../c-runtime-library/reference/mktime-mktime32-mktime64.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [\_tzset](../../c-runtime-library/reference/tzset.md)