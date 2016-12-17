---
title: "Errore del compilatore C2391 | Microsoft Docs"
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
  - "C2391"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2391"
ms.assetid: 63a9c6b9-03cc-4517-885c-bdcd048643b3
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2391
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': 'friend' non può essere utilizzato durante una definizione di tipo  
  
 La dichiarazione `friend` include una dichiarazione di classe completa.  Una dichiarazione `friend` può specificare una funzione membro o un identificatore di tipo elaborato, ma non una dichiarazione di classe completa.  
  
 Il seguente codice di esempio genera l'errore C2326:  
  
```  
// C2391.cpp  
// compile with: /c  
class D {   
   void func( int );   
};  
  
class A {  
   friend class B { int i; };   // C2391  
  
   // OK  
   friend class C;  
   friend void D::func(int);  
};  
```