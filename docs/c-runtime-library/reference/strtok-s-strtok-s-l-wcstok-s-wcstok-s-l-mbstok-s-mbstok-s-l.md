---
title: strtok_s, _strtok_s_l, wcstok_s, _wcstok_s_l, _mbstok_s, _mbstok_s_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _wcstok_s_l
- _mbstok_s_l
- _mbstok_s
- strtok_s
- wcstok_s
- _strtok_s_l
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
- _tcstok_s_l
- _wcstok_s_l
- _tcstok_s
- _mbstok_s_l
- strtok_s
- wcstok_s
- _mbstok_s
- _strtok_s_l
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 467184acd7ef78ee52f1605d23f2d3b80e6adb83
ms.sourcegitcommit: 6e3cf8df676d59119ce88bf5321d063cf479108c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/22/2018
ms.locfileid: "34451966"
---
# <a name="strtoks-strtoksl-wcstoks-wcstoksl-mbstoks-mbstoksl"></a>strtok_s, _strtok_s_l, wcstok_s, _wcstok_s_l, _mbstok_s, _mbstok_s_l

Trova il token successivo in una stringa, usando le impostazioni locali correnti o le impostazioni locali passate. Queste versioni di [strtok, _strtok_l, wcstok, _wcstok_l, _mbstok, _mbstok_l](strtok-strtok-l-wcstok-wcstok-l-mbstok-mbstok-l.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> **mbstok_s** e **mbstok_s_l** non può essere usata nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

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

unsigned char* _mbstok_s(
   unsigned char* str,
   const unsigned char* delimiters,
   char** context,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*str*<br/>
Stringa contenente il token o un token da trovare.

*Delimitatori*<br/>
Il set di caratteri di delimitazione da utilizzare.

*context*<br/>
Utilizzata per archiviare le informazioni sulla posizione tra le chiamate alla funzione.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore al token successivo nel *str*. Restituisce **NULL** quando non vengono trovati alcuna ulteriore token. Ogni chiamata viene modificato *str* sostituendo un carattere null per il primo delimitatore che si verifica dopo che il token restituito.

### <a name="error-conditions"></a>Condizioni di errore

|*str*|*Delimitatori*|*context*|Valore restituito|**errno**|
|----------------|------------------|---------------|------------------|-------------|
|**NULL**|qualsiasi|puntatore a un puntatore Null|**NULL**|**EINVAL**|
|qualsiasi|**NULL**|qualsiasi|**NULL**|**EINVAL**|
|qualsiasi|qualsiasi|**NULL**|**NULL**|**EINVAL**|

Se *str* viene **NULL** ma *contesto* è un puntatore a un puntatore di contesto valido, non sono presenti errori.

## <a name="remarks"></a>Note

Il **strtok_s** famiglia di funzioni consente di trovare il token successivo in *str*. Il set di caratteri in *delimitatori* specifica possibili delimitatori di token da trovare nel *str* alla chiamata corrente. **wcstok_s** e **mbstok_s** sono versioni a caratteri wide e caratteri multibyte di **strtok_s**. Gli argomenti e valori restituiti dei **wcstok_s** e **wcstok_s_l** sono caratteri wide, mentre quelli di stringhe **mbstok_s** e **mbstok_s_l**sono stringhe a caratteri multibyte. A parte ciò, queste funzioni si comportano in modo identico.

Questa funzione convalida i relativi parametri. Se si verifica una condizione di errore, come nella tabella delle condizioni di errore, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** alla **EINVAL** e restituire **NULL**.

La prima chiamata a **strtok_s** la funzione ignora i delimitatori iniziali e restituisce un puntatore al primo token nel *str*, il token con un carattere null di terminazione. Più token può essere suddivisa fuori il resto della *str* da una serie di chiamate a **strtok_s**. Ogni chiamata a **strtok_s** modifica *str* inserendo un carattere null dopo il token restituito dalla chiamata. Il *contesto* puntatore tiene traccia di quale stringa è in lettura e la posizione nella stringa di token successivo da leggere. Per leggere il token successivo dal *str*, chiamare **strtok_s** con un **NULL** valore per il *str* argomento e passare lo stesso  *contesto* parametro. Il **NULL** *str* argomento vengono illustrate le cause **strtok_s** per cercare il token successivo in modificato *str*. Il *delimitatori* argomento può accettare qualsiasi valore da una chiamata al successivo in modo che il set di delimitatori può variare.

Poiché il *contesto* parametro sostituisce il buffer statico utilizzato **strtok** e **strtok_l**, è possibile analizzare due stringhe contemporaneamente nello stesso thread.

La configurazione dell'impostazione della categoria **LC_CTYPE** delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md). Le versioni di queste funzioni senza il **l** suffisso utilizzare impostazioni locali del thread corrente per questo comportamento dipendente dalle impostazioni locali. Le versioni con il **l** suffisso sono identiche ad eccezione del fatto che utilizzano il *delle impostazioni locali* parametro. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strtok_s**|\<string.h>|
|**_strtok_s_l**|\<string.h>|
|**wcstok_s**,<br />**_wcstok_s_l**|\<string.h> o \<wchar.h>|
|**mbstok_s**,<br />**_mbstok_s_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tcstok_s**|**strtok_s**|**_mbstok_s**|**wcstok_s**|
|**tcstok_s_l**|**_strtok_s_l**|**_mbstok_s_l**|**_wcstok_s_l**|

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

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[strcspn, wcscspn, _mbscspn, _mbscspn_l](strcspn-wcscspn-mbscspn-mbscspn-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
