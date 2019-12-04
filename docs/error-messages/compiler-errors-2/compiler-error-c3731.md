---
title: Errore del compilatore C3731
ms.date: 11/04/2016
f1_keywords:
- C3731
helpviewer_keywords:
- C3731
ms.assetid: 45f89fcd-464c-4bc8-8a42-edcb5416d26c
ms.openlocfilehash: 9acf80eec0d36db64fa070d691533e7085754ac0
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74752951"
---
# <a name="compiler-error-c3731"></a>Errore del compilatore C3731

evento ' funzione1' e gestore ' funzione2' incompatibili; il tipo dell'origine evento e del gestore eventi deve essere lo stesso

L'origine e il ricevente di un evento devono avere lo stesso tipo (ad esempio tipi `native` e `com`). Per correggere l'errore, rendere corrispondenti i tipi dell'origine evento e del gestore eventi.

L'esempio seguente genera l'C3731:

```cpp
// C3731.cpp
// compile with: /clr
#using <mscorlib.dll>
[event_source(native)]
struct A {
   __event void MyEvent();
};

[event_receiver(managed)]
// try the following line instead
// [event_receiver(native)]
struct B {
   void func();
   B(A a) {
      __hook(&A::MyEvent, &a, &B::func);   // C3731
   }
};

int main() {
}
```
