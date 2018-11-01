---
title: Errore del compilatore C2027
ms.date: 11/04/2016
f1_keywords:
- C2027
helpviewer_keywords:
- C2027
ms.assetid: a39150c0-ec04-45ec-934c-a838bfe76627
ms.openlocfilehash: 3f3fac9d5410595fe5653e257d97d2fd7c858545
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50446033"
---
# <a name="compiler-error-c2027"></a>Errore del compilatore C2027

uso del tipo non definito 'type'

Un tipo non può essere utilizzato fino a quando non è definito. Per risolvere l'errore, assicurarsi che il tipo sia definito completamente prima di farvi riferimento.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2027.

```
// C2027.cpp
class C;
class D {
public:
   void func() {
   }
};

int main() {
   C *pC;
   pC->func();   // C2027

   D *pD;
   pD->func();
}
```

## <a name="example"></a>Esempio

È possibile dichiarare un puntatore a un tipo dichiarato ma non definito.  Ma Visual C++ non consente un riferimento a un tipo non definito.

L'esempio seguente genera l'errore C2027.

```
// C2027_b.cpp
class A;
A& CreateA();

class B;
B* CreateB();

int main() {
   CreateA();   // C2027
   CreateB();   // OK
}
```