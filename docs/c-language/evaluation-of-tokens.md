---
title: Valutazione di token
ms.date: 11/04/2016
helpviewer_keywords:
- tokens, evaluating
ms.assetid: 28870b62-dff6-4644-8b75-d58f340b48d2
ms.openlocfilehash: 15775ca9a7ada46aaf4e53ae952cd67e95bbf8d3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62234023"
---
# <a name="evaluation-of-tokens"></a>Valutazione di token

Quando il compilatore interpreta i token, include il maggior numero di caratteri possibile in un unico token prima di passare al token successivo. A causa di tale comportamento, il compilatore non è in grado di interpretare i token nel modo corretto se non sono separati da spazi. Si consideri la seguente espressione:

```
i+++j
```

In questo esempio, il compilatore considera innanzitutto l'operatore più lungo possibile (`++`) a partire dai tre segni più, quindi elabora il segno più rimanente come un operatore di addizione (`+`). L'espressione viene quindi interpretata come `(i++) + (j)` e non come `(i) + (++j)`. In questo e in casi analoghi, utilizzare spazi e parentesi per evitare ambiguità e assicurare la valutazione corretta dell'espressione.

**Specifico di Microsoft**

Il compilatore C considera il carattere di CTRL+Z come indicatore di fine file. Il testo dopo CTRL+Z viene ignorato.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Token C](../c-language/c-tokens.md)
