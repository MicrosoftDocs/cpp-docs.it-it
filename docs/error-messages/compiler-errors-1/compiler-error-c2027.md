---
title: Errore del compilatore C2027
ms.date: 11/04/2016
f1_keywords:
- C2027
helpviewer_keywords:
- C2027
ms.assetid: a39150c0-ec04-45ec-934c-a838bfe76627
ms.openlocfilehash: 59d0e5d5a5f0957f2d73cdb863ccee9a2dd2a026
ms.sourcegitcommit: 72161bcd21d1ad9cc3f12261aa84a5b026884afa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2020
ms.locfileid: "90743256"
---
# <a name="compiler-error-c2027"></a>Errore del compilatore C2027

uso del tipo non definito ' type '

Un tipo non può essere utilizzato fino a quando non viene definito. Per risolvere l'errore, assicurarsi che il tipo sia completamente definito prima di farvi riferimento.

## <a name="examples"></a>Esempi

L'esempio seguente genera l'C2027.

```cpp
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

È possibile dichiarare un puntatore a un tipo dichiarato ma non definito. Tuttavia, C++ non consente un riferimento a un tipo non definito.

L'esempio seguente genera l'C2027.

```cpp
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
