---
description: 'Altre informazioni su: errore del compilatore C2027'
title: Errore del compilatore C2027
ms.date: 11/04/2016
f1_keywords:
- C2027
helpviewer_keywords:
- C2027
ms.assetid: a39150c0-ec04-45ec-934c-a838bfe76627
ms.openlocfilehash: 131362f2caa8da80865a9601d87cfe3a5e7ab3b9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97175547"
---
# <a name="compiler-error-c2027"></a>Errore del compilatore C2027

uso del tipo non definito ' type '

Un tipo non può essere utilizzato fino a quando non viene definito. Per risolvere l'errore, assicurarsi che il tipo sia completamente definito prima di farvi riferimento.

## <a name="examples"></a>Esempio

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
