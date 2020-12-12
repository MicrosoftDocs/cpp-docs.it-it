---
description: 'Altre informazioni su: operatori di incremento e decremento del prefisso'
title: Operatori di incremento e decremento in forma prefissa
ms.date: 11/04/2016
helpviewer_keywords:
- increment operators, types of
- decrement operators, syntax
- decrement operators
ms.assetid: 9a441bb9-d94a-4b6a-9db2-0d0d76bc480d
ms.openlocfilehash: 49edad72bb0dea25166c1508680c4757c89927f0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97312501"
---
# <a name="prefix-increment-and-decrement-operators"></a>Operatori di incremento e decremento in forma prefissa

Gli operatori unari ( `++` e **--** ) sono denominati operatori di incremento o di decremento "prefix" quando gli operatori di incremento o decremento vengono visualizzati prima dell'operando. Decremento e incremento suffisso hanno maggiore precedenza, rispetto ad incremento e decremento prefisso. L'operando deve essere di tipo integrale, a virgola mobile o puntatore e deve essere un'espressione l-value modificabile (un'espressione senza l' **`const`** attributo). Il risultato è un l-value.

Quando l'operatore si trova prima del suo operando, l'operando viene incrementato o decrementato e il suo nuovo valore corrisponde al risultato dell'espressione.

Un operando di tipo integrale o mobile viene incrementato o decrementato dell'intero 1. Il tipo del risultato è uguale al tipo di operando. Un operando di tipo puntatore viene incrementato o decrementato alle dimensioni dell'oggetto che indirizza. Un puntatore incrementato punta all'oggetto successivo; mentre un puntatore decrementato punta all'oggetto precedente.

## <a name="example"></a>Esempio

In questo esempio viene illustrato l'operatore di decremento prefisso unario:

```
if( line[--i] != '\n' )
    return;
```

In questo esempio, la variabile `i` viene decrementata prima di essere utilizzata come indice in `line`.

## <a name="see-also"></a>Vedi anche

[Operatori unari C](../c-language/c-unary-operators.md)
