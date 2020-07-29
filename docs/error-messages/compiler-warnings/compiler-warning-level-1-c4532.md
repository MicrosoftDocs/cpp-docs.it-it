---
title: Avviso del compilatore (livello 1) C4532
ms.date: 11/04/2016
f1_keywords:
- C4532
helpviewer_keywords:
- C4532
ms.assetid: 4e2a286a-d233-4106-9f65-29be1a94ca02
ms.openlocfilehash: b8c7503c7d1c1b711006415a327c360731222042
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87196344"
---
# <a name="compiler-warning-level-1-c4532"></a>Avviso del compilatore (livello 1) C4532

' continue ': il salto dal blocco __finally/finally presenta un comportamento non definito durante la gestione della terminazione

Il compilatore ha rilevato una delle parole chiave seguenti:

- [continuare](../../cpp/continue-statement-cpp.md)

- [break](../../cpp/break-statement-cpp.md)

- [goto](../../cpp/goto-statement-cpp.md)

causa di un salto da un blocco [__finally](../../cpp/try-finally-statement.md) o [finally](../../dotnet/finally.md) durante la terminazione anomala.

Se si verifica un'eccezione e mentre lo stack viene rimosso durante l'esecuzione dei gestori di terminazione ( **`__finally`** blocchi o finally) e il codice esce da un **`__finally`** blocco prima della **`__finally`** fine del blocco, il comportamento non è definito. Il controllo non può tornare al codice di rimozione, pertanto è possibile che l'eccezione non venga gestita correttamente.

Se è necessario uscire da un **`__finally`** blocco, verificare prima di tutto la chiusura anomala.

L'esempio seguente genera C4532; è sufficiente impostare come commento le istruzioni Jump per risolvere gli avvisi.

```cpp
// C4532.cpp
// compile with: /W1
// C4532 expected
int main() {
   int i;
   for (i = 0; i < 10; i++) {
      __try {
      } __finally {
         // Delete the following line to resolve.
         continue;
      }

      __try {
      } __finally {
         // Delete the following line to resolve.
         break;
      }
   }
}
```
