---
title: Errore del compilatore C2361 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2361
dev_langs:
- C++
helpviewer_keywords:
- C2361
ms.assetid: efbdaeb9-891c-4f7d-97da-89088a8413f3
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 3e80c1a1ebcd56b4125ef9aa43e904d9093fc8a9
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2361"></a>Errore del compilatore C2361
inizializzazione di 'identifier' ignorata da un'etichetta 'default'  
  
 L'inizializzazione di `identifier` può essere ignorata un `switch` istruzione. È Impossibile passare oltre una dichiarazione con un inizializzatore, a meno che la dichiarazione è racchiuso in un blocco. (A meno che non è dichiarata in un blocco, la variabile è nell'ambito fino alla fine del `switch` istruzione.)  
  
 L'esempio seguente genera l'errore C2361:  
  
```  
// C2361.cpp  
void func( void ) {  
   int x;  
   switch (x) {  
   case 0 :  
      int i = 1;  
      { int j = 1; }  
   default :   // C2361 error  
      int k = 1;  
   }  
}  
```  
  
 Possibile soluzione:  
  
```  
// C2361b.cpp  
// compile with: /c  
void func( void ) {  
   int x = 0;  
   switch (x) {  
   case 0 :  
      { int j = 1; int i = 1;}  
   default :  
      int k = 1;  
   }  
}  
```
