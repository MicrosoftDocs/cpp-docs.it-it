---
title: Avviso del compilatore (livello 1) C4258
ms.date: 11/04/2016
f1_keywords:
- C4258
helpviewer_keywords:
- C4258
ms.assetid: bbb75e6d-6693-4e62-8ed3-b006a0ec55e3
ms.openlocfilehash: a192fb9d8dc046bb3493b90b85371175520ccf95
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230727"
---
# <a name="compiler-warning-level-1-c4258"></a>Avviso del compilatore (livello 1) C4258

' variable ': la definizione del ciclo for è stata ignorata. viene utilizzata la definizione dell'ambito di inclusione "

In [/ze](../../build/reference/za-ze-disable-language-extensions.md) e [/Zc: forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md)le variabili definite in un ciclo [for](../../cpp/for-statement-cpp.md) passano dall'ambito al termine del **`for`** ciclo. Questo avviso viene visualizzato se una variabile con lo stesso nome della variabile del ciclo, ma definita nel ciclo di inclusione, viene utilizzata nuovamente nell'ambito contenente il **`for`** ciclo. Ad esempio:

```cpp
// C4258.cpp
// compile with: /Zc:forScope /W1
int main()
{
   int i;
   {
      for (int i =0; i < 1; i++)
         ;
      i = 20;   // C4258 i (in for loop) has gone out of scope
   }
}
```
