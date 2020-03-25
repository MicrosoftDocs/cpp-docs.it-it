---
title: Avviso del compilatore (livello 1) C4731
ms.date: 11/04/2016
f1_keywords:
- C4731
helpviewer_keywords:
- C4731
ms.assetid: 5658c24c-3e6f-4505-835b-1fb92d47cab0
ms.openlocfilehash: 72483b734a1463b7b211c49ef21a01536ffa0ea1
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80185724"
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
