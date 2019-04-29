---
title: Errore del compilatore C2425
ms.date: 11/04/2016
f1_keywords:
- C2425
helpviewer_keywords:
- C2425
ms.assetid: 0ce59404-9aff-4e01-aa8d-27d23e92eb30
ms.openlocfilehash: fcbcf06df3330320bf014c132abc543e2e2e8087
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62402840"
---
# <a name="compiler-error-c2425"></a>Errore del compilatore C2425

'token': espressione non costante in 'contesto'

Il token fa parte di un'espressione non costante in questo contesto.

Per risolvere questo problema, sostituire il token con un valore letterale di costante o con un calcolo.

Il seguente codice di esempio genera l'errore C2425:

```
// C2425.cpp
// processor: x86
int main() {
   int i = 3;
   __asm {
      mov eax, [ebp - i]   // C2425
      mov eax, [ebp - 3]   // OK
   }
}
```