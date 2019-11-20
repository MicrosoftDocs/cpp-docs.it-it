---
title: Avviso del compilatore (livello 3) C4645
ms.date: 11/04/2016
f1_keywords:
- C4645
helpviewer_keywords:
- C4645
ms.assetid: fd7c1ddf-f0d0-4e10-bab9-ccb4c3476298
ms.openlocfilehash: 4fa286f177284c03e5067b4af56f4e606b073653
ms.sourcegitcommit: 217fac22604639ebd62d366a69e6071ad5b724ac
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/19/2019
ms.locfileid: "74189369"
---
# <a name="compiler-warning-level-3-c4645"></a>Avviso del compilatore (livello 3) C4645

la funzione dichiarata con __declspec(noreturn) ha un'istruzione return

A [return](../../cpp/return-statement-in-program-termination-cpp.md) è stata trovata in una funzione contrassegnata con il modificatore [noreturn](../../cpp/noreturn.md) `__declspec` . L'istruzione `return` è stata ignorata.

L'esempio seguente genera l'errore C4645:

```cpp
// C4645.cpp
// compile with:  /W3
void __declspec(noreturn) func() {
   return;   // C4645, delete this line to resolve
}

int main() {
}
```