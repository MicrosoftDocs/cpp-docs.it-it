---
title: Avviso del compilatore (livello 1) C4405
ms.date: 11/04/2016
f1_keywords:
- C4405
helpviewer_keywords:
- C4405
ms.assetid: 155c64d6-58ae-4455-b61f-ccd711c5da96
ms.openlocfilehash: 182f9ff061fd2a8ebe5ea0046545412fca5f646a
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73965580"
---
# <a name="compiler-warning-level-1-c4405"></a>Avviso del compilatore (livello 1) C4405

' Identifier ': l'identificatore è una parola riservata

Una parola riservata per l'assembly inline viene utilizzata come nome di variabile. Questo può causare risultati imprevedibili. Per correggere il problema, evitare di rinominare le variabili con parole riservate per l'assembly inline. L'esempio seguente genera l'C4405:

```cpp
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