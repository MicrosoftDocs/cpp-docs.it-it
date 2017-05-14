---
title: _CrtSetDebugFillThreshold | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _CrtSetDebugFillThreshold
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
apitype: DLLExport
f1_keywords:
- _CrtSetDebugFillThreshold
- CrtSetDebugFillThreshold
dev_langs:
- C++
helpviewer_keywords:
- debug, buffer-filling behavior
- CrtSetDebugFillThreshold function
- _CrtSetDebugFillThreshold function
- buffer-filling behavior
- 0xFD
ms.assetid: 6cb360e8-56ae-4248-b17f-e28aee3e0ed7
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 6d200480df1ff06afbb2b167ca62515fbf406435
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="crtsetdebugfillthreshold"></a>_CrtSetDebugFillThreshold
Recupera o modifica la soglia controllando il comportamento di riempimento del buffer nelle funzioni di debug.  
  
## <a name="syntax"></a>Sintassi  
  
```  
size_t _CrtSetDebugFillThreshold(  
   size_t _NewThreshold  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `newThreshold`  
 Nuova soglia.  
  
## <a name="return-value"></a>Valore restituito  
 La soglia precedente.  
  
## <a name="remarks"></a>Note  
 Le versioni di debug di alcune funzioni CRT con sicurezza avanzata riempiono il buffer passato con un carattere speciale (0xFE). Ciò consente di individuare i casi in cui la dimensione errata è stata passata alla funzione. Sfortunatamente, questo riduce anche le prestazioni. Per migliorare le prestazioni, utilizzare `_CrtSetDebugFillThreshold` per disabilitare il riempimento del buffer per i buffer più grandi della soglia. Una soglia di 0 lo disabiliterà per tutti i buffer.  
  
 La soglia predefinita è `SIZE_T_MAX`.  
  
 Segue un elenco delle funzioni interessate.  
  
-   [strcpy_s, wcscpy_s, _mbscpy_s](../../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md)  
  
-   [strncpy_s, _strncpy_s_l, wcsncpy_s, _wcsncpy_s_l, _mbsncpy_s, _mbsncpy_s_l](../../c-runtime-library/reference/strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md)  
  
-   [_mbsnbcpy_s, _mbsnbcpy_s_l](../../c-runtime-library/reference/mbsnbcpy-s-mbsnbcpy-s-l.md)  
  
-   [strcat_s, wcscat_s, _mbscat_s](../../c-runtime-library/reference/strcat-s-wcscat-s-mbscat-s.md)  
  
-   [strncat_s, _strncat_s_l, wcsncat_s, _wcsncat_s_l, _mbsncat_s, _mbsncat_s_l](../../c-runtime-library/reference/strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md)  
  
-   [_mbsnbcat_s, _mbsnbcat_s_l](../../c-runtime-library/reference/mbsnbcat-s-mbsnbcat-s-l.md)  
  
-   [_strset_s, _strset_s_l, _wcsset_s, _wcsset_s_l, _mbsset_s, _mbsset_s_l](../../c-runtime-library/reference/strset-s-strset-s-l-wcsset-s-wcsset-s-l-mbsset-s-mbsset-s-l.md)  
  
-   [_strnset_s, _strnset_s_l, _wcsnset_s, _wcsnset_s_l, _mbsnset_s, _mbsnset_s_l](../../c-runtime-library/reference/strnset-s-strnset-s-l-wcsnset-s-wcsnset-s-l-mbsnset-s-mbsnset-s-l.md)  
  
-   [_mbsnbset_s, _mbsnbset_s_l](../../c-runtime-library/reference/mbsnbset-s-mbsnbset-s-l.md)  
  
-   [_makepath_s, _wmakepath_s](../../c-runtime-library/reference/makepath-s-wmakepath-s.md)  
  
-   [_splitpath_s, _wsplitpath_s](../../c-runtime-library/reference/splitpath-s-wsplitpath-s.md)  
  
-   [_strlwr_s, _strlwr_s_l, _mbslwr_s, _mbslwr_s_l, _wcslwr_s, _wcslwr_s_l](../../c-runtime-library/reference/strlwr-s-strlwr-s-l-mbslwr-s-mbslwr-s-l-wcslwr-s-wcslwr-s-l.md)  
  
-   [_strupr_s, _strupr_s_l, _mbsupr_s, _mbsupr_s_l, _wcsupr_s, _wcsupr_s_l](../../c-runtime-library/reference/strupr-s-strupr-s-l-mbsupr-s-mbsupr-s-l-wcsupr-s-wcsupr-s-l.md)  
  
-   [strerror_s, _strerror_s, _wcserror_s, \__wcserror_s](../../c-runtime-library/reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md)  
  
-   [_itoa_s, _i64toa_s, _ui64toa_s, _itow_s, _i64tow_s, _ui64tow_s](../../c-runtime-library/reference/itoa-s-i64toa-s-ui64toa-s-itow-s-i64tow-s-ui64tow-s.md)  
  
-   [_ecvt_s](../../c-runtime-library/reference/ecvt-s.md)  
  
-   [_fcvt_s](../../c-runtime-library/reference/fcvt-s.md)  
  
-   [_gcvt_s](../../c-runtime-library/reference/gcvt-s.md)  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_CrtSetDebugFillThreshold`|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
```C  
// crt_crtsetdebugfillthreshold.c  
// compile with: cl /MTd crt_crtsetdebugfillthreshold.c  
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <crtdbg.h>  
  
void Clear( char buff[], size_t size )  
{  
   for( int i=0; i<size; ++i )  
      buff[i] = 0;  
}  
  
void Print( char buff[], size_t size )  
{  
   for( int i=0; i<size; ++i )  
      printf( "%02x  %c\n", (unsigned char)buff[i], buff[i] );  
}  
  
int main( void )  
{  
   char buff[10];  
  
   printf( "With buffer-filling on:\n" );  
   strcpy_s( buff, _countof(buff), "howdy" );  
   Print( buff, _countof(buff) );  
  
   _CrtSetDebugFillThreshold( 0 );  
  
   printf( "With buffer-filling off:\n" );  
   Clear( buff, _countof(buff) );  
   strcpy_s( buff, _countof(buff), "howdy" );  
   Print( buff, _countof(buff) );  
}  
```  
  
```Output  
With buffer-filling on:  
68  h  
6f  o  
77  w  
64  d  
79  y  
00  
fe  ■  
fe  ■  
fe  ■  
fe  ■  
With buffer-filling off:  
68  h  
6f  o  
77  w  
64  d  
79  y  
00  
00  
00  
00  
00  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)
