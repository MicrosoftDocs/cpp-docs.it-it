---
title: Errore del compilatore C3652
ms.date: 11/04/2016
f1_keywords:
- C3652
helpviewer_keywords:
- C3652
ms.assetid: 15d68737-177e-41f1-80e0-7c3e2afdf0fc
ms.openlocfilehash: acdb8f7687639e2b35e36ea9ebf514292f4631fb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50470330"
---
# <a name="compiler-error-c3652"></a>Errore del compilatore C3652

'override': una funzione che esegue l'override esplicito deve essere virtuale

Una funzione che esegue l'override esplicito deve essere virtuale. Per altre informazioni, vedere [esegue l'override esplicito](../../windows/explicit-overrides-cpp-component-extensions.md).

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