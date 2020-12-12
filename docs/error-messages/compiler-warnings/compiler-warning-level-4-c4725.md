---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4725'
title: Avviso del compilatore (livello 4) C4725
ms.date: 11/04/2016
f1_keywords:
- C4725
helpviewer_keywords:
- C4725
ms.assetid: effa0335-71c3-4b3b-8618-da4b9b46a95d
ms.openlocfilehash: 636f6fb18c3ffb18a2f4b845a4584324cf59d72a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330548"
---
# <a name="compiler-warning-level-4-c4725"></a>Avviso del compilatore (livello 4) C4725

l'istruzione potrebbe non risultare corretta per alcuni Pentium

Il codice contiene un'istruzione di assembly inline che potrebbe produrre risultati non precisi su alcuni microprocessori Pentium.

L'esempio seguente genera l'errore C4725:

```cpp
// C4725.cpp
// compile with: /W4
// processor: x86
double m32fp = 2.0003e-17;

void f() {
   __asm
   {
      FDIV m32fp   // C4725
   }
}

int main() {
}
```
