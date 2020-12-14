---
description: 'Altre informazioni su: conversioni da altri tipi'
title: Conversioni da altri tipi
ms.date: 01/29/2018
helpviewer_keywords:
- values, converting
- type casts, conversion
ms.assetid: 30fbd974-8f5a-4b70-ac44-d3937b96b702
ms.openlocfilehash: 0b9497c4873e42f9d08463c4ec1396b178b6f362
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97293196"
---
# <a name="conversions-from-other-types"></a>Conversioni da altri tipi

Poiché un valore **`enum`** è un valore per **`int`** definizione, le conversioni da e verso un **`enum`** valore corrispondono a quelle per il **`int`** tipo. Per il compilatore C Microsoft, un numero intero è uguale a un oggetto **`long`** .

**Specifico di Microsoft**

Non è consentita alcuna conversione tra la struttura o i tipi di unione.

Qualsiasi valore può essere convertito nel tipo **`void`** , ma il risultato di tale conversione può essere utilizzato solo in un contesto in cui un valore di espressione viene ignorato, ad esempio in un'istruzione di espressione.

Il **`void`** tipo non ha alcun valore, per definizione. Pertanto, non può essere convertito in un altro tipo e altri tipi non possono essere convertiti in per **`void`** assegnazione. Tuttavia, è possibile eseguire il cast esplicito di un valore al tipo **`void`** , come illustrato in [conversioni di cast di tipo](../c-language/type-cast-conversions.md).

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Conversioni di assegnazione](../c-language/assignment-conversions.md)
