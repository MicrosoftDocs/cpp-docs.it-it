---
title: Errore del compilatore C3731
ms.date: 11/04/2016
f1_keywords:
- C3731
helpviewer_keywords:
- C3731
ms.assetid: 45f89fcd-464c-4bc8-8a42-edcb5416d26c
ms.openlocfilehash: 5acc33869648f83cd44bc557128c685f521ddf88
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50496057"
---
# <a name="compiler-error-c3731"></a>Errore del compilatore C3731

evento non compatibile 'function1' e il gestore 'function2'; origine evento e il gestore eventi deve essere dello stesso tipo

L'origine e il ricevente di un evento devono avere lo stesso tipo (ad esempio tipi `native` e `com`). Per correggere questo errore, verificare i tipi di origine evento e la corrispondenza di gestore dell'evento.

L'esempio seguente genera l'errore C3731:

```
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