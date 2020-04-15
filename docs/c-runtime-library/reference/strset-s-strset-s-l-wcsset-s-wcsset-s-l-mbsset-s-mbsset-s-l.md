---
title: _strset_s, _strset_s_l, _wcsset_s, _wcsset_s_l, _mbsset_s, _mbsset_s_l
ms.date: 4/2/2020
api_name:
- _wcsset_s
- _wcsset_s_l
- _strset_s
- _mbsset_s_l
- _strset_s_l
- _mbsset_s
- _o__mbsset_s
- _o__mbsset_s_l
- _o__strset_s
- _o__wcsset_s
api_location:
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
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: 599c991e2e9b4cee1515decdaf1050311d844a68
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317246"
---
# <a name="_strset_s-_strset_s_l-_wcsset_s-_wcsset_s_l-_mbsset_s-_mbsset_s_l"></a>_strset_s, _strset_s_l, _wcsset_s, _wcsset_s_l, _mbsset_s, _mbsset_s_l

Imposta i caratteri di una stringa su un carattere. Queste versioni di [_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> **_mbsset_s** e **_mbsset_s_l** non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

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

*Str*<br/>
Stringa con terminazione Null da impostare.

*Sizeinbytes*<br/>
Dimensione del buffer *str.*

*C*<br/>
Impostazione del carattere.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo e un codice di errore in caso contrario.

Queste funzioni convalidano i rispettivi argomenti. Se *str* è un puntatore null o l'argomento *numberOfElements* è minore o uguale a 0 o il blocco passato non è con terminazione null, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **EINVAL** e impostano **errno** su **EINVAL**.

## <a name="remarks"></a>Osservazioni

La funzione **_strset_s** imposta tutti i caratteri di *str* su *c* (convertito in **char**), ad eccezione del carattere di terminazione null. **_wcsset_s** e **_mbsset_s** sono versioni a caratteri wide e a caratteri multibyte di **_strset_s**. I tipi di dati degli argomenti e dei valori restituiti variano di conseguenza. A parte ciò, queste funzioni si comportano in modo identico.

La configurazione dell'impostazione della categoria **LC_CTYPE** delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md). Le versioni di queste funzioni senza il suffisso **_l** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso **_l** sono identiche, ma usano il parametro passato alle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Le versioni della libreria di debug di queste funzioni riempiono innanzitutto il buffer con 0xFE. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

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
|**_mbsset_s** **, _mbsset_s_l**|\<mbstring.h>|

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

[Manipolazione delle stringheString Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyteInterpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_mbsnbset, _mbsnbset_l](mbsnbset-mbsnbset-l.md)<br/>
[memset, wmemset](memset-wmemset.md)<br/>
[strcat, wcscat, _mbscat](strcat-wcscat-mbscat.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[strcpy, wcscpy, _mbscpy](strcpy-wcscpy-mbscpy.md)<br/>
[_strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l](strnset-strnset-l-wcsnset-wcsnset-l-mbsnset-mbsnset-l.md)<br/>
