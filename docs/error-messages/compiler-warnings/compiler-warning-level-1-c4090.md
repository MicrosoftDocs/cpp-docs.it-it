---
title: Avviso del compilatore (livello 1) C4090
ms.date: 11/04/2016
f1_keywords:
- C4090
helpviewer_keywords:
- C4090
ms.assetid: baad469d-23d4-45aa-ad9c-305b32d61e9a
ms.openlocfilehash: c4cb71355b4f3dca66c56ed4b89012ca9b9e646d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87197046"
---
# <a name="compiler-warning-level-1-c4090"></a>Avviso del compilatore (livello 1) C4090

' Operation ': qualificatori ' modifier ' diversi

Una variabile usata in un'operazione viene definita con un modificatore specificato che ne impedisce la modifica senza rilevamento da parte del compilatore. L'espressione viene compilata senza modifiche.

Questo avviso può essere causato quando un puntatore a un **`const`** **`volatile`** elemento o viene assegnato a un puntatore non dichiarato come che punta a **`const`** o **`volatile`** .

Questo avviso viene emesso per i programmi C. In un programma C++, il compilatore genera un errore: [C2440](../../error-messages/compiler-errors-1/compiler-error-c2440.md).

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
