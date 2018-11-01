---
title: Avviso del compilatore (livello 1) C4733
ms.date: 11/04/2016
f1_keywords:
- C4733
helpviewer_keywords:
- C4733
ms.assetid: 7ef4f577-772d-4b66-a7bf-8958a6b250bc
ms.openlocfilehash: 0d0b0b912ef15294f9a4362a79dffd6d7eeabed8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50474919"
---
# <a name="compiler-warning-level-1-c4733"></a>Avviso del compilatore (livello 1) C4733

Assegnazione dell'assembly inline a 'FS:0': gestore non registrato come sicuro

Una funzione che modifica il valore in corrispondenza FS:0 per aggiungere un nuovo gestore di eccezioni potrebbe non funzionare con le eccezioni sicure, in quanto il gestore non può essere registrato come un gestore di eccezioni validi (vedere [/SAFESEH](../../build/reference/safeseh-image-has-safe-exception-handlers.md)).

Per risolvere questo problema, rimuovere la definizione FS:0 o disattivare questo avviso e usare [. SAFESEH](../../assembler/masm/dot-safeseh.md) per specificare i gestori eccezioni sicuri.

L'esempio seguente genera l'errore C4733:

```
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