---
title: Compilatore avviso (livello 1) C4794 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C4794
dev_langs: C++
helpviewer_keywords: C4794
ms.assetid: badc9c36-fa1a-4fec-929b-7bfda7a7b79f
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5c6878e2e0fb3fed9cb349bd0dd651a24c02aae9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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