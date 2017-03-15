---
title: "_ltoa, _ltow | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_ltoa"
  - "_ltow"
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
  - "ltow"
  - "_ltot"
  - "_ltoa"
  - "_ltow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ltoa (funzione)"
  - "_ltow (funzione)"
  - "conversione di integer"
  - "conversione di numeri, in stringhe"
  - "conversione di long integer in stringa"
  - "ltoa (funzione)"
  - "ltow (funzione)"
ms.assetid: 14036104-2c25-4759-87c0-918ed8521e47
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 17
---
# _ltoa, _ltow
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte un long integer in una stringa.  Più versioni sicure di queste funzioni sono disponibili, vedere [\_ltoa\_s, \_ltow\_s](../../c-runtime-library/reference/ltoa-s-ltow-s.md).  
  
## Sintassi  
  
```  
char *_ltoa(  
   long value,  
   char *str,  
   int radix   
);  
wchar_t *_ltow(  
   long value,  
   wchar_t *str,  
   int radix   
);  
template <size_t size>  
char *_ltoa(  
   long value,  
   char (&str)[size],  
   int radix   
); // C++ only  
template <size_t size>  
wchar_t *_ltow(  
   long value,  
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
 Base di `value`.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce un puntatore a `str`.  Nessun ritorno di errore.  
  
## Note  
 La funzione `_ltoa` converte le cifre di `value` a una stringa di caratteri con terminazione null e archivia il risultato \(fino a 33 byte\) in `str`.  L'argomento `radix` specifica la base di `value`, che deve essere compreso tra 2 e 36.  Se `radix` è uguale a 10 e `value` è negativo, il primo carattere della stringa memorizzata è il segno meno \(–\).  `_ltow` è una versione a caratteri estesi di `_ltoa`; gli argomenti e i valori restituiti di `_ltow` sono stringhe con caratteri estesi.  Ognuna di queste funzioni è specifica di Microsoft.  
  
> [!IMPORTANT]
>  Per evitare sovraccarichi del buffer, assicurarsi che il buffer `str` sia sufficientemente grande da contenere le cifre convertite più il carattere null finale e un carattere di segno.  
  
 In C\+\+, queste funzioni hanno modelli di overload.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine a Testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_ltot`|`_ltoa`|`_ltoa`|`_ltow`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_ltoa`|\<stdlib.h\>|  
|`_ltow`|\<stdlib.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
 Vedere l'esempio per [\_itoa](../../c-runtime-library/reference/itoa-i64toa-ui64toa-itow-i64tow-ui64tow.md).  
  
## Equivalente .NET Framework  
 [System::Convert::ToString](https://msdn.microsoft.com/en-us/library/system.convert.tostring.aspx)  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [\_itoa, \_i64toa, \_ui64toa, \_itow, \_i64tow, \_ui64tow](../../c-runtime-library/reference/itoa-i64toa-ui64toa-itow-i64tow-ui64tow.md)   
 [\_ultoa, \_ultow](../../c-runtime-library/reference/ultoa-ultow.md)