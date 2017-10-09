---
title: Errore del compilatore C2180 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2180
dev_langs:
- C++
helpviewer_keywords:
- C2180
ms.assetid: ea71b39e-b977-48a7-b7bd-af68ef5e263b
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 181309cca171c872a7c3767729a755d6e73bd288
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2180"></a>Errore del compilatore C2180
l'espressione di controllo ha tipo 'tipo'  
  
 L'espressione di controllo in un'istruzione `if`, `while`, `for` o `do` è un cast dell'espressione a `void`. Per risolvere il problema, sostituire l'espressione di controllo con una che produce un valore `bool` o un tipo che può essere convertito in `bool`.  
  
 L'esempio seguente genera l'errore C2180:  
  
```  
// C2180.c  
  
int main() {  
   while ((void)1)   // C2180  
      return 1;  
   while (1)         // OK  
      return 0;  
}  
```
