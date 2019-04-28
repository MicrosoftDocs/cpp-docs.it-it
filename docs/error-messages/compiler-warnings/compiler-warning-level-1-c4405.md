---
title: Avviso del compilatore (livello 1) C4405
ms.date: 11/04/2016
f1_keywords:
- C4405
helpviewer_keywords:
- C4405
ms.assetid: 155c64d6-58ae-4455-b61f-ccd711c5da96
ms.openlocfilehash: e85bdc995fe16f91e2e9c734dacc65ca0b7b622d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62182380"
---
# <a name="compiler-warning-level-1-c4405"></a>Avviso del compilatore (livello 1) C4405

'identifier': identificatore è una parola riservata

Una parola riservata per l'assembly inline viene usata come nome di una variabile. Ciò può provocare risultati imprevisti. Per risolvere questo problema, evitare di denominare le variabili con parole riservate per l'assembly inline. L'esempio seguente genera l'errore C4405:

```
// C4405.cpp
// compile with: /W1
// processor: x86
void func1() {
   int mov = 0, i = 0;
   _asm {
      mov mov, 0;   // C4405
      // instead, try ..
      // mov i, 0;
   }
}

int main() {
}
```