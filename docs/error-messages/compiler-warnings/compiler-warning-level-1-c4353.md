---
title: Avviso del compilatore (livello 1) C4353
ms.date: 11/04/2016
f1_keywords:
- C4353
helpviewer_keywords:
- C4353
ms.assetid: 6e79f186-ed82-4c95-9923-0ad5bb9c4db1
ms.openlocfilehash: 305c1156ae8dc664edba17287786db50bfabbd18
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50483701"
---
# <a name="compiler-warning-level-1-c4353"></a>Avviso del compilatore (livello 1) C4353

utilizzata estensione non standard: costante 0 come espressione di funzione. In alternativa, usare NOOP' (funzione intrinseca)

È possibile usare la costante zero (0) come un'espressione di funzione. Per altre informazioni, vedere [NOOP](../../intrinsics/noop.md).

L'esempio seguente genera l'errore C4353:

```
// C4353.cpp
// compile with: /W1
void MyPrintf(void){};
#define X 0
#if X
   #define DBPRINT MyPrint
#else
   #define DBPRINT 0   // C4353 expected
#endif
int main(){
DBPRINT();
}
```