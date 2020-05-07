---
title: Caratteri multibyte e wide
ms.date: 11/04/2016
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
ms.openlocfilehash: 0d573fac938f5e4d62c99c8cd6e676b96123a0c4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62232917"
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
