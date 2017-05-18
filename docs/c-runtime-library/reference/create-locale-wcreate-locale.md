---
title: _create_locale, _wcreate_locale | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 23
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 1a00023e4d3e31ddb6381e90a50231449b1de18d
ms.openlocfilehash: 5068d509e335fd99246d5dff5fd51f2b0b1493b6
ms.contentlocale: it-it
ms.lasthandoff: 02/28/2017

---
# <a name="createlocale-wcreatelocale"></a>_create_locale, _wcreate_locale
Crea un oggetto di impostazioni locali.  
  
## <a name="syntax"></a>Sintassi  
  
```  
_locale_t _create_locale(  
   int category,  
   const char *locale   
);  
_locale_t _wcreate_locale(  
   int category,  
   const wchar_t *locale   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `category`  
 Categoria.  
  
 `locale`  
 Identificatore delle impostazioni locali.  
  
## <a name="return-value"></a>Valore restituito  
 Se vengono specificati `locale` e `category` validi, le impostazioni locali specificate vengono restituite come oggetto `_locale_t`. Le impostazioni locali correnti del programma non vengono modificate.  
  
## <a name="remarks"></a>Note  
 La funzione `_create_locale` consente di creare un oggetto, che rappresenta determinate impostazioni di aree geografiche, da usare in versioni specifiche di impostazioni locali di molte funzioni CRT (le funzioni con il suffisso `_l`). Il comportamento è simile a `setlocale`, ad eccezione del fatto che anziché applicare le impostazioni locali specificate per l'ambiente corrente, le impostazioni vengono salvate in una struttura `_locale_t` restituita. La struttura `_locale_t` deve essere liberata tramite [free_locale](../../c-runtime-library/reference/free-locale.md) quando non è più necessaria.  
  
 `_wcreate_locale` è una versione a caratteri wide di `_create_locale`; l'argomento `locale` in `_wcreate_locale` è una stringa di caratteri wide. In caso contrario, `_wcreate_locale` e `_create_locale` si comportano in modo identico.  
  
 L'argomento `category` indica le parti del comportamento specifico per le impostazioni locali interessate. I contrassegni usati per `category` e le parti del programma interessate sono inclusi nella tabella seguente.  
  
 `LC_ALL`  
 Tutte le categorie, come indicato di seguito.  
  
 `LC_COLLATE`  
 Le funzioni `strcoll`, `_stricoll`, `wcscoll`, `_wcsicoll`, `strxfrm`, `_strncoll`, `_strnicoll`, `_wcsncoll`, `_wcsnicoll` e `wcsxfrm`.  
  
 `LC_CTYPE`  
 Le funzioni di gestione dei caratteri, ad eccezione di `isdigit`, `isxdigit`, `mbstowcs` e `mbtowc` che non sono interessate.  
  
 `LC_MONETARY`  
 Informazioni di formattazione monetaria restituite dalla funzione `localeconv`.  
  
 `LC_NUMERIC`  
 Carattere del separatore decimale per le routine di output formattate, ad esempio `printf`, per le routine di conversione dei dati e per le informazioni di formattazione non monetarie restituite da `localeconv`. Oltre al separatore decimale, `LC_NUMERIC` imposta il separatore delle migliaia e la stringa di controllo del raggruppamento restituiti da [localeconv](../../c-runtime-library/reference/localeconv.md).  
  
 `LC_TIME`  
 Funzioni `strftime` e `wcsftime`.  
  
 Questa funzione convalida i parametri `category` e `locale`. Se il parametro di categoria non è uno dei valori indicati nella tabella precedente o se `locale` è `NULL`, la funzione restituisce `NULL`.  
  
 L'argomento `locale` è un puntatore a una stringa che specifica le impostazioni locali. Per informazioni sul formato dell'argomento `locale`, vedere [Nomi delle impostazioni locali, lingue e stringhe relative a paesi](../../c-runtime-library/locale-names-languages-and-country-region-strings.md).  
  
 L'argomento `locale` può accettare un nome delle impostazioni locali, una stringa di lingua, una stringa di lingua e un codice paese, una tabella codici o una stringa di lingua, un codice paese e una tabella codici. Il set di nomi delle impostazioni locali disponibili, lingue, codici paese e tabelle codici include tutti quelli supportati dalle API NLS di Windows, ad eccezione delle tabelle codici che richiedono più di due byte per carattere, ad esempio UTF-7 e UTF-8. Se si specifica una tabella codici quale UTF-7 o UTF-8, `_create_locale` avrà esito negativo e restituirà un valore NULL. Il set di nomi delle impostazioni locali supportate da `_create_locale` sono descritti in [Nomi delle impostazioni locali, lingue e stringhe relative a paesi](../../c-runtime-library/locale-names-languages-and-country-region-strings.md). Il set delle stringhe per lingua e paese supportato da `_create_locale` è elencato in [Stringhe relative a lingue](../../c-runtime-library/language-strings.md) e [Stringhe relative a paesi](../../c-runtime-library/country-region-strings.md).  
  
 Per altre informazioni sulle impostazioni locali, vedere [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  
  
 Il nome precedente di questa funzione, `__create_locale` (con due caratteri di sottolineatura iniziali), è stato deprecato.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_create_locale`|\<locale.h>|  
|`_wcreate_locale`|\<locale.h> o \<wchar.h>|  
  
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
 [Nomi delle impostazioni locali, lingue e stringhe relative a paesi](../../c-runtime-library/locale-names-languages-and-country-region-strings.md)   
 [Stringhe relative a lingue](../../c-runtime-library/language-strings.md)   
 [Stringhe relative a paesi](../../c-runtime-library/country-region-strings.md)   
 [_free_locale](../../c-runtime-library/reference/free-locale.md)   
 [_configthreadlocale](../../c-runtime-library/reference/configthreadlocale.md)   
 [setlocale](../../preprocessor/setlocale.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [_mbclen, mblen, _mblen_l](../../c-runtime-library/reference/mbclen-mblen-mblen-l.md)   
 [strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l](../../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)   
 [mbstowcs, _mbstowcs_l](../../c-runtime-library/reference/mbstowcs-mbstowcs-l.md)   
 [mbtowc, _mbtowc_l](../../c-runtime-library/reference/mbtowc-mbtowc-l.md)   
 [_setmbcp](../../c-runtime-library/reference/setmbcp.md)   
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)   
 [strftime, wcsftime, _strftime_l, _wcsftime_l](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)   
 [strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](../../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)   
 [wcstombs, _wcstombs_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md)   
 [wctomb, _wctomb_l](../../c-runtime-library/reference/wctomb-wctomb-l.md)
