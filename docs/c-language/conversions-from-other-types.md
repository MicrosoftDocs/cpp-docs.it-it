---
title: Conversioni da altri tipi
ms.date: 01/29/2018
helpviewer_keywords:
- values, converting
- type casts, conversion
ms.assetid: 30fbd974-8f5a-4b70-ac44-d3937b96b702
ms.openlocfilehash: f9f2d73e57c576dcf8afed008a74e5e7dd9b9d6f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50448659"
---
# <a name="conversions-from-other-types"></a>Conversioni da altri tipi

Poiché un valore **enum** è un valore **int** per definizione, le conversioni da e verso un valore **enum** corrispondono a quelle per il tipo **int**. Per il compilatore Microsoft C un Integer è uguale a un numero **long**.

**Sezione specifica Microsoft**

Non è consentita alcuna conversione tra la struttura o i tipi di unione.

Tutti i valori possono essere convertiti nel tipo **void**, ma il risultato di tale conversione può essere usato solo in un contesto in cui un valore di espressione viene ignorato, come in un'istruzione di espressione.

Il tipo **void** non ha valore, per definizione. Pertanto, non può essere convertirlo in qualsiasi altro tipo e altri tipi non possono essere convertiti in **void** per assegnazione. Tuttavia è possibile eseguire esplicitamente il cast di un valore al tipo **void**, come illustrato in [Conversioni di cast di tipo](../c-language/type-cast-conversions.md).

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Conversioni di assegnazione](../c-language/assignment-conversions.md)
