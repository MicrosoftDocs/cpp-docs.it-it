---
title: Errore del compilatore C2229
ms.date: 11/04/2016
f1_keywords:
- C2229
helpviewer_keywords:
- C2229
ms.assetid: 933c7cf2-a463-4e74-b0b4-59dedad987fb
ms.openlocfilehash: 2d974c4f0630a592daad956448bf21cea21efb7c
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74759269"
---
# <a name="compiler-error-c2229"></a>Errore del compilatore C2229

il tipo ' Identifier ' ha una matrice di dimensioni zero non valida

Un membro di una struttura o di un campo di bit contiene una matrice di dimensioni zero che non è l'ultimo membro.

Poiché è possibile avere una matrice di dimensioni zero come ultimo membro dello struct, è necessario specificarne le dimensioni quando si alloca lo struct.

Se la matrice di dimensioni zero non è l'ultimo membro dello struct, il compilatore non può calcolare l'offset per i campi rimanenti.

L'esempio seguente genera l'C2229:

```cpp
// C2229.cpp
struct S {
   int a[0];  // C2229  zero-sized array
   int b[1];
};

struct S2 {
   int a;
   int b[0];
};

int main() {
   // allocate 7 elements for b field
   S2* s2 = (S2*)new int[sizeof(S2) + 7*sizeof(int)];
   s2->b[6] = 100;
}
```
