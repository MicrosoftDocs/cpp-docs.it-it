---
title: Caratteri multibyte e wide | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2522761389a7f97acf4157683f8fce19e94429d8
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46100530"
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