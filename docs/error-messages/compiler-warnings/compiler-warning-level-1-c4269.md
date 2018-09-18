---
title: Compilatore avviso (livello 1) C4269 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4269
dev_langs:
- C++
helpviewer_keywords:
- C4269
ms.assetid: 96c97bbc-068a-4b65-8cd8-4ed5dca04c15
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6dc986c98028530b8a5d4d25047305fd1a8effef
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46027277"
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