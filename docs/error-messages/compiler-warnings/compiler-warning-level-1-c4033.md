---
title: Compilatore avviso (livello 1) C4033 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4033
dev_langs:
- C++
helpviewer_keywords:
- C4033
ms.assetid: 189a9ec3-ff6d-49dd-b9b2-530b28bbb7c9
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: aec85fa985b3d8183d7614bdd6b3527b5d671b2b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4033"></a>Avviso del compilatore (livello 1) C4033
'function' deve restituire un valore  
  
 La funzione non restituisce un valore. Viene restituito un valore indefinito.  
  
 Le funzioni che usano `return` senza un valore restituito devono essere dichiarate come tipo `void`.  
  
 Questo errore è relativo al codice del linguaggio C.  
  
 L'esempio seguente genera l'errore C4033:  
  
```  
// C4033.c  
// compile with: /W1 /LD  
int test_1(int x)   // C4033 expected  
{  
   if (x)  
   {  
      return;   // C4033  
   }  
}  
```