---
title: "Errore del compilatore C2562 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2562"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2562"
ms.assetid: 2c41e511-9952-4b98-9976-6b1523613e1b
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2562
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': la funzione 'void' restituisce un valore  
  
 La funzione è dichiarata come `void` ma restituisce un valore.  
  
 L'errore può essere causato da un prototipo di funzione non corretto.  
  
 È possibile correggerlo specificando il tipo restituito nella dichiarazione della funzione.  
  
 Il seguente codice di esempio genera l'errore C2562:  
  
```  
// C2562.cpp  
// compile with: /c  
void testfunc() {  
   int i;  
   return i;   // C2562 delete the return to resolve  
}  
```