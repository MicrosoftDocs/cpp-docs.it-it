---
title: Caratteri multibyte e wide | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- globalization [C++], character sets
- character data types [C]
- Unicode [C++], wide character set
- types [C], character
- characters [C++], wide
- international applications [C++], character display
- multibyte characters [C++]
- wide characters [C++]
- characters [C++], codes
- character codes [C++], wide
- character codes [C++], multibyte
ms.assetid: 1943c469-200d-4724-b18f-781d70520f9e
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: d7dccb06867ede73bc5ef0a95c665e30211b0d97
ms.contentlocale: it-it
ms.lasthandoff: 07/14/2017

---
# <a name="multibyte-and-wide-characters"></a>Caratteri multibyte e wide
Un carattere multibyte è un carattere composto da sequenze di uno o più byte. Ogni sequenza di byte rappresenta un singolo carattere nel set di caratteri esteso. I caratteri multibyte vengono utilizzati nei set di caratteri, ad esempio Kanji.  
  
 I caratteri "wide" sono codici carattere multilingue costituiti sempre da 16 bit. Il tipo per le costanti carattere è `char`, mentre per i caratteri "wide" il tipo è `wchar_t`. Poiché i caratteri "wide" vengono sempre rappresentati con dimensione fissa, l'utilizzo di tali caratteri semplifica la programmazione con i set di caratteri internazionali.  
  
 Il valore letterale stringa a caratteri "wide" `L"hello"` diventa una matrice di sei Integer di tipo `wchar_t`.  
  
```  
{L'h', L'e', L'l', L'l', L'o', 0}  
```  
  
 La specifica Unicode è una specifica per caratteri "wide". Le routine di libreria di runtime per la conversione tra caratteri multibyte e "wide" includono `mbstowcs`, `mbtowc`, `wcstombs` e `wctomb`.  
  
## <a name="see-also"></a>Vedere anche  
 [Identificatori C](../c-language/c-identifiers.md)
