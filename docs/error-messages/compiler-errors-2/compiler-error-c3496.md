---
title: Errore del compilatore C3496
ms.date: 11/04/2016
f1_keywords:
- C3496
helpviewer_keywords:
- C3496
ms.assetid: e19885f2-677f-4c1e-bc69-e35852262dc3
ms.openlocfilehash: b9542f1904c6797a77c88c88a37aff9348364268
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74738180"
---
# <a name="compiler-error-c3496"></a>Errore del compilatore C3496

'this' viene sempre acquisito per valore. '&' verrà ignorato

Non è possibile acquisire il puntatore `this` per riferimento.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Acquisire il puntatore `this` per valore.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3496 perché nell'elenco di acquisizione di un'espressione lambda compare un riferimento al puntatore `this` :

```cpp
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
