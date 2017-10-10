---
title: Errore del compilatore C2451 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2451
dev_langs:
- C++
helpviewer_keywords:
- C2451
ms.assetid: a64c93a5-ab8d-4d39-ae57-9ee7ef803036
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 3860005ee3c17d568dabb9d4a49174cc3ca14d34
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2451"></a>Errore del compilatore C2451
espressioni condizionali di tipo 'type' non sono valida  
  
 L'espressione condizionale restituisce un tipo integer.  
  
 L'esempio seguente genera l'errore C2451:  
  
```  
// C2451.cpp  
class B {};  
  
int main () {  
   B b1;  
   int i = 0;  
   if (b1)   // C2451  
   // try the following line instead  
   // if (i)  
      ;  
}  
```
