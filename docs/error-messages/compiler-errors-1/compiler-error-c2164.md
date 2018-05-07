---
title: Errore del compilatore C2164 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2164
dev_langs:
- C++
helpviewer_keywords:
- C2164
ms.assetid: 55df5024-68a8-45a8-ae6c-e6dba35318a2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 23596fc25685adc155220de344adcd7d25827985
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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