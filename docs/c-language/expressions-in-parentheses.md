---
description: 'Altre informazioni su: espressioni tra parentesi'
title: Espressioni tra parentesi
ms.date: 11/04/2016
helpviewer_keywords:
- parentheses
- expression evaluation, evaluation order
- expressions [C++], evaluating
- parentheses, expressions
ms.assetid: b8636147-6982-408c-9e64-29e40678ee43
ms.openlocfilehash: fd33cab851f7ec55c395fee62e4300d42365f00f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97196373"
---
# <a name="expressions-in-parentheses"></a>Espressioni tra parentesi

È possibile includere qualsiasi operando tra parentesi senza modificare il tipo o il valore dell'espressione inclusa. Ad esempio, nell'espressione:

```
( 10 + 5 ) / 5
```

le parentesi intorno `10 + 5` a indicano che il valore di `10 + 5` viene valutato per primo e diventa l'operando sinistro dell'operatore Division ( **/** ). Il risultato di `( 10 + 5 ) / 5` è 3. Senza le parentesi, `10 + 5 / 5` restituirebbe 11.

Sebbene le parentesi influiscano sulla modalità con cui vengono raggruppati gli operandi in un'espressione, non è possibile garantire un particolare ordine di valutazione in tutti i casi. Ad esempio, né le parentesi né il raggruppamento da sinistra a destra dell'espressione seguente garantisce che il valore `i` sarà in una delle sottoespressioni:

```
( i++ +1 ) * ( 2 + i )
```

Il compilatore è libero di valutare i due lati della moltiplicazione in qualsiasi ordine. Se il valore iniziale `i` è zero, l'intera espressione potrebbe essere valutata come una di queste due istruzioni:

```
( 0 + 1 + 1 ) * ( 2 + 1 )
( 0 + 1 + 1 ) * ( 2 + 0 )
```

Le eccezioni derivanti dagli effetti collaterali vengono trattate in [Effetti collaterali](../c-language/side-effects.md).

## <a name="see-also"></a>Vedi anche

[Espressioni primarie C](../c-language/c-primary-expressions.md)
