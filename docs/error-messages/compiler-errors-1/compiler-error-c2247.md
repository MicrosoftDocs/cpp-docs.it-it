---
description: 'Altre informazioni su: errore del compilatore C2247'
title: Errore del compilatore C2247
ms.date: 11/04/2016
f1_keywords:
- C2247
helpviewer_keywords:
- C2247
ms.assetid: 72efa03e-615e-4ef9-aede-0a98654b20fd
ms.openlocfilehash: 480d3862a1f96517ecce11be5c695e106eb58d7e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97177939"
---
# <a name="compiler-error-c2247"></a>Errore del compilatore C2247

' Identifier ' non è accessibile perché' Class ' USA ' specifier ' per ereditare da' Class '

`identifier` viene ereditato da una classe dichiarata con accesso privato o protetto.

L'esempio seguente genera l'C2247:

```cpp
// C2247.cpp
class A {
public:
   int i;
};
class B : private A {};    // B inherits a private A
class C : public B {} c;   // so even though C's B is public
int j = c.i;               // C2247, i not accessible
```

Questo errore può essere generato anche in seguito a operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: controllo di accesso con membri protetti. È possibile accedere a un membro protetto (n) solo tramite una funzione membro di una classe (B) che eredita dalla classe (A) di cui è membro (n).

Per il codice valido in entrambe le versioni Visual Studio .NET 2003 e Visual Studio .NET di Visual C++, dichiarare il membro come Friend del tipo. È anche possibile usare l'ereditarietà pubblica.

```cpp
// C2247b.cpp
// compile with: /c
// C2247 expected
class A {
public:
   void f();
   int n;
};

class B: protected A {
   // Uncomment the following line to resolve.
   // friend void A::f();
};

void A::f() {
   B b;
   b.n;
}
```

C2247 può anche essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: le classi base private sono ora inaccessibili. Una classe (A) che è una classe di base privata a un tipo (B) non deve essere accessibile a un tipo (C) che usa B come classe di base.

Per il codice valido in entrambe le versioni Visual Studio .NET 2003 e Visual Studio .NET di Visual C++, usare l'operatore scope.

```cpp
// C2247c.cpp
// compile with: /c
struct A {};

struct B: private A {};

struct C : B {
   void f() {
      A *p1 = (A*) this;   // C2247
      // try the following line instead
      // ::A *p2 = (::A*) this;
   }
};
```
