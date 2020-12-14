---
description: 'Altre informazioni su: errore del compilatore C3731'
title: Errore del compilatore C3731
ms.date: 11/04/2016
f1_keywords:
- C3731
helpviewer_keywords:
- C3731
ms.assetid: 45f89fcd-464c-4bc8-8a42-edcb5416d26c
ms.openlocfilehash: 8a7ad836083a8c103df7becd7605a0dfd0efeea7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97245083"
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
