---
title: Errore del compilatore C2702 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2702
dev_langs:
- C++
helpviewer_keywords:
- C2702
ms.assetid: 6def15d4-9a8d-43e7-ae35-42d7cb57c27e
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: f95a98262f9c7c00850575af883e4269590ead8e
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2702"></a>Errore del compilatore C2702
except non può trovarsi in un blocco di terminazione  
  
 Un gestore di eccezioni (`__try`/`__except`) non può essere annidato all'interno di un `__finally` blocco.  
  
 L'esempio seguente genera l'errore C2702:  
  
```  
// C2702.cpp  
// processor: x86 IPF  
int Counter;  
int main() {  
   __try {}  
   __finally {  
      __try {}   // C2702  
      __except( Counter ) {}   // C2702  
   }  
}  
```
