---
title: Compilatore Warning (level 1) C4142
ms.date: 11/04/2016
f1_keywords:
- C4142
helpviewer_keywords:
- C4142
ms.assetid: 1fdfc3dc-60a2-4f00-b133-20e400f9b7a6
ms.openlocfilehash: 762f52c9f051a660cce68d424e02fc45422376e2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62302280"
---
# <a name="compiler-warning-level-1-c4142"></a>Compilatore Warning (level 1) C4142

ridefinizione di tipo

Un tipo viene ridefinito in modo che non ha alcun effetto sul codice generato.

Per risolvere il problema, verificare le seguenti cause possibili:

- Una funzione membro di una classe derivata presenta un tipo restituito diverso dalla corrispondente funzione membro della classe di base.

- Un tipo definito con la `typedef` comando viene ridefinito utilizzando una sintassi diversa.

L'esempio seguente genera l'errore C4142:

```
// C4142.c
// compile with: /W1
float X2;
X2 = 2.0 + 1.0;   // C4142

int main() {
   float X2;
   X2 = 2.0 + 1.0;   // OK
}
```