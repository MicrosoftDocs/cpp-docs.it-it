---
description: 'Altre informazioni su: errore del compilatore C2164'
title: Errore del compilatore C2164
ms.date: 11/04/2016
f1_keywords:
- C2164
helpviewer_keywords:
- C2164
ms.assetid: 55df5024-68a8-45a8-ae6c-e6dba35318a2
ms.openlocfilehash: 9afe0809075f83c77ffae2ef77bc72c9e0f194e7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97145516"
---
# <a name="compiler-error-c2164"></a>Errore del compilatore C2164

' Function ': funzione intrinseca non dichiarata

Un `intrinsic` pragma utilizza una funzione non dichiarata (si verifica solo con **/OI**). In alternativa, è stata usata una delle funzioni intrinseche del compilatore senza includere il file di intestazione.

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
