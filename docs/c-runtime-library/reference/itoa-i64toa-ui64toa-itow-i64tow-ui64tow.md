---
title: _itoa, _i64toa, _ui64toa, _itow, _i64tow, _ui64tow | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _itow
- _i64tow
- _itoa
- _i64toa
- _ui64toa
- _ui64tow
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-convert-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _i64tow
- ui64toa
- ui64tow
- itot
- _itot
- _i64toa
- _itoa
- _itow
- _ui64tow
- i64toa
- i64tow
- itow
- _ui64toa
dev_langs:
- C++
helpviewer_keywords:
- _itot function
- ui64toa function
- _ui64toa function
- converting integers
- itot function
- _i64tow function
- _i64toa function
- _itow function
- ui64tow function
- integers, converting
- itoa function
- _ui64tow function
- i64tow function
- itow function
- i64toa function
- converting numbers, to strings
- _itoa function
ms.assetid: 46592a00-77bb-4e73-98c0-bf629d96cea6
caps.latest.revision: ''
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bdfe837630a4f8b36ca57970c6b23d832740f59d
ms.sourcegitcommit: 1d11412c8f5e6ddf4edded89e0ef5097cc89f812
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/27/2018
---
# <a name="itoa-i64toa-ui64toa-itow-i64tow-ui64tow"></a>_itoa, _i64toa, _ui64toa, _itow, _i64tow, _ui64tow
Converte un intero in una stringa. Sono disponibili versioni più sicure di queste funzioni. Vedere [_itoa_s, _i64toa_s, _ui64toa_s, _itow_s, _i64tow_s, _ui64tow_s](../../c-runtime-library/reference/itoa-s-i64toa-s-ui64toa-s-itow-s-i64tow-s-ui64tow-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `value`  
 Numero da convertire.  
  
 `str`  
 Risultato stringa.  
  
 `radix`  
 Base di `value`; che deve essere compreso nell'intervallo 2-36.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste funzioni restituisce un puntatore a `str`. Non vi è restituzione di errori.  
  
## <a name="remarks"></a>Note  
 Le funzioni `_itoa`, `_i64toa` e `_ui64toa` consentono di convertire le cifre dell'argomento `value` specificato in una stringa di caratteri con terminazione Null e di archiviare il risultato (fino a 33 caratteri per `_itoa` e 65 per `_i64toa` e `_ui64toa`) in `str`. Se `radix` è uguale a 10 e `value` è negativo, il primo carattere della stringa archiviata è il segno meno ( `-` ). `_itow`, `_i64tow` e `_ui64tow` sono versioni a caratteri wide rispettivamente di `_itoa`, `_i64toa` e `_ui64toa`.  
  
> [!IMPORTANT]
>  Per evitare sovraccarichi del buffer, verificare che il buffer `str` sia sufficientemente grande da contenere le cifre convertite oltre al carattere Null finale e al carattere del segno.  
  
 In C++ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_itot`|`_itoa`|`_itoa`|`_itow`|  
|`_i64tot`|`_i64toa`|`_i64toa`|`_i64tow`|  
|`_ui64tot`|`_ui64toa`|`_ui64toa`|`_ui64tow`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_itoa`|\<stdlib.h>|  
|`_i64toa`|\<stdlib.h>|  
|`_ui64toa`|\<stdlib.h>|  
|`_itow`|\<stdlib.h>|  
|`_i64tow`|\<stdlib.h>|  
|`_ui64tow`|\<stdlib.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
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
  
```Output  
base 10: -1 (2 chars)  
base 9: 12068657453 (11 chars)  
base 8: 37777777777 (11 chars)  
base 7: 211301422353 (12 chars)  
base 6: 1550104015503 (13 chars)  
base 5: 32244002423140 (14 chars)  
base 4: 3333333333333333 (16 chars)  
base 3: 102002022201221111210 (21 chars)  
base 2: 11111111111111111111111111111111 (32 chars)  
  
base 10: -1 (2 chars)  
base 9: 145808576354216723756 (21 chars)  
base 8: 1777777777777777777777 (22 chars)  
base 7: 45012021522523134134601 (23 chars)  
base 6: 3520522010102100444244423 (25 chars)  
base 5: 2214220303114400424121122430 (28 chars)  
base 4: 33333333333333333333333333333333 (32 chars)  
base 3: 11112220022122120101211020120210210211220 (41 chars)  
base 2: 1111111111111111111111111111111111111111111111111111111111111111 (64 chars)  
  
base 10: 18446744073709551615 (20 chars)  
base 9: 145808576354216723756 (21 chars)  
base 8: 1777777777777777777777 (22 chars)  
base 7: 45012021522523134134601 (23 chars)  
base 6: 3520522010102100444244423 (25 chars)  
base 5: 2214220303114400424121122430 (28 chars)  
base 4: 33333333333333333333333333333333 (32 chars)  
base 3: 11112220022122120101211020120210210211220 (41 chars)  
base 2: 1111111111111111111111111111111111111111111111111111111111111111 (64 chars)  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Data Conversion](../../c-runtime-library/data-conversion.md)  (Conversione dei dati)  
 [_ltoa, _ltow](../../c-runtime-library/reference/ltoa-ltow.md)   
 [_ltoa_s, _ltow_s](../../c-runtime-library/reference/ltoa-s-ltow-s.md)   
 [_ultoa, _ultow](../../c-runtime-library/reference/ultoa-ultow.md)   
 [_ultoa_s, _ultow_s](../../c-runtime-library/reference/ultoa-s-ultow-s.md)