---
title: Errore del compilatore C2597
ms.date: 11/04/2016
f1_keywords:
- C2597
helpviewer_keywords:
- C2597
ms.assetid: 2e48127d-e3ff-4a40-8156-2863e45b1a38
ms.openlocfilehash: 680268948f8642b02768bd4b3092666982e14eb7
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74759308"
---
# <a name="compiler-error-c2597"></a>Errore del compilatore C2597

riferimento non valido al membro non statico 'identifier'

Cause possibili:

1. Viene specificato un membro non statico in una funzione membro statica. Per accedere al membro non statico, è necessario passare o creare un'istanza locale della classe e usare un operatore di accesso membri (`.` o `->`).

1. L'identificatore specificato non è un membro di una classe, struttura o unione. Controllare l'ortografia dell'identificatore.

1. Un operatore di accesso al membro fa riferimento a una funzione non membro.

1. L'esempio seguente genera l'errore C2597 e mostra come risolverlo:

```cpp
// C2597.cpp
// compile with: /c
struct s1 {
   static void func();
   static void func2(s1&);
   int i;
};

void s1::func() {
   i = 1;    // C2597 - static function can't access non-static data member
}

// OK - fix by passing an instance of s1
void s1::func2(s1& a) {
   a.i = 1;
}
```
