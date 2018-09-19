---
title: Compilatore avviso (livello 1) C4733 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4733
dev_langs:
- C++
helpviewer_keywords:
- C4733
ms.assetid: 7ef4f577-772d-4b66-a7bf-8958a6b250bc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 75b4aac2d71267b4ba012384fe83f167f44ec2d2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46092934"
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