---
title: Errore del compilatore C3867
ms.date: 11/04/2016
f1_keywords:
- C3867
helpviewer_keywords:
- C3867
ms.assetid: bc5de03f-e01a-4407-88c3-2c63f0016a1e
ms.openlocfilehash: 7e3f52b2b69058549cb8aa3e14d2a4b4048fc4e4
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74756851"
---
# <a name="compiler-error-c3867"></a>Errore del compilatore C3867

' Func ': chiamata di funzione mancante nell'elenco degli argomenti; usare ' & Func ' per creare un puntatore al membro

Si è cercato di accettare l'indirizzo di una funzione membro senza qualificare la funzione membro con il nome della classe e l'operatore address-of.

Questo errore può anche essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio 2005: conformità avanzata a puntatore a membro. Il codice compilato prima di Visual Studio 2005 genera ora C3867.

## <a name="example"></a>Esempio

L'errore C3867 può essere generato dal compilatore con una risoluzione suggerita fuorviante. Se possibile, usare la classe più derivata.

L'esempio seguente genera l'errore C3867 e mostra come risolverlo.

```cpp
// C3867_1.cpp
// compile with: /c
struct Base {
protected:
   void Test() {}
};

class Derived : public Base {
   virtual void Bar();
};

void Derived::Bar() {
   void (Base::*p1)() = Test;   // C3867
   &Derived::Test;   // OK
}
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3867 e mostra come risolverlo.

```cpp
// C3867_2.cpp
#include<stdio.h>

struct S {
   char *func() {
      return "message";
   }
};

class X {
public:
   void f() {}
};

int main() {
   X::f;   // C3867

   // OK
   X * myX = new X;
   myX->f();

   S s;
   printf_s("test %s", s.func);   // C3867
   printf_s("test %s", s.func());   // OK
}
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3867 e mostra come risolverlo.

```cpp
// C3867_3.cpp
class X {
public:
   void mf(){}
};

int main() {
   void (X::*pmf)() = X::mf;   // C3867

   // try the following line instead
   void (X::*pmf2)() = &X::mf;
}
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3867.

```cpp
// C3867_4.cpp
// compile with: /c
class A {
public:
   void f(int) {}

   typedef void (A::*TAmtd)(int);

   struct B {
      TAmtd p;
   };

   void g() {
      B b1;
      b1.p = f;   // C3867
   }
};
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3867.

```cpp
// C3867_5.cpp
// compile with: /EHsc
#include <iostream>

class Testpm {
public:
   void m_func1() {
      std::cout << m_num << "\tm_func1\n";
    }

   int m_num;
   typedef void (Testpm::*pmfn1)();
   void func(Testpm* p);
};

void Testpm::func(Testpm* p) {
   pmfn1 s = m_func1;   // C3867
   pmfn1 s2 = &Testpm::m_func1;   // OK
   (p->*s2)();
}

int main() {
   Testpm *pTestpm = new Testpm;
   pTestpm->m_num = 10;

   pTestpm->func(pTestpm);
}
```
