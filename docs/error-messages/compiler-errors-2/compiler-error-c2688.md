---
title: "Errore del compilatore C2688 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2688"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2688"
ms.assetid: 168c9e9d-8f65-4664-af86-db71d3e6ee46
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C2688
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'C2::fgrv': tipo restituito da covariante con ereditarietà multipla o virtual non supportata per le funzioni varargs  
  
 I tipi restituiti da una covariante non sono supportati in Visual C\+\+ se una funzione contiene argomenti variabili.  
  
 Per correggere questo errore, definire le funzioni in modo che non utilizzino argomenti variabili o rendere identici i valori restituiti per tutte le funzioni virtuali.  
  
 Il seguente codice di esempio genera l'errore C2688:  
  
```  
// C2688.cpp  
struct G1 {};  
struct G2 {};  
struct G3 : G1, G2 {};  
struct G4 {};  
struct G5 {};  
struct G6 : G4, G5 {};  
struct G7 : G3, G6 {};  
  
struct C1 {  
   virtual G4& fgrv(int,...);  
};  
  
struct C2 : C1 {  
   virtual G7& fgrv(int,...);   // C2688, does not return G4&  
};  
```