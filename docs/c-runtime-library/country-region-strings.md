---
title: Stringhe di paesi e aree geografiche
ms.date: 11/04/2016
f1_keywords:
- c.strings
helpviewer_keywords:
- country/region strings
ms.assetid: 5baf0ccf-0d9b-40dc-83bd-323705287930
ms.openlocfilehash: 49eb6bc4473d9e54c06c3bf9290f8c3c96640415
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69500239"
---
# <a name="countryregion-strings"></a>stringhe relative a paesi

Le stringhe di paese e area geografica possono essere combinate con una stringa di lingua per creare una specifica delle impostazioni locali per le funzioni `setlocale`, `_wsetlocale`, `_create_locale`e `_wcreate_locale` . Per un elenco dei nomi di paese e area supportati dalle varie versioni del sistema operativo Windows, vedere le colonne **Lingua**, **Posizione** e **Tag lingua** della tabella in [Appendice A: Product Behavior](https://msdn.microsoft.com/library/cc233982.aspx) (Appendice A: Comportamento del prodotto) in [MS-LCID]: Windows Language Code Identifier (LCID) Reference (Informazioni di riferimento sugli identificatori LCID di Windows). Per un esempio di codice che enumera i nomi delle impostazioni locali disponibili e i valori correlati, vedere [NLS: esempio di API basate sui nomi](/windows/win32/intl/nls--name-based-apis-sample).

## <a name="additional-supported-country-and-region-strings"></a>Altre stringhe di paese e area geografica supportate

L'implementazione della libreria di runtime Microsoft C supporta anche le seguenti stringhe e abbreviazioni aggiuntive per paese/area geografica:

|Stringa paese/area geografica|Abbreviazione|Nome equivalente delle impostazioni locali|
|----------------------------|------------------|----------------------------|
|america|Stati Uniti|en-US|
|britain|GBR|en-GB|
|china|CHN|zh-CN|
|czech|CZE|cs-CZ|
|england|GBR|en-GB|
|great britain|GBR|en-GB|
|holland|NLD|nl-NL|
|hong-kong|HKG|zh-HK|
|new-zealand|NZL|en-NZ|
|nz|NZL|en-NZ|
|pr china|CHN|zh-CN|
|pr-china|CHN|zh-CN|
|puerto-rico|PRI|es-PR|
|slovak|SVK|sk-SK|
|south africa|ZAF|af-ZA|
|south korea|KOR|ko-KR|
|south-africa|ZAF|af-ZA|
|south-korea|KOR|ko-KR|
|trinidad & tobago|TTO|en-TT|
|uk|GBR|en-GB|
|united-kingdom|GBR|en-GB|
|united-states|Stati Uniti|en-US|
|us|Stati Uniti|en-US|

## <a name="see-also"></a>Vedere anche

[Nomi delle impostazioni locali, lingue e stringhe relative a paesi](../c-runtime-library/locale-names-languages-and-country-region-strings.md)<br/>
[Stringhe di lingue](../c-runtime-library/language-strings.md)<br/>
[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)<br/>
[_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)
