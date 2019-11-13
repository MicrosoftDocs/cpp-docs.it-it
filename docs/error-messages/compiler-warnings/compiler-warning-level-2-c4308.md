---
title: Avviso del compilatore (livello 2) C4308
ms.date: 11/04/2016
f1_keywords:
- C4308
helpviewer_keywords:
- C4308
ms.assetid: d4e5c53c-71b2-4bbc-8a7c-3a2a3180d9d9
ms.openlocfilehash: 43bdfa1181ff45d80236ef1f07279eea67ebce0a
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74052069"
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