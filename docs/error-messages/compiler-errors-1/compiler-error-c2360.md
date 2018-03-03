---
title: Errore del compilatore C2360 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2360
dev_langs:
- C++
helpviewer_keywords:
- C2360
ms.assetid: 51bfd2ee-8108-4777-aa93-148b9cebfa83
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4c8bde56d32000ca51b07afbeb09438327b66120
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2360"></a>Errore del compilatore C2360
inizializzazione di 'identifier' ignorata da un'etichetta 'case'  
  
 L'inizializzazione di `identifier` può essere ignorata un `switch` istruzione. È Impossibile passare oltre una dichiarazione con un inizializzatore, a meno che la dichiarazione è racchiuso in un blocco. (A meno che non è dichiarata in un blocco, la variabile è nell'ambito fino alla fine del `switch` istruzione.)  
  
 L'esempio seguente genera l'errore C2360:  
  
```  
// C2360.cpp  
int main() {  
   int x = 0;  
   switch ( x ) {  
   case 0 :  
      int i = 1;  
      { int j = 1; }  
   case 1 :   // C2360  
      int k = 1;  
   }  
}  
```  
  
 Possibile soluzione:  
  
```  
// C2360b.cpp  
int main() {  
   int x = 0;  
   switch ( x ) {  
   case 0 :  
      { int j = 1; int i = 1;}  
   case 1 :  
      int k = 1;  
   }  
}  
```