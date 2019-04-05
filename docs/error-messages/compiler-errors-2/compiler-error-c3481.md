---
title: Errore del compilatore C3481
ms.date: 11/04/2016
f1_keywords:
- C3481
helpviewer_keywords:
- C3481
ms.assetid: 5d09375a-5ed3-4b61-86ed-45e91fd734c7
ms.openlocfilehash: eff7c7a4f39524aa1d894b7b4590aa809714aae6
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59041202"
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