---
title: "Errore del compilatore C2561 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2561"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2561"
ms.assetid: 0abe955b-53a6-4a3c-8362-b1a8eb40e8d1
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2561
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': la funzione deve restituire un valore  
  
 La dichiarazione della funzione prevede la restituzione di un valore, ma la definizione non contiene un'istruzione `return`.  
  
 È possibile che l'errore sia causato da un prototipo di funzione non corretto:  
  
1.  Se la funzione non restituisce un valore, dichiararla con il tipo restituito [void](../../cpp/void-cpp.md).  
  
2.  Verificare che tutte le possibili diramazioni della funzione restituiscano un valore del tipo dichiarato nel prototipo.  
  
3.  È possibile che le funzioni C\+\+ contenenti routine assembly inline che memorizzano il valore restituito nel registro `AX` richiedano un'istruzione return.  Copiare il valore di `AX` in una variabile temporanea e restituire tale variabile dalla funzione.  
  
 Il seguente codice di esempio genera l'errore C2561:  
  
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