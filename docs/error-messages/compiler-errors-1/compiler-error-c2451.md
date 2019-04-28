---
title: Errore del compilatore C2451
ms.date: 11/04/2016
f1_keywords:
- C2451
helpviewer_keywords:
- C2451
ms.assetid: a64c93a5-ab8d-4d39-ae57-9ee7ef803036
ms.openlocfilehash: bd69861b42e14ae30b4d57658719e7a2ce3617ac
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62208785"
---
# <a name="compiler-error-c2451"></a>Errore del compilatore C2451

espressioni condizionali di tipo 'type' non sono valida

L'espressione condizionale restituisce un tipo integer.

L'esempio seguente genera l'errore C2451:

```
// C2451.cpp
class B {};

int main () {
   B b1;
   int i = 0;
   if (b1)   // C2451
   // try the following line instead
   // if (i)
      ;
}
```