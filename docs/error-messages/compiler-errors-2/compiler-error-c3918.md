---
description: 'Altre informazioni su: errore del compilatore C3918'
title: Errore del compilatore C3918
ms.date: 11/04/2016
f1_keywords:
- C3918
helpviewer_keywords:
- C3918
ms.assetid: a8b3a90a-3fe1-4244-a5ff-a31cdae97d98
ms.openlocfilehash: 5945477389aaa2c472a5a95d65f4efb44ef1ca9b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97143910"
---
# <a name="compiler-error-c3918"></a>Errore del compilatore C3918

per l'utilizzo è necessario che ' member ' sia un membro dati

C3918 può verificarsi per diversi motivi correlati agli eventi.

## <a name="examples"></a>Esempio

C3918 può verificarsi perché un membro di classe è necessario nel contesto corrente. L'esempio seguente genera l'C3918.

```cpp
// C3918.cpp
// compile with: /clr /c
public ref class C {
public:
   System::Object ^ o;
   delegate void Del();

   event Del^ MyEvent {
      void add(Del^ev) {
         if ( MyEvent != nullptr) {}   // C3918
         if ( o != nullptr) {}   // OK
   }
   void remove(Del^){}
   }
};
```

C3918 viene inoltre generato se si tenta di verificare un evento Trivial per null (il nome dell'evento non fornirà più l'accesso diretto al delegato dell'archivio di backup per l'evento).

L'esempio seguente genera l'C3918.

```cpp
// C3918_2.cpp
// compile with: /clr /c
using namespace System;
public delegate int MyDel(int);

interface struct IEFace {
   event MyDel ^ E;
};

ref struct EventSource : public IEFace {
   virtual event MyDel ^ E;
   void Fire_E(int i) {
      if (E)   // C3918
         E(i);
   }
};
```

C3918 può anche verificarsi se si sottoscrive erroneamente un evento. L'esempio seguente genera l'C3918.

```cpp
// C3918_3.cpp
// compile with: /clr /c
using namespace System;

public delegate void del();

public ref class A {
public:
   event del^ e {
      void add(del ^handler ) {
         d += handler;
      }

      void remove(del ^handler) {
         d -= handler;
      }

      void raise() {
         d();
      }
   }

   del^ d;
   void f() {}

   A() {
      e = gcnew del(this, &A::f);   // C3918
      // try the following line instead
      // e += gcnew del(this, &A::f);
      e();
   }
};

int main() {
   A a;
}
```
