---
title: Compilatore avviso (livello 1) C4353 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4353
dev_langs:
- C++
helpviewer_keywords:
- C4353
ms.assetid: 6e79f186-ed82-4c95-9923-0ad5bb9c4db1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3926de61cdc41464c14c8610fee3033d10076506
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46066843"
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