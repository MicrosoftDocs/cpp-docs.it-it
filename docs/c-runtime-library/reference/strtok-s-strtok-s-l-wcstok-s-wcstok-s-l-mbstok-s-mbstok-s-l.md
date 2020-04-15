---
title: strtok_s, _strtok_s_l, wcstok_s, _wcstok_s_l, _mbstok_s, _mbstok_s_l
ms.date: 4/2/2020
api_name:
- _wcstok_s_l
- _mbstok_s_l
- _mbstok_s
- strtok_s
- wcstok_s
- _strtok_s_l
- _o__mbstok_s
- _o__mbstok_s_l
- _o_strtok_s
- _o_wcstok_s
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
- _tcstok_s_l
- _wcstok_s_l
- _tcstok_s
- _mbstok_s_l
- strtok_s
- wcstok_s
- _mbstok_s
- _strtok_s_l
helpviewer_keywords:
- _strtok_s_l function
- _mbstok_s_l function
- strings [C++], searching
- mbstok_s_l function
- wcstok_s_l function
- _wcstok_s_l function
- _tcstok_s function
- _tcstok_s_l function
- strtok_s_l function
- wcstok_s function
- tokens, finding in strings
- mbstok_s function
- _mbstok_s function
- strtok_s function
ms.assetid: 7696c972-f83b-4617-8c82-95973e9fdb46
ms.openlocfilehash: 9fe89fb897a5459b16c49060359b4bb40bc062a7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365225"
---
# <a name="strtok_s-_strtok_s_l-wcstok_s-_wcstok_s_l-_mbstok_s-_mbstok_s_l"></a>strtok_s, _strtok_s_l, wcstok_s, _wcstok_s_l, _mbstok_s, _mbstok_s_l

Trova il token successivo in una stringa, usando le impostazioni locali correnti o le impostazioni locali passate. Queste versioni di [strtok, _strtok_l, wcstok, _wcstok_l, _mbstok, _mbstok_l](strtok-strtok-l-wcstok-wcstok-l-mbstok-mbstok-l.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> **_mbstok_s** e **_mbstok_s_l** non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
char* strtok_s(
   char* str,
   const char* delimiters,
   char** context
);

char* _strtok_s_l(
   char* str,
   const char* delimiters,
   char** context,
   _locale_t locale
);

wchar_t* wcstok_s(
   wchar_t* str,
   const wchar_t* delimiters,
   wchar_t** context
);

wchar_t *_wcstok_s_l(
   wchar_t* str,
   const wchar_t* delimiters,
   wchar_t** context,
   _locale_t locale
);

unsigned char* _mbstok_s(
   unsigned char* str,
   const unsigned char* delimiters,
   char** context
);

unsigned char* _mbstok_s_l(
   unsigned char* str,
   const unsigned char* delimiters,
   char** context,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*Str*<br/>
Stringa contenente il token o i token da trovare.

*Delimitatori*<br/>
Set di caratteri delimitatori da utilizzare.

*context*<br/>
Utilizzato per archiviare le informazioni sulla posizione tra le chiamate alla funzione.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore al token successivo trovato in *str*. Restituisce **NULL** quando non vengono trovati altri token. Ogni chiamata modifica *str* sostituendo un carattere null per il primo delimitatore che si verifica dopo il token restituito.

### <a name="error-conditions"></a>Condizioni di errore

|*Str*|*Delimitatori*|*context*|Valore restituito|**errno**|
|----------------|------------------|---------------|------------------|-------------|
|**Null**|any|puntatore a un puntatore Null|**Null**|**Einval**|
|any|**Null**|any|**Null**|**Einval**|
|any|any|**Null**|**Null**|**Einval**|

Se *str* è **NULL** ma *context* è un puntatore a un puntatore di contesto valido, non si verifica alcun errore.

## <a name="remarks"></a>Osservazioni

Il **strtok_s** famiglia di funzioni trova il token successivo in *str*. Il set di caratteri nei *delimitatori* specifica i possibili delimitatori del token che si trovano in *str* nella chiamata corrente. **wcstok_s** e **_mbstok_s** sono versioni a caratteri wide e a caratteri multibyte di **strtok_s**. Gli argomenti e i valori restituiti di **wcstok_s** e **_wcstok_s_l** sono stringhe di caratteri wide; quelli di **_mbstok_s** e **_mbstok_s_l** sono stringhe di caratteri multibyte. A parte ciò, queste funzioni si comportano in modo identico.

Questa funzione convalida i relativi parametri. Quando si verifica una condizione di errore, come nella tabella Condizioni di errore, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** su **EINVAL** e restituiscono **NULL**.

Alla prima chiamata a **strtok_s**, la funzione ignora i delimitatori iniziali e restituisce un puntatore al primo token in *str*, terminando il token con un carattere null. Più token possono essere suddivisi dal resto di *str* da una serie di chiamate a **strtok_s**. Ogni chiamata a **strtok_s** modifica *str* inserendo un carattere null dopo il token restituito da tale chiamata. Il puntatore di *contesto* tiene traccia di quale stringa viene letta e dove nella stringa deve essere letto il token successivo. Per leggere il token successivo da *str*, chiamare **strtok_s** con un valore **NULL** per l'argomento *str* e passare lo stesso parametro *di contesto.* L'argomento **NULL** *str* fa sì che **strtok_s** cerchi il token successivo nell'oggetto *str*modificato. L'argomento *delimitatori* può accettare qualsiasi valore da una chiamata a quella successiva in modo che il set di delimitatori possa variare.

Poiché il parametro *context* sostituisce i buffer statici utilizzati in **strtok** e **_strtok_l**, è possibile analizzare due stringhe contemporaneamente nello stesso thread.

Il valore di output è influenzato dall'impostazione dell'impostazione della categoria **LC_CTYPE** delle impostazioni locali. Per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md).

Le versioni di queste funzioni senza il suffisso **_l** utilizzano le impostazioni locali del thread corrente per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso **_l** sono identiche, ad eccezione del fatto che utilizzano invece le impostazioni locali specificate dal parametro *locale.* Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strtok_s**|\<string.h>|
|**_strtok_s_l**|\<string.h>|
|**wcstok_s**,<br />**_wcstok_s_l**|\<string.h> o \<wchar.h>|
|**_mbstok_s**,<br />**_mbstok_s_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|\_UNICODE \_& MBCS non definito|\_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstok_s**|**strtok_s**|**_mbstok_s**|**wcstok_s**|
|**_tcstok_s_l**|**_strtok_s_l**|**_mbstok_s_l**|**_wcstok_s_l**|

## <a name="example"></a>Esempio

```C
// crt_strtok_s.c
// In this program, a loop uses strtok_s
// to print all the tokens (separated by commas
// or blanks) in two strings at the same time.

#include <string.h>
#include <stdio.h>

char string1[] =
    "A string\tof ,,tokens\nand some  more tokens";
char string2[] =
    "Another string\n\tparsed at the same time.";
char seps[]   = " ,\t\n";
char *token1 = NULL;
char *token2 = NULL;
char *next_token1 = NULL;
char *next_token2 = NULL;

int main(void)
{
    printf("Tokens:\n");

    // Establish string and get the first token:
    token1 = strtok_s(string1, seps, &next_token1);
    token2 = strtok_s(string2, seps, &next_token2);

    // While there are tokens in "string1" or "string2"
    while ((token1 != NULL) || (token2 != NULL))
    {
        // Get next token:
        if (token1 != NULL)
        {
            printf(" %s\n", token1);
            token1 = strtok_s(NULL, seps, &next_token1);
        }
        if (token2 != NULL)
        {
            printf("        %s\n", token2);
            token2 = strtok_s(NULL, seps, &next_token2);
        }
    }
}
```

```Output
Tokens:
A
        Another
string
        string
of
        parsed
tokens
        at
and
        the
some
        same
more
        time.
tokens
```

## <a name="see-also"></a>Vedere anche

[Manipolazione delle stringheString Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyteInterpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[strcspn, wcscspn, _mbscspn, _mbscspn_l](strcspn-wcscspn-mbscspn-mbscspn-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
