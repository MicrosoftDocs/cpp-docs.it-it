---
title: Errore del compilatore C3648
ms.date: 11/04/2016
f1_keywords:
- C3648
helpviewer_keywords:
- C3648
ms.assetid: 5d042989-41cb-4cd0-aa50-976b70146aaf
ms.openlocfilehash: 3b26be9890bbbdf6276c61023e6867160528e236
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74751833"
---
# <a name="compiler-error-c3648"></a>Errore del compilatore C3648

Questa sintassi di override esplicita richiede/CLR: oldSyntax

Quando si esegue la compilazione per la sintassi gestita più recente, il compilatore ha trovato la sintassi di override esplicita per le versioni precedenti che non sono più supportate.

Per ulteriori informazioni, vedere [override espliciti](../../extensions/explicit-overrides-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3648:

```cpp
// C3648.cpp
// compile with: /clr
public interface struct I {
   void f();
};

public ref struct R : I {
   virtual void I::f() {}   // C3648
   // try the following line instead
   // virtual void f() = I::f{}
};
```
