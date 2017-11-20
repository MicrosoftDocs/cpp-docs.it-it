---
title: _strnset_s, _strnset_s_l, _wcsnset_s, _wcsnset_s_l, _mbsnset_s, _mbsnset_s_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _mbsnset_s_l
- _strnset_s
- _mbsnset_s
- _strnset_s_l
- _wcsnset_s_l
- _wcsnset_s
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
- api-ms-win-crt-multibyte-l1-1-0.dll
- api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _mbsnset_s_l
- wcsnset_s
- _tcsnset_s_l
- _wcsnset_s
- _mbsnset_s
- _wcsnset_s_l
- _strnset_s_l
- strnset_s_l
- _tcsnset_s
- _strnset_s
- strnset_s
- mbsnset_s_l
- mbsnset_s
- wcsnset_s_l
dev_langs: C++
helpviewer_keywords:
- tcsnset_s function
- mbsnset_s_l function
- initializing characters
- wcsnset_s function
- mbsnset_s function
- _tcsnset_s_l function
- _strnset_s_l function
- _mbsnset_s function
- strnset_s_l function
- _tcsnset_s function
- _strnset_s function
- tcsnset_s_l function
- _mbsnset_s_l function
- strnset_s function
- _wcsnset_s function
ms.assetid: 9cf1b321-b5cb-4469-b285-4c07cfbd8813
caps.latest.revision: "27"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 51e28035d5444f7c7b653411c7b28429704f120f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="strnsets-strnsetsl-wcsnsets-wcsnsetsl-mbsnsets-mbsnsetsl"></a>_strnset_s, _strnset_s_l, _wcsnset_s, _wcsnset_s_l, _mbsnset_s, _mbsnset_s_l
Inizializza i caratteri di una stringa sul carattere specificato. Queste versioni di [_strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l](../../c-runtime-library/reference/strnset-strnset-l-wcsnset-wcsnset-l-mbsnset-mbsnset-l.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
> [!IMPORTANT]
>  `_mbsnset_s` e `_mbsnset_s_l` non possono essere usati nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t _strnset_s(  
   char *str,  
   size_t numberOfElements,  
   int c,  
   size_t count   
);  
errno_t _strnset_s_l(  
   char *str,  
   size_t numberOfElements,  
   int c,  
   size_t count,  
   locale_t locale  
);  
errno_t _wcsnset_s(  
   wchar_t *str,  
   size_t numberOfElements,  
   wchar_t c,  
   size_t count   
);  
errno_t _wcsnset_s_l(  
   wchar_t *str,  
   size_t numberOfElements,  
   wchar_t c,  
   size_t count,  
   _locale_t locale  
);  
errno_t _mbsnset_s(  
   unsigned char *str,  
   size_t numberOfElements,  
   unsigned int c,  
   size_t count   
);  
errno_t _mbsnset_s_l(  
   unsigned char *str,  
   size_t numberOfElements,  
   unsigned int c,  
   size_t count,  
   _locale_t locale  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `str`  
 Stringa da modificare.  
  
 `numberOfElements`  
 Dimensioni del buffer di `str`.  
  
 `c`  
 Impostazione del carattere.  
  
 `count`  
 Numero dei caratteri da impostare.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Zero in caso di esito positivo e un codice di errore in caso contrario.  
  
 Queste funzioni convalidano i rispettivi argomenti. Se `str` non è una stringa con terminazione Null valida o l'argomento size è minore o uguale a 0, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono un codice di errore e impostano `errno` su tale codice di errore. Il codice di errore predefinito è `EINVAL` se non si applica un valore più specifico.  
  
## <a name="remarks"></a>Note  
 Queste funzioni impostano al massimo i primi `count` caratteri di `str` su `c`. Se `count` è maggiore delle dimensioni di `str`, vengono usate le dimensioni di `str` invece di `count`. Si verifica un errore se `count` è maggiore di `numberOfElements` ed entrambi questi parametri sono maggiori delle dimensioni di `str`.  
  
 `_wcsnset_s` e `_mbsnset_s` sono le versioni a caratteri wide e a caratteri multibyte di `_strnset_s`. L'argomento stringa di `_wcsnset_s` è una versione a caratteri wide. L'argomento di `_mbsnset_s` è una stringa di caratteri multibyte. A parte ciò, queste tre funzioni si comportano in modo identico.  
  
 La configurazione dell'impostazione della categoria `LC_CTYPE` delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). Le versioni di queste funzioni senza il suffisso `_l` usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso `_l` sono identiche ma usano il parametro passato relativo alle impostazioni locali. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Le versioni di debug di queste funzioni riempiono innanzitutto il buffer con 0xFD. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](../../c-runtime-library/reference/crtsetdebugfillthreshold.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcsnset_s`|`_strnset_s`|`_mbsnbset_s`|`_wcsnset_s`|  
|`_tcsnset_s_l`|`_strnset_s_l`|`_mbsnbset_s_l`|`_wcsnset_s_l`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_strnset_s`|\<string.h>|  
|`_strnset_s_l`|\<tchar.h>|  
|`_wcsnset_s`|\<string.h> o \<wchar.h>|  
|`_wcsnset_s_l`|\<tchar.h>|  
|`_mbsnset_s`, `_mbsnset_s_l`|\<mbstring.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_strnset_s.c  
#include <string.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char string[15] = "This is a test";  
   /* Set not more than 4 characters of string to be *'s */  
   printf( "Before: %s\n", string );  
   _strnset_s( string, sizeof(string), '*', 4 );  
   printf( "After:  %s\n", string );  
}  
```  
  
```Output  
Before: This is a test  
After:  **** is a test  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [strcat, wcscat, _mbscat](../../c-runtime-library/reference/strcat-wcscat-mbscat.md)   
 [strcmp, wcscmp, _mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [strcpy, wcscpy, _mbscpy](../../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)   
 [_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](../../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)