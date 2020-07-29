---
title: Conversioni da altri tipi
ms.date: 01/29/2018
helpviewer_keywords:
- values, converting
- type casts, conversion
ms.assetid: 30fbd974-8f5a-4b70-ac44-d3937b96b702
ms.openlocfilehash: bd00bbb8944a0273163fa0c5952be510c9dd697c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87200335"
---
# <a name="conversions-from-other-types"></a>Conversioni da altri tipi

Poiché un valore **`enum`** è un valore per **`int`** definizione, le conversioni da e verso un **`enum`** valore corrispondono a quelle per il **`int`** tipo. Per il compilatore C Microsoft, un numero intero è uguale a un oggetto **`long`** .

**Specifico di Microsoft**

Non è consentita alcuna conversione tra la struttura o i tipi di unione.

Qualsiasi valore può essere convertito nel tipo **`void`** , ma il risultato di tale conversione può essere utilizzato solo in un contesto in cui un valore di espressione viene ignorato, ad esempio in un'istruzione di espressione.

Il **`void`** tipo non ha alcun valore, per definizione. Pertanto, non può essere convertito in un altro tipo e altri tipi non possono essere convertiti in per **`void`** assegnazione. Tuttavia, è possibile eseguire il cast esplicito di un valore al tipo **`void`** , come illustrato in [conversioni di cast di tipo](../c-language/type-cast-conversions.md).

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Conversioni di assegnazione](../c-language/assignment-conversions.md)
