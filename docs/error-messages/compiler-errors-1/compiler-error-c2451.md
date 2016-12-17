---
title: "Errore del compilatore C2451 | Microsoft Docs"
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
  - "C2451"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2451"
ms.assetid: a64c93a5-ab8d-4d39-ae57-9ee7ef803036
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2451
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

le espressioni condizionali di tipo 'tipo' non sono valide  
  
 L'espressione condizionale dà come risultato un tipo intero.  
  
 Il seguente codice di esempio genera l'errore C2451:  
  
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