---
title: "Errore del compilatore C2093 | Microsoft Docs"
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
  - "C2093"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2093"
ms.assetid: 17529a70-9169-46b5-9fc6-57a5ce224e6a
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2093
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'variabile1': non può essere inizializzato con l'indirizzo di una variabile automatica 'variabile2'  
  
 Durante la compilazione con [\/Za](../../build/reference/za-ze-disable-language-extensions.md) si è tentato di utilizzare l'indirizzo di una variabile automatica come inizializzatore.  
  
 Il seguente codice di esempio genera l'errore C2093:  
  
```  
// C2093.c  
// compile with: /Za /c  
void func() {  
   int li;   // an implicit auto variable  
   int * s[]= { &li };   // C2093 address is not a constant  
  
   // OK  
   static int li2;  
   int * s2[]= { &li2 };  
}  
```