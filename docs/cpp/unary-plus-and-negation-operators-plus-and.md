---
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
ms.openlocfilehash: c1d5fc926b396f1ec44b9e44e79721e2ca4a0908
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62244168"
---
# <a name="unary-plus-and-negation-operators--and--"></a>Operatori più e operatori di negazione unari: + e -

## <a name="syntax"></a>Sintassi

```
+ cast-expression
- cast-expression
```

## <a name="-operator"></a>+ (operatore)

Il risultato dell'operatore più unario (**+**) è il valore del relativo operando. L'operando dell'operatore unario più deve essere un tipo aritmetico.

La promozione a intero viene eseguita su operandi integrali. Il tipo risultante è il tipo a cui l'operando viene promosso. Di conseguenza, l'espressione `+ch`, dove `ch` JE typu **char**, tipo **int**; il valore rimane invariato. Visualizzare [conversioni Standard](standard-conversions.md) per altre informazioni sul modo in cui viene eseguita la promozione.

## <a name="--operator"></a>- (operatore)

L'operatore di negazione unario (**-**) produce il corrispondente negativo del relativo operando. L'operando nell'operatore di negazione unario deve essere un tipo aritmetico.

La promozione a intero viene eseguita su operandi integrali e il tipo risultante è il tipo a cui l'operando viene promosso. Visualizzare [conversioni Standard](standard-conversions.md) per altre informazioni sul modo in cui viene eseguito l'innalzamento di livello.

## <a name="microsoft-specific"></a>Sezione specifica Microsoft

La negazione unaria di quantità senza segno viene eseguita sottraendo il valore dell'operando da 2^n, dove n è il numero di bit in un oggetto di tipo specificato senza segno.

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Operatori predefiniti C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)