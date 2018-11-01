---
title: Errore del compilatore C2275
ms.date: 11/04/2016
f1_keywords:
- C2275
helpviewer_keywords:
- C2275
ms.assetid: c1eafa71-48de-46e0-82f3-b575538ef205
ms.openlocfilehash: debf8779014badab69ffca13f3795f7e004b292a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50601609"
---
# <a name="compiler-error-c2275"></a>Errore del compilatore C2275

'identifier': utilizzo non valido di questo tipo come espressione

Un'espressione Usa il `->` operatore con un `typedef` identificatore.

L'esempio seguente genera l'errore C2275:

```
// C2275.cpp
typedef struct S {
    int mem;
} *S_t;
void func1( int *parm );
void func2() {
    func1( &S_t->mem );   // C2275, S_t is a typedef
}
```