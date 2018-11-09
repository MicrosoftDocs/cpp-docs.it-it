---
title: Operatori di incremento e decremento in forma prefissa
ms.date: 11/04/2016
helpviewer_keywords:
- increment operators, types of
- decrement operators, syntax
- decrement operators
ms.assetid: 9a441bb9-d94a-4b6a-9db2-0d0d76bc480d
ms.openlocfilehash: 9460d3fda9bca74cd9c95ffa7748a5ddc91e3f78
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50606934"
---
# <a name="prefix-increment-and-decrement-operators"></a>Operatori di incremento e decremento in forma prefissa

Gli operatori unari (`++` e **--**) vengono chiamati operatori di decremento o incremento di "prefisso", quando gli stessi operatori di decremento o incremento si trovano prima dell'operando. Decremento e incremento suffisso hanno maggiore precedenza, rispetto ad incremento e decremento prefisso. L'operando deve essere un valore integrale, a virgola mobile o un tipo di puntatore e deve essere un'espressione L-value modificabile, vale a dire un'espressione priva dell'attributo **const**. Il risultato è un l-value.

Quando l'operatore si trova prima del suo operando, l'operando viene incrementato o decrementato e il suo nuovo valore corrisponde al risultato dell'espressione.

Un operando di tipo integrale o mobile viene incrementato o decrementato dell'intero 1. Il tipo del risultato è uguale al tipo di operando. Un operando di tipo puntatore viene incrementato o decrementato alle dimensioni dell'oggetto che indirizza. Un puntatore incrementato punta all'oggetto successivo; mentre un puntatore decrementato punta all'oggetto precedente.

## <a name="example"></a>Esempio

In questo esempio viene illustrato l'operatore di decremento prefisso unario:

```
if( line[--i] != '\n' )
    return;
```

In questo esempio, la variabile `i` viene decrementata prima di essere utilizzata come indice in `line`.

## <a name="see-also"></a>Vedere anche

[Operatori unari C](../c-language/c-unary-operators.md)