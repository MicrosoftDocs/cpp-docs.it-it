---
title: Avviso del compilatore (livello 1) C4145
ms.date: 11/04/2016
f1_keywords:
- C4145
helpviewer_keywords:
- C4145
ms.assetid: 0440777a-cca2-4159-aff5-e67a254ad64a
ms.openlocfilehash: a6ae6145749842c01e720f5af1fe2b3ee438a5ba
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73624996"
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