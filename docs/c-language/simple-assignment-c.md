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
ms.openlocfilehash: 76c48fc6774f97bab69f916ad7e5176e91d004ab
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50574915"
---
# <a name="simple-assignment-c"></a>Assegnazione semplice (C)

L'operatore di assegnazione semplice assegna l'operando destro all'operando sinistro. Il valore dell'operando destro è convertito nel tipo dell'espressione di assegnazione e sostituisce il valore archiviato nell'oggetto definito dall'operando sinistro. Si applicano le regole di conversione per l'assegnazione. Vedere [Conversioni di assegnazione](../c-language/assignment-conversions.md).

```
double x;
int y;

x = y;
```

In questo esempio, il valore di `y` viene convertito nel tipo **double** e viene assegnato a `x`.

## <a name="see-also"></a>Vedere anche

[Operatori di assegnazione C](../c-language/c-assignment-operators.md)