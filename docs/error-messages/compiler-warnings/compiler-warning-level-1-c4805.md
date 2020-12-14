---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4805'
title: Avviso del compilatore (livello 1) C4805
ms.date: 11/04/2016
f1_keywords:
- C4805
helpviewer_keywords:
- C4805
ms.assetid: 99c7b7e2-272e-4ab5-8580-17c42e62e2ef
ms.openlocfilehash: c63b117e20e6e4aef650ac07ba0475060cc37d0f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97238258"
---
# <a name="compiler-warning-level-1-c4805"></a>Avviso del compilatore (livello 1) C4805

'operation': combinazione non affidabile del tipo 'type' e del tipo 'type' nell'operazione

Questo avviso viene generato per le operazioni di confronto tra [bool](../../cpp/bool-cpp.md) e [int](../../c-language/integer-types.md). L'esempio seguente genera l'C4805:

```cpp
// C4805.cpp
// compile with: /W1
int main() {
   int i = 1;
   bool b = true;

   if (i == b) {   // C4805, comparing bool and int variables
   }
}
```
