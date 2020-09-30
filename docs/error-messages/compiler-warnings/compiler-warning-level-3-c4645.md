---
title: Avviso del compilatore (livello 3) C4645
ms.date: 11/04/2016
f1_keywords:
- C4645
helpviewer_keywords:
- C4645
ms.assetid: fd7c1ddf-f0d0-4e10-bab9-ccb4c3476298
ms.openlocfilehash: 246eed6592b892c3bd233d9217e26e7bf7a49ff8
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91502314"
---
# <a name="compiler-warning-level-3-c4645"></a>Avviso del compilatore (livello 3) C4645

la funzione dichiarata con __declspec(noreturn) ha un'istruzione return

È stata trovata un'istruzione [return](../../cpp/program-termination.md) in una funzione contrassegnata con il modificatore [noreturn](../../cpp/noreturn.md) **`__declspec`** . L' **`return`** istruzione è stata ignorata.

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
