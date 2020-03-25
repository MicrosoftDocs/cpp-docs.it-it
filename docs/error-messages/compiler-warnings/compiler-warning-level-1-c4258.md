---
title: Avviso del compilatore (livello 1) C4258
ms.date: 11/04/2016
f1_keywords:
- C4258
helpviewer_keywords:
- C4258
ms.assetid: bbb75e6d-6693-4e62-8ed3-b006a0ec55e3
ms.openlocfilehash: 198873792743a9ccdee94d44e2a0599348589ee6
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80163206"
---
# <a name="compiler-warning-level-1-c4258"></a>Avviso del compilatore (livello 1) C4258

' variable ': la definizione del ciclo for è stata ignorata. viene utilizzata la definizione dell'ambito di inclusione "

In [/ze](../../build/reference/za-ze-disable-language-extensions.md) e [/Zc: forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md)le variabili definite in un ciclo [for](../../cpp/for-statement-cpp.md) passano dall'ambito al termine del ciclo **for** . Questo avviso viene visualizzato se una variabile con lo stesso nome della variabile del ciclo, ma definita nel ciclo di inclusione, viene utilizzata nuovamente nell'ambito contenente il ciclo **for** . Ad esempio:

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
