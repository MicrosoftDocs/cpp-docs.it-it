---
description: 'Altre informazioni su: valutazione dei token'
title: Valutazione di token
ms.date: 11/04/2016
helpviewer_keywords:
- tokens, evaluating
ms.assetid: 28870b62-dff6-4644-8b75-d58f340b48d2
ms.openlocfilehash: e22a904956b3f429585c6627a7fb2e8f8da6d222
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97196529"
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

## <a name="see-also"></a>Vedi anche

[Token C](../c-language/c-tokens.md)
