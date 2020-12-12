---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4142'
title: Avviso del compilatore (livello 1) C4142
ms.date: 11/04/2016
f1_keywords:
- C4142
helpviewer_keywords:
- C4142
ms.assetid: 1fdfc3dc-60a2-4f00-b133-20e400f9b7a6
ms.openlocfilehash: d82403d79310d577cd45fe835cd486719ea0fdc1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97115729"
---
# <a name="compiler-warning-level-1-c4142"></a>Avviso del compilatore (livello 1) C4142

ridefinizione benigna del tipo

Un tipo viene ridefinito in modo che non abbia alcun effetto sul codice generato.

Per risolvere il problema, verificare le seguenti cause possibili:

- Una funzione membro di una classe derivata ha un tipo restituito diverso dalla funzione membro corrispondente della classe base.

- Un tipo definito con il **`typedef`** comando viene ridefinito utilizzando una sintassi diversa.

L'esempio seguente genera l'C4142:

```c
// C4142.c
// compile with: /W1
float X2;
X2 = 2.0 + 1.0;   // C4142

int main() {
   float X2;
   X2 = 2.0 + 1.0;   // OK
}
```
