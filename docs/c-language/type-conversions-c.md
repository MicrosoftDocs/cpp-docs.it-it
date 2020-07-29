---
title: Conversioni di tipi (C)
ms.date: 11/04/2016
helpviewer_keywords:
- conversions, type
- type conversion
- converting types
- integral promotions
- type casts, when performed
ms.assetid: d130ee7c-03c3-48f4-af7b-1fdba0d3b086
ms.openlocfilehash: 7d7c55c15a8f3e2a53e350da947cf524ae064a09
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87231429"
---
# <a name="type-conversions-c"></a>Conversioni di tipi (C)

Le conversioni di tipo dipendono dall'operatore specificato e dal tipo dell'operando o degli operatori. Le conversioni di tipo sono effettuate nei casi seguenti:

- Quando un valore di un tipo viene assegnato a una variabile di un tipo differente o quando un operatore converte il tipo del relativo operando o operandi prima di eseguire un'operazione

- Quando viene eseguito il cast esplicito di un valore di un tipo su un tipo diverso

- Quando un valore viene passato come argomento a una funzione o quando un tipo viene restituito da una funzione

Un carattere, uno short integer o un campo di bit intero, tutti signed o meno o un oggetto di tipo di enumerazione possono essere utilizzati in un'espressione ovunque un Integer possa essere utilizzato. Se un oggetto **`int`** può rappresentare tutti i valori del tipo originale, il valore viene convertito in **`int`** ; in caso contrario, viene convertito in **`unsigned int`** . Questo processo è noto come "promozione a intero". Le promozioni a intero mantengono il valore. Ovvero il valore dopo la promozione è sempre garantito come uguale a prima della promozione. Per altre informazioni, vedere [Conversioni aritmetiche comuni](../c-language/usual-arithmetic-conversions.md).

## <a name="see-also"></a>Vedere anche

[Espressioni e assegnazioni](../c-language/expressions-and-assignments.md)
