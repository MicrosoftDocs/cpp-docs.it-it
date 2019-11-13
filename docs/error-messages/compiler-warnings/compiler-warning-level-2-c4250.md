---
title: Avviso del compilatore (livello 2) C4250
ms.date: 11/04/2016
f1_keywords:
- C4250
helpviewer_keywords:
- C4250
ms.assetid: d47f7249-6b5a-414b-b2d4-56e5d246a782
ms.openlocfilehash: 03826f10659cbdf6035cd4dedebecca3e3302e3a
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74052119"
---
# <a name="compiler-warning-level-2-c4250"></a>Avviso del compilatore (livello 2) C4250

' Class1': eredità Class2:: Member ' tramite dominanza

Due o più membri hanno lo stesso nome. Quello in `class2` viene ereditato perché è una classe di base per le altre classi che contengono questo membro.

Per disattivare C4250, usare il pragma [warning](../../preprocessor/warning.md) .

Poiché una classe base virtuale è condivisa tra più classi derivate, un nome in una classe derivata domina un nome in una classe base. Data la gerarchia di classi seguente, ad esempio, sono presenti due definizioni di func ereditate all'interno di Diamond, ovvero l'istanza vbc:: Func () tramite la classe debole e l'oggetto dominante:: Func () tramite la classe dominante. Chiamata non qualificata di Func () tramite un oggetto classe Diamond, che chiama sempre l'istanza dominate:: Func ().  Se la classe debole doveva introdurre un'istanza di Func (), nessuna definizione verrebbe dominata e la chiamata verrebbe contrassegnata come ambigua.

```cpp
// C4250.cpp
// compile with: /c /W2
#include <stdio.h>
struct vbc {
   virtual void func() { printf("vbc::func\n"); }
};

struct weak : public virtual vbc {};

struct dominant : public virtual vbc {
   void func() { printf("dominant::func\n"); }
};

struct diamond : public weak, public dominant {};

int main() {
   diamond d;
   d.func();   // C4250
}
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4250.

```cpp
// C4250_b.cpp
// compile with: /W2 /EHsc
#include <iostream>
using namespace std;
class A {
public:
   virtual operator int () {
      return 2;
   }
};

class B : virtual public A {
public:
   virtual operator int () {
      return 3;
   }
};

class C : virtual public A {};

class E : public B, public C {};   // C4250

int main() {
   E eObject;
   cout << eObject.operator int() << endl;
}
```

## <a name="example"></a>Esempio

In questo esempio viene illustrata una situazione più complessa. L'esempio seguente genera l'C4250.

```cpp
// C4250_c.cpp
// compile with: /W2 /EHsc
#include <iostream>
using namespace std;

class V {
public:
   virtual int f() {
      return 1024;
   }
};

class B : virtual public V {
public:
   int b() {
      return f(); // B::b() calls V::f()
   }
};

class M : virtual public V {
public:
   int f() {
      return 7;
   }
};

// because of dominance, f() is M::f() inside D,
// changing the meaning of B::b's f() call inside a D
class D : public B, public M {};   // C4250

int main() {
   D d;
   cout << "value is: " << d.b();   // invokes M::f()
}
```