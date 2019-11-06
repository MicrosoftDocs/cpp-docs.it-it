---
title: Avviso del compilatore (livello 1) C4269
ms.date: 11/04/2016
f1_keywords:
- C4269
helpviewer_keywords:
- C4269
ms.assetid: 96c97bbc-068a-4b65-8cd8-4ed5dca04c15
ms.openlocfilehash: 84a0d4c541f67742d68c7f08e0dda52ccd350d04
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73626705"
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