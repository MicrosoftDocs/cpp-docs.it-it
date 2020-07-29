---
title: Errore del compilatore C2048
ms.date: 11/04/2016
f1_keywords:
- C2048
helpviewer_keywords:
- C2048
ms.assetid: 44704726-85fc-42f0-afb9-194df8c4ca7c
ms.openlocfilehash: 483e4d706a1c08899e6cd6e1ec561a21ed805014
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87210436"
---
# <a name="compiler-error-c2048"></a>Errore del compilatore C2048

più di un valore predefinito

Un' **`switch`** istruzione contiene più **`default`** etichette. Eliminare una delle **`default`** etichette per risolvere l'errore.

L'esempio seguente genera l'errore C2048:

```cpp
// C2048.cpp
int main() {
   int a = 1;
   switch (a) {
      case 1:
         a = 0;
      default:
         a = 2;
      default:   // C2048
         a = 3;
   }
}
```

Possibile soluzione:

```cpp
// C2048b.cpp
int main() {
   int a = 1;
   switch (a) {
      case 1:
         a = 0;
      default:
         a = 2;
   }
}
```
