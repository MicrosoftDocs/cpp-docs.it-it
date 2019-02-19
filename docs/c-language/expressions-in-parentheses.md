---
title: Espressioni tra parentesi
ms.date: 11/04/2016
helpviewer_keywords:
- parentheses
- expression evaluation, evaluation order
- expressions [C++], evaluating
- parentheses, expressions
ms.assetid: b8636147-6982-408c-9e64-29e40678ee43
ms.openlocfilehash: d0105556530161991b46c5ee25cd73f2f995063f
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56149349"
---
# <a name="expressions-in-parentheses"></a>Espressioni tra parentesi

È possibile includere qualsiasi operando tra parentesi senza modificare il tipo o il valore dell'espressione inclusa. Ad esempio, nell'espressione:

```
( 10 + 5 ) / 5
```

le parentesi che racchiudono `10 + 5` indicano che il valore `10 + 5` viene valutato per primo e diventa l'operando sinistro dell'operatore di divisione (**/**). Il risultato di `( 10 + 5 ) / 5` è 3. Senza le parentesi, `10 + 5 / 5` restituirebbe 11.

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

## <a name="see-also"></a>Vedere anche

[Espressioni primarie C](../c-language/c-primary-expressions.md)
