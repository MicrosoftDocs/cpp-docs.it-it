---
title: "_strdate_s, _wstrdate_s | Microsoft Docs"
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
  - "_strdate_s"
  - "_wstrdate_s"
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
  - "_strdate_s"
  - "wstrdate_s"
  - "_wstrdate_s"
  - "strdate_s"
  - "_tstrdate_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "date, copia"
  - "tstrdate_s (funzione)"
  - "wstrdate_s (funzione)"
  - "_tstrdate_s (funzione)"
  - "strdate_s (funzione)"
  - "copia di date"
  - "_strdate_s (funzione)"
  - "_wstrdate_s (funzione)"
ms.assetid: d41d8ea9-e5ce-40d4-864e-1ac29b455991
caps.latest.revision: 24
caps.handback.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _strdate_s, _wstrdate_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Copiare la data di sistema corrente in un buffer.  Queste sono versioni di [\_strdate, \_wstrdate](../../c-runtime-library/reference/strdate-wstrdate.md) con miglioramenti di sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t _strdate_s(  
   char *buffer,  
   size_t numberOfElements  
);  
errno_t _wstrdate_s(  
   wchar_t *buffer,  
   size_t numberOfElements  
);  
template <size_t size>  
errno_t _strdate_s(  
   char (&buffer)[size]  
); // C++ only  
template <size_t size>  
errno_t _wstrdate_s(  
   wchar_t (&buffer)[size]  
); // C++ only  
```  
  
#### Parametri  
 \[out\] `buffer`  
 Un puntatore a un buffer che verrà riempito con la stringa della data formattata.  
  
 \[in\] `numberOfElements`  
 Dimensione del buffer.  
  
## Valore restituito  
 Zero se ha esito positivo.  Il valore restituito è un codice di errore in presenza di un fallimento.  I codici di errore vengono definiti in ERRNO.H; vedere la tabella riportata di seguito per gli esatti errori generati da questa funzione.  Per ulteriori informazioni sui codici di errore, vedere [errno](../../c-runtime-library/errno-constants.md).  
  
## Condizioni di errore  
  
|`buffer`|`numberOfElements`|Restituzione|Contenuti di `buffer`.|  
|--------------|------------------------|------------------|----------------------------|  
|`NULL`|\(tutti\)|`EINVAL`|Non modificato|  
|Non `NULL` \(che punta a un buffer valido\)|0|`EINVAL`|Non modificato|  
|Non `NULL` \(che punta a un buffer valido\)|0 \< `numberOfElements` \< 9|`EINVAL`|Stringa vuota.|  
|Non `NULL` \(che punta a un buffer valido\)|`numberOfElements` \>\= 9|0|Data corrente formattata come specificato nei commenti|  
  
## Problemi relativi alla sicurezza  
 Passando un valore non valido `NULL` al buffer si avrà una violazione di accesso se il parametro `numberOfElements` è maggiore di 9.  
  
 Passare i valori di dimensione maggiore della dimensione effettiva di `buffer` provocherà un sovraccarico del buffer.  
  
## Note  
 Queste funzioni forniscono versioni più sicure di `_strdate` e di `_wstrdate`.  La funzione `_strdate_s` copia la data di sistema corrente nel buffer puntato da `buffer`, nel formato `mm`\/`dd`\/`yy`, dove `mm` sono le due cifre che rappresentano il mese, `dd` sono le due cifre che rappresentano il giorno e `yy` sono le ultime due cifre dell'anno.  Ad esempio, la stringa `12/05/99` rappresenta il 5 dicembre 1999.  Il buffer deve essere lungo almeno 9 caratteri.  
  
 `_wstrdate_s` è una versione a caratteri estesi di `_strdate_s`; gli argomenti e i valori restituiti di `_wstrdate_s` sono stringhe con caratteri estesi.  Altrimenti queste funzioni si comportano in modo identico.  
  
 Se `buffer` è un puntatore `NULL`, o se `numberOfElements` è minore di 9 caratteri, il gestore di parametro non valido viene richiamato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se all'esecuzione è consentito continuare, queste funzioni restituiscono \-1 e `errno` viene impostato su `EINVAL` se il buffer è `NULL` o se `numberOfElements` è minore o uguale a 0, o `errno` viene impostato su `ERANGE` se `numberOfElements` è minore di 9.  
  
 In C\+\+ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente \(eliminando la necessità di specificare un argomento di dimensione\) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine a Testo generico:  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tstrdate_s`|`_strdate_s`|`_strdate_s`|`_wstrdate_s`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_strdate`|\<time.h\>|  
|`_wstrdate`|\<time.h\> o \<wchar.h\>|  
|`_strdate_s`|\<time.h\>|  
  
## Esempio  
 Vedere l'esempio relativo a [time](../../c-runtime-library/reference/time-time32-time64.md).  
  
## Equivalente .NET Framework  
 [System::DateTime::Parse](https://msdn.microsoft.com/en-us/library/system.datetime.parse.aspx)  
  
## Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [asctime\_s, \_wasctime\_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md)   
 [ctime\_s, \_ctime32\_s, \_ctime64\_s, \_wctime\_s, \_wctime32\_s, \_wctime64\_s](../../c-runtime-library/reference/ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md)   
 [gmtime\_s, \_gmtime32\_s, \_gmtime64\_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)   
 [localtime\_s, \_localtime32\_s, \_localtime64\_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)   
 [mktime, \_mktime32, \_mktime64](../../c-runtime-library/reference/mktime-mktime32-mktime64.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [\_tzset](../../c-runtime-library/reference/tzset.md)