---
title: "_ultoa, _ultow | Microsoft Docs"
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
  - "_ultoa"
  - "_ultow"
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
  - "ultot"
  - "ultow"
  - "_ultoa"
  - "_ultow"
  - "_ultot"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ultoa (funzione)"
  - "_ultot (funzione)"
  - "_ultow (funzione)"
  - "conversione di integer"
  - "conversione di numeri, in stringhe"
  - "Integer, conversione"
  - "ultot (funzione)"
  - "ultow (funzione)"
ms.assetid: 7a472dc4-5652-4513-93c3-3358522c23be
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ultoa, _ultow
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte un intero long senza segno in una stringa.  Sono disponibili versioni più sicure di queste funzioni. Vedere [\_ultoa\_s, \_ultow\_s](../../c-runtime-library/reference/ultoa-s-ultow-s.md).  
  
## Sintassi  
  
```  
char *_ultoa(  
   unsigned long value,  
   char *str,  
   int radix   
);  
wchar_t *_ultow(  
   unsigned long value,  
   wchar_t *str,  
   int radix   
);  
template <size_t size>  
char *_ultoa(  
   unsigned long value,  
   char (&str)[size],  
   int radix   
); // C++ only  
template <size_t size>  
wchar_t *_ultow(  
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
  
 `radix`  
 Base di `value`*.*  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce un puntatore a `str`.  Nessun ritorno di errore.  
  
## Note  
 La funzione `_ultoa` converte `value` a una stringa di caratteri che termina con null e archivia il risultato \(fino a 33 byte\) in `str`.  Non viene effettuata alcuna verifica di presenza di overflow.  `radix` specifica la base di `value`; `radix` deve essere compreso tra 2 e 36.  `_ultow` è una versione a caratteri di tipo "wide" di `_ultoa`.  
  
> [!IMPORTANT]
>  Per evitare sovraccarichi del buffer, assicurarsi che il buffer `str` sia sufficientemente grande da contenere le cifre convertite più il carattere null finale.  
  
 In C\+\+, queste funzioni presentano overload dei modelli che richiamano le relative controparti sicure e più recenti.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_ultot`|`_ultoa`|`_ultoa`|`_ultow`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_ultoa`|\<stdlib.h\>|  
|`_ultow`|\<stdlib.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Vedere l'esempio per [\_itoa](../../c-runtime-library/reference/itoa-i64toa-ui64toa-itow-i64tow-ui64tow.md).  
  
## Equivalente .NET Framework  
 [System::Convert::ToString](https://msdn.microsoft.com/en-us/library/system.convert.tostring.aspx)  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [\_itoa, \_i64toa, \_ui64toa, \_itow, \_i64tow, \_ui64tow](../../c-runtime-library/reference/itoa-i64toa-ui64toa-itow-i64tow-ui64tow.md)