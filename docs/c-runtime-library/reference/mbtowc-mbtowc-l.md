---
title: mbtowc, _mbtowc_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- mbtowc
- _mbtowc_l
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
- api-ms-win-crt-multibyte-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- mbtowc
dev_langs:
- C++
helpviewer_keywords:
- mbtowc function
- _mbtowc_l function
- mbtowc_l function
ms.assetid: dfd1c8a7-e73a-4307-9353-53b70b45d4d1
caps.latest.revision: 16
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
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 40fe628e045d8aa8930560ba8ab88a9e203022e3
ms.lasthandoff: 02/24/2017

---
# <a name="mbtowc-mbtowcl"></a>mbtowc, _mbtowc_l
Converte un carattere multibyte in un carattere wide corrispondente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int mbtowc(  
   wchar_t *wchar,  
   const char *mbchar,  
   size_t count   
);  
int _mbtowc_l(  
   wchar_t *wchar,  
   const char *mbchar,  
   size_t count,  
   _locale_t locale  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *wchar*  
 Indirizzo di un carattere wide (tipo `wchar_t`).  
  
 `mbchar`  
 Indirizzo di una sequenza di byte (carattere multibyte).  
  
 *count*  
 Numero di byte da controllare.  
  
 *locale*  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Se **mbchar** non è **NULL** e se l'oggetto a cui punta `mbchar` rappresenta un carattere multibyte valido, `mbtowc` restituisce la lunghezza in byte del carattere multibyte. Se `mbchar` è **NULL** o l'oggetto a cui punta è un carattere Null wide (L'\0'), la funzione restituisce 0. Se l'oggetto a cui punta `mbchar` non forma un carattere multibyte valido entro i primi *count* caratteri, restituisce -1.  
  
## <a name="remarks"></a>Note  
 La funzione `mbtowc` converte un numero di byte pari a *count* o meno a cui punta `mbchar`, se `mbchar` non è **NULL**, in un carattere wide corrispondente. `mbtowc` archivia il carattere wide risultante in *wchar* se *wchar* non è **NULL**. `mbtowc` non esamina più di `MB_CUR_MAX` byte. `mbtowc` usa le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali. La funzione `_mbtowc_l` è identica, ma usa le impostazioni locali passate. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`mbtowc`|\<stdlib.h>|  
|**_mbtowc_l**|\<stdlib.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_mbtowc.c  
/* Illustrates the behavior of the mbtowc function  
 */  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
    int      i;  
    char    *pmbc    = (char *)malloc( sizeof( char ) );  
    wchar_t  wc      = L'a';  
    wchar_t *pwcnull = NULL;  
    wchar_t *pwc     = (wchar_t *)malloc( sizeof( wchar_t ) );  
    printf( "Convert a wide character to multibyte character:\n" );  
    wctomb_s( &i, pmbc, sizeof(char), wc );  
    printf( "  Characters converted: %u\n", i );  
    printf( "  Multibyte character: %x\n\n", *pmbc );  
  
    printf( "Convert multibyte character back to a wide "  
            "character:\n" );  
    i = mbtowc( pwc, pmbc, MB_CUR_MAX );  
    printf( "  Bytes converted: %u\n", i );  
    printf( "  Wide character: %x\n\n", *pwc );  
    printf( "Attempt to convert when target is NULL\n" );  
    printf( "  returns the length of the multibyte character:\n" );  
    i = mbtowc( pwcnull, pmbc, MB_CUR_MAX );  
    printf( "  Length of multibyte character: %u\n\n", i );  
  
    printf( "Attempt to convert a NULL pointer to a" );  
    printf( " wide character:\n" );  
    pmbc = NULL;  
    i = mbtowc( pwc, pmbc, MB_CUR_MAX );  
    printf( "  Bytes converted: %u\n", i );  
}  
```  
  
## <a name="output"></a>Output  
  
```  
Convert a wide character to multibyte character:  
  Characters converted: 1  
  Multibyte character: 61  
  
Convert multibyte character back to a wide character:  
  Bytes converted: 1  
  Wide character: 61  
  
Attempt to convert when target is NULL  
  returns the length of the multibyte character:  
  Length of multibyte character: 1  
  
Attempt to convert a NULL pointer to a wide character:  
  Bytes converted: 0  
```  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [MultiByteToWideChar](http://msdn.microsoft.com/library/windows/desktop/dd319072)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [_mbclen, mblen, _mblen_l](../../c-runtime-library/reference/mbclen-mblen-mblen-l.md)   
 [wcstombs, _wcstombs_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md)   
 [wctomb, _wctomb_l](../../c-runtime-library/reference/wctomb-wctomb-l.md)
