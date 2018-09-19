---
title: Del compilatore (livello 4) avviso C4100 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4100
dev_langs:
- C++
helpviewer_keywords:
- C4100
ms.assetid: 478ed97d-e502-49e4-9afb-ac2a6c61194b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a6ad1b8bab287f4c16b00781e90351bbb204aa91
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46099466"
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