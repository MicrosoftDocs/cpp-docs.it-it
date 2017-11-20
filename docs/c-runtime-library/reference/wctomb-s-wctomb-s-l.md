---
title: wctomb_s, _wctomb_s_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _wctomb_s_l
- wctomb_s
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
- wctomb_s
- _wctomb_s_l
dev_langs: C++
helpviewer_keywords:
- wctomb_s function
- wctomb_s_l function
- string conversion, wide characters
- wide characters, converting
- _wctomb_s_l function
- characters, converting
- string conversion, multibyte character strings
ms.assetid: 7e94a888-deed-4dbd-b5e9-d4a0455538b8
caps.latest.revision: "18"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: c44e5773920d42c9b37e24a11b015adccc8e1be8
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="wctombs-wctombsl"></a>wctomb_s, _wctomb_s_l
Converte un carattere wide nel carattere multibyte corrispondente. Questa è una versione di [wctomb, _wctomb_l](../../c-runtime-library/reference/wctomb-wctomb-l.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t wctomb_s(  
   int *pRetValue,  
   char *mbchar,  
   size_t sizeInBytes,  
   wchar_t wchar   
);  
errno_t _wctomb_s_l(  
   int *pRetValue,  
   char *mbchar,  
   size_t sizeInBytes,  
   wchar_t wchar,  
   _locale_t locale  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `pRetValue`  
 Numero di byte o un codice che indica il risultato.  
  
 [out] `mbchar`  
 Indirizzo di un carattere multibyte.  
  
 [in] `sizeInBytes`  
 Dimensioni del buffer `mbchar`.  
  
 [in] `wchar`  
 Carattere wide.  
  
 [in] `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Zero in caso di esito positivo, un codice di errore in caso di esito negativo.  
  
 Condizioni di errore  
  
|`mbchar`|`sizeInBytes`|Valore restituito|`pRetValue`|  
|--------------|-------------------|------------------|-----------------|  
|`NULL`|>0|`EINVAL`|non modificato|  
|qualsiasi|>`INT_MAX`|`EINVAL`|non modificato|  
|any|troppo piccolo|`EINVAL`|non modificato|  
  
 Se si verifica una delle condizioni di errore precedenti, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `wctomb` restituisce `EINVAL` e imposta `errno` su `EINVAL`.  
  
## <a name="remarks"></a>Note  
 La funzione `wctomb_s` converte l'argomento `wchar` nel carattere multibyte corrispondente e archivia il risultato in `mbchar`. È possibile chiamare la funzione da qualsiasi punto in un qualsiasi programma.  
  
 Se `wctomb_s` converte il carattere wide in un carattere multibyte, inserisce il numero di byte (che non è mai maggiore di `MB_CUR_MAX`) nel caratteri wide nel valore intero a cui punta `pRetValue`. Se `wchar` è il carattere Null wide (L'\0'), `wctomb_s` riempie `pRetValue` di 1. Se il puntatore di destinazione `mbchar` è NULL, `wctomb_s` inserisce 0 in `pRetValue`. Se la conversione non è possibile che in impostazioni locali correnti, `wctomb_s` Inserisce -1 in `pRetValue`.  
  
 `wctomb_s` usa le impostazioni locali correnti per qualsiasi informazione dipendente dalle impostazioni locali. La funzione `_wctomb_s_l` è identica, ma usa le impostazioni locali passate. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`wctomb_s`|\<stdlib.h>|  
|`_wctomb_s_l`|\<stdlib.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Questo programma illustra il comportamento della funzione `wctomb`.  
  
```  
// crt_wctomb_s.cpp  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{  
    int i;  
    wchar_t wc = L'a';  
    char *pmb = (char *)malloc( MB_CUR_MAX );  
  
    printf_s( "Convert a wide character:\n" );  
    wctomb_s( &i, pmb, MB_CUR_MAX, wc );  
    printf_s( "   Characters converted: %u\n", i );  
    printf_s( "   Multibyte character: %.1s\n\n", pmb );  
}  
```  
  
```Output  
Convert a wide character:  
   Characters converted: 1  
   Multibyte character: a  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [_mbclen, mblen, _mblen_l](../../c-runtime-library/reference/mbclen-mblen-mblen-l.md)   
 [mbstowcs, _mbstowcs_l](../../c-runtime-library/reference/mbstowcs-mbstowcs-l.md)   
 [mbtowc, _mbtowc_l](../../c-runtime-library/reference/mbtowc-mbtowc-l.md)   
 [wcstombs, _wcstombs_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md)   
 [WideCharToMultiByte](http://msdn.microsoft.com/library/windows/desktop/dd374130)