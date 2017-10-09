---
title: Errore del compilatore C2164 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2164
dev_langs:
- C++
helpviewer_keywords:
- C2164
ms.assetid: 55df5024-68a8-45a8-ae6c-e6dba35318a2
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 2a60b263dad350a0c2e28d3d20053ff10f128e24
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2164"></a>Errore del compilatore C2164
'function': funzione intrinseca non dichiarata  
  
 Un `intrinsic` pragma utilizza una funzione non dichiarata (si verifica solo con **/Oi**). In alternativa, una delle funzioni intrinseche del compilatore è stata utilizzata senza includere il file di intestazione.  
  
 L'esempio seguente genera l'errore C2164:  
  
```  
// C2164.c  
// compile with: /c  
// processor: x86  
// Uncomment the following line to resolve.  
// #include "xmmintrin.h"  
void b(float *p) {  
   _mm_load_ss(p);   // C2164  
}  
```
