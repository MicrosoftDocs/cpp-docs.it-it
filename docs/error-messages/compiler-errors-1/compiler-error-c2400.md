---
title: Errore del compilatore C2400
ms.date: 11/04/2016
f1_keywords:
- C2400
helpviewer_keywords:
- C2400
ms.assetid: 1ba441ee-73f9-42a5-bfe9-fbeab93808eb
ms.openlocfilehash: 61043f3f97d4d91b66c3902cc33ed4be526541ae
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74744771"
---
# <a name="compiler-error-c2400"></a>Errore del compilatore C2400

errore di sintassi dell'assembler inline in ' context '; trovato ' token '

Il token ha causato un errore di sintassi nel contesto specificato.

L'esempio seguente genera l'C2400:

```cpp
// C2400.cpp
// processor: x86
int main() {
   __asm {
      heh ax,bx;   // C2400, heh is not a valid x86 instruction
      mov ax,bx;   // OK
   }
}
```
