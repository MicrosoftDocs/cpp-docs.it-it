---
title: Avviso del compilatore (livello 1) C4731
ms.date: 11/04/2016
f1_keywords:
- C4731
helpviewer_keywords:
- C4731
ms.assetid: 5658c24c-3e6f-4505-835b-1fb92d47cab0
ms.openlocfilehash: b2591756dfaa8887affbe4e470f1c98738b6b680
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74052421"
---
# <a name="compiler-warning-level-1-c4731"></a>Avviso del compilatore (livello 1) C4731

' pointer ': registro del puntatore del frame ' Register ' modificato dal codice assembly inline

Un registro del puntatore del frame è stato modificato. È necessario salvare e ripristinare il registro nel blocco di assembly inline o nella variabile di frame (locale o parametro, a seconda del registro modificato) oppure il codice potrebbe non funzionare correttamente.

L'esempio seguente genera l'C4731:

```cpp
// C4731.cpp
// compile with: /W1 /LD
// processor: x86
// C4731 expected
void bad(int p) {
   __asm
   {
      mov ebp, 1
   }

   if (p == 1)
   {
      // ...
   }
}
```

EBP è il puntatore a frame (la Polinesia non è consentita) ed è in corso di modifica. Quando si fa riferimento a `p` in un secondo momento, viene fatto riferimento in relazione a `EBP`. Tuttavia `EBP` è stato sovrascritto dal codice, pertanto il programma non funzionerà correttamente e potrebbe anche verificarsi un errore.