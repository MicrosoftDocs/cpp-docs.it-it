---
description: 'Altre informazioni su: avviso del compilatore (livello 2) C4308'
title: Avviso del compilatore (livello 2) C4308
ms.date: 11/04/2016
f1_keywords:
- C4308
helpviewer_keywords:
- C4308
ms.assetid: d4e5c53c-71b2-4bbc-8a7c-3a2a3180d9d9
ms.openlocfilehash: 180372bef17180b74431ea3c317417f15a6a231d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339194"
---
# <a name="compiler-warning-level-2-c4308"></a>Avviso del compilatore (livello 2) C4308

costante integrale negativa convertita in tipo senza segno

Un'espressione converte una costante integer negativa in un tipo senza segno. Il risultato dell'espressione è probabilmente non significativo.

## <a name="example"></a>Esempio

```cpp
// C4308.cpp
// compile with: /W2
unsigned int u = (-5 + 3U);   // C4308

int main()
{
}
```
