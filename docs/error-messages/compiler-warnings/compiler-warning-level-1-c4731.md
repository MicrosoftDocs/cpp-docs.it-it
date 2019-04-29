---
title: Avviso del compilatore (livello 1) C4731
ms.date: 11/04/2016
f1_keywords:
- C4731
helpviewer_keywords:
- C4731
ms.assetid: 5658c24c-3e6f-4505-835b-1fb92d47cab0
ms.openlocfilehash: af091d1d35fff955afcc5af3da48b80416e79f36
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62385433"
---
# <a name="compiler-warning-level-1-c4731"></a>Avviso del compilatore (livello 1) C4731

'pointer': registro dei puntatori 'register' modificato da codice assembly inline dei frame

Un registro dei puntatori frame è stato modificato. È necessario salvare e ripristinare il registro nel inline assembly blocco o il frame di variabile (locale o un parametro, a seconda del registro modificato) o il codice potrebbe non funzionare correttamente.

L'esempio seguente genera l'errore C4731:

```
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

EBP è il puntatore ai frame (FPO non è consentita) e viene modificato. Quando `p` successiva a cui viene fatto riferimento, vi fanno riferimento relativo a `EBP`. Ma `EBP` è stato sovrascritto dal codice, in modo che il programma non funzionerà correttamente e può persino di errore.