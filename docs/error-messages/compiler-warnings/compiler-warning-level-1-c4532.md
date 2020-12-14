---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4532'
title: Avviso del compilatore (livello 1) C4532
ms.date: 11/04/2016
f1_keywords:
- C4532
helpviewer_keywords:
- C4532
ms.assetid: 4e2a286a-d233-4106-9f65-29be1a94ca02
ms.openlocfilehash: 9468ca1242397289c832fec28d71cf245c6c8a5f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97294808"
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
