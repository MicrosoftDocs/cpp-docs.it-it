---
title: Valutazione di espressioni (C) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- expression evaluation
- expressions [C++], evaluating
ms.assetid: 9493f8cc-64a2-4284-9aaf-26eec11c4f40
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0f97b28067d6257ea14255d3e049adcae99f73ef
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46060941"
---
# <a name="expression-evaluation-c"></a>Valutazione di espressioni (C)

Le espressioni che comprendono assegnazioni, incrementi unari o decrementi unari, così come le chiamate di funzione, possono avere conseguenze irrilevanti ai fini della relativa valutazione (effetti collaterali). Quando viene raggiunto un "punto di sequenza", si è certi che tutto ciò che precede tale punto di sequenza, inclusi tutti gli effetti collaterali, è stato valutato prima di iniziare una valutazione, o qualunque altra operazione, successiva allo stesso punto di sequenza.

Gli "effetti collaterali" sono modifiche causate dalla valutazione di un'espressione. Gli effetti collaterali si verificano ogni volta che il valore di una variabile viene modificato dalla valutazione di un'espressione. Tutte le operazioni di assegnazione hanno effetti collaterali. Anche le chiamate di funzione possono avere effetti collaterali, se modificano il valore di un elemento visibile esternamente, attraverso assegnazione diretta o tramite puntatore.

## <a name="see-also"></a>Vedere anche

[Operandi ed espressioni](../c-language/operands-and-expressions.md)