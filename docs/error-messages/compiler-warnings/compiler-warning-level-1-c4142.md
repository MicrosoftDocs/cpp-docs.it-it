---
title: Compilatore Warning (level 1) C4142 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4142
dev_langs:
- C++
helpviewer_keywords:
- C4142
ms.assetid: 1fdfc3dc-60a2-4f00-b133-20e400f9b7a6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 011f71c1d57f03c2be9bac3df67cd0ed90aa8017
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46117387"
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