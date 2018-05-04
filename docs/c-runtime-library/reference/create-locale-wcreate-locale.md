---
title: _create_locale, _wcreate_locale | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _create_locale
- __create_locale
- _wcreate_locale
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
- api-ms-win-crt-locale-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- create_locale
- _create_locale
- __create_locale
dev_langs:
- C++
helpviewer_keywords:
- locales, creating
- _create_locale function
- create_locale function
- __create_locale function
ms.assetid: ca362464-9f4a-4ec6-ab03-316c55c5be81
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: db4a762689907330b671e2720cf743ee957526a4
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="createlocale-wcreatelocale"></a>_create_locale, _wcreate_locale

Crea un oggetto di impostazioni locali.

## <a name="syntax"></a>Sintassi

```C
_locale_t _create_locale(
   int category,
   const char *locale
);
_locale_t _wcreate_locale(
   int category,
   const wchar_t *locale
);
```

### <a name="parameters"></a>Parametri

*category*<br/>
Categoria.

*locale*<br/>
Identificatore delle impostazioni locali.

## <a name="return-value"></a>Valore restituito

Se un valore valido *delle impostazioni locali* e *categoria* sono specificati e restituisce le impostazioni locali specificato come un **locale_t** oggetto. Le impostazioni locali correnti del programma non vengono modificate.

## <a name="remarks"></a>Note

Il **create_locale** funzione consente di creare un oggetto che rappresenta determinate impostazioni specifiche dell'area, per l'utilizzo nelle versioni specifiche delle impostazioni locali di molte funzioni CRT (le funzioni con il **l** suffisso ). Il comportamento è simile a **setlocale**, ad eccezione del fatto che anziché applicare le impostazioni locali specificato all'ambiente corrente, le impostazioni vengono salvate un **locale_t** struttura restituito. Il **locale_t** struttura deve essere liberata mediante [free_locale](free-locale.md) quando non è più necessario.

**_wcreate_locale** è una versione a caratteri "wide" **create_locale**; il *impostazioni locali* argomento **_wcreate_locale** è una stringa di caratteri "wide". **_wcreate_locale** e **create_locale** si comportano in modo identico in caso contrario.

Il *categoria* argomento specifica le parti del comportamento specifiche delle impostazioni locali che sono interessate. I flag utilizzati per *categoria* e le parti del programma interessate sono come illustrato nella tabella seguente.

|*categoria* flag|Applicazione|
|-|-|
**LC_ALL**|Tutte le categorie, come indicato di seguito.
**LC_COLLATE**|Il **strcoll**, **stricoll**, **wcscoll**, **wcsicoll**, **strxfrm**, **_ strncoll**, **strnicoll**, **wcsncoll**, **wcsnicoll**, e **wcsxfrm** funzioni.
**LC_CTYPE**|Le funzioni di gestione dei caratteri (tranne **isdigit**, **isxdigit**, **mbstowcs**, e **mbtowc**, che non sono interessate).
**LC_MONETARY**|Le informazioni di formattazione monetaria restituite dal **localeconv** (funzione).
**LC_NUMERIC**|Carattere per la routine di output formattate del separatore decimale (ad esempio **printf**), per le routine di conversione dei dati e per le informazioni di formattazione non monetarie restituite da **localeconv**. Oltre a carattere del separatore decimale **LC_NUMERIC** separatore imposta le migliaia e il raggruppamento di controllare la stringa restituita da [localeconv](localeconv.md).
**LC_TIME**|Il **strftime** e **wcsftime** funzioni.

Questa funzione convalida il *categoria* e *delle impostazioni locali* parametri. Se il parametro di categoria non è uno dei valori indicati nella tabella precedente o se *delle impostazioni locali* viene **NULL**, la funzione restituisce **NULL**.

Il *delle impostazioni locali* argomento è un puntatore a una stringa che specifica le impostazioni locali. Per informazioni relative al formato del *delle impostazioni locali* argomento, vedere [nomi delle impostazioni locali, lingue e stringhe di paese/area geografica](../../c-runtime-library/locale-names-languages-and-country-region-strings.md).

Il *delle impostazioni locali* argomento può richiedere un nome delle impostazioni locali, una stringa di lingua, una stringa di lingua e codice di paese/area geografica, una tabella codici, o una stringa di lingua, codice di paese/area geografica e tabella codici. Il set di nomi delle impostazioni locali disponibili, lingue, codici paese e tabelle codici include tutti quelli supportati dalle API NLS di Windows, ad eccezione delle tabelle codici che richiedono più di due byte per carattere, ad esempio UTF-7 e UTF-8. Se si specifica una tabella codici, ad esempio UTF-8 o UTF-7 **create_locale** avrà esito negativo e restituiscono NULL. Il set di nomi delle impostazioni locali supportate da **create_locale** descritte in [nomi delle impostazioni locali, lingue e stringhe di paese/area geografica](../../c-runtime-library/locale-names-languages-and-country-region-strings.md). Il set di stringhe lingua e paese/area geografica supportati da **create_locale** sono racchiusi [stringhe relative a lingue](../../c-runtime-library/language-strings.md) e [stringhe paese/area geografica](../../c-runtime-library/country-region-strings.md).

Per altre informazioni sulle impostazioni locali, vedere [setlocale, _wsetlocale](setlocale-wsetlocale.md).

Il nome precedente di questa funzione, **create_locale** (con due caratteri di sottolineatura iniziali), è stato deprecato.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_create_locale**|\<locale.h>|
|**_wcreate_locale**|\<locale.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_create_locale.c
// Sets the current locale to "de-CH" using the
// setlocale function and demonstrates its effect on the strftime
// function.

#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(void)
{
    time_t ltime;
    struct tm thetime;
    unsigned char str[100];
    _locale_t locale;

    // Create a locale object representing the German (Switzerland) locale
    locale = _create_locale(LC_ALL, "de-CH");
    time (&ltime);
    _gmtime64_s(&thetime, &ltime);

    // %#x is the long date representation, appropriate to
    // the current locale
    if (!_strftime_l((char *)str, 100, "%#x",
                     (const struct tm *)&thetime, locale))
    {
        printf("_strftime_l failed!\n");
    }
    else
    {
        printf("In de-CH locale, _strftime_l returns '%s'\n", str);
    }

    _free_locale(locale);

    // Create a locale object representing the default C locale
    locale = _create_locale(LC_ALL, "C");
    time(&ltime);
    _gmtime64_s(&thetime, &ltime);

    if (!_strftime_l((char *)str, 100, "%#x",
                     (const struct tm *)&thetime, locale))
    {
        printf("_strftime_l failed!\n");
    }
    else
    {
        printf("In 'C' locale, _strftime_l returns '%s'\n", str);
    }

    _free_locale(locale);
}
```

```Output
In de-CH locale, _strftime_l returns 'Samstag, 9. Februar 2002'
In 'C' locale, _strftime_l returns 'Saturday, February 09, 2002'
```

## <a name="see-also"></a>Vedere anche

[Nomi delle impostazioni locali, lingue e stringhe di paese/area geografica](../../c-runtime-library/locale-names-languages-and-country-region-strings.md)<br/>
[Stringhe di lingue](../../c-runtime-library/language-strings.md)<br/>
[Stringhe relative a paesi/aree geografiche](../../c-runtime-library/country-region-strings.md)<br/>
[_free_locale](free-locale.md)<br/>
[_configthreadlocale](configthreadlocale.md)<br/>
[setlocale](../../preprocessor/setlocale.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[localeconv](localeconv.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
[strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l](strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)<br/>
[mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[_setmbcp](setmbcp.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)<br/>
[strftime, wcsftime, _strftime_l, _wcsftime_l](strftime-wcsftime-strftime-l-wcsftime-l.md)<br/>
[strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)<br/>
[wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md)<br/>
[wctomb, _wctomb_l](wctomb-wctomb-l.md)<br/>
