---
title: Compilatore avviso (livello 2) C4146 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4146
dev_langs:
- C++
helpviewer_keywords:
- C4146
ms.assetid: d6c31ab1-3120-40d5-8d80-32b5f7046e32
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 41d21f2be76e67c58599e214df764316dc845e59
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46044626"
---
# <a name="compiler-warning-level-2-c4146"></a>Compilatore avviso (livello 2) C4146

operatore meno unario applicato al tipo unsigned, risultato resta unsigned

Tipi senza segno possono contenere valori solo un valore non negativo, in modo unario (negazione) non è in genere opportuno quando applicato a un tipo unsigned. L'operando sia il risultato non siano negativi.

In pratica, ciò si verifica quando il programmatore sta tentando di esprimere il valore intero minimo, ovvero tra -2147483648. Questo valore non può essere scritto come tra -2147483648 perché l'espressione viene elaborato in due fasi:

1. Il numero 2147483648 viene valutato. Poiché è maggiore del valore intero massimo di 2147483647, non è il tipo di 2147483648 [int](../../c-language/integer-types.md), ma `unsigned int`.

1. Con operatore meno unario viene applicato al valore, con un risultato unsigned, situazione che si verifica anche a 2147483648.

Il tipo senza segno del risultato può provocare comportamenti imprevisti. Se viene usato il risultato in un confronto, quindi potrebbe essere utilizzato un confronto senza segno, ad esempio, quando l'altro operando è un `int`. Questo spiega perché il programma di esempio seguente viene stampato solo una riga.

La seconda riga prevista `1 is greater than the most negative int`, non viene stampato quanto `((unsigned int)1) > 2147483648` è false.

È possibile evitare C4146 usando INT_MIN da Limits. h, il cui tipo è **tipo signed int**.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4146:

```
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