---
title: Avviso del compilatore (livello 1) C4964
ms.date: 11/04/2016
f1_keywords:
- C4964
helpviewer_keywords:
- C4964
ms.assetid: b89c9274-8a92-4b7c-aa30-3fbb1b68ac73
ms.openlocfilehash: 556c6e0963fc41d76cd123373cc4cd85edc66962
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50492052"
---
# <a name="compiler-warning-level-1-c4964"></a>Avviso del compilatore (livello 1) C4964

Nessuna opzione di ottimizzazione specificata; info del profilo non verrà raccolti

[/GL](../../build/reference/gl-whole-program-optimization.md) e [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) è stata specificata, ma non le ottimizzazioni sono stati richiesti, in modo che non verranno generati alcun file. pgc e, pertanto, non sarà possibile le ottimizzazioni PGO.

Se si desidera che i file. pgc da generare quando si esegue l'applicazione, specificare uno dei [/O](../../build/reference/o-options-optimize-code.md) opzioni del compilatore.

L'esempio seguente genera l'errore C4964:

```
// C4964.cpp
// compile with: /W1 /GL /link /ltcg:pgi
// C4964 expected
// Add /O2, for example, to the command line to resolve this warning.
int main() {
   int i;
}
```