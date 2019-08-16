---
title: strstr, wcsstr, _mbsstr, _mbsstr_l
ms.date: 11/04/2016
apiname:
- _mbsstr
- wcsstr
- _mbsstr_l
- strstr
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
- ntoskrnl.exe
apitype: DLLExport
f1_keywords:
- _fstrstr
- _ftcsstr
- strstr
- wcsstr
- _mbsstr
- _tcsstr
helpviewer_keywords:
- strings [C++], searching
- mbsstr function
- _ftcsstr function
- ftcsstr function
- fstrstr function
- _tcsstr function
- substrings, finding
- mbsstr_l function
- tcsstr function
- _mbsstr function
- wcsstr function
- _fstrstr function
- _mbsstr_l function
- strstr function
ms.assetid: 03d70c3f-2473-45cb-a5f8-b35beeb2748a
ms.openlocfilehash: 003e5fd88bdfaafff539c5c993a99cd9ecca0b82
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69500813"
---
# <a name="strstr-wcsstr-_mbsstr-_mbsstr_l"></a>strstr, wcsstr, _mbsstr, _mbsstr_l

Restituisce un puntatore alla prima occorrenza di una stringa di ricerca in una stringa.

> [!IMPORTANT]
> `_mbsstr` e `_mbsstr_l` non possono essere usati nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
char *strstr(
   const char *str,
   const char *strSearch
); // C only
char *strstr(
   char *str,
   const char *strSearch
); // C++ only
const char *strstr(
   const char *str,
   const char *strSearch
); // C++ only
wchar_t *wcsstr(
   const wchar_t *str,
   const wchar_t *strSearch
); // C only
wchar_t *wcsstr(
   wchar_t *str,
   const wchar_t *strSearch
); // C++ only
const wchar_t *wcsstr(
   const wchar_t *str,
   const wchar_t *strSearch
); // C++ only
unsigned char *_mbsstr(
   const unsigned char *str,
   const unsigned char *strSearch
); // C only
unsigned char *_mbsstr(
   unsigned char *str,
   const unsigned char *strSearch
); // C++ only
const unsigned char *_mbsstr(
   const unsigned char *str,
   const unsigned char *strSearch
); // C++ only
unsigned char *_mbsstr_l(
   const unsigned char *str,
   const unsigned char *strSearch,
   _locale_t locale
); // C only
unsigned char *_mbsstr_l(
   unsigned char *str,
   const unsigned char *strSearch,
   _locale_t locale
); // C++ only
const unsigned char *_mbsstr_l(
   const unsigned char *str,
   const unsigned char *strSearch,
   _locale_t locale
); // C++ only
```

### <a name="parameters"></a>Parametri

*str*<br/>
Stringa con terminazione Null in cui eseguire la ricerca.

*strSearch*<br/>
Stringa con terminazione Null da cercare.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla prima occorrenza di *strSearch* in *Str*oppure null se *strSearch* non viene visualizzato in *STR*. Se *strSearch* punta a una stringa di lunghezza zero, la funzione restituisce *Str*.

## <a name="remarks"></a>Note

La `strstr` funzione restituisce un puntatore alla prima occorrenza di *strSearch* in *STR*. La ricerca non include i caratteri Null di terminazione. `wcsstr` è la versione a caratteri wide di `strstr` e `_mbsstr` è la versione a caratteri multibyte. Gli argomenti e il valore restituito di `wcsstr` sono stringhe con caratteri wide, mentre quelli di `_mbsstr` sono stringhe con caratteri multibyte. `_mbsstr` convalida i propri parametri. Se *Str* o *strSearch* è null, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, `_mbsstr` imposta `errno` su EINVAL e restituisce 0. `strstr` e `wcsstr` non convalidano i parametri. A parte ciò, queste tre funzioni si comportano in modo identico.

> [!IMPORTANT]
> Queste funzioni potrebbero causare una minaccia da un problema di sovraccarico del buffer. I problemi di sovraccarico del buffer possono essere utilizzati per attaccare un sistema perché possono consentire l'esecuzione di codice arbitrario che può causare un'elevazione dei privilegi non autorizzata. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

In C queste funzioni accettano un puntatore **const** per il primo argomento. In C++ sono disponibili due overload. L'overload che accetta un puntatore a **const** restituisce un puntatorea const; la versione che accetta un puntatore a un oggetto non const restituisce un puntatore a un oggetto non**const**. La macro _CRT_CONST_CORRECT_OVERLOADS viene definita se sono disponibili entrambe le versioni const e non**const** di queste funzioni. Se è necessario il comportamento non**const** per entrambi C++ gli overload, definire il simbolo _CONST_RETURN.

Il valore di output è interessato dall'impostazione della categoria locale di LC_CTYPE; Per ulteriori informazioni, vedere [setlocale, _wsetlocale](setlocale-wsetlocale.md). Le versioni di queste funzioni che non hanno il suffisso **suffisso** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali; le versioni con il suffisso **suffisso** sono identiche, ad eccezione del fatto che usano il parametro delle impostazioni locali passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|`_tcsstr`|`strstr`|`_mbsstr`|`wcsstr`|
|**n/d**|**n/d**|`_mbsstr_l`|**n/d**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`strstr`|\<string.h>|
|`wcsstr`|\<string.h> o \<wchar.h>|
|`_mbsstr`, `_mbsstr_l`|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_strstr.c

#include <string.h>
#include <stdio.h>

char str[] =    "lazy";
char string[] = "The quick brown dog jumps over the lazy fox";
char fmt1[] =   "         1         2         3         4         5";
char fmt2[] =   "12345678901234567890123456789012345678901234567890";

int main( void )
{
   char *pdest;
   int  result;
   printf( "String to be searched:\n   %s\n", string );
   printf( "   %s\n   %s\n\n", fmt1, fmt2 );
   pdest = strstr( string, str );
   result = (int)(pdest - string + 1);
   if ( pdest != NULL )
      printf( "%s found at position %d\n", str, result );
   else
      printf( "%s not found\n", str );
}
```

```Output
String to be searched:
   The quick brown dog jumps over the lazy fox
            1         2         3         4         5
   12345678901234567890123456789012345678901234567890

lazy found at position 36
```

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[strcspn, wcscspn, _mbscspn, _mbscspn_l](strcspn-wcscspn-mbscspn-mbscspn-l.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[strpbrk, wcspbrk, _mbspbrk, _mbspbrk_l](strpbrk-wcspbrk-mbspbrk-mbspbrk-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
[basic_string::find](../../standard-library/basic-string-class.md#find)<br/>
