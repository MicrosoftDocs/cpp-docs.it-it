---
title: "Errore del compilatore C3487 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3487"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3487"
ms.assetid: 39bda474-4418-4a79-98bf-2b22fa92eaaa
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3487
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'return type': tutte le espressioni restituite devono essere dedotte dallo stesso tipo. In precedenza era 'return type'  
  
 Un'espressione lambda deve specificare il tipo restituito a meno che non contenga una singola istruzione return.  Se un'espressione lambda contiene più istruzioni return, devono avere tutte lo stesso tipo.  
  
### Per correggere l'errore  
  
-   Specificare un tipo restituito finale per l'espressione lambda.  Verificare che tutti i valori restituiti dall'espressione lambda siano dello stesso tipo o possano essere convertiti in modo implicito nel tipo restituito.  
  
## Esempio  
 L'esempio seguente genera l'errore C3487 perché i tipi restituiti dell'espressione lambda non corrispondono:  
  
```  
// C3487.cpp  
// Compile by using: cl /c /W4 C3487.cpp  
  
int* test(int* pi) {  
   // To fix the error, uncomment the trailing return type below  
   auto odd_pointer = [=]() /* -> int* */ {  
      if (*pi % 2)   
         return pi;  
      return nullptr; // C3487 - nullptr is not an int* type  
   };  
   return odd_pointer();  
}  
```  
  
## Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)