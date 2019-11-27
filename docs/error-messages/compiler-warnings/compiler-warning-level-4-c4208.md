---
title: Avviso del compilatore (livello 4) C4208
ms.date: 11/04/2016
f1_keywords:
- C4208
helpviewer_keywords:
- C4208
ms.assetid: 5cb0a36e-3fb5-422f-a5f9-e40b70776c27
ms.openlocfilehash: e15140bd2f0983bde64c89a054fd733d1ab902ac
ms.sourcegitcommit: 3ee06ec53153cf21910fc8cfef78a4f25f9633f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2019
ms.locfileid: "74541859"
---
# <a name="compiler-warning-level-4-c4208"></a>Avviso del compilatore (livello 4) C4208

utilizzata estensione non standard: delete [EXP]-exp valutato ma ignorato

Con le estensioni Microsoft (/Ze) è possibile eliminare una matrice usando un valore racchiuso tra parentesi quadre con l' [operatore delete](../../cpp/delete-operator-cpp.md). Il valore viene ignorato.

```cpp
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

Tali valori non sono validi in compatibilità ANSI ([/za](../../build/reference/za-ze-disable-language-extensions.md)).