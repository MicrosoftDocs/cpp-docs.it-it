---
title: Avviso del compilatore (livello 4) C4100
ms.date: 11/04/2016
f1_keywords:
- C4100
helpviewer_keywords:
- C4100
ms.assetid: 478ed97d-e502-49e4-9afb-ac2a6c61194b
ms.openlocfilehash: 84a0b27203cd43e8a8992c4ba599f1400c6909ad
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62401397"
---
# <a name="compiler-warning-level-4-c4100"></a>Avviso del compilatore (livello 4) C4100

'identifier': parametro formale senza riferimenti

Il parametro formale non viene fatto riferimento nel corpo della funzione. Il parametro senza riferimenti viene ignorato.

C4100 può essere generato anche quando il codice chiama un distruttore su un parametro di tipo primitivo senza riferimenti.  Si tratta di una limitazione del compilatore Visual C++.

L'esempio seguente genera l'avviso C4100:

```
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