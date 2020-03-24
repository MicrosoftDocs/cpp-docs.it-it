---
title: Avviso del compilatore (livello 1) C4145
ms.date: 11/04/2016
f1_keywords:
- C4145
helpviewer_keywords:
- C4145
ms.assetid: 0440777a-cca2-4159-aff5-e67a254ad64a
ms.openlocfilehash: 5028ae20c2413c98fa55bd81081552d22381cdbc
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80163676"
---
# <a name="compiler-warning-level-1-c4145"></a>Avviso del compilatore (livello 1) C4145

'espressione1': espressione relazionale come espressione switch. Possibile confusione con 'espressione2'.

Un'istruzione `switch` usa un'espressione relazionale come espressione di controllo, di conseguenza viene restituito un valore booleano per le istruzioni **case** . Si intendeva *espressione2*?

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
