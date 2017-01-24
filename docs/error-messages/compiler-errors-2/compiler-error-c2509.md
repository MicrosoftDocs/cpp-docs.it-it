---
title: "Errore del compilatore C2509 | Microsoft Docs"
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
  - "C2509"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2509"
ms.assetid: 339c1fcd-ec4a-456c-9f18-a9b24d9921af
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2509
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': funzione membro non dichiarata in 'classe'  
  
 La funzione non è dichiarata nella classe specificata.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2509:  
  
```  
// C2509.cpp  
// compile with: /c  
struct A {  
   virtual int vfunc() = 0;  
   virtual int vfunc2() = 0;  
};  
  
struct B : private A {  
   using A::vfunc;  
   virtual int vfunc2();  
};  
  
int B::vfunc() { return 1; }   // C2509  
int B::vfunc2() { return 1; }   // OK  
```