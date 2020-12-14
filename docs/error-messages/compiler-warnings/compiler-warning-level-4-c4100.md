---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4100'
title: Avviso del compilatore (livello 4) C4100
ms.date: 11/04/2016
f1_keywords:
- C4100
helpviewer_keywords:
- C4100
ms.assetid: 478ed97d-e502-49e4-9afb-ac2a6c61194b
ms.openlocfilehash: 753be5e6e56e4ad94d6b742454fe62e303d430dd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97261996"
---
# <a name="compiler-warning-level-4-c4100"></a>Avviso del compilatore (livello 4) C4100

' Identifier ': parametro formale senza riferimenti

Nel corpo della funzione non viene fatto riferimento al parametro formale. Il parametro senza riferimenti viene ignorato.

C4100 può essere emesso anche quando il codice chiama un distruttore su un parametro altrimenti senza riferimenti di tipo primitivo.  Si tratta di una limitazione del compilatore Microsoft C++.

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
