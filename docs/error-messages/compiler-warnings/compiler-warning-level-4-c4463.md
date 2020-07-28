---
title: Avviso del compilatore (livello 4) C4463
ms.date: 11/04/2016
f1_keywords:
- C4463
helpviewer_keywords:
- C4463
ms.assetid: a07ae70c-db4e-472b-8b58-9137d9997323
ms.openlocfilehash: acc7957493942a9c0e19ce098b74ed0b5d75a12d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87214360"
---
# <a name="compiler-warning-level-4-c4463"></a>Avviso del compilatore (livello 4) C4463

> overflow assegnazione di un *valore* a un campo di bit che può conservare solo valori da *low_value* a *high_value*

Il *valore* assegnato non è compreso nell'intervallo di valori che il campo di bit può ospitare. I tipi di campo di bit firmati usano il bit più significativo per il segno. Se *n* è la dimensione del campo di bit, l'intervallo per i campi di bit con segno è-2<sup>n-1</sup> a 2<sup>n-1</sup>-1, mentre i campi di bit senza segno hanno un intervallo compreso tra 0 e 2<sup>n</sup>-1.

## <a name="example"></a>Esempio

Questo esempio genera C4463 perché tenta di assegnare un valore di 3 a un campo di bit di tipo **`int`** con una dimensione di 2, che ha un intervallo compreso tra-2 e 1.

Per risolvere questo problema, è possibile modificare il valore assegnato in un elemento compreso nell'intervallo consentito. Se il campo di bit è destinato a mantenere valori senza segno nell'intervallo compreso tra 0 e 3, è possibile modificare il tipo di dichiarazione in **`unsigned`** . Se il campo è destinato a mantenere i valori compresi tra-4 e 3, è possibile modificare le dimensioni del campo di bit in 3.

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
