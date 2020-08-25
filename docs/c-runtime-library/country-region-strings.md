---
title: Stringhe di paesi e aree geografiche
ms.date: 11/04/2016
helpviewer_keywords:
- country/region strings
ms.assetid: 5baf0ccf-0d9b-40dc-83bd-323705287930
ms.openlocfilehash: d5d8c10e30886c1b34bb5dc95296bc594acda1a4
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88831853"
---
# <a name="countryregion-strings"></a>stringhe relative a paesi

Le stringhe di paese e area geografica possono essere combinate con una stringa di lingua per creare una specifica delle impostazioni locali per le funzioni `setlocale`, `_wsetlocale`, `_create_locale`e `_wcreate_locale` . Per gli elenchi di nomi di paese e di area supportati da varie versioni del sistema operativo Windows, vedere le colonne **Language**, **location**e **Tag Language** della tabella in [appendice a: comportamento del prodotto](/openspecs/windows_protocols/ms-lcid/a9eac961-e77d-41a6-90a5-ce1a8b0cdb9c) in \[ MS-LCID]: informazioni di riferimento sull'identificatore del codice lingua (LCID) di Windows. Per un esempio di codice che enumera i nomi delle impostazioni locali disponibili e i valori correlati, vedere [NLS: Name-based APIs Sample](/windows/win32/intl/nls--name-based-apis-sample) (NLS: esempio di API basate sui nomi).

## <a name="additional-supported-country-and-region-strings"></a>Altre stringhe di paese e area geografica supportate

L'implementazione della libreria di runtime Microsoft C supporta anche le seguenti stringhe e abbreviazioni aggiuntive per paese/area geografica:

|Stringa paese/area geografica|Abbreviazione|Nome equivalente delle impostazioni locali|
|----------------------------|------------------|----------------------------|
|america|USA|it-IT|
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
|united-states|USA|it-IT|
|us|USA|it-IT|

## <a name="see-also"></a>Vedere anche

[Nomi delle impostazioni locali, lingue e stringhe di paese/area geografica](../c-runtime-library/locale-names-languages-and-country-region-strings.md)<br/>
[Stringhe relative a lingue](../c-runtime-library/language-strings.md)<br/>
[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)<br/>
[_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)
