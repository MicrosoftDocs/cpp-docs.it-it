---
title: "Errore del compilatore C2594 | Microsoft Docs"
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
  - "C2594"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2594"
ms.assetid: 68cd708f-266e-44b0-a211-3e3ab63b11bf
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2594
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operatore': conversioni ambigue da 'tipo1' a 'tipo2'  
  
 Nessuna conversione da *type1* a *type2* è stata più diretta delle altre.  Si suggeriscono due possibili soluzioni per la conversione da *type1* a *type2*.  La prima opzione consiste nel definire una conversione diretta da *type1* a *type2*, la seconda nello specificare una sequenza di conversioni da *type1* a *type2*.  
  
 Nell'esempio seguente viene generato l'errore C2594.  La risoluzione suggerita dell'errore consiste in una sequenza di conversioni:  
  
```  
// C2594.cpp  
// compile with: /c  
struct A{};  
struct I1 : A {};  
struct I2 : A {};  
struct D : I1, I2 {};  
  
A *f (D *p) {  
   return (A*) (p);    // C2594  
  
// try the following line instead  
// return static_cast<A *>(static_cast<I1 *>(p));  
}  
```