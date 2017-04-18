---
title: Compilatore avviso (livello 1) C4794 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4794
dev_langs:
- C++
helpviewer_keywords:
- C4794
ms.assetid: badc9c36-fa1a-4fec-929b-7bfda7a7b79f
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 8f73e3da504960f737f175fff4c9d7b07084833a
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-1-c4794"></a>Avviso del compilatore (livello 1) C4794
segmento della variabile di archiviazione locale di thread 'variable' modificato da 'section name' a '.tls$'  
  
 È stato utilizzato [#pragma data_seg](../../preprocessor/data-seg.md) per inserire una variabile tls in una sezione non inizia con. TLS$.  
  
 . TLS$*x* sezione sarà disponibile nel file oggetto in cui [declspec](../../cpp/thread.md) sono definite le variabili. Da queste sezioni verrà generata una sezione .tls nel file EXE o DLL.  
  
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
