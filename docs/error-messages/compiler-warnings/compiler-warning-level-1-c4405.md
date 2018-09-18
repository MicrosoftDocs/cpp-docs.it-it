---
title: Compilatore avviso (livello 1) C4405 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4405
dev_langs:
- C++
helpviewer_keywords:
- C4405
ms.assetid: 155c64d6-58ae-4455-b61f-ccd711c5da96
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fce005153b9343b25e7de49b3e95a002381d0619
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46061578"
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