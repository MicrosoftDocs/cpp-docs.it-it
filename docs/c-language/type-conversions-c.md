---
description: 'Altre informazioni su: conversioni di tipi (C)'
title: Conversioni di tipi (C)
ms.date: 11/04/2016
helpviewer_keywords:
- conversions, type
- type conversion
- converting types
- integral promotions
- type casts, when performed
ms.assetid: d130ee7c-03c3-48f4-af7b-1fdba0d3b086
ms.openlocfilehash: e352a311c586631db08dc1f3e678d4242afdd797
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97242860"
---
# <a name="type-conversions-c"></a>Conversioni di tipi (C)

Le conversioni di tipo dipendono dall'operatore specificato e dal tipo dell'operando o degli operatori. Le conversioni di tipo sono effettuate nei casi seguenti:

- Quando un valore di un tipo viene assegnato a una variabile di un tipo differente o quando un operatore converte il tipo del relativo operando o operandi prima di eseguire un'operazione

- Quando viene eseguito il cast esplicito di un valore di un tipo su un tipo diverso

- Quando un valore viene passato come argomento a una funzione o quando un tipo viene restituito da una funzione

Un carattere, uno short integer o un campo di bit intero, tutti signed o meno o un oggetto di tipo di enumerazione possono essere utilizzati in un'espressione ovunque un Integer possa essere utilizzato. Se un oggetto **`int`** può rappresentare tutti i valori del tipo originale, il valore viene convertito in **`int`** ; in caso contrario, viene convertito in **`unsigned int`** . Questo processo è noto come "promozione a intero". Le promozioni a intero mantengono il valore. Ovvero il valore dopo la promozione è sempre garantito come uguale a prima della promozione. Per altre informazioni, vedere [Conversioni aritmetiche comuni](../c-language/usual-arithmetic-conversions.md).

## <a name="see-also"></a>Vedi anche

[Espressioni e assegnazioni](../c-language/expressions-and-assignments.md)
