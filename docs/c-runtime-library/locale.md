---
title: Impostazioni locali | Microsoft Docs
ms.custom: ''
ms.date: 04/11/2018
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- c.international
dev_langs:
- C++
helpviewer_keywords:
- localization, locale
- country information
- language information routines
- setlocale function
- locale routines
ms.assetid: 442f8112-9288-44d7-be3c-15d22652093a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3f3bf660b2e1c8301e9c6c8ba1bd1e11fa3956de
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46082222"
---
# <a name="locale"></a>Impostazioni locali

Le *impostazioni locali* si riferiscono alle impostazioni di paese/area geografica e lingua che è possibile usare per personalizzare il programma. Alcune categorie dipendenti dalle impostazioni locali includono i formati di visualizzazione per date e valori monetari. Per altre informazioni, vedere [Categorie di impostazioni locali](../c-runtime-library/locale-categories.md).

Usare la funzione [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) per modificare o eseguire una query su alcune o tutte le informazioni riguardanti il programma corrente o le impostazioni locali del thread usando funzioni senza il suffisso **_l**. Le funzioni con il suffisso **_l** useranno il parametro delle impostazioni locali passato per le informazioni sulle impostazioni locali durante l'esecuzione della sola funzione specificata. Per creare impostazioni locali da usare con una funzione con suffisso **_l**, usare [_create_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md). Per rendere disponibili le impostazioni locali, usare [_free_locale](../c-runtime-library/reference/free-locale.md). Per ottenere le impostazioni locali correnti, usare [_get_current_locale](../c-runtime-library/reference/get-current-locale.md).

Usare [_configthreadlocale](../c-runtime-library/reference/configthreadlocale.md) per verificare se ogni thread ha le proprie impostazioni locali o se tutti i thread in un programma condividono le stesse impostazioni locali. Per alte informazioni, vedere [Impostazioni locali e tabelle codici](../text/locales-and-code-pages.md).

Sono disponibili più versioni sicure delle funzioni presenti nella seguente tabella, indicate dal suffisso **_s** ("sicuro"). Per altre informazioni, vedere [Security Features in the CRT](../c-runtime-library/security-features-in-the-crt.md).

## <a name="locale-dependent-routines"></a>Routine dipendenti dalle impostazioni locali

|Routine|Usa|Dipendenza dell'impostazione di categoria **setlocale**|
|-------------|---------|---------------------------------------------|
|[atof, _atof_l, _wtof, _wtof_l](../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)|Convertire un carattere in un valore a virgola mobile|**LC_NUMERIC**|
|[atoi, _atoi_l, _wtoi, _wtoi_l](../c-runtime-library/reference/atoi-atoi-l-wtoi-wtoi-l.md)|Convertire un carattere in un Integer|**LC_NUMERIC**|
|[_atoi64, _atoi64_l, _wtoi64, _wtoi64_l](../c-runtime-library/reference/atoi64-atoi64-l-wtoi64-wtoi64-l.md)|Convertire un carattere in un Integer a 64-bit|**LC_NUMERIC**|
|[atol, _atol_l, _wtol, _wtol_l](../c-runtime-library/reference/atol-atol-l-wtol-wtol-l.md)|Convertire un carattere in un valore long|**LC_NUMERIC**|
|[_atodbl, _atodbl_l, _atoldbl, _atoldbl_l, _atoflt, _atoflt_l](../c-runtime-library/reference/atodbl-atodbl-l-atoldbl-atoldbl-l-atoflt-atoflt-l.md)|Convertire un carattere in un valore double-long|**LC_NUMERIC**|
|[is Routines](../c-runtime-library/is-isw-routines.md)|Testare l'Integer specificato per condizioni particolari.|**LC_CTYPE**|
|[isleadbyte, _isleadbyte_l](../c-runtime-library/reference/isleadbyte-isleadbyte-l.md)|Test per il byte iniziale|**LC_CTYPE**|
|[localeconv](../c-runtime-library/reference/localeconv.md)|Leggere i valori appropriati per la formattazione di quantità numeriche|`LC_MONETARY, LC_NUMERIC`|
|[MB_CUR_MAX](../c-runtime-library/mb-cur-max.md)|Lunghezza massima in byte di un carattere multibyte in impostazioni locali correnti (macro definita in STDLIB.H)|**LC_CTYPE**|
|[_mbccpy, _mbccpy_l](../c-runtime-library/reference/mbccpy-mbccpy-l.md),[_mbccpy_s, _mbccpy_s_l](../c-runtime-library/reference/mbccpy-s-mbccpy-s-l.md)|Copiare un carattere multibyte|**LC_CTYPE**|
|[_mbclen, mblen, _mblen_l](../c-runtime-library/reference/mbclen-mblen-mblen-l.md)|Convalidare e restituire il numero di byte in carattere multibyte|**LC_CTYPE**|
|[strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)|Per le stringhe di caratteri multibyte: convalidare ciascun carattere della stringa; restituire la lunghezza della stringa|**LC_CTYPE**|
|[mbstowcs, _mbstowcs_l](../c-runtime-library/reference/mbstowcs-mbstowcs-l.md),[mbstowcs_s, _mbstowcs_s_l](../c-runtime-library/reference/mbstowcs-s-mbstowcs-s-l.md)|Converte una sequenza di caratteri multibyte in una sequenza di caratteri wide corrispondente|**LC_CTYPE**|
|[mbtowc, _mbtowc_l](../c-runtime-library/reference/mbtowc-mbtowc-l.md)|Converte un carattere multibyte in un carattere wide corrispondente|**LC_CTYPE**|
|Funzioni [printf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)|Scrivere l'output formattato|**LC_NUMERIC** (determina l'output di caratteri radice)|
|Funzioni [scanf](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)|Leggere l'input formattato|**LC_NUMERIC** (determina il riconoscimento di caratteri radice)|
|[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)|Selezionare le impostazioni locali per il programma|Non applicabile|
|[strcoll, wcscoll, _mbscoll, _strcoll_l, _wcscoll_l, _mbscoll_l](../c-runtime-library/reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md)|Confronta i caratteri di due stringhe|**LC_COLLATE**|
|[_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](../c-runtime-library/reference/stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md)|Confronta due stringhe senza fare distinzione tra maiuscole e minuscole|**LC_CTYPE**|
|[_stricoll, _wcsicoll, _mbsicoll, _stricoll_l, _wcsicoll_l, _mbsicoll_l](../c-runtime-library/reference/stricoll-wcsicoll-mbsicoll-stricoll-l-wcsicoll-l-mbsicoll-l.md)|Confrontare i caratteri di due stringhe (senza distinzione tra maiuscole e minuscole)|**LC_COLLATE**|
|[_strncoll, _wcsncoll, _mbsncoll, _strncoll_l, _wcsncoll_l, _mbsncoll_l](../c-runtime-library/reference/strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|Confrontare i primi caratteri **n** di due stringhe|**LC_COLLATE**|
|[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)|Confrontare i caratteri di due stringhe senza fare distinzione tra maiuscole e minuscole.|**LC_CTYPE**|
|[_strnicoll, _wcsnicoll, _mbsnicoll, _strnicoll_l, _wcsnicoll_l, _mbsnicoll_l](../c-runtime-library/reference/strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|Confrontare i primi caratteri **n** di due stringhe (senza distinzione tra maiuscole e minuscole)|**LC_COLLATE**|
|[strftime, wcsftime, _strftime_l, _wcsftime_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)|Formattare il valore di data e ora secondo l'argomento **format** specificato|**LC_TIME**|
|[_strlwr, _wcslwr, _mbslwr, _strlwr_l, _wcslwr_l, _mbslwr_l](../c-runtime-library/reference/strlwr-wcslwr-mbslwr-strlwr-l-wcslwr-l-mbslwr-l.md),[_strlwr_s, _strlwr_s_l, _mbslwr_s, _mbslwr_s_l, _wcslwr_s, _wcslwr_s_l](../c-runtime-library/reference/strlwr-s-strlwr-s-l-mbslwr-s-mbslwr-s-l-wcslwr-s-wcslwr-s-l.md)|Convertire, sul posto, ogni lettera maiuscola della stringa specificata in lettera minuscola|**LC_CTYPE**|
|[strtod, _strtod_l, wcstod, _wcstod_l](../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)|Convertire una stringa di caratteri in un valore **double**|**LC_NUMERIC** (determina il riconoscimento di caratteri radice)|
|[strtol, wcstol, _strtol_l, _wcstol_l](../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md)|Convertire una stringa di caratteri in un valore **long**|**LC_NUMERIC** (determina il riconoscimento di caratteri radice)|
|[strtoul, _strtoul_l, wcstoul, _wcstoul_l](../c-runtime-library/reference/strtoul-strtoul-l-wcstoul-wcstoul-l.md)|Convertire una stringa di caratteri in un valore long unsigned|**LC_NUMERIC** (determina il riconoscimento di caratteri radice)|
|[_strupr, _strupr_l, _mbsupr, _mbsupr_l, _wcsupr_l, _wcsupr](../c-runtime-library/reference/strupr-strupr-l-mbsupr-mbsupr-l-wcsupr-l-wcsupr.md),[_strupr_s, _strupr_s_l, _mbsupr_s, _mbsupr_s_l, _wcsupr_s, _wcsupr_s_l](../c-runtime-library/reference/strupr-s-strupr-s-l-mbsupr-s-mbsupr-s-l-wcsupr-s-wcsupr-s-l.md)|Convertire, sul posto, ogni lettera minuscola della stringa in una lettera maiuscola|**LC_CTYPE**|
|[strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)|Trasformare la stringa in un formato fascicolato in base alle impostazioni locali|**LC_COLLATE**|
|[tolower, _tolower, towlower, _tolower_l, _towlower_l](../c-runtime-library/reference/tolower-tolower-towlower-tolower-l-towlower-l.md),[_mbctolower, _mbctolower_l, _mbctoupper, _mbctoupper_l](../c-runtime-library/reference/mbctolower-mbctolower-l-mbctoupper-mbctoupper-l.md)|Convertire il carattere dato nel carattere minuscolo corrispondente|**LC_CTYPE**|
|[toupper, _toupper, towupper, _toupper_l, _towupper_l](../c-runtime-library/reference/toupper-toupper-towupper-toupper-l-towupper-l.md),[_mbctolower, _mbctolower_l, _mbctoupper, _mbctoupper_l](../c-runtime-library/reference/mbctolower-mbctolower-l-mbctoupper-mbctoupper-l.md)|Convertire il carattere dato nel carattere maiuscolo corrispondente|**LC_CTYPE**|
|[wcstombs, _wcstombs_l](../c-runtime-library/reference/wcstombs-wcstombs-l.md),[wcstombs_s, _wcstombs_s_l](../c-runtime-library/reference/wcstombs-s-wcstombs-s-l.md)|Converte una sequenza di caratteri wide in una sequenza di caratteri multibyte corrispondente|**LC_CTYPE**|
|[wctomb, _wctomb_l](../c-runtime-library/reference/wctomb-wctomb-l.md),[wctomb_s, _wctomb_s_l](../c-runtime-library/reference/wctomb-s-wctomb-s-l.md)|Converte un carattere wide in un carattere multibyte corrispondente|**LC_CTYPE**|

> [!NOTE]
> Per le routine multibyte, la tabella codici multibyte deve essere equivalente alle impostazioni locali impostate con [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md). [_setmbcp](../c-runtime-library/reference/setmbcp.md), con un argomento di **_MB_CP_LOCALE**, rende la tabella codici multibyte la stessa della tabella codici **setlocale**.

## <a name="see-also"></a>Vedere anche

[Internazionalizzazione](../c-runtime-library/internationalization.md)<br/>
[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
