---
title: Errore del compilatore C2843
ms.date: 11/04/2016
f1_keywords:
- C2843
helpviewer_keywords:
- C2843
ms.assetid: 9d3f2ac4-eea5-4fed-abeb-e752f442bfcc
ms.openlocfilehash: d6ab867323e629695e161f3ac001a3fb2174775e
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74752002"
---
# <a name="compiler-error-c2843"></a>Errore del compilatore C2843

'member%$S': impossibile accettare l'indirizzo di un membro dati non statico oppure di un metodo di un tipo gestito o WinRT

È necessaria un'istanza per accettare l'indirizzo di membri dati non statici di una classe o interfaccia gestita o WinRT.

L'esempio seguente genera l'errore C2843 e mostra come risolverlo:

```cpp
// C2843_2.cpp
// compile with: /clr
public ref class C {
public:
   int m_i;
};

ref struct MyStruct {
   static void sf() {}
   void f() {}
};

int main() {
   MyStruct ^ps = gcnew MyStruct;
   void (__clrcall MyStruct::*F1)() = & MyStruct::f;   // C2843
   void (__clrcall MyStruct::*F2)() = & ps->f;   // C2843
   void (__clrcall MyStruct::*F3)();   // C2843

   void (__clrcall *F5)() = MyStruct::sf;   // OK
   void (__clrcall *F6)() = & ps->sf;   // OK

   interior_ptr<int> i = &C::m_i; // C2843
   C ^x = gcnew C();
   interior_ptr<int> ii = &x->m_i;
}
```
