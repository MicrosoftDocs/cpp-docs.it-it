---
title: Compilatore Warning (level 1) C4020
ms.date: 11/04/2016
f1_keywords:
- C4020
helpviewer_keywords:
- C4020
ms.assetid: 8c4cd6be-9371-4c8c-b0ff-a5ad367bbab0
ms.openlocfilehash: 75148c210ddd2a611061d58c036d12c084f442cb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50482030"
---
# <a name="compiler-warning-level-1-c4020"></a>Compilatore Warning (level 1) C4020

'function': troppi parametri effettivi

Il numero di parametri effettivi in una chiamata di funzione supera il numero di parametri formali del prototipo di funzione o della definizione. Il compilatore passa i parametri aggiuntivi effettivi secondo la convenzione di chiamata della funzione.

L'esempio seguente genera l'errore C4020:

```
// C4020.c
// compile with: /W1 /c
void f(int);
int main() {
   f(1,2);   // C4020
}
```

Possibile soluzione:

```
// C4020b.c
// compile with: /c
void f(int);
int main() {
   f(1);
}
```