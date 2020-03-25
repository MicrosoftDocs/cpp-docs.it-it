---
title: Espressioni con operatori unari
ms.date: 11/04/2016
helpviewer_keywords:
- expressions [C++], unary operators
- unary operators [C++], expressions with
- expressions [C++], operators
ms.assetid: 1217685b-b85d-4b48-9ff4-d90f56a26c1b
ms.openlocfilehash: 26aad64e5b9c7a496c2e6bb131b82740c06abe07
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80188974"
---
# <a name="expressions-with-unary-operators"></a>Espressioni con operatori unari

Gli operatori unari agiscono solo su un operando in un'espressione. Gli operatori unari sono i seguenti:

- [Operatore di riferimento indiretto (*)](../cpp/indirection-operator-star.md)

- [Operatore address-of (&)](../cpp/address-of-operator-amp.md)

- [Operatore più unario (+)](../cpp/unary-plus-and-negation-operators-plus-and.md)

- [Operatore di negazione unario (-)](../cpp/unary-plus-and-negation-operators-plus-and.md)

- [Operatore di negazione logica (!)](../cpp/logical-negation-operator-exclpt.md)

- [Operatore di complemento a uno (~)](../cpp/one-s-complement-operator-tilde.md)

- [Operatore di incremento prefisso (+ +)](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)

- [Operatore di decremento prefisso (--)](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)

- [Operatore cast ()](../cpp/cast-operator-parens.md)

- [Operatore sizeof](../cpp/sizeof-operator.md)

- [operatore __uuidof](../cpp/uuidof-operator.md)

- [operatore __alignof](../cpp/alignof-operator.md)

- [operatore New](../cpp/new-operator-cpp.md)

- [delete-operatore](../cpp/delete-operator-cpp.md)

Questi operatori hanno un'associatività da destra a sinistra. Le espressioni unarie sono caratterizzate in genere da una sintassi che precede un'espressione primaria o in forma suffissa.

Di seguito vengono indicati i formati possibili delle espressioni unarie.

- *postfix-expression*

- *espressione unaria* `++`

- *espressione unaria* `--`

- *espressione cast-* *operatore unario*

- **sizeof** *espressione unaria* sizeof

- `sizeof(` *nome-tipo* `)`

- *espressione* `decltype(` `)`

- *Allocation-espressione*

- *deallocazione-espressione*

Qualsiasi espressione *suffissa* è considerata un' *espressione unaria*e, poiché qualsiasi espressione primaria è considerata un'espressione *suffissa*, tutte le espressioni primarie sono considerate anche un' *espressione unaria* . Per altre informazioni, vedere [espressioni di suffisso](../cpp/postfix-expressions.md) ed [espressioni primarie](../cpp/primary-expressions.md).

Un *operatore unario* è costituito da uno o più dei simboli seguenti: `* & + - ! ~`

*Cast-expression* è un'espressione unaria con un cast facoltativo per modificare il tipo. Per ulteriori informazioni, vedere [operatore cast: ()](../cpp/cast-operator-parens.md).

Un' *espressione* può essere qualsiasi espressione. Per ulteriori informazioni, vedere [espressioni](../cpp/expressions-cpp.md).

L' *espressione di allocazione* fa riferimento all'operatore **New** . La *deallocazione-espressione* fa riferimento all'operatore **Delete** . Per ulteriori informazioni, vedere i collegamenti indicati in precedenza in questo argomento.

## <a name="see-also"></a>Vedere anche

[Tipi di espressioni](../cpp/types-of-expressions.md)
