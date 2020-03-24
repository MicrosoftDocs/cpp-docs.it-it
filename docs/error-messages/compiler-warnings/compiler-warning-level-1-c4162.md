---
title: Avviso del compilatore (livello 1) C4162
ms.date: 11/04/2016
f1_keywords:
- C4162
helpviewer_keywords:
- C4162
ms.assetid: 21ae3c92-501d-4689-ad7d-13753cb65eff
ms.openlocfilehash: 68e3a752f2aa039f4a2aba24d6433dc9fe2372f6
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80200057"
---
# <a name="compiler-warning-level-1-c4162"></a>Avviso del compilatore (livello 1) C4162

' Identifier ': non è stata trovata alcuna funzione con collegamento C

Una funzione con collegamento C è dichiarata ma non è stata trovata.

Per risolvere il problema, compilare un file con estensione c (richiamare il compilatore C).  Se è necessario richiamare il C++ compilatore, inserire extern "C" prima della dichiarazione di funzione.

L'esempio seguente genera C4162

```cpp
// C4162.cpp
// compile with: /c /W1
unsigned char _bittest(long* a, long b);
#pragma intrinsic (_bittest)   // C4162

int main() {
   bool bit;
   long num = 78002;
   bit = _bittest(&num, 5);
}
```

Possibile soluzione:

```cpp
// C4162b.cpp
// compile with: /c
extern "C"
unsigned char _bittest(long* a, long b);
#pragma intrinsic (_bittest)

int main() {
   bool bit;
   long num = 78002;
   bit = _bittest(&num, 5);
}
```
