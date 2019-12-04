---
title: Errore del compilatore C3483
ms.date: 11/04/2016
f1_keywords:
- C3483
helpviewer_keywords:
- C3483
ms.assetid: 18b3a2c5-dfc9-4661-9653-08a5798474cf
ms.openlocfilehash: 0d6c1467575e7fae7d5e4862f36e733a68210f8e
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74743094"
---
# <a name="compiler-error-c3483"></a>Errore del compilatore C3483

'var' fa già parte dell'elenco di acquisizione delle espressioni lambda

È stata passata più volte la stessa variabile all'elenco di acquisizione di un'espressione lambda.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Rimuovere tutte le istanze della variabile dall'elenco di acquisizione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3483 perché la variabile `n` è visualizzata più volte nell'elenco di acquisizione di un'espressione lambda:

```cpp
// C3483.cpp

int main()
{
   int m = 6, n = 5;
   [m,n,n] { return n + m; }(); // C3483
}
```

## <a name="see-also"></a>Vedere anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
