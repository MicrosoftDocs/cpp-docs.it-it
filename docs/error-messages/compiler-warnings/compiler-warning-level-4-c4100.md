---
title: Avviso del compilatore (livello 4) C4100
ms.date: 11/04/2016
f1_keywords:
- C4100
helpviewer_keywords:
- C4100
ms.assetid: 478ed97d-e502-49e4-9afb-ac2a6c61194b
ms.openlocfilehash: ccb438cf7c80edb1403683ac4817617ffccc690d
ms.sourcegitcommit: 7d64c5f226f925642a25e07498567df8bebb00d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2019
ms.locfileid: "65447734"
---
# <a name="compiler-warning-level-4-c4100"></a>Avviso del compilatore (livello 4) C4100

'identifier': parametro formale senza riferimenti

Il parametro formale non viene fatto riferimento nel corpo della funzione. Il parametro senza riferimenti viene ignorato.

C4100 può essere generato anche quando il codice chiama un distruttore su un parametro di tipo primitivo senza riferimenti.  Si tratta di una limitazione di Microsoft C++ compilatore.

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