---
title: Errore del compilatore C3651
ms.date: 11/04/2016
f1_keywords:
- C3651
helpviewer_keywords:
- C3651
ms.assetid: a03e692e-c219-4654-9827-8415cfa5a22d
ms.openlocfilehash: 6e773201e3bc9a4edb1ee77f1ddcd555e0ae0c0e
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59779336"
---
# <a name="compiler-error-c3651"></a>Errore del compilatore C3651

'member': non è utilizzabile come override esplicito, deve essere un membro di una classe di base

È stato specificato un override esplicito, ma la funzione viene sottoposto a override si trovava in un tipo che non è un tipo di base.

Per altre informazioni, vedere [esegue l'override esplicito](../../extensions/explicit-overrides-cpp-component-extensions.md).

L'esempio seguente genera l'errore C3651:

```
// C3651.cpp
// compile with: /clr /c
ref class C {
public:
   virtual void func2();
};

ref class Other {
public:
   virtual void func();
};

ref class D : public C {
public:
   virtual void func() new sealed = Other::func;   // C3651
   virtual void func2() new sealed = C::func2;   // OK
};
```