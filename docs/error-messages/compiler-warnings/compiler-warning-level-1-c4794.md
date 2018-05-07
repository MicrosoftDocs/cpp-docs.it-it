---
title: Compilatore avviso (livello 1) C4794 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4794
dev_langs:
- C++
helpviewer_keywords:
- C4794
ms.assetid: badc9c36-fa1a-4fec-929b-7bfda7a7b79f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 88ffa1200e7c760f028549335f0df5a9ea8ba3d5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4794"></a>Avviso del compilatore (livello 1) C4794
segmento della variabile di archiviazione locale di thread 'variable' modificato da 'section name' a '.tls$'  
  
 È stato usato [#pragma data_seg](../../preprocessor/data-seg.md) per inserire una variabile tls in una sezione che non inizia con .tls$.  
  
 La sezione .tls$*x* sarà presente nel file oggetto in cui vengono definite le variabili [__declspec(thread)](../../cpp/thread.md) . Da queste sezioni verrà generata una sezione .tls nel file EXE o DLL.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4794:  
  
```  
// C4794.cpp  
// compile with: /W1 /c  
#pragma data_seg(".someseg")  
__declspec(thread) int i;   // C4794  
  
// OK  
#pragma data_seg(".tls$9")  
__declspec(thread) int j;  
```