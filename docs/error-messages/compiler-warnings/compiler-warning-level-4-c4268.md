---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4268'
title: Avviso del compilatore (livello 4) C4268
ms.date: 11/04/2016
f1_keywords:
- C4268
helpviewer_keywords:
- C4268
ms.assetid: d0511e80-904f-4ee1-b4d7-39b5c0bd8234
ms.openlocfilehash: 50e4a2afd577653fa14ae5d663f2b00fa95670b5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97294665"
---
# <a name="compiler-warning-level-4-c4268"></a>Avviso del compilatore (livello 4) C4268

' Identifier ': i dati statici/globali ' const ' inizializzati con il costruttore predefinito generato dal compilatore riempiono l'oggetto con zeri

Un' **`const`** istanza globale o statica di una classe non semplice viene inizializzata con un costruttore predefinito generato dal compilatore.

## <a name="example"></a>Esempio

```cpp
// C4268.cpp
// compile with: /c /LD /W4
class X {
public:
   int m_data;
};

const X x1;   // C4268
```

Poiché questa istanza della classe è **`const`** , il valore di `m_data` non può essere modificato.
