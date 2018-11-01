---
title: Errore del compilatore C3481
ms.date: 11/04/2016
f1_keywords:
- C3481
helpviewer_keywords:
- C3481
ms.assetid: 5d09375a-5ed3-4b61-86ed-45e91fd734c7
ms.openlocfilehash: 32a04c2c49f8d9d974c3423756c4c9fc59a46495
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50661981"
---
# <a name="compiler-error-c3481"></a>Errore del compilatore C3481

'var': variabile di acquisizione delle espressioni lambda non trovata

Il compilatore non ha trovato la definizione di una variabile passata all'elenco di acquisizione di un'espressione lambda.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Rimuovere la variabile dall'elenco di acquisizione dell'espressione lambda.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3481 perché la variabile `n` non è definita:

```
// C3481.cpp

int main()
{
   [n] {}(); // C3481
}
```

## <a name="see-also"></a>Vedere anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)