---
title: Avviso del compilatore (livello 4) C4208
ms.date: 11/04/2016
f1_keywords:
- C4208
helpviewer_keywords:
- C4208
ms.assetid: 5cb0a36e-3fb5-422f-a5f9-e40b70776c27
ms.openlocfilehash: 11c6b1ad50c44ac4ad2a9d014e57efef097d9d8b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50524527"
---
# <a name="compiler-warning-level-4-c4208"></a>Avviso del compilatore (livello 4) C4208

utilizzata estensione non standard: delete [ESP] - ESP valutato ma ignorato

Con le estensioni Microsoft (/Ze), è possibile eliminare una matrice usando un valore tra parentesi quadre con il [operatore delete](../../cpp/delete-operator-cpp.md). Il valore viene ignorato.

```
// C4208.cpp
// compile with: /W4
int main()
{
   int * MyArray = new int[18];
   delete [18] MyArray;      // C4208
   MyArray = new int[18];
   delete [] MyArray;        // ok
}
```

Tali valori non sono validi in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).