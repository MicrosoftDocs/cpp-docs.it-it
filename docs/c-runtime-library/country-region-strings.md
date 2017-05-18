---
title: Stringhe di paese e area geografica | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- c.strings
dev_langs:
- C++
helpviewer_keywords:
- country/region strings
ms.assetid: 5baf0ccf-0d9b-40dc-83bd-323705287930
caps.latest.revision: 14
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
ms.translationtype: Human Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 708651f59ceff638482264e3fc57228e8a1822b2
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="countryregion-strings"></a>Country/Region Strings
Le stringhe di paese e area geografica possono essere combinate con una stringa di lingua per creare una specifica delle impostazioni locali per le funzioni `setlocale`, `_wsetlocale`, `_create_locale`e `_wcreate_locale` . Per gli elenchi di nomi di paese/area geografica supportati dalle varie versioni del sistema operativo Windows, vedere [National Language Support (NLS) API Reference](http://msdn.microsoft.com/goglobal/bb896001.aspx). Negli elenchi, la stringa paese/area geografica può essere uno qualsiasi dei valori del paese nella colonna **Locale – Language Country/Region** o una qualsiasi delle abbreviazioni nella colonna **Country or Region name abbreviation** .  
  
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
