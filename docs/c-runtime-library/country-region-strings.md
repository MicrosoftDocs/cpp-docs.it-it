---
title: Stringhe di paese e area geografica | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- c.strings
dev_langs:
- C++
helpviewer_keywords:
- country/region strings
ms.assetid: 5baf0ccf-0d9b-40dc-83bd-323705287930
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f227feec25e3b487772f8e469651f08be825419f
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39605630"
---
# <a name="countryregion-strings"></a>Country/Region Strings

Le stringhe di paese e area geografica possono essere combinate con una stringa di lingua per creare una specifica delle impostazioni locali per le funzioni `setlocale`, `_wsetlocale`, `_create_locale`e `_wcreate_locale` . Per un elenco dei nomi di paese e area supportati dalle varie versioni del sistema operativo Windows, vedere le colonne **Language** (Lingua), **Location** (Posizione) e **Language tag** (Tag lingua) della tabella in [Appendix A: Product Behavior](https://msdn.microsoft.com/library/cc233982.aspx) (Appendice A: comportamento del prodotto) in "[MS-LCID]: Windows Language Code Identifier (LCID) Reference" (Informazioni di riferimento sugli identificatori di lingua (LCID) di Windows). Per un esempio di codice che enumera i nomi delle impostazioni locali disponibili e i valori correlati, vedere [NLS: Name-based APIs Sample](/windows/desktop/intl/nls--name-based-apis-sample) (NLS: esempio di API basate sui nomi).

## <a name="additional-supported-country-and-region-strings"></a>Altre stringhe di paese e area geografica supportate

L'implementazione della libreria di runtime Microsoft C supporta anche le seguenti stringhe e abbreviazioni aggiuntive per paese/area geografica:

|Stringa paese/area geografica|Abbreviazione|Nome equivalente delle impostazioni locali|
|----------------------------|------------------|----------------------------|
|america|Stati Uniti|it-IT|
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
|united-states|Stati Uniti|it-IT|
|us|Stati Uniti|it-IT|

## <a name="see-also"></a>Vedere anche

[Nomi delle impostazioni locali, lingue e stringhe relative a paesi](../c-runtime-library/locale-names-languages-and-country-region-strings.md)  
[Stringhe di lingue](../c-runtime-library/language-strings.md)  
[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)  
[_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)  
