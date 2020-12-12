---
description: 'Altre informazioni su: errore del compilatore C3496'
title: Errore del compilatore C3496
ms.date: 11/04/2016
f1_keywords:
- C3496
helpviewer_keywords:
- C3496
ms.assetid: e19885f2-677f-4c1e-bc69-e35852262dc3
ms.openlocfilehash: dc3160e1007b65b70ea952aeaee3c77ba8ab21e6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97315517"
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

## <a name="see-also"></a>Vedi anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
