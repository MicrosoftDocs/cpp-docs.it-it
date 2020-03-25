---
title: Avviso del compilatore (livello 1) C4353
ms.date: 11/04/2016
f1_keywords:
- C4353
helpviewer_keywords:
- C4353
ms.assetid: 6e79f186-ed82-4c95-9923-0ad5bb9c4db1
ms.openlocfilehash: 9c91a3d21a16cc8891d6f04db49c3a0f0ec26e2c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80187193"
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
