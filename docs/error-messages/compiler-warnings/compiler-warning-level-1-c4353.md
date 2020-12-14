---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4353'
title: Avviso del compilatore (livello 1) C4353
ms.date: 11/04/2016
f1_keywords:
- C4353
helpviewer_keywords:
- C4353
ms.assetid: 6e79f186-ed82-4c95-9923-0ad5bb9c4db1
ms.openlocfilehash: 8842dccd617a0f5db81a0ce25a03b93f489f52ad
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97311409"
---
# <a name="compiler-warning-level-1-c4353"></a>Avviso del compilatore (livello 1) C4353

utilizzata estensione non standard: costante 0 come espressione di funzione. Usa funzione intrinseca ' __noop '

Non è possibile usare la costante zero (0) come espressione di funzione. Per ulteriori informazioni, vedere [__noop](../../intrinsics/noop.md).

L'esempio seguente genera l'C4353:

```cpp
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
