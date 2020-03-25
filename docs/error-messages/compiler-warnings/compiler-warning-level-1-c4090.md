---
title: Avviso del compilatore (livello 1) C4090
ms.date: 11/04/2016
f1_keywords:
- C4090
helpviewer_keywords:
- C4090
ms.assetid: baad469d-23d4-45aa-ad9c-305b32d61e9a
ms.openlocfilehash: 551309757f5e76e230d0a275da94ac94ec30fb13
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80163923"
---
# <a name="compiler-warning-level-1-c4090"></a>Avviso del compilatore (livello 1) C4090

' Operation ': qualificatori ' modifier ' diversi

Una variabile usata in un'operazione viene definita con un modificatore specificato che ne impedisce la modifica senza rilevamento da parte del compilatore. L'espressione viene compilata senza modifiche.

Questo avviso può essere causato quando un puntatore a un elemento **const** o `volatile` viene assegnato a un puntatore non dichiarato come che punta a **const** o `volatile`.

Questo avviso viene emesso per i programmi C. In un C++ programma, il compilatore genera un errore: [C2440](../../error-messages/compiler-errors-1/compiler-error-c2440.md).

L'esempio seguente genera l'C4090:

```c
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
