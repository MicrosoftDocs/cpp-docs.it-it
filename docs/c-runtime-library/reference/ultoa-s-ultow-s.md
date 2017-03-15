---
title: "_ultoa_s, _ultow_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_ultow_s"
  - "_ultoa_s"
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
  - "api-ms-win-crt-convert-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_ultow_s"
  - "ultoa_s"
  - "ultow_s"
  - "_ultoa_s"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ultoa_s (funzione)"
  - "_ultow_s (funzione)"
  - "conversione di integer"
  - "conversione di numeri, in stringhe"
  - "Integer, conversione"
  - "ultoa_s (funzione)"
  - "ultow_s (funzione)"
ms.assetid: 606ce905-6752-46ac-a15a-bdc22920e1d4
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# _ultoa_s, _ultow_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte un intero long senza segno in una stringa.  Queste sono versioni di [\_ultoa, \_ultow](../../c-runtime-library/reference/ultoa-ultow.md) con i miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t _ultoa_s(  
    unsigned long value,  
    char *str,  
    size_t sizeOfstr,  
    int radix   
);  
errno_t _ultow_s(  
    unsigned long value,  
    wchar_t *str,  
    size_t sizeOfstr,  
    int radix   
);  
template <size_t size>  
errno_t _ultoa_s(  
    unsigned long value,  
    char (&str)[size],  
    int radix   
); // C++ only  
template <size_t size>  
errno_t _ultow_s(  
    unsigned long value,  
    wchar_t (&str)[size],  
    int radix   
); // C++ only  
```  
  
#### Parametri  
 `value`  
 Numeri da convertire.  
  
 `str`  
 Stringa di risultato.  
  
 `sizeOfstr`  
 La dimensione di `str` in byte per `_ultoa_s` o le parole per `_ultow_s`.  
  
 `radix`  
 Base di `value`.  
  
## Valore restituito  
 Zero se la funzione in caso di successo o un codice di errore.  
  
## Note  
 La funzione `_ultoa_s` converte le cifre di `value` a una stringa di caratteri con terminazione null e archivia il risultato \(fino a 33 byte\) in `str`.  L'argomento `radix` specifica la base di `value`, che deve essere compreso tra 2 e 36.  `_ultow_s` è una versione a caratteri "wide" di `_ultoa_s`; il secondo argomento di `_ultow_s` è una stringa a caratteri "wide".  
  
 Se `str` è un puntatore a `NULL` o se `sizeOfstr` è minore o uguale a zero, il gestore di parametro non valido viene invocato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se all'esecuzione è consentito continuare, queste funzioni restituiscono \-1 e impostato `errno` su `EINVAL` o se `value` o `str` sono fuori dall'intervallo di un long integer, queste funzioni restituiranno un \-1 ed imposteranno `errno` a `ERANGE`.  
  
 In C\+\+ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente \(eliminando la necessità di specificare un argomento di dimensione\) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_ultot_s`|`_ultoa_s`|`_ultoa_s`|`_ultow_s`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_ultoa_s`|\<stdlib.h\>|  
|`_ultow_s`|\<stdlib.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Equivalente .NET Framework  
 [System::Convert::ToString](https://msdn.microsoft.com/en-us/library/system.convert.tostring.aspx)  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [\_ultoa, \_ultow](../../c-runtime-library/reference/ultoa-ultow.md)   
 [\_ltoa, \_ltow](../../c-runtime-library/reference/ltoa-ltow.md)   
 [\_ltoa\_s, \_ltow\_s](../../c-runtime-library/reference/ltoa-s-ltow-s.md)   
 [\_ltoa\_s, \_ltow\_s](../../c-runtime-library/reference/ltoa-s-ltow-s.md)