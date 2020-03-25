---
title: Avviso del compilatore (livello 1) C4269
ms.date: 11/04/2016
f1_keywords:
- C4269
helpviewer_keywords:
- C4269
ms.assetid: 96c97bbc-068a-4b65-8cd8-4ed5dca04c15
ms.openlocfilehash: e2e1781bf4c1b9ac0ee29d0b5900daa6cfe94b45
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80199771"
---
# <a name="compiler-warning-level-1-c4269"></a>Avviso del compilatore (livello 1) C4269

' Identifier ': i dati automatici ' const ' inizializzati con il costruttore predefinito generato dal compilatore producono risultati non affidabili

Un'istanza automatica **const** di una classe non semplice viene inizializzata con un costruttore predefinito generato dal compilatore.

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

Poiché questa istanza della classe viene generata nello stack, il valore iniziale di `m_data` può essere qualsiasi elemento. Inoltre, poiché si tratta di un'istanza **const** , il valore di `m_data` non può mai essere modificato.
