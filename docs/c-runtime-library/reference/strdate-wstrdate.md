---
title: "_strdate, _wstrdate | Microsoft Docs"
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
  - "_strdate"
  - "_wstrdate"
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
  - "_tstrdate"
  - "wstrdate"
  - "_wstrdate"
  - "_strdate"
  - "strdate"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "strdate (funzione)"
  - "date, copia"
  - "tstrdate (funzione)"
  - "_wstrdate (funzione)"
  - "wstrdate (funzione)"
  - "_strdate (funzione)"
  - "_tstrdate (funzione)"
  - "copia di date"
ms.assetid: de8e4097-58f8-42ba-9dcd-cb4d9a9f1696
caps.latest.revision: 26
caps.handback.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _strdate, _wstrdate
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Copiare la data di sistema corrente in un buffer.  Sono disponibili versioni più sicure di queste funzioni. Vedere [\_strdate\_s, \_wstrdate\_s](../../c-runtime-library/reference/strdate-s-wstrdate-s.md).  
  
## Sintassi  
  
```  
char *_strdate(  
   char *datestr   
);  
wchar_t *_wstrdate(  
   wchar_t *datestr   
);  
template <size_t size>  
char *_strdate(  
   char (&datestr)[size]  
); // C++ only  
template <size_t size>  
wchar_t *_wstrdate(  
   wchar_t (&datestr)[size]  
); // C++ only  
```  
  
#### Parametri  
 `datestr`  
 Un puntatore a un buffer che contiene la stringa della data formattata.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce un puntatore alla stringa `datestr` di caratteri risultante.  
  
## Note  
 Sono disponibili versioni più sicure di queste funzioni; vedere [\_strdate\_s, \_wstrdate\_s](../../c-runtime-library/reference/strdate-s-wstrdate-s.md).  Si consiglia di usare le versioni più sicure delle funzioni dove possibile.  
  
 La funzione `_strdate` copia la data di sistema corrente nel buffer puntato da `datestr`, nel formato `mm`\/`dd`\/`yy`, dove `mm` sono le due cifre che rappresentano il mese, `dd` sono le due cifre che rappresentano il giorno e `yy` sono le ultime due cifre dell'anno.  Ad esempio, la stringa `12/05/99` rappresenta il 5 dicembre 1999.  Il buffer deve essere lungo almeno 9 byte.  
  
 Se `datestr` è un `NULL` puntatore null, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce \-1 e imposta `errno` su `EINVAL`.  
  
 `_wstrdate` è una versione a caratteri estesi di `_strdate`; gli argomenti e i valori restituiti di `_wstrdate` sono stringhe con caratteri estesi.  Altrimenti queste funzioni si comportano in modo identico.  
  
 In C\+\+, queste funzioni presentano overload dei modelli che richiamano le relative controparti sicure e più recenti.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tstrdate`|`_strdate`|`_strdate`|`_wstrdate`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_strdate`|\<time.h\>|  
|`_wstrdate`|\<time.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// strdate.c  
// compile with: /W3  
#include <time.h>  
#include <stdio.h>  
int main()  
{  
    char tmpbuf[9];  
  
    // Set time zone from TZ environment variable. If TZ is not set,  
    // the operating system is queried to obtain the default value   
    // for the variable.   
    //  
    _tzset();  
  
    printf( "OS date: %s\n", _strdate(tmpbuf) ); // C4996  
    // Note: _strdate is deprecated; consider using _strdate_s instead  
}  
```  
  
  **OS date: 04\/25\/03**   
## Equivalente .NET Framework  
 [System::DateTime::Parse](https://msdn.microsoft.com/en-us/library/system.datetime.parse.aspx)  
  
## Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [asctime, \_wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [ctime, \_ctime32, \_ctime64, \_wctime, \_wctime32, \_wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [gmtime, \_gmtime32, \_gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime, \_localtime32, \_localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [mktime, \_mktime32, \_mktime64](../../c-runtime-library/reference/mktime-mktime32-mktime64.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [\_tzset](../../c-runtime-library/reference/tzset.md)