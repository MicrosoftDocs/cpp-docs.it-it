---
title: Avviso del compilatore (livello 1) C4145
ms.date: 11/04/2016
f1_keywords:
- C4145
helpviewer_keywords:
- C4145
ms.assetid: 0440777a-cca2-4159-aff5-e67a254ad64a
ms.openlocfilehash: 19d2d1a018c7ee981f83aa6fa0914f1241c55538
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220106"
---
# <a name="compiler-warning-level-1-c4145"></a>Avviso del compilatore (livello 1) C4145

'espressione1': espressione relazionale come espressione switch. Possibile confusione con 'espressione2'.

Un' **`switch`** istruzione usa un'espressione relazionale come espressione di controllo, che restituisce un valore booleano per le **`case`** istruzioni. Si intendeva *espressione2*?

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4145:

```cpp
// C4145.cpp
// compile with: /W1
int main() {
   int i = 0;
   switch(i == 1) {   // C4145, use i instead of i == 1 to resolve
      case 1:
         break;
      default:
         break;
   }
}
```
