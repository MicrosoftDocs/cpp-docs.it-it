---
description: 'Ulteriori informazioni su: operatori unario più e negazione: + e-'
title: 'Operatori più e operatori di negazione unari: + e -'
ms.date: 11/04/2016
f1_keywords:
- +
- '-'
helpviewer_keywords:
- unary operators [C++], plus
- '- operator'
- negation operator
- + operator [C++], unary operators
- + operator
ms.assetid: 2c58c4f4-0d92-4ae3-9d0c-1a6157875cc1
ms.openlocfilehash: 64478ccfa9191e5704c1e3c896b17bc0986dc0e5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97145769"
---
# <a name="unary-plus-and-negation-operators--and--"></a>Operatori più e operatori di negazione unari: + e -

## <a name="syntax"></a>Sintassi

```
+ cast-expression
- cast-expression
```

## <a name="-operator"></a>+ (operatore)

Il risultato dell'operatore unario più ( **+** ) è il valore del relativo operando. L'operando dell'operatore unario più deve essere un tipo aritmetico.

La promozione a intero viene eseguita su operandi integrali. Il tipo risultante è il tipo a cui l'operando viene promosso. Pertanto, l'espressione `+ch` , dove `ch` è di tipo **`char`** , restituisce il tipo **`int`** . il valore non è modificato. Per ulteriori informazioni sul modo in cui viene eseguita la promozione, vedere [conversioni standard](standard-conversions.md) .

## <a name="--operator"></a>- (operatore)

L'operatore di negazione unario ( **-** ) produce il negativo del relativo operando. L'operando nell'operatore di negazione unario deve essere un tipo aritmetico.

La promozione a intero viene eseguita su operandi integrali e il tipo risultante è il tipo a cui l'operando viene promosso. Per ulteriori informazioni sulle modalità di esecuzione della promozione, vedere [conversioni standard](standard-conversions.md) .

**Specifico di Microsoft**

La negazione unaria di quantità senza segno viene eseguita sottraendo il valore dell'operando da 2^n, dove n è il numero di bit in un oggetto di tipo specificato senza segno.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Operatori C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)
