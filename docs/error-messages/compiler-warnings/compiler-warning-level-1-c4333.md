---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4333'
title: Avviso del compilatore (livello 1) C4333
ms.date: 11/04/2016
f1_keywords:
- C4333
helpviewer_keywords:
- C4333
ms.assetid: d3763c52-6110-4da0-84db-5264e3f3f166
ms.openlocfilehash: 7a9384ad9dad8b17e6541256c71d28066d557df5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340035"
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
