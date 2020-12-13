---
description: 'Altre informazioni su: errore del compilatore C2450'
title: Errore del compilatore C2450
ms.date: 11/04/2016
f1_keywords:
- C2450
helpviewer_keywords:
- C2450
ms.assetid: 929f1c06-8774-468b-be2a-f428757875a2
ms.openlocfilehash: 5e2d838ea03ca8d42b2addb2e52d4cf29deabfa1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332407"
---
# <a name="compiler-error-c2450"></a>Errore del compilatore C2450

l'espressione switch di tipo ' type ' non è valida

L' **`switch`** espressione restituisce un tipo non valido. Deve restituire un tipo Integer o un tipo di classe con una conversione non ambigua in un tipo Integer. Se restituisce un tipo definito dall'utente, è necessario fornire un operatore di conversione.

L'esempio seguente genera l'C2450:

```cpp
// C2450.cpp
class X {
public:
   int i;
} x;

class Y {
public:
   int i;
   operator int() { return i; }   // conversion operator
} y;

int main() {
   int j = 1;
   switch ( x ) {   // C2450, x is not type int
   // try the following line instead
   // switch ( y ) {
      default:  ;
   }
}
```
