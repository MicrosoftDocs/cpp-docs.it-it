---
title: "Errore del compilatore C2438 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2438"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2438"
ms.assetid: 3a0ab3ba-d0e4-4d8f-971d-e503397cc827
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2438
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': impossibile inizializzare i dati di classe static tramite il costruttore  
  
 Un costruttore viene utilizzato per inizializzare un membro static di una classe.  I membri static devono essere inizializzati in una definizione all'esterno della dichiarazione di classe.  
  
 Il seguente codice di esempio genera l'errore C2438:  
  
```  
// C2438.cpp  
struct X {  
   X(int i) : j(i) {}   // C2438  
   static int j;  
};  
  
int X::j;  
  
int main() {  
   X::j = 1;  
}  
```