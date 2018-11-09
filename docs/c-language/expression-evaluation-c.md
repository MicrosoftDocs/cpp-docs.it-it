---
title: Valutazione di espressioni (C)
ms.date: 11/04/2016
helpviewer_keywords:
- expression evaluation
- expressions [C++], evaluating
ms.assetid: 9493f8cc-64a2-4284-9aaf-26eec11c4f40
ms.openlocfilehash: 58478830d901836fc82ee02412c86a776a2c1998
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50522356"
---
# <a name="expression-evaluation-c"></a>Valutazione di espressioni (C)

Le espressioni che comprendono assegnazioni, incrementi unari o decrementi unari, così come le chiamate di funzione, possono avere conseguenze irrilevanti ai fini della relativa valutazione (effetti collaterali). Quando viene raggiunto un "punto di sequenza", si è certi che tutto ciò che precede tale punto di sequenza, inclusi tutti gli effetti collaterali, è stato valutato prima di iniziare una valutazione, o qualunque altra operazione, successiva allo stesso punto di sequenza.

Gli "effetti collaterali" sono modifiche causate dalla valutazione di un'espressione. Gli effetti collaterali si verificano ogni volta che il valore di una variabile viene modificato dalla valutazione di un'espressione. Tutte le operazioni di assegnazione hanno effetti collaterali. Anche le chiamate di funzione possono avere effetti collaterali, se modificano il valore di un elemento visibile esternamente, attraverso assegnazione diretta o tramite puntatore.

## <a name="see-also"></a>Vedere anche

[Operandi ed espressioni](../c-language/operands-and-expressions.md)