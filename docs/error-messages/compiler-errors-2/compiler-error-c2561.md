---
title: Errore del compilatore C2561 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2561
dev_langs:
- C++
helpviewer_keywords:
- C2561
ms.assetid: 0abe955b-53a6-4a3c-8362-b1a8eb40e8d1
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: ce30ffb454deb7bc847e736458295d037826a0ad
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2561"></a>Errore del compilatore C2561
'identifier': funzione deve restituire un valore  
  
 La funzione è dichiarata la restituzione di un valore, ma la definizione di funzione non contiene un `return` istruzione.  
  
 Questo errore può essere causato da un prototipo di funzione non corretta:  
  
1.  Se la funzione non restituisce un valore, dichiarare la funzione con tipo restituito [void](../../cpp/void-cpp.md).  
  
2.  Verificare che tutti i possibili rami della funzione restituiscono il valore del tipo dichiarato nel prototipo.  
  
3.  Le funzioni C++ contenenti routine assembly inline che memorizzano il valore restituito nel `AX` registro potrebbe essere un'istruzione return. Copiare il valore in `AX` a una variabile temporanea e restituire tale variabile dalla funzione.  
  
 L'esempio seguente genera l'errore C2561:  
  
```  
// C2561.cpp  
int Test(int x) {  
   if (x) {  
      return;   // C2561  
      // try the following line instead  
      // return 1;  
   }  
   return 0;  
}  
  
int main() {  
   Test(1);  
}  
```
