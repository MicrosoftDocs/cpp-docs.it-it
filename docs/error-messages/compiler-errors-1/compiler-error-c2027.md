---
title: Errore del compilatore C2027
ms.date: 11/04/2016
f1_keywords:
- C2027
helpviewer_keywords:
- C2027
ms.assetid: a39150c0-ec04-45ec-934c-a838bfe76627
ms.openlocfilehash: 62cf208d9d0025afba06d32a15b9a1e50777c473
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74751001"
---
# <a name="compiler-error-c2027"></a>Errore del compilatore C2027

uso del tipo non definito ' type '

Un tipo non può essere utilizzato fino a quando non viene definito. Per risolvere l'errore, assicurarsi che il tipo sia completamente definito prima di farvi riferimento.

## <a name="example"></a>Esempio

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

## <a name="example"></a>Esempio

È possibile dichiarare un puntatore a un tipo dichiarato ma non definito. Ma C++ non consente un riferimento a un tipo non definito.

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
