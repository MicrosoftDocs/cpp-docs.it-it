---
title: Errore del compilatore C3652
ms.date: 11/04/2016
f1_keywords:
- C3652
helpviewer_keywords:
- C3652
ms.assetid: 15d68737-177e-41f1-80e0-7c3e2afdf0fc
ms.openlocfilehash: 350edcf409cf2a890a8f83147ce0ae13e9992694
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58767951"
---
# <a name="compiler-error-c3652"></a>Errore del compilatore C3652

'override': una funzione che esegue l'override esplicito deve essere virtuale

Una funzione che esegue l'override esplicito deve essere virtuale. Per altre informazioni, vedere [esegue l'override esplicito](../../extensions/explicit-overrides-cpp-component-extensions.md).

L'esempio seguente genera l'errore C3652:

```
// C3652.cpp
// compile with: /clr /c
public interface class I {
   void f();
};

public ref struct R : I {
   void f() = I::f {}   // C3652
   // try the following line instead
   // virtual void f() = I::f {}
};
```