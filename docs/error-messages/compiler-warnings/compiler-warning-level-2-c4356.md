---
title: Avviso del compilatore (livello 2) C4356
ms.date: 11/04/2016
f1_keywords:
- C4356
helpviewer_keywords:
- C4356
ms.assetid: 3af3defe-de33-43b6-bd6c-2c2e09e34f3f
ms.openlocfilehash: ffcf0098799b893f83e331b3b4cc602e1b538b1c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80161828"
---
# <a name="compiler-warning-level-2-c4356"></a>Avviso del compilatore (livello 2) C4356

' member ': Impossibile inizializzare il membro dati statici tramite la classe derivata

L'inizializzazione di un membro dati statici non è corretta. Il compilatore ha accettato l'inizializzazione. Per evitare l'avviso, inizializzare il membro tramite la classe di base.

Usare il pragma [warning](../../preprocessor/warning.md) per non visualizzare questo avviso.

L'esempio seguente genera l'C4356:

```cpp
// C4356.cpp
// compile with: /W2 /EHsc
#include <iostream>

template <class T>
class C {
   static int n;
};

class D : C<int> {};

int D::n = 0; // C4356
// try the following line instead
// int C<int>::n = 0;

class A {
public:
   static int n;
};

class B : public A {};

int B::n = 10;   // C4356
// try the following line instead
// int A::n = 99;

int main() {
   using namespace std;
   cout << B::n << endl;
}
```
