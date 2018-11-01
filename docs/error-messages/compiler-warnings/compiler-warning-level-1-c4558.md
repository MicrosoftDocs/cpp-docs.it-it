---
title: Avviso del compilatore (livello 1) C4558
ms.date: 11/04/2016
f1_keywords:
- C4558
helpviewer_keywords:
- C4558
ms.assetid: 52bb0324-7bec-468c-b35b-13a08d38e578
ms.openlocfilehash: ae4dd6ebfb00441591a4aa1cdd2ecdfbf37f74d7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50513971"
---
# <a name="compiler-warning-level-1-c4558"></a>Avviso del compilatore (livello 1) C4558

valore dell'operando 'value' non è compreso nell'intervallo 'lowerbound - upperbound'

Il valore passato a un'istruzione in linguaggio assembly è compreso nell'intervallo specificato per il parametro. Il valore verrà troncato.

L'esempio seguente genera l'errore C4558:

```
// C4558.cpp
// compile with: /W1
// processor: x86
void asm_test() {
   __asm pinsrw   mm1, eax, 8;   // C4558
}

int main() {
}
```