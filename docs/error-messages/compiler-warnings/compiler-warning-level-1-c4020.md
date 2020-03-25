---
title: Avviso del compilatore (livello 1) C4020
ms.date: 11/04/2016
f1_keywords:
- C4020
helpviewer_keywords:
- C4020
ms.assetid: 8c4cd6be-9371-4c8c-b0ff-a5ad367bbab0
ms.openlocfilehash: 2136e94a261b2f767165e43acfd66583e8d15e9f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80164586"
---
# <a name="compiler-warning-level-1-c4020"></a>Avviso del compilatore (livello 1) C4020

' Function ': troppi parametri effettivi

Il numero di parametri effettivi in una chiamata di funzione supera il numero di parametri formali nel prototipo di funzione o nella definizione. Il compilatore passa i parametri effettivi aggiuntivi in base alla convenzione di chiamata della funzione.

L'esempio seguente genera l'C4020:

```c
// C4020.c
// compile with: /W1 /c
void f(int);
int main() {
   f(1,2);   // C4020
}
```

Possibile soluzione:

```c
// C4020b.c
// compile with: /c
void f(int);
int main() {
   f(1);
}
```
