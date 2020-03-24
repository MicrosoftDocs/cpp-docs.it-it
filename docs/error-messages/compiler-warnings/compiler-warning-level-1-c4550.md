---
title: Avviso del compilatore (livello 1) C4550
ms.date: 11/04/2016
f1_keywords:
- C4550
helpviewer_keywords:
- C4550
ms.assetid: f902b4ed-5f17-48ea-b693-92f4fb8c8054
ms.openlocfilehash: 454b0154f555ef1ba1ac13ea7a87d454d59c6f05
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80186166"
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
