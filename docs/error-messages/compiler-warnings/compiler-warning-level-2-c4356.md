---
title: Avviso del compilatore (livello 2) C4356
ms.date: 11/04/2016
f1_keywords:
- C4356
helpviewer_keywords:
- C4356
ms.assetid: 3af3defe-de33-43b6-bd6c-2c2e09e34f3f
ms.openlocfilehash: 218aac1cc98d9b119490a547d63b4b5ee83e53df
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62402463"
---
# <a name="compiler-warning-level-2-c4356"></a>Avviso del compilatore (livello 2) C4356

'member': membro dati statici non possa essere inizializzato tramite classi derivate

L'inizializzazione di un membro dati statico è corretto. Il compilatore ha accettato l'inizializzazione. Per evitare l'avviso, inizializzare il membro tramite la classe di base.

Usare la [avviso](../../preprocessor/warning.md) pragma per non visualizzare questo avviso.

L'esempio seguente genera l'errore C4356:

```
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