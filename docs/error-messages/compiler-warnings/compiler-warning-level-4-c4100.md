---
title: Avviso del compilatore (livello 4) C4100
ms.date: 11/04/2016
f1_keywords:
- C4100
helpviewer_keywords:
- C4100
ms.assetid: 478ed97d-e502-49e4-9afb-ac2a6c61194b
ms.openlocfilehash: bcd51c66359d0553b7657d85f5b45ee22d4648ff
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74991656"
---
# <a name="compiler-warning-level-4-c4100"></a>Avviso del compilatore (livello 4) C4100

'identificatore': parametro formale senza riferimenti

Al parametro formale non viene fatto riferimento nel corpo della funzione. Il parametro senza riferimenti viene ignorato.

C4100 può essere generato anche quando il codice chiama un distruttore su un parametro di tipo primitivo senza riferimenti.  Si tratta di una limitazione del compilatore C++ Microsoft.

Il seguente codice di esempio genera l'avviso C4100:

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
