---
title: Avviso del compilatore (livello 1) C4733
ms.date: 11/04/2016
f1_keywords:
- C4733
helpviewer_keywords:
- C4733
ms.assetid: 7ef4f577-772d-4b66-a7bf-8958a6b250bc
ms.openlocfilehash: 39674c32deb506725aa5f7c1f5f875e771519938
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80185672"
---
# <a name="compiler-warning-level-1-c4733"></a>Avviso del compilatore (livello 1) C4733

Assegnazione dell'assembly inline a' FS: 0': gestore non registrato come gestore sicuro

Funzione che modifica il valore in FS: 0 per aggiungere un nuovo gestore di eccezioni potrebbe non funzionare con eccezioni sicure, perché il gestore potrebbe non essere registrato come gestore di eccezioni valido (vedere [/SAFESEH](../../build/reference/safeseh-image-has-safe-exception-handlers.md)).

Per risolvere il problema, rimuovere il FS: 0 definire o disattivare questo avviso e usare [. SAFESEH](../../assembler/masm/dot-safeseh.md) per specificare i gestori delle eccezioni sicure.

L'esempio seguente genera l'C4733:

```cpp
// C4733.cpp
// compile with: /W1 /c
// processor: x86
#include "stdlib.h"
#include "stdio.h"
void my_handler()
{
   printf("Hello from my_handler\n");
   exit(1);
}

int main()
{
   _asm {
      push    my_handler
      mov     eax, DWORD PTR fs:0
      push    eax
      mov     DWORD PTR fs:0, esp   // C4733
   }

   *(int*)0 = 0;
}
```
