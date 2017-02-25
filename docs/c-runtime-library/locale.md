---
title: "Impostazioni locali | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.international"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "informazioni sul paese"
  - "routine di informazioni sulla lingua"
  - "routine di impostazioni locali"
  - "localizzazione, impostazioni locali"
  - "setlocale (funzione)"
ms.assetid: 442f8112-9288-44d7-be3c-15d22652093a
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# Impostazioni locali
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

*Le impostazioni locali* si riferiscono al paese e alle impostazioni della lingua che è possibile utilizzare per personalizzare il programma.  Alcune categorie dipendenti dalle impostazioni locali includono la formattazione delle date e il formato di visualizzazione dei valori monetari.  Per ulteriori informazioni, vedere [Categorie di impostazioni locali](../c-runtime-library/locale-categories.md).  
  
 Utilizzare la funzione [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) per modificare o eseguire una query su alcuni o tutti i programmi correnti o per eseguire le informazioni sulle impostazioni locali utilizzando funzioni senza il suffisso `_l`.  Le funzioni con il suffisso `_l` utilizzeranno il parametro passato per le informazioni sulle impostazioni locali durante l'esecuzione della sola funzione specificata.  Per creare impostazioni locali per l'utilizzo con una funzione con un suffisso `_l`, utilizzare [\_create\_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md).  Per liberare le impostazioni locali, utilizzare [\_free\_locale](../c-runtime-library/reference/free-locale.md).  Per ottenere le impostazioni locali, utilizzare [\_get\_current\_locale](../c-runtime-library/reference/get-current-locale.md).  
  
 Utilizzare [\_configthreadlocale](../c-runtime-library/reference/configthreadlocale.md) per controllare se ogni thread ha proprie impostazioni locali, o se tutti i thread in un programma condividono le stesse impostazioni locali.  Per ulteriori informazioni, consultare [Impostazioni locali e tabelle dei codici](../text/locales-and-code-pages.md).  
  
 Sono disponibili più versioni sicure delle funzioni presenti nella seguente tabella, indicate dal suffisso \("sicuro"\) `_s`.  Per ulteriori informazioni, vedere [Funzionalità di sicurezza in CRT](../c-runtime-library/security-features-in-the-crt.md).  
  
### Routine dipendenti dalle impostazioni locali  
  
|Routine|Utilizzo|Dipendenza dell'impostazione di categoria `setlocale`|  
|-------------|--------------|-----------------------------------------------------------|  
|[atof, \_atof\_l, \_wtof, \_wtof\_l](../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)|Converte un carattere in un valore a virgola mobile|`LC_NUMERIC`|  
|[atoi, \_atoi\_l, \_wtoi, \_wtoi\_l](../c-runtime-library/reference/atoi-atoi-l-wtoi-wtoi-l.md)|Converte un carattere in un valore integer|`LC_NUMERIC`|  
|[\_atoi64, \_atoi64\_l, \_wtoi64, \_wtoi64\_l](../c-runtime-library/reference/atoi64-atoi64-l-wtoi64-wtoi64-l.md)|Converte un carattere in un valore integer a 64\-bit|`LC_NUMERIC`|  
|[atol, \_atol\_l, \_wtol, \_wtol\_l](../c-runtime-library/reference/atol-atol-l-wtol-wtol-l.md)|Converte un carattere in un valore long|`LC_NUMERIC`|  
|[\_atodbl, \_atodbl\_l, \_atoldbl, \_atoldbl\_l, \_atoflt, \_atoflt\_l](../c-runtime-library/reference/atodbl-atodbl-l-atoldbl-atoldbl-l-atoflt-atoflt-l.md)|Converte un carattere in un valore double\-long|`LC_NUMERIC`|  
|[is Routines](../c-runtime-library/is-isw-routines.md)|Test fornito per intero per particolari condizioni.|`LC_CTYPE`|  
|[isleadbyte, \_isleadbyte\_l](../c-runtime-library/reference/isleadbyte-isleadbyte-l.md)|Test per il lead byte|`LC_CTYPE`|  
|[localeconv](../c-runtime-library/reference/localeconv.md)|Legge valori appropriati per formattare quantità numeriche|`LC_MONETARY, LC_NUMERIC`|  
|[MB\_CUR\_MAX](../c-runtime-library/mb-cur-max.md)|Lunghezza massima in byte di un carattere multibyte in impostazioni locali correnti \(macro definita da STDLIB.H\)|`LC_CTYPE`|  
|[\_mbccpy, \_mbccpy\_l](../c-runtime-library/reference/mbccpy-mbccpy-l.md),[\_mbccpy\_s, \_mbccpy\_s\_l](../c-runtime-library/reference/mbccpy-s-mbccpy-s-l.md)|Copia di un carattere multibyte|`LC_CTYPE`|  
|[\_mbclen, mblen, \_mblen\_l](../c-runtime-library/reference/mbclen-mblen-mblen-l.md)|Convalida e restituisce il numero di byte in carattere multibyte|`LC_CTYPE`|  
|[strlen, wcslen, \_mbslen, \_mbslen\_l, \_mbstrlen, \_mbstrlen\_l](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)|Per le stringhe di caratteri multibyte: convalida ciascun carattere della stringa; restituisce la lunghezza della stringa|`LC_CTYPE`|  
|[mbstowcs, \_mbstowcs\_l](../c-runtime-library/reference/mbstowcs-mbstowcs-l.md),[mbstowcs\_s, \_mbstowcs\_s\_l](../c-runtime-library/reference/mbstowcs-s-mbstowcs-s-l.md)|Converte una sequenza di caratteri multibyte a una corrispondente sequenza di caratteri di tipo wide|`LC_CTYPE`|  
|[mbtowc, \_mbtowc\_l](../c-runtime-library/reference/mbtowc-mbtowc-l.md)|Converte il carattere multibyte in caratteri estesi corrispondenti|`LC_CTYPE`|  
|Funzioni [printf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)|Scrive l'output formattato|`LC_NUMERIC` \(determina l'output di caratteri radice\)|  
|Funzioni [scanf](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)|Legge l'input formattato|`LC_NUMERIC` \(determina il riconoscimento di caratteri radice\)|  
|[setlocale, \_wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)|Seleziona le impostazioni locali per il programma|Non applicabile|  
|[strcoll, wcscoll, \_mbscoll, \_strcoll\_l, \_wcscoll\_l, \_mbscoll\_l](../c-runtime-library/reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md)|Confronta i caratteri di due stringhe|`LC_COLLATE`|  
|[\_stricmp, \_wcsicmp, \_mbsicmp, \_stricmp\_l, \_wcsicmp\_l, \_mbsicmp\_l](../c-runtime-library/reference/stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md)|Confronta due stringhe indipendentemente dal case|`LC_CTYPE`|  
|[\_stricoll, \_wcsicoll, \_mbsicoll, \_stricoll\_l, \_wcsicoll\_l, \_mbsicoll\_l](../c-runtime-library/reference/stricoll-wcsicoll-mbsicoll-stricoll-l-wcsicoll-l-mbsicoll-l.md)|Confronta i caratteri di due stringhe \(senza distinzione tra maiuscole e minuscole\)|`LC_COLLATE`|  
|[\_strncoll, \_wcsncoll, \_mbsncoll, \_strncoll\_l, \_wcsncoll\_l, \_mbsncoll\_l](../c-runtime-library/reference/strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|Confronta i primi caratteri `n` di due stringhe|`LC_COLLATE`|  
|[\_strnicmp, \_wcsnicmp, \_mbsnicmp, \_strnicmp\_l, \_wcsnicmp\_l, \_mbsnicmp\_l](../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)|Confronta i caratteri di due stringhe indipendentemente dall'evento.|`LC_CTYPE`|  
|[\_strnicoll, \_wcsnicoll, \_mbsnicoll, \_strnicoll\_l, \_wcsnicoll\_l, \_mbsnicoll\_l](../c-runtime-library/reference/strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|Confronta i primi caratteri `n` di due stringhe \(senza distinzione tra maiuscole e minuscole\)|`LC_COLLATE`|  
|[strftime, wcsftime, \_strftime\_l, \_wcsftime\_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)|Formatta il valore di data e ora secondo l'argomento `format`|`LC_TIME`|  
|[\_strlwr, \_wcslwr, \_mbslwr, \_strlwr\_l, \_wcslwr\_l, \_mbslwr\_l](../c-runtime-library/reference/strlwr-wcslwr-mbslwr-strlwr-l-wcslwr-l-mbslwr-l.md),[\_strlwr\_s, \_strlwr\_s\_l, \_mbslwr\_s, \_mbslwr\_s\_l, \_wcslwr\_s, \_wcslwr\_s\_l](../c-runtime-library/reference/strlwr-s-strlwr-s-l-mbslwr-s-mbslwr-s-l-wcslwr-s-wcslwr-s-l.md)|Converte ogni lettera maiuscola della stringa data in minuscolo|`LC_CTYPE`|  
|[strtod, \_strtod\_l, wcstod, \_wcstod\_l](../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)|Converte una stringa di caratteri in un valore `double`.|`LC_NUMERIC` \(determina il riconoscimento di caratteri radice\)|  
|[strtol, wcstol, \_strtol\_l, \_wcstol\_l](../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md)|Converte una stringa di caratteri in un valore `long`.|`LC_NUMERIC` \(determina il riconoscimento di caratteri radice\)|  
|[strtoul, \_strtoul\_l, wcstoul, \_wcstoul\_l](../c-runtime-library/reference/strtoul-strtoul-l-wcstoul-wcstoul-l.md)|Converte una stringa di caratteri in un valore long unsigned|`LC_NUMERIC` \(determina il riconoscimento di caratteri radice\)|  
|[\_strupr, \_strupr\_l, \_mbsupr, \_mbsupr\_l, \_wcsupr\_l, \_wcsupr](../c-runtime-library/reference/strupr-strupr-l-mbsupr-mbsupr-l-wcsupr-l-wcsupr.md),[\_strupr\_s, \_strupr\_s\_l, \_mbsupr\_s, \_mbsupr\_s\_l, \_wcsupr\_s, \_wcsupr\_s\_l](../c-runtime-library/reference/strupr-s-strupr-s-l-mbsupr-s-mbsupr-s-l-wcsupr-s-wcsupr-s-l.md)|Converte ogni lettera minuscola della stringa data in maiuscolo|`LC_CTYPE`|  
|[strxfrm, wcsxfrm, \_strxfrm\_l, \_wcsxfrm\_l](../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)|Converte la stringa in un formato raccolto a seconda delle impostazioni locali|`LC_COLLATE`|  
|[tolower, \_tolower, towlower, \_tolower\_l, \_towlower\_l](../c-runtime-library/reference/tolower-tolower-towlower-tolower-l-towlower-l.md),[\_mbctolower, \_mbctolower\_l, \_mbctoupper, \_mbctoupper\_l](../c-runtime-library/reference/mbctolower-mbctolower-l-mbctoupper-mbctoupper-l.md)|Converte il carattere dato nel corrispondere carattere minuscolo|`LC_CTYPE`|  
|[toupper, \_toupper, towupper, \_toupper\_l, \_towupper\_l](../c-runtime-library/reference/toupper-toupper-towupper-toupper-l-towupper-l.md),[\_mbctolower, \_mbctolower\_l, \_mbctoupper, \_mbctoupper\_l](../c-runtime-library/reference/mbctolower-mbctolower-l-mbctoupper-mbctoupper-l.md)|Converte il carattere dato nel corrispondere carattere maiuscolo|`LC_CTYPE`|  
|[wcstombs, \_wcstombs\_l](../c-runtime-library/reference/wcstombs-wcstombs-l.md),[wcstombs\_s, \_wcstombs\_s\_l](../c-runtime-library/reference/wcstombs-s-wcstombs-s-l.md)|Converte una sequenza di caratteri di tipo wide a una corrispondente sequenza di caratteri multibyte|`LC_CTYPE`|  
|[wctomb, \_wctomb\_l](../c-runtime-library/reference/wctomb-wctomb-l.md),[wctomb\_s, \_wctomb\_s\_l](../c-runtime-library/reference/wctomb-s-wctomb-s-l.md)|Converte il carattere di tipo wide nei corrispondenti caratteri multibyte|`LC_CTYPE`|  
  
> [!NOTE]
>  Per le routine multibyte, la tabella codici multibyte deve essere equivalente alle impostazioni locali impostate con [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md).  [\_setmbcp](../c-runtime-library/reference/setmbcp.md), con un argomento di `_MB_CP_LOCALE` rende la tabella codici multibyte la stessa della tabella codici `setlocale`.  
  
## Vedere anche  
 [Internazionalizzazione](../c-runtime-library/internationalization.md)   
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)