---
title: Avviso del compilatore (livello 1) C4532
ms.date: 11/04/2016
f1_keywords:
- C4532
helpviewer_keywords:
- C4532
ms.assetid: 4e2a286a-d233-4106-9f65-29be1a94ca02
ms.openlocfilehash: bcadf31eda079ebb8ea7a496efe4c945e16b1ab7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62160757"
---
# <a name="compiler-warning-level-1-c4532"></a>Avviso del compilatore (livello 1) C4532

'continue': salto dal blocco finally/finally produce un comportamento indefinito durante la gestione della terminazione

Il compilatore ha rilevato una delle parole chiave seguenti:

- [continue](../../cpp/continue-statement-cpp.md)

- [break](../../cpp/break-statement-cpp.md)

- [goto](../../cpp/goto-statement-cpp.md)

provoca l'uscita da un [finally](../../cpp/try-finally-statement.md) oppure [infine](../../dotnet/finally.md) blocco durante la terminazione anomala.

Se si verifica un'eccezione e mentre lo stack viene rimossa durante l'esecuzione dei gestori di terminazione (il `__finally` o blocchi), e il codice esegue il salto una `__finally` bloccarsi prima il `__finally` blocco termina, il comportamento è indefinito. Controllo potrebbe non restituire il codice di rimozione, in modo che l'eccezione potrebbe non essere gestita correttamente.

Se è necessario uscire fuori un **finally** block, controllare prima di tutto per una terminazione anomala.

L'esempio seguente genera l'errore C4532; è sufficiente rimuovere i commenti per le istruzioni di salto per risolvere gli avvisi.

```
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