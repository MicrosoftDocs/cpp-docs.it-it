---
title: "_ltoa_s, _ltow_s | Microsoft Docs"
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
  - "_ltoa_s"
  - "_ltow_s"
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
apitype: "DLLExport"
f1_keywords: 
  - "_ltow_s"
  - "_ltoa_s"
  - "ltoa_s"
  - "ltow_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ltoa_s (funzione)"
  - "_ltow_s (funzione)"
  - "conversione di integer"
  - "conversione di numeri, in stringhe"
  - "conversione di long integer in stringa"
  - "ltoa_s (funzione)"
  - "ltow_s (funzione)"
ms.assetid: d7dc61ea-1ccd-412d-b262-555a58647386
caps.latest.revision: 18
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ltoa_s, _ltow_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte un long integer in una stringa.  Queste sono versioni di [\_ltoa, \_ltow](../../c-runtime-library/reference/ltoa-ltow.md) con i miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t _ltoa_s(  
    long value,  
    char *str,  
    size_t sizeOfstr,  
    int radix   
);  
errno_t _ltow_s(  
    long value,  
    wchar_t *str,  
    size_t sizeOfstr,  
    int radix   
);  
template <size_t size>  
errno_t _ltoa_s(  
    long value,  
    char (&str)[size],  
    int radix   
); // C++ only  
template <size_t size>  
errno_t _ltow_s(  
    long value,  
    wchar_t (&str)[size],  
    int radix   
); // C++ only  
```  
  
#### Parametri  
 `value`  
 Numeri da convertire.  
  
 `str`  
 Buffer per la stringa risultato.  
  
 `sizeOfstr`  
 Dimensione di `str` in byte per `_ltoa_s` o le parole per `_ltow_s`.  
  
 `radix`  
 Base di `value`.  
  
## Valore restituito  
 Zero se la funzione in caso di successo o un codice di errore.  
  
## Note  
 La funzione `_ltoa_s` converte le cifre di `value` a una stringa di caratteri con terminazione null e archivia il risultato \(fino a 33 byte\) in `str`.  L'argomento `radix` specifica la base di `value`, che deve essere compreso tra 2 e 36.  Se `radix` è uguale a 10 e `value` è negativo, il primo carattere della stringa memorizzata è il segno meno \(–\).  `_ltow_s` è una versione a caratteri "wide" di `_ltoa_s`; il secondo argomento di `_ltow_s` è una stringa a caratteri "wide".  
  
 Se `str` è un puntatore a `NULL` o `sizeOfstr` è minore o uguale a zero, queste funzioni invocano un gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se all'esecuzione è consentito continuare, queste funzioni restituiscono \-1 e impostato `errno` su `EINVAL` o se `value` o `str` sono fuori dall'intervallo di un long integer, queste funzioni restituiscono un \-1 e impostano `errno` a `ERANGE`.  
  
 In C\+\+ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente \(eliminando la necessità di specificare un argomento di dimensione\) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_ltot_s`|`_ltoa_s`|`_ltoa_s`|`_ltow_s`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_ltoa_s`|\<stdlib.h\>|  
|`_ltow_s`|\<stdlib.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente .NET Framework  
 [System::Convert::ToString](https://msdn.microsoft.com/en-us/library/system.convert.tostring.aspx)  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [\_itoa, \_i64toa, \_ui64toa, \_itow, \_i64tow, \_ui64tow](../../c-runtime-library/reference/itoa-i64toa-ui64toa-itow-i64tow-ui64tow.md)   
 [\_ultoa, \_ultow](../../c-runtime-library/reference/ultoa-ultow.md)   
 [\_ultoa\_s, \_ultow\_s](../../c-runtime-library/reference/ultoa-s-ultow-s.md)