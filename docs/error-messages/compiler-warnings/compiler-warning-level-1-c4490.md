---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4490'
title: Avviso del compilatore (livello 1) C4490
ms.date: 11/04/2016
f1_keywords:
- C4490
helpviewer_keywords:
- C4490
ms.assetid: f9b03ecf-41a1-4f4d-a74c-2c1e88234ccc
ms.openlocfilehash: 8216075e481e85f362e85cf158375a6d8b076772
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97310876"
---
# <a name="compiler-warning-level-1-c4490"></a>Avviso del compilatore (livello 1) C4490

' override ': utilizzo non corretto dell'identificatore di override; ' Function ' non corrisponde a un metodo della classe di riferimento di base

Identificatore di override utilizzato in modo errato. Ad esempio, non si esegue l'override di una funzione di interfaccia, che viene implementata.

Per altre informazioni, vedere [identificatori di override](../../extensions/override-specifiers-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4490.

```cpp
// C4490.cpp
// compile with: /clr /c /W1

interface struct IFace {
   void Test();
};

ref struct Class1 : public IFace {
   virtual void Test() override {}   // C4490
   // try the following line instead
   // virtual void Test() {}
};
```
