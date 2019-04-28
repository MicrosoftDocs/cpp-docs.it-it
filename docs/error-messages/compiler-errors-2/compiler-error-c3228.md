---
title: Errore del compilatore C3228
ms.date: 11/04/2016
f1_keywords:
- C3228
helpviewer_keywords:
- C3228
ms.assetid: 9015adf9-17b0-4312-b4a7-c1f33e4126f4
ms.openlocfilehash: 63e7afa16c21aa8c4e335d22693ca71d7ab8d6a8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62173983"
---
# <a name="compiler-error-c3228"></a>Errore del compilatore C3228

'function': l'argomento di tipo generico per 'param' non può essere 'type'. Deve essere un tipo di valore o un tipo di handle

Un tipo errato è stato passato come argomento di tipo generico.

L'esempio seguente genera l'errore C3228:

```
// C3228.cpp
// compile with: /clr
class A {};

value class B {};

generic <class T>
void Test() {}

ref class C {
public:
   generic <class T>
   static void f() {}
};

int main() {
   C::f<A>();   // C3228
   C::f<B>();   // OK

   Test<C>();   // C3228
   Test<C ^>();   // OK
}
```