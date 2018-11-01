---
title: Avviso del compilatore (livello 3) C4645
ms.date: 11/04/2016
f1_keywords:
- C4645
helpviewer_keywords:
- C4645
ms.assetid: fd7c1ddf-f0d0-4e10-bab9-ccb4c3476298
ms.openlocfilehash: a3e5c834a3f14b9a125176dcddd5bcc355cf1faa
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50536773"
---
# <a name="compiler-warning-level-3-c4645"></a>Avviso del compilatore (livello 3) C4645

la funzione dichiarata con __declspec(noreturn) ha un'istruzione return

A [return](../../cpp/return-statement-in-program-termination-cpp.md) è stata trovata in una funzione contrassegnata con il modificatore [noreturn](../../cpp/noreturn.md) `__declspec` . L'istruzione `return` è stata ignorata.

L'esempio seguente genera l'errore C4645:

```
// C4645.cpp
// compile with:  /W3
void __declspec(noreturn) func() {
   return;   // C4645, delete this line to resolve
}

int main() {
}
```