---
title: Compilatore Warning (level 1) C4090
ms.date: 11/04/2016
f1_keywords:
- C4090
helpviewer_keywords:
- C4090
ms.assetid: baad469d-23d4-45aa-ad9c-305b32d61e9a
ms.openlocfilehash: b47d0bfbb6eab24fbe811d3e4f79b6bd86b3bb11
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62406483"
---
# <a name="compiler-warning-level-1-c4090"></a>Compilatore Warning (level 1) C4090

'operation': qualificatori 'modifier' diversa

Una variabile usata in un'operazione viene definita con un modificatore di tipo specificato che ne impedisce la modifica senza rilevamento dal compilatore. L'espressione viene compilato senza alcuna modifica.

Questo avviso può essere causato quando un puntatore a un **const** oppure `volatile` elemento viene assegnato a un puntatore non è dichiarato come puntatore a **const** o `volatile`.

Questo avviso viene generato per i programmi C. In un C++ programma, il compilatore genera un errore: [C2440](../../error-messages/compiler-errors-1/compiler-error-c2440.md).

L'esempio seguente genera l'errore C4090:

```
// C4090.c
// compile with: /W1
int *volatile *p;
int *const *q;
int **r;

int main() {
   p = q;   // C4090
   p = r;
   q = p;   // C4090
   q = r;
   r = p;   // C4090
   r = q;   // C4090
}
```