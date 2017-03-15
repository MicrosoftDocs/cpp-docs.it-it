---
title: "_itoa, _i64toa, _ui64toa, _itow, _i64tow, _ui64tow | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_itow"
  - "_i64tow"
  - "_itoa"
  - "_i64toa"
  - "_ui64toa"
  - "_ui64tow"
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
  - "_i64tow"
  - "ui64toa"
  - "ui64tow"
  - "itot"
  - "_itot"
  - "_i64toa"
  - "_itoa"
  - "_itow"
  - "_ui64tow"
  - "i64toa"
  - "i64tow"
  - "itow"
  - "_ui64toa"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_i64toa (funzione)"
  - "_i64tow (funzione)"
  - "_itoa (funzione)"
  - "_itot (funzione)"
  - "_itow (funzione)"
  - "_ui64toa (funzione)"
  - "_ui64tow (funzione)"
  - "conversione di integer"
  - "conversione di numeri, in stringhe"
  - "i64toa (funzione)"
  - "i64tow (funzione)"
  - "Integer, conversione"
  - "itoa (funzione)"
  - "itot (funzione)"
  - "itow (funzione)"
  - "ui64toa (funzione)"
  - "ui64tow (funzione)"
ms.assetid: 46592a00-77bb-4e73-98c0-bf629d96cea6
caps.latest.revision: 25
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 25
---
# _itoa, _i64toa, _ui64toa, _itow, _i64tow, _ui64tow
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte un intero in una stringa.  Sono disponibili versioni più sicure di queste funzioni; vedere [\_itoa\_s, \_i64toa\_s, \_ui64toa\_s, \_itow\_s, \_i64tow\_s, \_ui64tow\_s](../../c-runtime-library/reference/itoa-s-i64toa-s-ui64toa-s-itow-s-i64tow-s-ui64tow-s.md).  
  
## Sintassi  
  
```  
char *_itoa(  
   int value,  
   char *str,  
   int radix   
);  
char *_i64toa(  
   __int64 value,  
   char *str,  
   int radix   
);  
char * _ui64toa(  
   unsigned _int64 value,  
   char *str,  
   int radix   
);  
wchar_t * _itow(  
   int value,  
   wchar_t *str,  
   int radix   
);  
wchar_t * _i64tow(  
   __int64 value,  
   wchar_t *str,  
   int radix   
);  
wchar_t * _ui64tow(  
   unsigned __int64 value,  
   wchar_t *str,  
   int radix   
);  
template <size_t size>  
char *_itoa(  
   int value,  
   char (&str)[size],  
   int radix   
); // C++ only  
template <size_t size>  
char *_i64toa(  
   __int64 value,  
   char (&str)[size],  
   int radix   
); // C++ only  
template <size_t size>  
char * _ui64toa(  
   unsigned _int64 value,  
   char (&str)[size],  
   int radix   
); // C++ only  
template <size_t size>  
wchar_t * _itow(  
   int value,  
   wchar_t (&str)[size],  
   int radix   
); // C++ only  
template <size_t size>  
wchar_t * _i64tow(  
   __int64 value,  
   wchar_t (&str)[size],  
   int radix   
); // C++ only  
template <size_t size>  
wchar_t * _ui64tow(  
   unsigned __int64 value,  
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
 Base di `value`; il quale deve essere compreso tra 2 e 36.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce un puntatore a `str`.  Nessun ritorno di errore.  
  
## Note  
 Le funzioni `_itoa`, `_i64toa` e `_ui64toa` convertono le cifre dell'argomento specificato `value` in una stringa di caratteri con terminazione null e in archivi il risultato \(fino a 33 caratteri per `_itoa` e 65 per `_i64toa` e `_ui64toa`\) in `str`.  Se `radix` è uguale a 10 e `value` è negativo, il primo carattere della stringa memorizzata è il segno meno \( `–` \).  `_itow`, `_i64tow` e `_ui64tow` sono versioni a caratteri estesi rispettivamente di `_itoa` `_i64toa` e `_ui64toa`.  
  
> [!IMPORTANT]
>  Per evitare sovraccarichi del buffer, assicurarsi che il buffer `str` sia sufficientemente grande da contenere le cifre convertite più il carattere null finale e un carattere di segno.  
  
 In C\+\+, queste funzioni presentano overload dei modelli che richiamano le relative controparti sicure e più recenti.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_itot`|`_itoa`|`_itoa`|`_itow`|  
|`_i64tot`|`_i64toa`|`_i64toa`|`_i64tow`|  
|`_ui64tot`|`_ui64toa`|`_ui64toa`|`_ui64tow`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_itoa`|\<stdlib.h\>|  
|`_i64toa`|\<stdlib.h\>|  
|`_ui64toa`|\<stdlib.h\>|  
|`_itow`|\<stdlib.h\>|  
|`_i64tow`|\<stdlib.h\>|  
|`_ui64tow`|\<stdlib.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_itoa.c  
// compile with: /W3  
// This program makes use of the _itoa functions  
// in various examples.  
  
#include <string.h>  
#include <stdlib.h>  
  
int main( void )  
{  
   char buffer[65];  
   int r;  
   for( r=10; r>=2; --r )  
   {  
     _itoa( -1, buffer, r ); // C4996  
     // Note: _itoa is deprecated; consider using _itoa_s instead  
     printf( "base %d: %s (%d chars)\n", r, buffer, strnlen(buffer, _countof(buffer)) );  
   }  
   printf( "\n" );  
   for( r=10; r>=2; --r )  
   {  
     _i64toa( -1L, buffer, r ); // C4996  
     // Note: _i64toa is deprecated; consider using _i64toa_s  
     printf( "base %d: %s (%d chars)\n", r, buffer, strnlen(buffer, _countof(buffer)) );  
   }  
   printf( "\n" );  
   for( r=10; r>=2; --r )  
   {  
     _ui64toa( 0xffffffffffffffffL, buffer, r ); // C4996  
     // Note: _ui64toa is deprecated; consider using _ui64toa_s  
     printf( "base %d: %s (%d chars)\n", r, buffer, strnlen(buffer, _countof(buffer)) );  
   }  
}  
```  
  
  **base 10: \-1 \(2 caratteri\)**  
**base 9: 12068657453 \(11 caratteri\)**  
**base 8: 37777777777 \(11 caratteri\)**  
**base 7: 211301422353 \(12 caratteri\)**  
**base 6: 1550104015503 \(13 caratteri\)**  
**base 5: 32244002423140 \(14 caratteri\)**  
**base 4: 3333333333333333 \(16 caratteri\)**  
**base 3: 102002022201221111210 \(21 caratteri\)**  
**base 2: 11111111111111111111111111111111 \(32 caratteri\)**  
**base 10: \-1 \(2 caratteri\)**  
**base 9: 145808576354216723756 \(21 caratteri\)**  
**base 8: 1777777777777777777777 \(22 caratteri\)**  
**base 7: 45012021522523134134601 \(23 caratteri\)**  
**base 6: 3520522010102100444244423 \(25 caratteri\)**  
**base 5: 2214220303114400424121122430 \(28 caratteri\)**  
**base 4: 33333333333333333333333333333333 \(32 caratteri\)**  
**base 3: 11112220022122120101211020120210210211220 \(41 caratteri\)**  
**base 2: 1111111111111111111111111111111111111111111111111111111111111111 \(64 caratteri\)**  
**base 10: 18446744073709551615 \(20 caratteri\)**  
**base 9: 145808576354216723756 \(21 caratteri\)**  
**base 8: 1777777777777777777777 \(22 caratteri\)**  
**base 7: 45012021522523134134601 \(23 caratteri\)**  
**base 6: 3520522010102100444244423 \(25 caratteri\)**  
**base 5: 2214220303114400424121122430 \(28 caratteri\)**  
**base 4: 33333333333333333333333333333333 \(32 caratteri\)**  
**base 3: 11112220022122120101211020120210210211220 \(41 caratteri\)**  
**base 2: 1111111111111111111111111111111111111111111111111111111111111111 \(64 caratteri\)**   
## Equivalente .NET Framework  
 [System::Convert::ToString](https://msdn.microsoft.com/en-us/library/system.convert.tostring.aspx)  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [\_ltoa, \_ltow](../../c-runtime-library/reference/ltoa-ltow.md)   
 [\_ltoa\_s, \_ltow\_s](../../c-runtime-library/reference/ltoa-s-ltow-s.md)   
 [\_ultoa, \_ultow](../../c-runtime-library/reference/ultoa-ultow.md)   
 [\_ultoa\_s, \_ultow\_s](../../c-runtime-library/reference/ultoa-s-ultow-s.md)