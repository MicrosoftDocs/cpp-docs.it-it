---
description: 'Altre informazioni su: operatori aritmetici unari'
title: Operatori aritmetici unari
ms.date: 11/04/2016
helpviewer_keywords:
- operators [C], unary
- tilde (~) one's complement operator
- bitwise-complement operator
- arithmetic operators [C++], unary
- + operator, unary operators
- unary operators
- exclamation points
- ~ operator, one's complement operator
- logical negation
- '! operator, unary arithmetic operators'
ms.assetid: 78c91415-d469-499e-9dfe-4435350fd333
ms.openlocfilehash: e4abf78f0db41d85a5954137fac1dba913735a1c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318403"
---
# <a name="unary-arithmetic-operators"></a>Operatori aritmetici unari

Gli operatori più unario, di negazione aritmetica, complemento e negazione logica vengono illustrati nell'elenco seguente:

|Operatore|Descrizione|
|--------------|-----------------|
|**+**|L'operatore più unario che precede un'espressione tra parentesi forza il raggruppamento delle operazioni incluse. Viene utilizzato con le espressioni che includono più di un operatore binario associativo o commutativo. L'operando deve disporre di un tipo aritmetico. Il risultato corrisponde al valore dell'operando. Un operando integrale viene sottoposto a una promozione a intero. Il tipo del risultato corrisponde al tipo dell'operando promosso.|
|**-**|L'operatore di negazione aritmetica produce il corrispondente negativo (il complemento a due) del relativo operando. L'operando deve essere un valore integrale o a virgola mobile. Questo operatore esegue le consuete conversioni aritmetiche.|
|`~`|L'operatore di complemento bit per bit (o NOT bit per bit) produce il complemento bit per bit del relativo operando. L'operando deve essere di tipo integrale. Questo operatore esegue le consuete conversioni aritmetiche; il tipo del risultato corrisponde al tipo dell'operando dopo la conversione.|
|**!**|L'operatore di negazione logica (NOT logico) produce il valore 0 se il suo operando è true (diverso da zero) e il valore 1 se il suo operando è false (0). Il risultato è di **`int`** tipo. L'operando deve essere un valore integrale, a virgola mobile o di puntatore.|

Le operazioni aritmetiche unarie sui puntatori non sono valide.

## <a name="examples"></a>Esempio

Negli esempi seguenti vengono illustrati gli operatori aritmetici unari:

```
short x = 987;
    x = -x;
```

Nell'esempio precedente, il nuovo valore di `x` è il numero negativo 987 o -987.

```
unsigned short y = 0xAAAA;
    y = ~y;
```

In questo esempio, il nuovo valore assegnato a `y` è il complemento a uno del valore senza segno 0xAAAA o 0x5555.

```
if( !(x < y) )
```

Se `x` è maggiore o uguale a `y`, il risultato dell'espressione è 1 (true). Se `x` è minore di `y`, il risultato è 0 (false).

## <a name="see-also"></a>Vedi anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)
