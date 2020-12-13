---
description: 'Altre informazioni su: errore del compilatore C2276'
title: Errore del compilatore C2276
ms.date: 11/04/2016
f1_keywords:
- C2276
helpviewer_keywords:
- C2276
ms.assetid: 62005ad9-6cb9-4b1f-965d-b875adaf695e
ms.openlocfilehash: dc6a407110ee121444b7e767f43d7d29ba42db72
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97134511"
---
# <a name="compiler-error-c2276"></a>Errore del compilatore C2276

' operator ': operazione non valida sull'espressione di funzione membro associata

Il compilatore ha rilevato un problema con la sintassi per la creazione di un puntatore a membro.

L'esempio seguente genera l'C2276:

```cpp
// C2276.cpp
class A {
public:
   int func(){return 0;}
} a;

int (*pf)() = &a.func;   // C2276
// try the following line instead
// int (A::*pf3)() = &A::func;

class B {
public:
   void mf() {
      &this -> mf;   // C2276
      // try the following line instead
      // &B::mf;
   }
};

int main() {
   A a;
   &a.func;   // C2276
   // try the following line instead
   // &A::func;
}
```
