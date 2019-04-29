---
title: Avviso del compilatore (livello 4) C4268
ms.date: 11/04/2016
f1_keywords:
- C4268
helpviewer_keywords:
- C4268
ms.assetid: d0511e80-904f-4ee1-b4d7-39b5c0bd8234
ms.openlocfilehash: e3cda7ed70963508d7663c6c12b2b98ac64db204
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62400916"
---
# <a name="compiler-warning-level-4-c4268"></a>Avviso del compilatore (livello 4) C4268

'identifier': i dati statici/globali 'const' inizializzati con un costruttore predefinito generato dal compilatore riempiono l'oggetto con zeri

Oggetto **const** istanza globale o statica di una classe non è semplice viene inizializzata con un costruttore predefinito generato dal compilatore.

## <a name="example"></a>Esempio

```
// C4268.cpp
// compile with: /c /LD /W4
class X {
public:
   int m_data;
};

const X x1;   // C4268
```

Poiché l'istanza della classe è **const**, il valore di `m_data` non può essere modificato.