---
title: Avviso del compilatore (livello 4) C4100
ms.date: 11/04/2016
f1_keywords:
- C4100
helpviewer_keywords:
- C4100
ms.assetid: 478ed97d-e502-49e4-9afb-ac2a6c61194b
ms.openlocfilehash: 80794d270b40a8f40d44630da70455c015158423
ms.sourcegitcommit: 3ee06ec53153cf21910fc8cfef78a4f25f9633f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2019
ms.locfileid: "74541235"
---
# <a name="compiler-warning-level-4-c4100"></a>Avviso del compilatore (livello 4) C4100

' Identifier ': parametro formale senza riferimenti

Nel corpo della funzione non viene fatto riferimento al parametro formale. Il parametro senza riferimenti viene ignorato.

C4100 può essere emesso anche quando il codice chiama un distruttore su un parametro altrimenti senza riferimenti di tipo primitivo.  Si tratta di una limitazione del compilatore C++ Microsoft.

L'esempio seguente genera l'C4100:

```cpp
// C4100.cpp
// compile with: /W4
void func(int i) {   // C4100, delete the unreferenced parameter to
                     //resolve the warning
   // i;   // or, add a reference like this
}

int main()
{
   func(1);
}
```