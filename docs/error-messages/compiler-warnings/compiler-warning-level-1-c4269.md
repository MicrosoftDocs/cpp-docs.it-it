---
title: Avviso del compilatore (livello 1) C4269
ms.date: 11/04/2016
f1_keywords:
- C4269
helpviewer_keywords:
- C4269
ms.assetid: 96c97bbc-068a-4b65-8cd8-4ed5dca04c15
ms.openlocfilehash: 1b63d1af49a53b7b15cdbae912d79a1b4f0cf787
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230714"
---
# <a name="compiler-warning-level-1-c4269"></a>Avviso del compilatore (livello 1) C4269

' Identifier ': i dati automatici ' const ' inizializzati con il costruttore predefinito generato dal compilatore producono risultati non affidabili

Un' **`const`** istanza automatica di una classe non semplice viene inizializzata con un costruttore predefinito generato dal compilatore.

## <a name="example"></a>Esempio

```cpp
// C4269.cpp
// compile with: /c /LD /W1
class X {
public:
   int m_data;
};

void g() {
   const X x1;   // C4269
};
```

Poiché questa istanza della classe viene generata nello stack, il valore iniziale di `m_data` può essere qualsiasi elemento. Inoltre, poiché si tratta **`const`** di un'istanza di, il valore di `m_data` non può mai essere modificato.
