---
title: Assegnazione semplice (C)
ms.date: 11/04/2016
helpviewer_keywords:
- type conversion [C++], simple assignment
- data type conversion [C++], simple assignment
- operators [C], simple assignment
- assignment operators [C++], simple
- simple assignment operator
- equal sign
ms.assetid: e7140a0a-7104-4b3a-b293-7adcc1fdd52b
ms.openlocfilehash: 64112a54828a9a6626e78e556e8fe6dc52a3300f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87229545"
---
# <a name="simple-assignment-c"></a>Assegnazione semplice (C)

L'operatore di assegnazione semplice assegna l'operando destro all'operando sinistro. Il valore dell'operando destro è convertito nel tipo dell'espressione di assegnazione e sostituisce il valore archiviato nell'oggetto definito dall'operando sinistro. Si applicano le regole di conversione per l'assegnazione. Vedere [Conversioni di assegnazione](../c-language/assignment-conversions.md).

```
double x;
int y;

x = y;
```

In questo esempio, il valore di `y` viene convertito nel tipo **`double`** e assegnato a `x` .

## <a name="see-also"></a>Vedere anche

[Operatori di assegnazione C](../c-language/c-assignment-operators.md)
