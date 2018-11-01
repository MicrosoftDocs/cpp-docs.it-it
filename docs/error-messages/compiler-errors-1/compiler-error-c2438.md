---
title: Errore del compilatore C2438
ms.date: 11/04/2016
f1_keywords:
- C2438
helpviewer_keywords:
- C2438
ms.assetid: 3a0ab3ba-d0e4-4d8f-971d-e503397cc827
ms.openlocfilehash: b2861090b5f7629c7f0cd94ea38a99e888909258
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50630503"
---
# <a name="compiler-error-c2438"></a>Errore del compilatore C2438

'identifier': non è possibile inizializzare i dati di classe statica tramite il costruttore

Un costruttore viene utilizzato per inizializzare un membro statico di una classe. Membri statici devono essere inizializzati in una definizione all'esterno della dichiarazione di classe.

L'esempio seguente genera l'errore C2438:

```
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