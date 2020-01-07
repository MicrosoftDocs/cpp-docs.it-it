---
title: Errore del compilatore C2164
ms.date: 11/04/2016
f1_keywords:
- C2164
helpviewer_keywords:
- C2164
ms.assetid: 55df5024-68a8-45a8-ae6c-e6dba35318a2
ms.openlocfilehash: 74c4f0e24f21f21d7a7015a20cb0e27ac635c467
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75301912"
---
# <a name="compiler-error-c2164"></a>Errore del compilatore C2164

' Function ': funzione intrinseca non dichiarata

Un pragma `intrinsic` usa una funzione non dichiarata (si verifica solo con **/OI**). In alternativa, è stata usata una delle funzioni intrinseche del compilatore senza includere il file di intestazione.

L'esempio seguente genera l'C2164:

```c
// C2164.c
// compile with: /c
// processor: x86
// Uncomment the following line to resolve.
// #include "xmmintrin.h"
void b(float *p) {
   _mm_load_ss(p);   // C2164
}
```
