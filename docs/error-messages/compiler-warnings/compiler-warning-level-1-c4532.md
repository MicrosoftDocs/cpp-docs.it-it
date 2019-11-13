---
title: Avviso del compilatore (livello 1) C4532
ms.date: 11/04/2016
f1_keywords:
- C4532
helpviewer_keywords:
- C4532
ms.assetid: 4e2a286a-d233-4106-9f65-29be1a94ca02
ms.openlocfilehash: b47eb192bc01e6fe2c6c9423ed2c672f16c6818f
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73966243"
---
# <a name="compiler-warning-level-1-c4532"></a>Avviso del compilatore (livello 1) C4532

' continue ': il salto dal blocco __finally/finally presenta un comportamento non definito durante la gestione della terminazione

Il compilatore ha rilevato una delle parole chiave seguenti:

- [continue](../../cpp/continue-statement-cpp.md)

- [break](../../cpp/break-statement-cpp.md)

- [goto](../../cpp/goto-statement-cpp.md)

causa di un salto da un blocco [__finally](../../cpp/try-finally-statement.md) o [finally](../../dotnet/finally.md) durante la terminazione anomala.

Se si verifica un'eccezione e quando lo stack viene rimosso durante l'esecuzione dei gestori di terminazione (i blocchi `__finally` o finally) e il codice esce da un blocco di `__finally` prima che il blocco `__finally` termini, il comportamento non è definito. Il controllo non può tornare al codice di rimozione, pertanto è possibile che l'eccezione non venga gestita correttamente.

Se è necessario uscire da un blocco di **__finally** , verificare prima di tutto la chiusura anomala.

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