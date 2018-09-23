---
title: Assegnazione semplice (C) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- type conversion [C++], simple assignment
- data type conversion [C++], simple assignment
- operators [C], simple assignment
- assignment operators [C++], simple
- simple assignment operator
- equal sign
ms.assetid: e7140a0a-7104-4b3a-b293-7adcc1fdd52b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ff4e032e205680da84369075514e3177fa5fb33e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46051022"
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