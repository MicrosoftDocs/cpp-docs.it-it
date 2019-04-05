---
title: Errore del compilatore C3496
ms.date: 11/04/2016
f1_keywords:
- C3496
helpviewer_keywords:
- C3496
ms.assetid: e19885f2-677f-4c1e-bc69-e35852262dc3
ms.openlocfilehash: 025498f3fe244916cd0a06e36feee6fdb532acc6
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59026695"
---
# <a name="compiler-error-c3496"></a>Errore del compilatore C3496

'this' viene sempre acquisito per valore. '&' verrà ignorato

Non è possibile acquisire il puntatore `this` per riferimento.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Acquisire il puntatore `this` per valore.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3496 perché nell'elenco di acquisizione di un'espressione lambda compare un riferimento al puntatore `this` :

```
// C3496.cpp
// compile with: /c

class C
{
   void f()
   {
      [&this] {}(); // C3496
   }
};
```

## <a name="see-also"></a>Vedere anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)