---
title: Errore del compilatore C2676
ms.date: 11/04/2016
f1_keywords:
- C2676
helpviewer_keywords:
- C2676
ms.assetid: 838a5e34-c92f-4f65-a597-e150bf8cf737
ms.openlocfilehash: 1b999875aa1c7ef34065c0a36046c634308075f5
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218195"
---
# <a name="compiler-error-c2676"></a>Errore del compilatore C2676

' operator ' binario:' type ' non definisce questo operatore né una conversione in un tipo accettabile per l'operatore predefinito

Per usare l'operatore, è necessario eseguirne l'overload per il tipo specificato o definire una conversione in un tipo per cui l'operatore è definito.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2676.

```cpp
// C2676.cpp
// C2676 expected
struct C {
   C();
} c;

struct D {
   D();
   D operator >>( C& ){return * new D;}
   D operator <<( C& ){return * new D;}
} d;

struct E {
   // operator int();
};

int main() {
   d >> c;
   d << c;
   E e1, e2;
   e1 == e2;   // uncomment operator int in class E, then
               // it is OK even though neither E::operator==(E) nor
               // operator==(E, E) defined. Uses the conversion to int
               // and then the builtin-operator==(int, int)
}
```

## <a name="example"></a>Esempio

C2676 può verificarsi anche se si tenta di eseguire l'aritmetica dei puntatori sul **`this`** puntatore di un tipo di riferimento.

Il **`this`** puntatore è di tipo handle in un tipo di riferimento. Per ulteriori informazioni, vedere [semantica del puntatore this](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Semantics_of_the_this_pointer).

L'esempio seguente genera l'C2676.

```cpp
// C2676_a.cpp
// compile with: /clr
using namespace System;

ref struct A {
   property Double default[Double] {
      Double get(Double data) {
         return data*data;
      }
   }

   A() {
      Console::WriteLine("{0}", this + 3.3);   // C2676
      Console::WriteLine("{0}", this[3.3]);   // OK
   }
};

int main() {
   A ^ mya = gcnew A();
}
```
