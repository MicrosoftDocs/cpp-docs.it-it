---
description: 'Altre informazioni su: _create_locale, _wcreate_locale'
title: _create_locale, _wcreate_locale
ms.date: 4/2/2020
api_name:
- _create_locale
- __create_locale
- _wcreate_locale
- _o__create_locale
- _o__wcreate_locale
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
- api-ms-win-crt-locale-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- create_locale
- _create_locale
- __create_locale
helpviewer_keywords:
- locales, creating
- _create_locale function
- create_locale function
- __create_locale function
ms.assetid: ca362464-9f4a-4ec6-ab03-316c55c5be81
ms.openlocfilehash: feb2fee7befbaf3f798dc36466674eaa4aec55fb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97341522"
---
# <a name="_create_locale-_wcreate_locale"></a>_create_locale, _wcreate_locale

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

Se vengono specificate le impostazioni *locali* e la *categoria* valide, restituisce le impostazioni locali specificate come oggetto **_locale_t** . Le impostazioni locali correnti del programma non vengono modificate.

## <a name="remarks"></a>Commenti

La funzione **_create_locale** consente di creare un oggetto che rappresenta determinate impostazioni specifiche dell'area, da usare in versioni specifiche delle impostazioni locali di molte funzioni CRT (funzioni con il suffisso **_L** ). Il comportamento è simile a **setlocale**, ad eccezione del fatto che anziché applicare le impostazioni locali specificate all'ambiente corrente, le impostazioni vengono salvate in una struttura **_locale_t** restituita. La struttura di **_locale_t** deve essere liberata utilizzando [_free_locale](free-locale.md) quando non è più necessaria.

**_wcreate_locale** è una versione a caratteri wide di **_create_locale**; l'argomento delle *impostazioni locali* per **_wcreate_locale** è una stringa di caratteri wide. **_wcreate_locale** e **_create_locale** si comportano in modo identico.

L'argomento *Category* specifica le parti del comportamento specifico delle impostazioni locali interessate. I flag utilizzati per la *categoria* e le parti del programma interessate sono, come illustrato nella tabella seguente:

| flag *categoria* | Impatto |
|-----------------|---------|
| **LC_ALL** |Tutte le categorie, come indicato di seguito. |
| **LC_COLLATE** |Funzioni **strcoll**, **_stricoll**, **wcscoll**, **_wcsicoll**, **strxfrm**, **_strncoll**, **_strnicoll**, **_wcsncoll**, **_wcsnicoll** e **wcsxfrm** . |
| **LC_CTYPE** | Funzioni di gestione dei caratteri **, ad eccezione di** **isxdigit**, **mbstowcs** e **mbtowc**, che non sono interessate. |
| **LC_MONETARY** | Informazioni sulla formattazione monetaria restituite dalla funzione **localeconv** . |
| **LC_NUMERIC** | Carattere del separatore decimale per le routine di output formattate, ad esempio **printf**, per le routine di conversione dei dati e per le informazioni di formattazione non monetarie restituite da **localeconv**. Oltre al carattere del separatore decimale, **LC_NUMERIC** imposta il separatore delle migliaia e la stringa di controllo del raggruppamento restituiti da [localeconv](localeconv.md). |
| **LC_TIME** | Funzioni **strftime** e **wcsftime** . |

Questa funzione convalida la *categoria* e i parametri delle *impostazioni locali* . Se il parametro category non è uno dei valori indicati nella tabella precedente o se le *impostazioni locali* sono **null**, la funzione restituisce **null**.

L'argomento delle *impostazioni locali* è un puntatore a una stringa che specifica le impostazioni locali. Per informazioni sul formato dell'argomento delle *impostazioni locali* , vedere [nomi delle impostazioni locali, lingue e stringhe di paese/area geografica](../../c-runtime-library/locale-names-languages-and-country-region-strings.md).

L'argomento delle *impostazioni locali* può assumere un nome delle impostazioni locali, una stringa di lingua, una stringa di lingua e un codice paese/area geografica, una tabella codici o una stringa di lingua, un codice paese e una tabella codici. Il set di nomi delle impostazioni locali disponibili, le lingue, i codici paese e le tabelle codici include tutti quelli supportati da Windows NLS API. Il set di nomi delle impostazioni locali supportato da **_create_locale** è descritto in [nomi delle impostazioni locali, lingue e stringhe di paese/area geografica](../../c-runtime-library/locale-names-languages-and-country-region-strings.md). Il set di stringhe per lingua e paese/area geografica supportate da **_create_locale** è elencato in [stringhe di lingua](../../c-runtime-library/language-strings.md) e [stringhe di paese/area geografica](../../c-runtime-library/country-region-strings.md).

Per altre informazioni sulle impostazioni locali, vedere [setlocale, _wsetlocale](setlocale-wsetlocale.md).

Il nome precedente di questa funzione, **__create_locale** (con due caratteri di sottolineatura iniziali), è stato deprecato.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

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
[Stringhe relative a lingue](../../c-runtime-library/language-strings.md)<br/>
[Stringhe di paese/area geografica](../../c-runtime-library/country-region-strings.md)<br/>
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
