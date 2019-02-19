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
ms.openlocfilehash: 77c61101e9540a0d9469e7176eb15992a73b4b09
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56148972"
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
