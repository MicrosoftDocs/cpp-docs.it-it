---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4358'
title: Avviso del compilatore (livello 1) C4358
ms.date: 11/04/2016
f1_keywords:
- C4358
helpviewer_keywords:
- C4358
ms.assetid: a9848f84-14b3-405e-81bf-ee3e91a51511
ms.openlocfilehash: 2e3f548f5b464f712f6e5d0e20dc6da9edfdfd3e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339982"
---
# <a name="compiler-warning-level-1-c4358"></a>Avviso del compilatore (livello 1) C4358

' operator ': il tipo restituito di delegati combinati non è' void '; il valore restituito non è definito

Due delegati sono stati combinati e il valore restituito non è void. Se vengono combinati due delegati con valori restituiti non void, il compilatore non sarà in grado di eseguire un'assegnazione appropriata se viene utilizzato il valore restituito del delegato.

L'esempio seguente genera l'C4358:

```cpp
// C4358.cpp
// compile with: /clr /W1
delegate int D();
delegate void E();

ref class X {
   int i;
public:
   X(int ii) : i(ii) {}
   int f() {
      return i;
   }
};

ref class Y {
   int i;
public:
   Y() {}
   void g() {}
};

int main() {
   D^ d = gcnew D(gcnew X(1), &X::f);
   D^ d2 = gcnew D(gcnew X(2), &X::f);

   d += d2;   // C4358
   int j = d();   // return value indeterminate

   E^ e = gcnew E(gcnew Y, &Y::g);
   E^ e2 = gcnew E(gcnew Y, &Y::g);
   e += e2;   // OK
}
```
