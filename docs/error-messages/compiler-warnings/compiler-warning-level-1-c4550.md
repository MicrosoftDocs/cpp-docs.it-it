---
title: Avviso del compilatore (livello 1) C4550
ms.date: 11/04/2016
f1_keywords:
- C4550
helpviewer_keywords:
- C4550
ms.assetid: f902b4ed-5f17-48ea-b693-92f4fb8c8054
ms.openlocfilehash: eff3548ef43075a86f52086caf9b79158ad70cb9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50640765"
---
# <a name="compiler-warning-level-1-c4550"></a>Avviso del compilatore (livello 1) C4550

espressione restituisce una funzione che non contiene un elenco di argomenti

Un puntatore dereferenziato a una funzione non contiene un elenco di argomenti.

## <a name="example"></a>Esempio

```
// C4550.cpp
// compile with: /W1
bool f()
{
   return true;
}

typedef bool (*pf_t)();

int main()
{
   pf_t pf = f;
   if (*pf) {}  // C4550
   return 0;
}
```