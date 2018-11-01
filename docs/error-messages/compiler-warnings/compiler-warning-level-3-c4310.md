---
title: Avviso del compilatore (livello 3) C4310
ms.date: 11/04/2016
f1_keywords:
- C4310
helpviewer_keywords:
- C4310
ms.assetid: cba3eca1-f1ed-499c-9243-337446bdbdd8
ms.openlocfilehash: b8d011d0e41c7d3fe6de7468d098ddd08f09565c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50481068"
---
# <a name="compiler-warning-level-3-c4310"></a>Avviso del compilatore (livello 3) C4310

il cast tronca il valore costante

Un valore costante viene eseguito il cast a un tipo più piccolo. Il compilatore esegue il cast, che causa il troncamento dei dati. L'esempio seguente genera l'errore C4310:

```
// C4310.cpp
// compile with: /W4
int main() {
   long int a;
   a = (char) 128;   // C4310, use value 0-127 to resolve
}
```