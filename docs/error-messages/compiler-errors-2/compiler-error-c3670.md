---
title: Errore del compilatore C3670
ms.date: 11/04/2016
f1_keywords:
- C3670
helpviewer_keywords:
- C3670
ms.assetid: d0fa9c6e-8f90-48c7-9066-31b4fa5942eb
ms.openlocfilehash: 1b52f58f47027d88d9b0e150ebd2bf4588161553
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74758125"
---
# <a name="compiler-error-c3670"></a>Errore del compilatore C3670

' override ': non è possibile eseguire l'override del metodo ' Method ' della classe di base inaccessibile

Una sostituzione può essere eseguita solo su una funzione il cui livello di accesso lo rende disponibile in un tipo derivato. Per ulteriori informazioni, vedere [override espliciti](../../extensions/explicit-overrides-cpp-component-extensions.md).

L'esempio seguente genera l'C3670:

```cpp
// C3670.cpp
// compile with: /clr /c
public ref class C {
// Uncomment the following line to resolve.
// public:
   virtual void g() { }
};

public ref class D : public C {
public:
   virtual void f() new sealed = C::g {};   // C3670
};
```
