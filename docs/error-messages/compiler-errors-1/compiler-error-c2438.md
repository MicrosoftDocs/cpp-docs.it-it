---
description: 'Altre informazioni su: errore del compilatore C2438'
title: Errore del compilatore C2438
ms.date: 11/04/2016
f1_keywords:
- C2438
helpviewer_keywords:
- C2438
ms.assetid: 3a0ab3ba-d0e4-4d8f-971d-e503397cc827
ms.openlocfilehash: 1400ee013e5d507f7fdfe288b97db10ec8216085
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97189886"
---
# <a name="compiler-error-c2438"></a>Errore del compilatore C2438

' Identifier ': Impossibile inizializzare i dati di classe statica tramite il costruttore

Un costruttore viene usato per inizializzare un membro statico di una classe. I membri statici devono essere inizializzati in una definizione all'esterno della dichiarazione di classe.

L'esempio seguente genera l'C2438:

```cpp
// C2438.cpp
struct X {
   X(int i) : j(i) {}   // C2438
   static int j;
};

int X::j;

int main() {
   X::j = 1;
}
```
