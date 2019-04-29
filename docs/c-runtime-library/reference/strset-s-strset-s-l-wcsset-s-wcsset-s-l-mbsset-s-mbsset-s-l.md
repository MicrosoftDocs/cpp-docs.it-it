---
title: _strset_s, _strset_s_l, _wcsset_s, _wcsset_s_l, _mbsset_s, _mbsset_s_l
ms.date: 11/04/2016
apiname:
- _wcsset_s
- _wcsset_s_l
- _strset_s
- _mbsset_s_l
- _strset_s_l
- _mbsset_s
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
- ntoskrnl.exe
apitype: DLLExport
f1_keywords:
- _wcsset_s_l
- strset_s
- _mbsset_s
- mbsset_s
- _strset_s
- _mbsset_s_l
- strset_s_l
- _wcsset_s
- mbsset_s_l
- wcsset_s_l
- wcsset_s
- _strset_s_l
- _tcsset_s_l
- _tcsset_s
helpviewer_keywords:
- mbsset_s_l function
- wcsset_s function
- _mbsset_s function
- tcsset_s function
- strset_s_l function
- characters [C++], setting
- _wcsset_s_l function
- _strset_s function
- strset_s function
- wcsset_s_l function
- strings [C++], setting characters
- _strset_s_l function
- _mbsset_s_l function
- _wcsset_s function
- tcsset_s_l function
- _tcsset_s_l function
- _tcsset_s function
- mbsset_s function
ms.assetid: dceb2909-6b41-4792-acb7-888e45bb8b35
ms.openlocfilehash: 031678f75dacd8112ac897053066216e7b3b2450
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62368796"
---
# <a name="strsets-strsetsl-wcssets-wcssetsl-mbssets-mbssetsl"></a>_strset_s, _strset_s_l, _wcsset_s, _wcsset_s_l, _mbsset_s, _mbsset_s_l

Imposta i caratteri di una stringa su un carattere. Queste versioni di [_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> **mbsset_s** e **mbsset_s_l** non può essere utilizzato nelle applicazioni eseguite nel Runtime di Windows. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _strset_s(
   char *str,
   size_t numberOfElements,
   int c
);
errno_t _strset_s_l(
   char *str,
   size_t numberOfElements,
   int c,
   locale_t locale
);
errno_t _wcsset_s(
   wchar_t *str,
   size_t numberOfElements,
   wchar_t c
);
errno_t *_wcsset_s_l(
   wchar_t *str,
   size_t numberOfElements,
   wchar_t c,
   locale_t locale
);
errno_t _mbsset_s(
   unsigned char *str,
   size_t numberOfElements,
   unsigned int c
);
errno_t _mbsset_s_l(
   unsigned char *str,
   size_t numberOfElements,
   unsigned int c,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*str*<br/>
Stringa con terminazione Null da impostare.

*numberOfElements*<br/>
Le dimensioni dei *str* buffer.

*c*<br/>
Impostazione del carattere.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo e un codice di errore in caso contrario.

Queste funzioni convalidano i rispettivi argomenti. Se *str* è un puntatore null, o il *numberOfElements* argomento è minore o uguale a 0, o il blocco passato non è con terminazione null, quindi viene richiamato il gestore di parametri non validi, come descritto in [ Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **EINVAL** e impostare **errno** al **EINVAL**.

## <a name="remarks"></a>Note

Il **strset_s** funzione imposta tutti i caratteri del *str* a *c* (convertiti in **char**), tranne il carattere di terminazione null. **wcsset_s** e **mbsset_s** sono versioni a caratteri wide e caratteri multibyte di **strset_s**. I tipi di dati degli argomenti e dei valori restituiti variano di conseguenza. A parte ciò, queste funzioni si comportano in modo identico.

La configurazione dell'impostazione della categoria **LC_CTYPE** delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md). Le versioni di queste funzioni senza il suffisso **_l** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso **_l** sono identiche, ma usano il parametro passato alle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Le versioni di debug di queste funzioni riempiono innanzitutto il buffer con 0xFD. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsset_s**|**_strset_s**|**_mbsset_s**|**_wcsset_s**|
|**_tcsset_s_l**|**_strset_s_l**|**_mbsset_s_l**|**_wcsset_s_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_strset_s**|\<string.h>|
|**_strset_s_l**|\<tchar.h>|
|**_wcsset_s**|\<string.h> o \<wchar.h>|
|**_wcsset_s_l**|\<tchar.h>|
|**_mbsset_s**, **_mbsset_s_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_strset_s.c
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   char string[] = "Fill the string with something.";
   printf( "Before: %s\n", string );
   _strset_s( string, _countof(string), '*' );
   printf( "After:  %s\n", string );
}
```

```Output
Before: Fill the string with something.
After:  *******************************
```

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_mbsnbset, _mbsnbset_l](mbsnbset-mbsnbset-l.md)<br/>
[memset, wmemset](memset-wmemset.md)<br/>
[strcat, wcscat, _mbscat](strcat-wcscat-mbscat.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[strcpy, wcscpy, _mbscpy](strcpy-wcscpy-mbscpy.md)<br/>
[_strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l](strnset-strnset-l-wcsnset-wcsnset-l-mbsnset-mbsnset-l.md)<br/>
