---
title: "_create_locale, _wcreate_locale | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_create_locale"
  - "__create_locale"
  - "_wcreate_locale"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-locale-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "create_locale"
  - "_create_locale"
  - "__create_locale"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__create_locale (funzione)"
  - "_create_locale (funzione)"
  - "create_locale (funzione)"
  - "impostazioni locali, creazione"
ms.assetid: ca362464-9f4a-4ec6-ab03-316c55c5be81
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# _create_locale, _wcreate_locale
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Creare un oggetto delle impostazioni locali  
  
## Sintassi  
  
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
  
#### Parametri  
 `category`  
 Categoria  
  
 `locale`  
 Identificatore delle impostazioni locali.  
  
## Valore restituito  
 Se sono forniti dei valori validi di `locale` e `category` , restituisce delle specifiche impostazioni locali impostate come un oggetto `_locale_t`.  Le impostazioni locali correnti del programma non vengono modificate.  
  
## Note  
 La funzione `_create_locale` consente di creare un oggetto che rappresenta determinate impostazioni specifiche, per essere utilizzate in versioni specifiche delle impostazioni locali di molte funzioni CRT \(funzioni con il suffisso `_l` \).  Il comportamento è simile a `setlocale`, ma anziché applicare le impostazioni locali specificate all'ambiente corrente, le impostazioni vengono salvate in una struttura `_locale_t` che viene restituita.  La struttura `_locale_t` dovrebbe essere rilasciata con [\_free\_locale](../../c-runtime-library/reference/free-locale.md) quando non è più necessaria.  
  
 `_wcreate_locale` è una versione a caratteri estesi di `_create_locale`; l'argomento `locale` in `_wcreate_locale` è una stringa di caratteri estesi.  `_wcreate_locale` e `_create_locale` si comportano in modo identico in caso contrario.  
  
 L'argomento `category` specifica le parti del comportamento delle impostazioni locali che sono interessate.  I flag utilizzati per `category` e le parti del programma interessate sono riportate nella tabella seguente.  
  
 `LC_ALL`  
 Tutte le categorie, sono elencate di seguito.  
  
 `LC_COLLATE`  
 Le funzioni `strcoll`, `_stricoll`, `wcscoll`, `_wcsicoll`, `strxfrm`, `_strncoll`, `_strnicoll`, `_wcsncoll`, `_wcsnicoll`, e `wcsxfrm`.  
  
 `LC_CTYPE`  
 Le funzioni di gestione caratteri \(tranne `isdigit`, `isxdigit`, `mbstowcs` e `mbtowc`, che sono inalterate\).  
  
 `LC_MONETARY`  
 Informazioni di formattazione monetaria restituite dalla funzione `localeconv`.  
  
 `LC_NUMERIC`  
 Carattere del separatore decimale per le routine di output formattate \(ad esempio `printf`\), per le routine di conversione dati e per le informazioni non monetarie di formattazione restituite da `localeconv`.  Oltre al carattere del separatore decimale, `LC_NUMERIC` imposta il separatore delle migliaia e la stringa di raggruppamento del controllo che sono state restituite da [localeconv](../../c-runtime-library/reference/localeconv.md).  
  
 `LC_TIME`  
 Le funzioni `strftime` e `wcsftime`.  
  
 Questa funzione convalida i parametri `locale` e `category`.  Se il parametro di categoria non è uno dei valori forniti dalla precedente tabella o se `locale` è `NULL`, la funzione restituisce `NULL`.  
  
 L'argomento `locale` è un puntatore ad una stringa che specifica le impostazioni locali.  Per informazioni sul formato di un argomento `locale`, consultare [Nomi delle impostazioni locali, lingue e stringhe relative a paesi](../../c-runtime-library/locale-names-languages-and-country-region-strings.md).  
  
 L'argomento `locale` può accettare un nome delle impostazioni locali, una stringa di linguaggio, una stringa di linguaggio e un codice associato al paese o all'area geografica, una tabella dei codici o una stringa di linguaggio, un codice associato al paese o all'area geografica e una tabella codici.  L'insieme dei nomi delle impostazioni locali disponibili, dei linguaggi, dei codici associati al paese o all'area geografica e delle tabelle dei codici includono tutti quelli che sono supportati dalle API di Windows NLS eccetto le tabelle dei codici che richiedono più byte per un carattere—ad esempio, UTF\-7 e UTF\-8.  Se si fornisce una tabella codici come UTF\-7 o UTF\-8, `_create_locale` fallirà, restituendo NULL.  L'insieme dei nomi delle impostazioni locali supportate da `_create_locale` sono descritti in [Nomi delle impostazioni locali, lingue e stringhe relative a paesi](../../c-runtime-library/locale-names-languages-and-country-region-strings.md).  Il set di stringhe di lingua e stringhe associate al paese o all'area geografica che sono supportate da `_create_locale` è elencato in [Stringhe relative a lingue](../../c-runtime-library/language-strings.md) e [Stringhe relative a paesi](../../c-runtime-library/country-region-strings.md).  
  
 Per ulteriori informazioni su queste impostazioni locali, vedere [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  
  
 Il nome precedente di questa funzione, `__create_locale` \(con due caratteri di sottolineatura\), è stato deprecato.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_create_locale`|\<locale.h\>|  
|`_wcreate_locale`|\<locale.h\> or \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
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
       //  
       if (!_strftime_l((char *)str, 100, "%#x",   
                     (const struct tm *)&thetime, locale))  
               printf("_strftime_l failed!\n");  
       else  
               printf("In de-CH locale, _strftime_l returns '%s'\n",   
                      str);  
  
       _free_locale(locale);  
  
       // Create a locale object representing the default C locale  
       locale = _create_locale(LC_ALL, "C");  
       time (&ltime);  
       _gmtime64_s(&thetime, &ltime);  
  
       if (!_strftime_l((char *)str, 100, "%#x",   
                     (const struct tm *)&thetime, locale))  
               printf("_strftime_l failed!\n");  
       else  
               printf("In 'C' locale, _strftime_l returns '%s'\n",   
                      str);  
  
       _free_locale(locale);  
}  
```  
  
## Esempio di output  
  
```  
In de-CH locale, _strftime_l returns 'Samstag, 9. Februar 2002'  
In 'C' locale, _strftime_l returns 'Saturday, February 09, 2002'  
```  
  
## Equivalente .NET Framework  
 [System::Globalization::CultureInfo Class](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx)  
  
## Vedere anche  
 [Nomi delle impostazioni locali, lingue e stringhe relative a paesi](../../c-runtime-library/locale-names-languages-and-country-region-strings.md)   
 [Stringhe relative a lingue](../../c-runtime-library/language-strings.md)   
 [Stringhe relative a paesi](../../c-runtime-library/country-region-strings.md)   
 [\_free\_locale](../../c-runtime-library/reference/free-locale.md)   
 [\_configthreadlocale](../../c-runtime-library/reference/configthreadlocale.md)   
 [setlocale](../../preprocessor/setlocale.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [\_mbclen, mblen, \_mblen\_l](../../c-runtime-library/reference/mbclen-mblen-mblen-l.md)   
 [strlen, wcslen, \_mbslen, \_mbslen\_l, \_mbstrlen, \_mbstrlen\_l](../../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)   
 [mbstowcs, \_mbstowcs\_l](../../c-runtime-library/reference/mbstowcs-mbstowcs-l.md)   
 [mbtowc, \_mbtowc\_l](../../c-runtime-library/reference/mbtowc-mbtowc-l.md)   
 [\_setmbcp](../../c-runtime-library/reference/setmbcp.md)   
 [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)   
 [strftime, wcsftime, \_strftime\_l, \_wcsftime\_l](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)   
 [strxfrm, wcsxfrm, \_strxfrm\_l, \_wcsxfrm\_l](../../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)   
 [wcstombs, \_wcstombs\_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md)   
 [wctomb, \_wctomb\_l](../../c-runtime-library/reference/wctomb-wctomb-l.md)