---
title: Avviso del compilatore (livello 1) C4269
ms.date: 11/04/2016
f1_keywords:
- C4269
helpviewer_keywords:
- C4269
ms.assetid: 96c97bbc-068a-4b65-8cd8-4ed5dca04c15
ms.openlocfilehash: 9a7f42b2dd65644d3f2abec58236a0b93cc6f635
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62207233"
---
# <a name="compiler-warning-level-1-c4269"></a>Avviso del compilatore (livello 1) C4269

'identifier': dati automatici 'const' inizializzati con un costruttore predefinito generato dal compilatore producono risultati inaffidabili

Oggetto **const** istanza automatica di una classe non è semplice viene inizializzata con un costruttore predefinito generato dal compilatore.

## <a name="example"></a>Esempio

```
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

Poiché questa istanza della classe viene generata sullo stack, il valore iniziale di `m_data` possono essere qualsiasi tipo. Inoltre, poiché si tratta un **const** dell'istanza, il valore di `m_data` non possono mai essere modificati.