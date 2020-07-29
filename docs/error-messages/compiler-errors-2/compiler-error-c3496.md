---
title: Errore del compilatore C3496
ms.date: 11/04/2016
f1_keywords:
- C3496
helpviewer_keywords:
- C3496
ms.assetid: e19885f2-677f-4c1e-bc69-e35852262dc3
ms.openlocfilehash: 993d391f28a59afc8926748f2e6f34ab441657dc
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228856"
---
# <a name="compiler-error-c3496"></a>Errore del compilatore C3496

'this' viene sempre acquisito per valore. '&' verrà ignorato

Non è possibile acquisire il **`this`** puntatore per riferimento.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Acquisire il **`this`** puntatore per valore.

## <a name="example"></a>Esempio

Nell'esempio seguente viene generato C3496 perché un riferimento al **`this`** puntatore viene visualizzato nell'elenco di acquisizione di un'espressione lambda:

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
