---
title: "Avviso del compilatore (livello 4) C4127 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4127"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4127"
ms.assetid: f59ded9e-5227-45bd-ac43-2aa861581363
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Avviso del compilatore (livello 4) C4127
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

espressione condizionale costante  
  
 L'espressione di controllo di un'istruzione `if` o di un ciclo `while` restituisce una costante. Se l'espressione di controllo di un ciclo `while` è una costante perché il ciclo verrà interrotto al centro, è consigliabile sostituire il ciclo `while` con un ciclo `for`. Si può omettere l'inizializzazione, il test di terminazione e l'incremento del ciclo di un ciclo `for`, generando un ciclo infinito \(come `while(1)`\) e si può uscire dal ciclo dal corpo dell'istruzione `for`.  
  
 L'esempio seguente genera l'errore C4127:  
  
```  
// C4127.cpp // compile with: /W4 #include <stdio.h> int main() { if (1 == 1) {}   // C4127 while (1) { break; }   // C4127 // OK for ( ; ; ) { printf("test\n"); break; } }  
```