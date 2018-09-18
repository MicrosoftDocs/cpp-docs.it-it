---
title: Espressioni con operatori unari | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- expressions [C++], unary operators
- unary operators [C++], expressions with
- expressions [C++], operators
ms.assetid: 1217685b-b85d-4b48-9ff4-d90f56a26c1b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 718b27d14414480a3515a212bc0b272e8cfbb7c2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46017872"
---
# <a name="expressions-with-unary-operators"></a>Espressioni con operatori unari

Gli operatori unari agiscono solo su un operando in un'espressione. Gli operatori unari sono i seguenti:

- [Operatore di riferimento indiretto (*)](../cpp/indirection-operator-star.md)

- [Operatore address-of (&)](../cpp/address-of-operator-amp.md)

- [Operatore (+) unario](../cpp/unary-plus-and-negation-operators-plus-and.md)

- [Operatore di negazione unario (-)](../cpp/unary-plus-and-negation-operators-plus-and.md)

- [Operatore di negazione logica (!)](../cpp/logical-negation-operator-exclpt.md)

- [Operatore complemento a uno (~)](../cpp/one-s-complement-operator-tilde.md)

- [Operatore di incremento prefisso (+ +)](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)

- [Operatore di decremento prefisso (-)](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)

- [Eseguire il cast (operatore)](../cpp/cast-operator-parens.md)

- [operatore sizeof](../cpp/sizeof-operator.md)

- [operatore uuidof](../cpp/uuidof-operator.md)

- [operatore alignof](../cpp/alignof-operator.md)

- [operatore new](../cpp/new-operator-cpp.md)

- [operatore delete](../cpp/delete-operator-cpp.md)

Questi operatori hanno un'associatività da destra a sinistra. Le espressioni unarie sono caratterizzate in genere da una sintassi che precede un'espressione primaria o in forma suffissa.

Di seguito vengono indicati i formati possibili delle espressioni unarie.

- *postfix-expression*

- `++` *unary-expression*

- `--` *unary-expression*

- *operatore unario* *cast-expression*

- **sizeof** *unary-expression*

- `sizeof(` *nome del tipo* `)`

- `decltype(` *Espressione* `)`

- *espressione di allocazione*

- *espressione di deallocazione*

Eventuali *postfix-expression* viene considerato un *unary-expression*, e poiché qualsiasi espressione primaria viene considerata una *postfix-expression*, tutte le espressioni primarie è considerata una *unary-expression* anche. Per altre informazioni, vedere [espressioni in forma suffissa](../cpp/postfix-expressions.md) e [espressioni primarie](../cpp/primary-expressions.md).

Oggetto *unary-operator* è costituito da uno o più simboli seguenti: `* & + - ! ~`

Il *cast-expression* è un'espressione unaria con un operatore cast facoltativo per modificare il tipo. Per altre informazioni, vedere [operatore Cast: ()](../cpp/cast-operator-parens.md).

Un' *espressione* può essere qualsiasi espressione. Per altre informazioni, vedere [espressioni](../cpp/expressions-cpp.md).

Il *allocazione-expression* si intende il **nuove** operatore. Il *deallocazione-expression* si intende il **eliminare** operatore. Per ulteriori informazioni, vedere i collegamenti indicati in precedenza in questo argomento.

## <a name="see-also"></a>Vedere anche

[Tipi di espressioni](../cpp/types-of-expressions.md)