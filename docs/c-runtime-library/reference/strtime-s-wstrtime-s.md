---
title: "_strtime_s, _wstrtime_s | Microsoft Docs"
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
  - "_wstrtime_s"
  - "_strtime_s"
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
  - "_wstrtime_s"
  - "strtime_s"
  - "wstrtime_s"
  - "_strtime_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_strtime_s (funzione)"
  - "_wstrtime_s (funzione)"
  - "copia di valori temporali nei buffer"
  - "strtime_s (funzione)"
  - "ora, copia"
  - "wstrtime_s (funzione)"
ms.assetid: 42acf013-c334-485d-b610-84c0af8a46ec
caps.latest.revision: 25
caps.handback.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _strtime_s, _wstrtime_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Copiare il tempo corrente in un buffer.  Queste sono versioni di [\_strtime, \_wstrtime](../../c-runtime-library/reference/strtime-wstrtime.md) con i miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t _strtime_s(  
   char *buffer,  
   size_t numberOfElements  
);  
errno_t _wstrtime_s(  
   wchar_t *buffer,  
   size_t numberOfElements  
);  
template <size_t size>  
errno_t _strtime_s(  
   char (&buffer)[size]  
); // C++ only  
template <size_t size>  
errno_t _wstrtime_s(  
   wchar_t (&buffer)[size]  
); // C++ only  
```  
  
#### Parametri  
 \[out\] `buffer`  
 Un buffer, lungo almeno 10 byte, in cui viene scritta l'ora.  
  
 \[in\] `numberOfElements`  
 Dimensione del buffer.  
  
## Valore restituito  
 Zero se ha esito positivo.  
  
 Se si verifica una condizione di errore, viene richiamato il gestore del parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Il valore restituito è un codice di errore in presenza di un fallimento.  I codici di errore vengono definiti in ERRNO.H; vedere la tabella riportata di seguito per gli esatti errori generati da questa funzione.  Per ulteriori informazioni sui codici di errore, consultare [costanti di errno](../../c-runtime-library/errno-constants.md).  
  
### Condizioni di errore  
  
|`buffer`|`numberOfElements`|Restituzione|Contenuto di `buffer`.|  
|--------------|------------------------|------------------|----------------------------|  
|`NULL`|\(qualsiasi\)|`EINVAL`|Non modificato|  
|Non `NULL` \(che punta a un buffer valido\)|0|`EINVAL`|Non modificato|  
|Non `NULL` \(che punta a un buffer valido\)|0 \< dimensione \< 9|`EINVAL`|Stringa vuota.|  
|Non `NULL` \(che punta a un buffer valido\)|Dimensione \> 9|0|Ora corrente formattata come specificato nei commenti|  
  
## Problemi relativi alla sicurezza  
 Passando un valore non null al buffer si avrà una violazione di accesso se il parametro `numberOfElements` è maggiore di 9.  
  
 Passare un valore per `numberOfElements` di dimensione maggiore della dimensione effettiva del buffer provocherà un sovraccarico del buffer.  
  
## Note  
 Queste funzioni forniscono versioni più sicure di `_strtime` e di `_wstrtime`.  La funzione di `_strtime_s` copia l'ora locale corrente nel buffer puntato da `timestr`*.* Il tempo viene formattato come `hh:mm:ss` in cui `hh` è composto da due cifre che rappresentano l'ora in notazione di 24 ore, `mm` sono due cifre che rappresentano i minuti dopo l'ora e `ss` sono due cifre che rappresentano i secondi.  Ad esempio, la stringa `18:23:44` rappresenta 23 minuti e 44 secondi dopo le 6 del pomeriggio Il buffer deve avere almeno di 9 byte di lunghezza; la dimensione effettiva è specificata dal secondo parametro.  
  
 `_wstrtime` è una versione a caratteri estesi di `_strtime`; gli argomenti e i valori restituiti di `_wstrtime` sono stringhe con caratteri estesi.  Altrimenti queste funzioni si comportano in modo identico.  
  
 In C\+\+ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente \(eliminando la necessità di specificare un argomento di dimensione\) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine a Testo generico:  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tstrtime_s`|`_strtime_s`|`_strtime_s`|`_wstrtime_s`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_strtime_s`|\<time.h\>|  
|`_wstrtime_s`|\<time.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// strtime_s.c  
  
#include <time.h>  
#include <stdio.h>  
  
int main()  
{  
    char tmpbuf[9];  
    errno_t err;  
  
    // Set time zone from TZ environment variable. If TZ is not set,  
    // the operating system is queried to obtain the default value   
    // for the variable.   
    //  
    _tzset();  
  
    // Display operating system-style date and time.   
    err = _strtime_s( tmpbuf, 9 );  
    if (err)  
    {  
       printf("_strdate_s failed due to an invalid argument.");  
      exit(1);  
    }  
    printf( "OS time:\t\t\t\t%s\n", tmpbuf );  
    err = _strdate_s( tmpbuf, 9 );  
    if (err)  
    {  
       printf("_strdate_s failed due to an invalid argument.");  
       exit(1);  
    }  
    printf( "OS date:\t\t\t\t%s\n", tmpbuf );  
  
}  
```  
  
  **OS time:            14:37:49**  
**OS date:		04\/25\/03**   
## Equivalente .NET Framework  
  
-   [System::DateTime::ToLongDateString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongdatestring.aspx)  
  
-   [System::DateTime::ToLongTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongtimestring.aspx)  
  
-   [System::DateTime::ToShortDateString](https://msdn.microsoft.com/en-us/library/system.datetime.toshortdatestring.aspx)  
  
-   [System::DateTime::ToShortTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.toshorttimestring.aspx)  
  
-   [System::DateTime::ToString](https://msdn.microsoft.com/en-us/library/system.datetime.tostring.aspx)  
  
## Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [asctime\_s, \_wasctime\_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md)   
 [ctime\_s, \_ctime32\_s, \_ctime64\_s, \_wctime\_s, \_wctime32\_s, \_wctime64\_s](../../c-runtime-library/reference/ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md)   
 [gmtime\_s, \_gmtime32\_s, \_gmtime64\_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)   
 [localtime\_s, \_localtime32\_s, \_localtime64\_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)   
 [mktime, \_mktime32, \_mktime64](../../c-runtime-library/reference/mktime-mktime32-mktime64.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [\_tzset](../../c-runtime-library/reference/tzset.md)