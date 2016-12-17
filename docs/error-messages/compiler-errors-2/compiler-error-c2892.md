---
title: "Errore del compilatore C2892 | Microsoft Docs"
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
  - "C2892"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2892"
ms.assetid: c22a5084-2f50-42c2-a56b-6dfe5442edc9
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2892
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

la classe locale non deve avere template membri  
  
 Le funzioni membro basate su template non sono valide in una classe definita in una funzione.  
  
 Il seguente codice di esempio genera l'errore C2892:  
  
```  
// C2892.cpp  
int main() {  
   struct local {  
      template<class T>   // C2892  
      void f() {}  
   };  
}  
```