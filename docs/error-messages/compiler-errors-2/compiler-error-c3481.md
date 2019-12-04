---
title: Errore del compilatore C3481
ms.date: 11/04/2016
f1_keywords:
- C3481
helpviewer_keywords:
- C3481
ms.assetid: 5d09375a-5ed3-4b61-86ed-45e91fd734c7
ms.openlocfilehash: 1719e9f1d3328be083f745498e6f4ad772b0b52a
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755239"
---
# <a name="compiler-error-c3481"></a>Errore del compilatore C3481

'var': variabile di acquisizione delle espressioni lambda non trovata

Il compilatore non ha trovato la definizione di una variabile passata all'elenco di acquisizione di un'espressione lambda.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Rimuovere la variabile dall'elenco di acquisizione dell'espressione lambda.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3481 perché la variabile `n` non è definita:

```cpp
// C3481.cpp

int main()
{
   [n] {}(); // C3481
}
```

## <a name="see-also"></a>Vedere anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
