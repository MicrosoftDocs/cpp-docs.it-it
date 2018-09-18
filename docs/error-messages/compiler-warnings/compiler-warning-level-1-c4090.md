---
title: Compilatore Warning (level 1) C4090 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4090
dev_langs:
- C++
helpviewer_keywords:
- C4090
ms.assetid: baad469d-23d4-45aa-ad9c-305b32d61e9a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4ae34eeb6c87fdb12b07d25c6b6bbcfdd6b5ee21
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46024814"
---
# <a name="compiler-warning-level-1-c4090"></a>Compilatore Warning (level 1) C4090

'operation': qualificatori 'modifier' diversa

Una variabile usata in un'operazione viene definita con un modificatore di tipo specificato che ne impedisce la modifica senza rilevamento dal compilatore. L'espressione viene compilato senza alcuna modifica.

Questo avviso può essere causato quando un puntatore a un **const** oppure `volatile` elemento viene assegnato a un puntatore non è dichiarato come puntatore a **const** o `volatile`.

Questo avviso viene generato per i programmi C. In un programma C++, il compilatore genera un errore: [C2440](../../error-messages/compiler-errors-1/compiler-error-c2440.md).

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