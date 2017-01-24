---
title: "Stringhe relative a lingue | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.strings"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "stringhe relative a lingue"
ms.assetid: bbee63b1-af0b-4e44-9eaf-dd3e265c05fd
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Stringhe relative a lingue
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le funzioni `_create_locale` e `setlocale` possono utilizzare le lingue supportate di Windows NLS API nei sistemi operativi che non utilizzano la tabella dei codici Unicode.  Per un elenco delle lingue supportate dalla versione del sistema operativo, vedere [Riferimento alle National Language Support \(NLS\) API](http://msdn.microsoft.com/goglobal/bb896001.aspx).  La stringa della lingua può essere uno dei valori nelle colonne **Abbreviazione di nomi della lingua** e **Lingua** dell'elenco delle lingue supportate.  L'implementazione della libreria C di runtime supporta anche queste stringhe di linguaggio:  
  
|Lingua|Nome equivalente nelle impostazioni locali|  
|------------|------------------------------------------------|  
|americano|en\-US|  
|americano inglese|en\-US|  
|americano\-inglese|en\-US|  
|australiano|en\-AU|  
|belgio|nl\-BE|  
|canadese|en\-CA|  
|chh|zh\-HK|  
|chi|zh\-SG|  
|cinese|zh|  
|cinese\-hongkong|zh\-HK|  
|cinese\-semplificato|zh\-CN|  
|cinese\-singapore|zh\-SG|  
|cinese\-tradizionale|zh\-TW|  
|olandese\-belgio|nl\-BE|  
|inglese\-americano|en\-US|  
|inglese\-aus|en\-AU|  
|inglese\-belize|en\-BZ|  
|inglese\-can|en\-CA|  
|inglese\-caraibico|en\-029|  
|inglese\-ire|en\-IE|  
|inglese\-jamaica|en\-JM|  
|inglese\-nz|en\-NZ|  
|inglese\-sud africa|en\-ZA|  
|inglese\-trinidad y tobago|en\-TT|  
|inglese\-uk|en\-GB|  
|inglese\-us|en\-US|  
|inglese\-usa|en\-US|  
|francese\-belgio|fr\-BE|  
|francese\-canadese|fr\-CA|  
|francese\-lussemburgo|fr\-LU|  
|francese\-svizzero|fr\-CH|  
|tedesco\-austriaco|de\-AT|  
|tedesco\-lichtenstein|de\-LI|  
|tedesco\-lussemburgo|de\-LU|  
|tedesco\-svizzero|de\-CH|  
|irlandese\-inglese|en\-IE|  
|italiano\-svizzero|it\-CH|  
|norvegese|no|  
|norvegese\-bokmal|nb\-NO|  
|norvegese\-nynorsk|nn\-NO|  
|portoghese\-brasiliano|pt\-BR|  
|spagnolo\-argentina|es\-AR|  
|spagnolo\-bolivia|es\-BO|  
|spagnolo\-cile|es\-CL|  
|spagnolo\-colombia|es\-CO|  
|spagnolo\-costa rica|es\-CR|  
|spagnolo\-repubblica dominicana|es\-DO|  
|spagnolo\-ecuador|es\-EC|  
|spagnolo\-el salvador|es\-SV|  
|spagnolo\-guatemala|es\-GT|  
|spagnolo\-honduras|es\-HN|  
|spagnolo\-messicano|es\-MX|  
|spagnolo\-moderno|es\-ES|  
|spagnolo\-nicaragua|es\-NI|  
|spagnolo\-panama|es\-PA|  
|spagnolo\-paraguay|es\-PY|  
|spagnolo\-perù|es\-PE|  
|spagnolo\-porto rico|es\-PR|  
|spagnolo\-uruguay|es\-UY|  
|spagnolo\-venezuela|es\-VE|  
|svedese\-finlandia|sv\-FI|  
|svizzero|de\-CH|  
|uk|en\-GB|  
|us|en\-US|  
|usa|en\-US|  
  
## Vedere anche  
 [Nomi delle impostazioni locali, lingue e stringhe relative a paesi](../c-runtime-library/locale-names-languages-and-country-region-strings.md)   
 [Stringhe relative a paesi](../c-runtime-library/country-region-strings.md)   
 [setlocale, \_wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [\_create\_locale, \_wcreate\_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)