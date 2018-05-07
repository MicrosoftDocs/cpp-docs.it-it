---
title: Compilatore avviso (livello 1) C4392 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4392
dev_langs:
- C++
helpviewer_keywords:
- C4392
ms.assetid: 817806ad-06a6-4b9e-8355-e25687c782dc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b64159737b9423f3d9ea55489eb28c20a2162d14
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4392"></a>Avviso del compilatore (livello 1) C4392
'signature': numero errato di argomenti per una funzione intrinseca, previsto 'number' argomenti  
  
 Una dichiarazione di funzione per un intrinseco del compilatore contiene un numero errato di argomenti. L'immagine risultante potrebbe non funzionare correttamente.  
  
 Per risolvere questo problema, correggere la dichiarazione o eliminare la dichiarazione in modo semplice e #include il file di intestazione appropriati.  
  
 L'esempio seguente genera l'errore C4392:  
  
```  
// C4392.cpp  
// compile with: /W1  
// processor: x86  
// uncomment the following line and delete the line that  
// generated the warning to resolve  
// #include "xmmintrin.h"  
  
#ifdef  __cplusplus  
extern "C" {  
#endif  
  
extern void _mm_stream_pd(double *dp);   // C4392  
  
#ifdef  __cplusplus  
}  
#endif  
  
int main()  
{  
}  
```