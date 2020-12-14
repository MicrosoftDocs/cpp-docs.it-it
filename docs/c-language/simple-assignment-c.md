---
description: 'Altre informazioni su: assegnazione semplice (C)'
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
ms.openlocfilehash: bf8637268c810ed6a75095774ca6ff7b7d3d9e67
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97229899"
---
# <a name="simple-assignment-c"></a>Assegnazione semplice (C)

L'operatore di assegnazione semplice assegna l'operando destro all'operando sinistro. Il valore dell'operando destro è convertito nel tipo dell'espressione di assegnazione e sostituisce il valore archiviato nell'oggetto definito dall'operando sinistro. Si applicano le regole di conversione per l'assegnazione. Vedere [Conversioni di assegnazione](../c-language/assignment-conversions.md).

```
double x;
int y;

x = y;
```

In questo esempio, il valore di `y` viene convertito nel tipo **`double`** e assegnato a `x` .

## <a name="see-also"></a>Vedi anche

[Operatori di assegnazione C](../c-language/c-assignment-operators.md)
