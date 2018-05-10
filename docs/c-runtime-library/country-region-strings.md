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
ms.openlocfilehash: ffa2ac8d08e28cac4f5798868013fe9883fac5d9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="countryregion-strings"></a>Country/Region Strings
Le stringhe di paese e area geografica possono essere combinate con una stringa di lingua per creare una specifica delle impostazioni locali per le funzioni `setlocale`, `_wsetlocale`, `_create_locale`e `_wcreate_locale` . Per un elenco dei nomi di paesi/aree geografiche supportati dalla versione del sistema operativo Windows, vedere [National Language Support (NLS) API Reference](https://www.microsoft.com/resources/msdn/goglobal/default.mspx) (Tabella di riferimento API NLS (National Language Support)). Negli elenchi, la stringa paese/area geografica può essere uno qualsiasi dei valori del paese nella colonna **Locale – Language Country/Region** (Impostazioni locali - Lingua Paese/Area geografica) o una qualsiasi delle abbreviazioni nella colonna **Country or Region name abbreviation** (Abbreviazione nome paese o area geografica). Per informazioni sul supporto di lingue aggiuntive nei sistemi operativi Windows in base alla versione, vedere [Appendix A: Product Behavior](http://msdn.microsoft.com/goglobal/bb896001.aspx) (Appendice A: comportamento del prodotto) in "[MS-LCID]: Windows Language Code Identifier (LCID) Reference" (Informazioni di riferimento sugli identificatori di lingua (LCID) di Windows).  
  
 L'implementazione della libreria di runtime C supporta anche le seguenti stringhe e abbreviazioni aggiuntive per il paese/area geografica:  
  
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
 [Stringhe relative a lingue](../c-runtime-library/language-strings.md)   
 [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)