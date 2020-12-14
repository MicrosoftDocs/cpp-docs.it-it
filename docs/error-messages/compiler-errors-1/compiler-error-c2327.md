---
description: "Altre informazioni su: errore del compilatore l'errore C2327"
title: Errore del compilatore C2327
ms.date: 11/04/2016
f1_keywords:
- C2327
helpviewer_keywords:
- C2327
ms.assetid: 95278c95-d1f9-4487-ad27-53311f5e8112
ms.openlocfilehash: bcbf3bff2a98fe5ec18a00a71c6f8b359ad6f6f0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97234930"
---
# <a name="compiler-error-c2327"></a>Errore del compilatore C2327

' symbol ': non è un nome di tipo, statico o enumeratore

Il codice all'interno di una classe annidata tenta di accedere a un membro della classe che lo contiene, che non è un nome di tipo, un membro statico o un enumeratore.

Quando si esegue la compilazione con **/CLR**, una delle cause comuni di l'errore C2327 è una proprietà con lo stesso nome del tipo di proprietà.

L'esempio seguente genera l'l'errore C2327:

```cpp
// C2327.cpp
int x;
class enclose {
public:
   int x;
   static int s;
   class inner {
      void f() {
         x = 1;   // C2327; enclose::x is not static
         s = 1;   // ok; enclose::s is static
         ::x = 1;   // ok; ::x refers to global
      }
   };
};
```

L'errore C2327 può anche verificarsi se il nome di un tipo è nascosto dal nome di un membro:

```cpp
// C2327b.cpp
class X {};

class S {
   X X;
   // try the following line instead
   // X MyX;
   X other;   // C2327, rename member X
};
```

In questa situazione è inoltre possibile attivare l'errore C2327, in cui è necessario specificare completamente il tipo di dati del parametro:

```cpp
// C2327c.cpp
// compile with: /c
struct A {};

struct B {
   int A;
   void f(A a) {   // C2327
   void f2(struct A a) {}   // OK
   }
};
```

L'esempio seguente genera l'l'errore C2327:

```cpp
// C2327d.cpp
// compile with: /clr /c
using namespace System;

namespace NA {
   public enum class E : Int32 {
      one = 1,
      two = 2,
      three = 3
   };

   public ref class A {
   private:
      E m_e;
   public:
      property E E {
         NA::E get() {
            return m_e;
         }
         // At set, compiler doesn't know whether E is get_E or
         // Enum E, therefore fully qualifying Enum E is necessary
         void set( E e ) {   // C2327
            // try the following line instead
            // void set(NA::E e) {
            m_e = e;
         }
      }
   };
}
```

L'esempio seguente mostra l'errore C2327 quando una proprietà ha lo stesso nome del tipo di proprietà:

```cpp
// C2327f.cpp
// compile with: /clr /c
public value class Address {};

public ref class Person {
public:
   property Address Address {
      ::Address get() {
         return address;
      }
      void set(Address addr) {   // C2327
      // try the following line instead
      // set(::Address addr) {
         address = addr;
      }
   }
private:
   Address address;   // C2327
   // try the following line instead
   // ::Address address;
};
```
