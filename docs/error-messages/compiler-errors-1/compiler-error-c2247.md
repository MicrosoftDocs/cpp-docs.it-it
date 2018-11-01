---
title: Errore del compilatore C2247
ms.date: 11/04/2016
f1_keywords:
- C2247
helpviewer_keywords:
- C2247
ms.assetid: 72efa03e-615e-4ef9-aede-0a98654b20fd
ms.openlocfilehash: ab1f83e2075128441cbffd2d939e3b99b45be4c3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50596431"
---
# <a name="compiler-error-c2247"></a>Errore del compilatore C2247

'identifier' non è accessibile perché 'class' Usa 'specifier' per ereditare da 'class'

`identifier` viene ereditata da una classe dichiarata con accesso privato o protetto.

L'esempio seguente genera l'errore C2247:

```
// C2247.cpp
class A {
public:
   int i;
};
class B : private A {};    // B inherits a private A
class C : public B {} c;   // so even though C's B is public
int j = c.i;               // C2247, i not accessible
```

Questo errore può anche essere generato in seguito a operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: controllo di accesso con i membri protetti. Un membro protetto (n) è accessibile solo tramite una funzione membro di una classe (B) che eredita dalla classe (A) di cui (n) è un membro.

Per il codice sia valido in entrambe le Visual Studio .NET 2003 e versioni di Visual Studio .NET di Visual C++, dichiarare il membro sia del tipo di un amico. È anche possibile utilizzare l'ereditarietà pubblica.

```
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

C2247 può anche essere generato in seguito alle operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: ora accessibile alle classi base private. Una classe (A) che è una classe base privata a un tipo (B) non siano accessibile a un tipo (C) che usa B come una classe di base.

Per il codice sia valido in entrambe le Visual Studio .NET 2003 e versioni di Visual Studio .NET di Visual C++, usare l'operatore di ambito.

```
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