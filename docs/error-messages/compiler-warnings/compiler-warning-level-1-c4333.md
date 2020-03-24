---
title: Avviso del compilatore (livello 1) C4333
ms.date: 11/04/2016
f1_keywords:
- C4333
helpviewer_keywords:
- C4333
ms.assetid: d3763c52-6110-4da0-84db-5264e3f3f166
ms.openlocfilehash: 534491db2d612f251a6fd85c9239537569083874
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80162933"
---
# <a name="compiler-warning-level-1-c4333"></a>Avviso del compilatore (livello 1) C4333

' operator ': spostamento a destra di una quantità troppo elevata, perdita di dati

Un'operazione di spostamento A destra è troppo grande.  Tutti i bit significativi vengono spostati e il risultato sarà sempre zero.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4333.

```cpp
// C4333.cpp
// compile with: /c /W1
unsigned shift8 (unsigned char c) {
   return c >> 8;   // C4333

   // try the following line instead
   // return c >> 4;   // OK
}
```
