---
title: Avviso del compilatore (livello 4) C4208
ms.date: 11/04/2016
f1_keywords:
- C4208
helpviewer_keywords:
- C4208
ms.assetid: 5cb0a36e-3fb5-422f-a5f9-e40b70776c27
ms.openlocfilehash: c6e83feacd08bdb2203873a14a47ebde686a94f9
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74991602"
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
