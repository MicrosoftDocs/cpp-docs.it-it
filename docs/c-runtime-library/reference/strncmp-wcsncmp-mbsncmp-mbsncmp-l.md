---
title: strncmp, wcsncmp, _mbsncmp, _mbsncmp_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- strncmp
- _mbsncmp
- wcsncmp
- _mbsncmp_l
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
- ntdll.dll
- ucrtbase.dll
- api-ms-win-crt-multibyte-l1-1-0.dll
- api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _ftcsnccmp
- _ftcsncmp
- _tcsncmp
- _tcsnccmp
- strncmp
- _mbsncmp
- wcsncmp
dev_langs:
- C++
helpviewer_keywords:
- _tcsnccmp function
- ftcsncmp function
- wcsncmp function
- _ftcsncmp function
- _mbsncmp function
- tcsncmp function
- mbsncmp function
- _mbsncmp_l function
- mbsncmp_l function
- strncmp function
- strings [C++], comparing characters of
- string comparison [C++], strncmp function
- _tcsncmp function
- tcsnccmp function
- ftcsnccmp function
- characters [C++], comparing
- _ftcsnccmp function
ms.assetid: 2fdbf4e6-77da-4b59-9086-488f6066b8af
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a64d7248151287f4f2af38e666db62f9a15d833f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32417353"
---
# <a name="strncmp-wcsncmp-mbsncmp-mbsncmpl"></a>strncmp, wcsncmp, _mbsncmp, _mbsncmp_l

Esegue il confronto del numero specificato di caratteri delle due stringhe.

> [!IMPORTANT]
> **mbsncmp** e **mbsncmp_l** non può essere usata nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int strncmp(
   const char *string1,
   const char *string2,
   size_t count
);
int wcsncmp(
   const wchar_t *string1,
   const wchar_t *string2,
   size_t count
);
int _mbsncmp(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count
);
int _mbsncmp_l(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count,
   _locale_t locale
);int _mbsnbcmp(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count
);
```

### <a name="parameters"></a>Parametri

*String1*, *stringa2*<br/>
Stringhe da confrontare.

*count*<br/>
Numero di caratteri da confrontare.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Il valore restituito indica la relazione delle sottostringhe di *string1* e *string2* come indicato di seguito.

|Valore restituito|Descrizione|
|------------------|-----------------|
|< 0|*String1* sottostringa minore *string2* sottostringa|
|0|*String1* identica alla sottostringa *string2* sottostringa|
|> 0|*String1* sottostringa maggiore *string2* sottostringa|

Errore di convalida, parametro **mbsncmp** e **mbsncmp_l** restituiscono **_NLSCMPERROR**, definito in \<String. h > e \< Mbstring. h >.

## <a name="remarks"></a>Note

Il **strncmp** funzione esegue un confronto ordinale al massimo i primi *conteggio* caratteri *string1* e *string2* e Restituisce un valore che indica la relazione tra le sottostringhe. **strncmp** è una versione di distinzione maiuscole/minuscole **strnicmp**. **wcsncmp** e **mbsncmp** sono versioni distinzione maiuscole/minuscole **wcsnicmp** e **mbsnicmp**.

**wcsncmp** e **mbsncmp** sono versioni a caratteri wide e caratteri multibyte di **strncmp**. Gli argomenti di **wcsncmp** sono caratteri wide, mentre quelli di stringhe **mbsncmp** sono stringhe a caratteri multibyte. **mbsncmp** riconosce le sequenze di caratteri multibyte in base alla tabella codici multibyte corrente e restituisce **_NLSCMPERROR** in caso di errore.

Inoltre, **mbsncmp** e **mbsncmp_l** convalidare i parametri. Se *string1* oppure *string2* è un puntatore null, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **mbsncmp** e **mbsncmp_l** restituiscono **_NLSCMPERROR** e impostare **errno** a  **EINVAL**. **strncmp** e **wcsncmp** non convalidano i relativi parametri. A parte ciò, queste funzioni si comportano in modo identico.

Il comportamento di confronto di **mbsncmp** e **mbsncmp_l** è interessato dalla configurazione dell'impostazione del **LC_CTYPE** impostazione della categoria delle impostazioni locali. Controlla il rilevamento dei byte iniziali e finali dei caratteri multibyte. Per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md). Il **mbsncmp** funzione utilizza le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Il **mbsncmp_l** funzione è identica ad eccezione del fatto che usa il *delle impostazioni locali* parametro invece. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md). Se le impostazioni locali sono delle impostazioni locali a byte singolo, il comportamento di queste funzioni è identico a **strncmp**.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tcsnccmp**|**strncmp**|**_mbsncmp**|**wcsncmp**|
|**tcsncmp**|**strncmp**|**_mbsnbcmp**|**wcsncmp**|
|**_tccmp**|Mapping a una macro o a una funzione inline|**_mbsncmp**|Mapping a una macro o a una funzione inline|
|**non applicabile**|**non applicabile**|**_mbsncmp_l**|**non applicabile**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strncmp**|\<string.h>|
|**wcsncmp**|\<string.h> o \<wchar.h>|
|**mbsncmp**, **mbsncmp_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_strncmp.c
#include <string.h>
#include <stdio.h>

char string1[] = "The quick brown dog jumps over the lazy fox";
char string2[] = "The QUICK brown fox jumps over the lazy dog";

int main( void )
{
   char tmp[20];
   int result;
   printf( "Compare strings:\n      %s\n      %s\n\n",
           string1, string2 );
   printf( "Function:   strncmp (first 10 characters only)\n" );
   result = strncmp( string1, string2 , 10 );
   if( result > 0 )
      strcpy_s( tmp, sizeof(tmp), "greater than" );
   else if( result < 0 )
      strcpy_s( tmp, sizeof(tmp), "less than" );
   else
      strcpy_s( tmp, sizeof(tmp), "equal to" );
   printf( "Result:      String 1 is %s string 2\n\n", tmp );
   printf( "Function:   strnicmp _strnicmp (first 10 characters only)\n" );
   result = _strnicmp( string1, string2, 10 );
   if( result > 0 )
      strcpy_s( tmp, sizeof(tmp), "greater than" );
   else if( result < 0 )
      strcpy_s( tmp, sizeof(tmp), "less than" );
   else
      strcpy_s( tmp, sizeof(tmp), "equal to" );
   printf( "Result:      String 1 is %s string 2\n", tmp );
}
```

```Output
Compare strings:
      The quick brown dog jumps over the lazy fox
      The QUICK brown fox jumps over the lazy dog

Function:   strncmp (first 10 characters only)
Result:      String 1 is greater than string 2

Function:   strnicmp _strnicmp (first 10 characters only)
Result:      String 1 is equal to string 2
```

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_mbsnbcmp, _mbsnbcmp_l](mbsnbcmp-mbsnbcmp-l.md)<br/>
[_mbsnbicmp, _mbsnbicmp_l](mbsnbicmp-mbsnbicmp-l.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
[_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
