---
title: Overload degli operatori unari
ms.date: 11/04/2016
helpviewer_keywords:
- unary operators [C++], plus
- increment operators [C++], overloaded
- unary operators [C++], minus
- operators [C++], unary
- redefinable unary operators [C++]
- unary operators [C++]
- pointer dereference operator overloading
- plus operator
ms.assetid: 7683ef08-42a4-4283-928f-d3dd4f3ab4c0
ms.openlocfilehash: a21c62549f02dddda951c79a06617671ccfe2526
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227218"
---
# <a name="overloading-unary-operators"></a>Overload degli operatori unari

Di seguito sono elencati gli operatori unari di cui è possibile eseguire l'overload:

1. `!`([NOT logico](../cpp/logical-negation-operator-exclpt.md))

1. `&`([indirizzo-di](../cpp/address-of-operator-amp.md))

1. `~`([complemento a uno](../cpp/one-s-complement-operator-tilde.md))

1. `*`([dereferenziazione del puntatore](../cpp/indirection-operator-star.md))

1. `+`([unario più](../cpp/additive-operators-plus-and.md))

1. `-`([negazione unaria](../cpp/additive-operators-plus-and.md))

1. `++`([incremento](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md))

1. `--`([decremento](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md))

1. operatori di conversione

Gli operatori di incremento e decremento suffisso ( `++` e `--` ) vengono trattati separatamente in [incremento e decremento](../cpp/increment-and-decrement-operator-overloading-cpp.md).

Gli operatori di conversione vengono illustrati anche in un argomento separato. vedere [conversioni di tipi definiti dall'utente](../cpp/user-defined-type-conversions-cpp.md).

Le regole seguenti valgono per tutti gli altri operatori unari. Per dichiarare una funzione di un operatore unario come membro non statico, è necessario dichiararla nel seguente formato:

> *tipo RET* **`operator`** *op* **()**

dove *ret-Type* è il tipo restituito e *op* è uno degli operatori elencati nella tabella precedente.

Per dichiarare una funzione di un operatore unario come funzione globale, è necessario dichiararla nel seguente formato:

> *tipo RET* **`operator`** *op* **(** *arg* **)**

dove *ret-Type* e *op* sono descritti per le funzioni dell'operatore membro e *arg* è un argomento di tipo classe su cui operare.

> [!NOTE]
> Non esiste alcun limite relativamente ai tipi restituiti degli operatori unari. Può ad esempio risultare utile che l'operatore logico NOT (`!`) restituisca un valore integrale, sebbene non sia imposto.

## <a name="see-also"></a>Vedere anche

[Overload degli operatori](../cpp/operator-overloading.md)
