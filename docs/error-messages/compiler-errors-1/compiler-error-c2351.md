---
title: "Errore del compilatore C2351 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2351"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2351"
ms.assetid: 5439ccf6-66f6-4859-964c-c73f5eddfc1b
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2351
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

sintassi C\+\+ obsoleta per l'inizializzazione di un costruttore  
  
 In un elenco di inizializzazione di nuovo tipo per un costruttore, è necessario denominare in modo esplicito ogni classe base diretta, anche se è l'unica.  
  
 Il seguente codice di esempio genera l'errore C2351:  
  
```  
// C2351.cpp  
// compile with: /c  
class B {  
public:   
   B() : () {}   // C2351  
   B() {}   // OK  
};  
```