---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4269'
title: Avviso del compilatore (livello 1) C4269
ms.date: 11/04/2016
f1_keywords:
- C4269
helpviewer_keywords:
- C4269
ms.assetid: 96c97bbc-068a-4b65-8cd8-4ed5dca04c15
ms.openlocfilehash: 6b00eeee4a831ee7876556838f03d4b74f4790fa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97266130"
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
