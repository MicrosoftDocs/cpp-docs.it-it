---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4081'
title: Avviso del compilatore (livello 1) C4081
ms.date: 11/04/2016
f1_keywords:
- C4081
helpviewer_keywords:
- C4081
ms.assetid: 6f656373-a080-4989-bbc9-e2f894b03293
ms.openlocfilehash: 01c03255361676cfbe9876c73d77a7e2c9356eda
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97278155"
---
# <a name="compiler-warning-level-1-c4081"></a>Avviso del compilatore (livello 1) C4081

Previsto 'token1'. Trovato 'token2'

Il compilatore prevedeva un token diverso in questo contesto.

## <a name="example"></a>Esempio

```cpp
// C4081.cpp
// compile with: /W1 /LD
#pragma optimize) "l", on )   // C4081
```
