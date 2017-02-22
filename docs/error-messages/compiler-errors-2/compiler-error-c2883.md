---
title: "Errore del compilatore C2883 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2883"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2883"
ms.assetid: 5c6d689d-ed42-41ad-b5c0-e9c2e0b8c356
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2883
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'nome': conflitto tra la dichiarazione di funzione e 'identificatore' introdotto dalla dichiarazione using  
  
 Si è tentato di definire una funzione più di una volta.  La prima definizione è ricavata da uno spazio dei nomi con una dichiarazione `using`.  La seconda è una definizione locale.  
  
 Il seguente codice di esempio genera l'errore C2883:  
  
```  
// C2883.cpp  
namespace A {  
   void z(int);  
}  
  
int main() {  
   using A::z;  
   void z(int);   // C2883  z is already defined  
}  
```