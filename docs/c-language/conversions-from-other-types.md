---
title: Conversioni da altri tipi
ms.date: 01/29/2018
helpviewer_keywords:
- values, converting
- type casts, conversion
ms.assetid: 30fbd974-8f5a-4b70-ac44-d3937b96b702
ms.openlocfilehash: f9f2d73e57c576dcf8afed008a74e5e7dd9b9d6f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62312466"
---
# <a name="conversions-from-other-types"></a>Conversioni da altri tipi

Poiché un valore **enum** è un valore **int** per definizione, le conversioni da e verso un valore **enum** corrispondono a quelle per il tipo **int**. Per il compilatore Microsoft C un Integer è uguale a un numero **long**.

**Specifico di Microsoft**

Non è consentita alcuna conversione tra la struttura o i tipi di unione.

Tutti i valori possono essere convertiti nel tipo **void**, ma il risultato di tale conversione può essere usato solo in un contesto in cui un valore di espressione viene ignorato, come in un'istruzione di espressione.

Il tipo **void** non ha valore, per definizione. Pertanto, non può essere convertirlo in qualsiasi altro tipo e altri tipi non possono essere convertiti in **void** per assegnazione. Tuttavia è possibile eseguire esplicitamente il cast di un valore al tipo **void**, come illustrato in [Conversioni di cast di tipo](../c-language/type-cast-conversions.md).

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Conversioni di assegnazione](../c-language/assignment-conversions.md)
