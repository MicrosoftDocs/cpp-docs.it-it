---
title: "ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s | Microsoft Docs"
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
  - "_ctime64_s"
  - "_wctime32_s"
  - "ctime_s"
  - "_wctime64_s"
  - "_ctime32_s"
  - "_wctime_s"
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
  - "ctime64_s"
  - "_ctime32_s"
  - "_tctime32_s"
  - "_ctime64_s"
  - "_wctime_s"
  - "_tctime_s"
  - "_tctime64_s"
  - "ctime_s"
  - "ctime32_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_wctime32_s (funzione)"
  - "ctime64_s (funzione)"
  - "_tctime64_s (funzione)"
  - "_wctime_s (funzione)"
  - "tctime_s (funzione)"
  - "_wctime64_s (funzione)"
  - "ctime_s (funzione)"
  - "ctime32_s (funzione)"
  - "_ctime64_s (funzione)"
  - "tctime64_s (funzione)"
  - "wctime64_s (funzione)"
  - "wctime_s (funzione)"
  - "_tctime_s (funzione)"
  - "tctime32_s (funzione)"
  - "wctime32_s (funzione)"
  - "ora, conversione"
  - "_ctime32_s (funzione)"
  - "_tctime32_s (funzione)"
ms.assetid: 36ac419a-8000-4389-9fd8-d78b747a009b
caps.latest.revision: 27
caps.handback.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Convertire un valore di ora in una stringa e regolare per le impostazioni di fuso orario locale. Queste sono versioni di [ctime, ctime64, wctime, wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md) con miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t ctime_s(   
   char* buffer,  
   size_t numberOfElements,  
   const time_t *time   
);  
errno_t _ctime32_s(   
   char* buffer,  
   size_t numberOfElements,  
   const __time32_t *time   
);  
errno_t _ctime64_s(   
   char* buffer,  
   size_t numberOfElements,  
   const __time64_t *time )  
;  
errno_t _wctime_s(   
   wchar_t* buffer,  
   size_t numberOfElements,  
   const time_t *time   
);  
errno_t _wctime32_s(   
   wchar_t* buffer,  
   size_t numberOfElements,  
   const __time32_t *time   
);  
errno_t _wctime64_s(   
   wchar_t* buffer,  
   size_t numberOfElements,  
   const __time64_t *time   
);  
template <size_t size>  
errno_t _ctime32_s(   
   char (&buffer)[size],  
   const __time32_t *time   
); // C++ only  
template <size_t size>  
errno_t _ctime64_s(   
   char (&buffer)[size],  
   const __time64_t *time  
); // C++ only  
template <size_t size>  
errno_t _wctime32_s(   
   wchar_t (&buffer)[size],  
   const __time32_t *time   
); // C++ only  
template <size_t size>  
errno_t _wctime64_s(   
   wchar_t (&buffer)[size],  
   const __time64_t *time   
); // C++ only  
```  
  
#### Parametri  
 \[out\] `buffer`  
 Deve essere sufficientemente grande da contenere 26 caratteri. Un puntatore al risultato di stringa di caratteri, o `NULL`se:  
  
-   `time` rappresenta una data precedente alla mezzanotte dell'1 gennaio 1970, UTC.  
  
-   Se si utilizza `_ctime32_s` o `_wctime32_s` e `time` rappresenta una data successiva 23:59:59 18 gennaio 2038 UTC.  
  
-   Se si utilizza `_ctime64_s` o `_wctime64_s` e `time` rappresenta una data successiva 23:59:59, 31 dicembre 3000 UTC.  
  
-   Se si utilizza `_ctime_s` o `_wctime_s`, queste funzioni sono wrapper per le funzioni precedenti. Vedere la sezione Osservazioni.  
  
 \[in\] `numberOfElements`  
 Dimensione del buffer.  
  
 \[in\] t`ime`  
 Puntatore al tempo di archiviazione.  
  
## Valore restituito  
 Zero se ha esito positivo. Se si verifica un errore a causa di un parametro non valido, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, viene restituito un codice di errore. Codici di errore sono definiti in ERRNO. H. per un elenco di questi errori, vedere [errno](../../c-runtime-library/errno-constants.md). I codici di errore effettivo generati per ogni condizione di errore vengono visualizzati nella tabella seguente.  
  
## Condizioni di errore  
  
|`buffer`|`numberOfElements`|`time`|Valore restituito|Valore in `buffer`|  
|--------------|------------------------|------------|-----------------------|------------------------|  
|`NULL`|any|any|`EINVAL`|Non modificato|  
|Non `NULL` \(punta alla memoria valida\)|0|any|`EINVAL`|Non modificato|  
|Non `NULL`|0\< size \< 26|any|`EINVAL`|Stringa vuota|  
|Non `NULL`|\>\= 26|NULL|`EINVAL`|Stringa vuota|  
|Non `NULL`|\>\= 26|\< 0|`EINVAL`|Stringa vuota|  
  
## Note  
 Il `ctime_s` funzione converte un valore di ora archiviato come un [time\_t](../../c-runtime-library/standard-types.md) struttura in una stringa di caratteri. Il `time` valore viene in genere ottenuto da una chiamata a [tempo](../../c-runtime-library/reference/time-time32-time64.md), che restituisce il numero di secondi trascorsi dalla mezzanotte \(00: 00:00\), 1 gennaio 1970, ora UTC \(coordinated universal time\). Stringa del valore restituito contiene esattamente 26 caratteri e ha il formato:  
  
```  
Wed Jan 02 02:03:55 1980\n\0  
```  
  
 Viene utilizzato un formato a 24 ore. Tutti i campi hanno una larghezza costante. Il carattere di nuova riga \('\\n'\) e il carattere null \('\\0'\) occupano le ultime due posizioni della stringa.  
  
 La stringa di caratteri convertito anche viene regolata in base alle impostazioni di fuso orario locale. Vedere il `time`, [ftime](../../c-runtime-library/reference/ftime-ftime32-ftime64.md), e [localtime32\_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md) funzioni per informazioni sulla configurazione dell'ora locale e il [tzset](../../c-runtime-library/reference/tzset.md) funzione per informazioni sulla definizione di fuso orario ambiente e variabili globali.  
  
 `_wctime32_s` e `_wctime64_s` sono la versione a caratteri wide di `_ctime32_s` e `_ctime64_s`; restituisce un puntatore alla stringa di caratteri wide. In caso contrario, `_ctime64_s`, `_wctime32_s`, e `_wctime64_s` si comportano in modo identico alle `_ctime32_s`.  
  
 `ctime_s` è una funzione inline che restituisce `_ctime64_s` e `time_t` equivale a `__time64_t`. Se è necessario forzare il compilatore in modo che interpreti `time_t` come il vecchio `time_t` a 32 bit, è possibile definire `_USE_32BIT_TIME_T`. Questo determinerebbe `ctime_s` restituisca `_ctime32_s`. Questa operazione è sconsigliata perché l'applicazione potrebbe non riuscire dopo il 18 gennaio 2038, e non è consentito in piattaforme a 64 bit.  
  
 In C\+\+, l'utilizzo di queste funzioni è semplificato dagli overload dei modelli; gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento di dimensione. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tctime_s`|`ctime_s`|`ctime_s`|`_wctime_s`|  
|`_tctime32_s`|`_ctime32_s`|`_ctime32_s`|`_wctime32_s`|  
|`_tctime64_s`|`_ctime64_s`|`_ctime64_s`|`_wctime64_s`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`ctime_s,`<br /><br /> `_ctime32_s,`<br /><br /> `_ctime64_s`|\<time.h\>|  
|`_wctime_s,`<br /><br /> `_wctime32_s,`<br /><br /> `_wctime64_s`|\<time.h\> o \<wchar.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_wctime_s.c  
/* This program gets the current  
 * time in time_t form and then uses _wctime_s to  
 * display the time in string form.  
 */  
  
#include <time.h>  
#include <stdio.h>  
  
#define SIZE 26  
  
int main( void )  
{  
   time_t ltime;  
   wchar_t buf[SIZE];  
   errno_t err;  
  
   time( &ltime );  
  
   err = _wctime_s( buf, SIZE, &ltime );  
   if (err != 0)  
   {  
      printf("Invalid Arguments for _wctime_s. Error Code: %d\n", err);  
   }  
   wprintf_s( L"The time is %s\n", buf );  
}  
```  
  
## Esempio di output  
  
```  
The time is Fri Apr 25 13:03:39 2003  
```  
  
## Equivalente .NET Framework  
  
-   [System::DateTime::GetDateTimeFormats](https://msdn.microsoft.com/en-us/library/system.datetime.getdatetimeformats.aspx)  
  
-   [System::DateTime::ToString](https://msdn.microsoft.com/en-us/library/system.datetime.tostring.aspx)  
  
-   [System::DateTime::ToLongTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongtimestring.aspx)  
  
-   [System::DateTime::ToShortTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.toshorttimestring.aspx)  
  
## Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [asctime\_s, \_wasctime\_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md)   
 [ctime, \_ctime32, \_ctime64, \_wctime, \_wctime32, \_wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [\_ftime, \_ftime32, \_ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime\_s, \_gmtime32\_s, \_gmtime64\_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)   
 [localtime\_s, \_localtime32\_s, \_localtime64\_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)