---
title: Conversione dei dati | Microsoft Docs
ms.custom: ''
ms.date: 03/21/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- c.conversions
dev_langs:
- C++
helpviewer_keywords:
- data conversion routines [C++]
- converting data
ms.assetid: b15b5268-7467-49f1-bf95-5299b598f94c
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f06153b4c4f037172e96e3ce1222311a82c71772
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="data-conversion"></a>Conversione dei dati

Queste routine convertono i dati da un formato a un altro. In genere l'esecuzione di queste routine è più veloce delle conversioni che si possono scrivere. Ogni routine che inizia con un prefisso *to* viene implementata come una funzione o una macro. Per altre informazioni sulla scelta di un'implementazione, vedere [Choosing Between Functions and Macros](../c-runtime-library/recommendations-for-choosing-between-functions-and-macros.md) (Scelta tra funzioni e macro).

## <a name="data-conversion-routines"></a>Routine di conversione dati

|Routine|Usa|
|-------------|---------|
|[abs](../c-runtime-library/reference/abs-labs-llabs-abs64.md)|Trova il valore assoluto di un intero|
|[atof, _atof_l](../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)|Converte una stringa a **float**|
|[atoi, _atoi_l](../c-runtime-library/reference/atoi-atoi-l-wtoi-wtoi-l.md)|Converte una stringa a **int**|
|[_atoi64, _atoi64_l](../c-runtime-library/reference/atoi64-atoi64-l-wtoi64-wtoi64-l.md)|Converte una a stringa a **__int64** o **long long**|
|[atol, _atol_l](../c-runtime-library/reference/atol-atol-l-wtol-wtol-l.md)|Converte una stringa a **long**|
|[c16rtomb, c32rtomb](../c-runtime-library/reference/c16rtomb-c32rtomb1.md)|Converte un carattere UTF-16 o UTF-32 nel carattere multibyte equivalente|
|[_ecvt](../c-runtime-library/reference/ecvt.md), [_ecvt_s](../c-runtime-library/reference/ecvt-s.md)|Converte **double** in una stringa di lunghezza specificata|
|[_fcvt](../c-runtime-library/reference/fcvt.md), [_fcvt_s](../c-runtime-library/reference/fcvt-s.md)|Converte **double** in una stringa con un numero di cifre specificato dopo il separatore decimale|
|[_gcvt](../c-runtime-library/reference/gcvt.md), [_gcvt_s](../c-runtime-library/reference/gcvt-s.md)|Converte un numero **double** in stringa e memorizza la stringa nel buffer|
|[_itoa, _ltoa, _ultoa, _i64toa, _ui64toa, _itow, _ltow, ultow, _i64tow, _ui64tow](../c-runtime-library/reference/itoa-itow.md), [_itoa_s, _ltoa_s, _ultoa_s, _i64toa_s, _ui64toa_s, _itow_s, _ltow_s, _ultow_s, _i64tow_s, _ui64tow_s](../c-runtime-library/reference/itoa-s-itow-s.md)|Converte i tipi intero in stringa|
|[labs](../c-runtime-library/reference/abs-labs-llabs-abs64.md)|Trova il valore assoluto di un intero **long**|
|[llabs](../c-runtime-library/reference/abs-labs-llabs-abs64.md)|Trova il valore assoluto di un intero **long long**|
|[_mbbtombc, _mbbtombc_l](../c-runtime-library/reference/mbbtombc-mbbtombc-l.md)|Converte un carattere multibyte a 1 byte in un carattere multibyte a 2 byte corrispondente|
|[_mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l](../c-runtime-library/reference/mbcjistojms-mbcjistojms-l-mbcjmstojis-mbcjmstojis-l.md)|Converte un carattere JIS (Japan Industry Standard) in un carattere JMS (Japan Microsoft Standard)|
|[_mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l](../c-runtime-library/reference/mbcjistojms-mbcjistojms-l-mbcjmstojis-mbcjmstojis-l.md)|Converte un carattere JMS in un carattere JIS|
|[_mbctohira, _mbctohira_l, _mbctokata, _mbctokata_l](../c-runtime-library/reference/mbctohira-mbctohira-l-mbctokata-mbctokata-l.md)|Converte un carattere multibyte in codice hiragana a 1 byte|
|[_mbctohira, _mbctohira_l, _mbctokata, _mbctokata_l](../c-runtime-library/reference/mbctohira-mbctohira-l-mbctokata-mbctokata-l.md)|Converte un carattere multibyte in codice katakana a 1 byte|
|[_mbctombb, _mbctombb_l](../c-runtime-library/reference/mbctombb-mbctombb-l.md)|Converte un carattere multibyte a 2 byte in un carattere multibyte a 1 byte corrispondente|
|[mbrtoc16, mbrtoc32](../c-runtime-library/reference/mbrtoc16-mbrtoc323.md)|Converte un carattere multibyte nel carattere UTF-16 o UTF-32 equivalente|
|[mbstowcs, _mbstowcs_l](../c-runtime-library/reference/mbstowcs-mbstowcs-l.md), [mbstowcs_s, _mbstowcs_s_l](../c-runtime-library/reference/mbstowcs-s-mbstowcs-s-l.md)|Converte una sequenza di caratteri multibyte in una sequenza di caratteri wide corrispondente|
|[mbtowc, _mbtowc_l](../c-runtime-library/reference/mbtowc-mbtowc-l.md)|Converte un carattere multibyte in un carattere wide corrispondente|
|[strtod, _strtod_l, wcstod, _wcstod_l](../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)|Converte una stringa in **double**|
|[strtol, wcstol, _strtol_l, _wcstol_l](../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md)|Converte una stringa in un intero **long**|
|[strtoul, _strtoul_l, wcstoul, _wcstoul_l](../c-runtime-library/reference/strtoul-strtoul-l-wcstoul-wcstoul-l.md)|Converte una stringa in un intero **unsigned long**|
|[strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)|Trasforma la stringa in un formato basato su informazioni specifiche delle impostazioni locali|
|[toascii, __toascii](../c-runtime-library/reference/toascii-toascii.md)|Converte un carattere in codice ASCII||
|[tolower, _tolower, towlower, _tolower_l, _towlower_l](../c-runtime-library/reference/tolower-tolower-towlower-tolower-l-towlower-l.md), [_mbctolower, _mbctolower_l, _mbctoupper, _mbctoupper_l](../c-runtime-library/reference/mbctolower-mbctolower-l-mbctoupper-mbctoupper-l.md)|Verifica un carattere e lo converte in minuscolo (se attualmente è maiuscolo)|
|[tolower, _tolower, towlower, _tolower_l, _towlower_l](../c-runtime-library/reference/tolower-tolower-towlower-tolower-l-towlower-l.md)|Converte un carattere in minuscolo in maniera incondizionata|[System::String::ToLower](https://msdn.microsoft.com/en-us/library/system.string.tolower.aspx)|
|[toupper, _toupper, towupper, _toupper_l, _towupper_l](../c-runtime-library/reference/toupper-toupper-towupper-toupper-l-towupper-l.md), [_mbctolower, _mbctolower_l, _mbctoupper, _mbctoupper_l](../c-runtime-library/reference/mbctolower-mbctolower-l-mbctoupper-mbctoupper-l.md)|Verifica un carattere e lo converte in maiuscolo (se attualmente è minuscolo)|
|[toupper, _toupper, towupper, _toupper_l, _towupper_l](../c-runtime-library/reference/toupper-toupper-towupper-toupper-l-towupper-l.md)|Converte un carattere in maiuscolo in maniera incondizionata|
|[wcstombs, _wcstombs_l](../c-runtime-library/reference/wcstombs-wcstombs-l.md), [wcstombs_s, _wcstombs_s_l](../c-runtime-library/reference/wcstombs-s-wcstombs-s-l.md)|Converte una sequenza di caratteri wide in una sequenza di caratteri multibyte corrispondente|
|[wctomb, _wctomb_l](../c-runtime-library/reference/wctomb-wctomb-l.md), [wctomb_s, _wctomb_s_l](../c-runtime-library/reference/wctomb-s-wctomb-s-l.md)|Converte un carattere wide in un carattere multibyte corrispondente|
|[_wtof, _wtof_l](../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)|Converte una stringa di caratteri wide in **double**|
|[_wtoi, _wtoi_l](../c-runtime-library/reference/atoi-atoi-l-wtoi-wtoi-l.md)|Converte una stringa di caratteri wide in **int**|
|[_wtoi64, _wtoi64_l](../c-runtime-library/reference/atoi64-atoi64-l-wtoi64-wtoi64-l.md)|Converte una stringa di caratteri wide in **__int64** o **long long**|
|[_wtol, _wtol_l](../c-runtime-library/reference/atol-atol-l-wtol-wtol-l.md)|Converte una stringa di caratteri wide in **long**|

## <a name="see-also"></a>Vedere anche

[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
