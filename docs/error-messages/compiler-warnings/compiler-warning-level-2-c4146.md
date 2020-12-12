---
description: 'Altre informazioni su: avviso del compilatore (livello 2) C4146'
title: Avviso del compilatore (livello 2) C4146
ms.date: 11/04/2016
f1_keywords:
- C4146
helpviewer_keywords:
- C4146
ms.assetid: d6c31ab1-3120-40d5-8d80-32b5f7046e32
ms.openlocfilehash: 85aebd34ed83ef14e306f7512689ccdfba713eec
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97326504"
---
# <a name="compiler-warning-level-2-c4146"></a>Avviso del compilatore (livello 2) C4146

operatore meno unario applicato a un tipo senza segno, risultato ancora senza segno

I tipi non firmati possono mantenere solo valori non negativi, quindi il segno meno unario (negazione) non è in genere utile se applicato a un tipo senza segno. Sia l'operando che il risultato sono non negativi.

In pratica, ciò si verifica quando il programmatore tenta di esprimere il valore intero minimo, ovvero-2147483648. Questo valore non può essere scritto come-2147483648 perché l'espressione viene elaborata in due fasi:

1. Viene valutato il numero 2147483648. Poiché è maggiore del valore integer massimo 2147483647, il tipo di 2147483648 non è [int](../../c-language/integer-types.md), ma **`unsigned int`** .

1. Il segno meno unario viene applicato al valore, con un risultato senza segno, che risulta anche 2147483648.

Il tipo senza segno del risultato può causare un comportamento imprevisto. Se il risultato viene usato in un confronto, potrebbe essere usato un confronto senza segno, ad esempio quando l'altro operando è un **`int`** . Questo spiega perché il programma di esempio seguente stampa solo una riga.

La seconda riga prevista, `1 is greater than the most negative int` , non viene stampata perché `((unsigned int)1) > 2147483648` è false.

È possibile evitare C4146 usando INT_MIN da limits. h, che ha il tipo **`signed int`** .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4146:

```cpp
// C4146.cpp
// compile with: /W2
#include <stdio.h>

void check(int i)
{
    if (i > -2147483648)   // C4146
        printf_s("%d is greater than the most negative int\n", i);
}

int main()
{
    check(-100);
    check(1);
}
```
