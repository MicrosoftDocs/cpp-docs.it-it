---
title: Del compilatore (livello 4) Avviso C4463
ms.date: 11/04/2016
f1_keywords:
- C4463
helpviewer_keywords:
- C4463
ms.assetid: a07ae70c-db4e-472b-8b58-9137d9997323
ms.openlocfilehash: e125a532f87533958ec43ed5580665ad4108856b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62400799"
---
# <a name="compiler-warning-level-4-c4463"></a>Del compilatore (livello 4) Avviso C4463

> overflow; assegnazione *valore* al campo di bit che può contenere solo valori compresi *low_value* a *high_value*

L'oggetto assegnato *valore* è compreso nell'intervallo di valori che può contenere il campo di bit. Tipi di campo di bit con segno usano significativi di bit per il segno, pertanto, se *n* è la dimensione del campo di bit, l'intervallo per i campi di bit con segno è -2<sup>n-1</sup> 2<sup>n-1</sup>-1, anche se senza segno i campi di bit sono un intervallo da 0 a 2<sup>n</sup>-1.

## <a name="example"></a>Esempio

Questo esempio genera C4463 perché tenta di assegnare un valore pari a 3 a un campo di bit del tipo `int` con dimensioni pari a 2, che ha un intervallo compreso tra -2 a 1.

Per risolvere questo problema, è possibile modificare il valore assegnato a un elemento nell'intervallo consentito. Se il campo di bit è destinato a contenere i valori senza segno nell'intervallo da 0 a 3, è possibile modificare il tipo di dichiarazione per `unsigned`. Se il campo deve contenere valori nell'intervallo -4 a 3, è possibile modificare le dimensioni del campo di bit a 3.

```cpp
// C4463_overflow.cpp
// compile with: cl /W4 /EHsc C4463_overflow.cpp
struct S {
    int x : 2; // int type treats high-order bit as sign
};

int main() {
    S s;
    s.x = 3; // warning C4463: overflow; assigning 3
    // to bit-field that can only hold values from -2 to 1
    // To fix, change assigned value to fit in range,
    // increase size of bitfield, and/or change base type
    // to unsigned.
}
```
