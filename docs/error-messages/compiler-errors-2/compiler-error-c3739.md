---
description: 'Altre informazioni su: errore del compilatore C3739'
title: Errore del compilatore C3739
ms.date: 11/04/2016
f1_keywords:
- C3739
helpviewer_keywords:
- C3739
ms.assetid: acffe894-08b8-4bf2-9249-9501e6e2bad3
ms.openlocfilehash: dd08b171503d7c5c4c7d46b9d06d4372513e2e73
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340294"
---
# <a name="compiler-error-c3739"></a>Errore del compilatore C3739

' Class ': la sintassi è supportata solo quando il parametro ' layout_dependent ' di event_receiver è true

Si è tentato di associare un'intera interfaccia di eventi `layout_dependent` ma [event_receiver](../../windows/attributes/event-receiver.md) attributo non è true. è necessario associare un solo evento alla volta.

L'esempio seguente genera l'C3739:

```cpp
// C3739.cpp
struct A
{
   __event void e();
};

// event_receiver is implied
// [ event_receiver(layout_dependent=false)]

// use the following line instead
// [event_receiver(com, layout_dependent=true), coclass ]
struct B
{
   void f();
   B(A* a)
   {
      __hook(A, a, &B::f);   // C3739
      // use the following line instead to hook a single event
      // __hook(&A::e, a, &B::f);
   }
};

int main()
{
}
```
