---
title: Avviso del compilatore (livello 1) C4550
ms.date: 11/04/2016
f1_keywords:
- C4550
helpviewer_keywords:
- C4550
ms.assetid: f902b4ed-5f17-48ea-b693-92f4fb8c8054
ms.openlocfilehash: 1c310855ee3925374de8b736cde9013d48df6482
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73966379"
---
# <a name="compiler-warning-level-1-c4550"></a>Avviso del compilatore (livello 1) C4550

l'espressione restituisce una funzione in cui manca un elenco di argomenti

Un puntatore dereferenziato a una funzione manca un elenco di argomenti.

## <a name="example"></a>Esempio

```cpp
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