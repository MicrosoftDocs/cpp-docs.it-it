---
title: "Errore del compilatore C2577 | Microsoft Docs"
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
  - "C2577"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2577"
ms.assetid: fc79ef83-8362-40a2-9257-8037c3195ce4
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2577
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'membro': un distruttore\/finalizzatore non può avere un tipo restituito  
  
 Un distruttore o un finalizzatore non può restituire un valore `void` o di altro tipo.  Rimuovere l'istruzione `return` dalla definizione del distruttore.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2577:  
  
```  
// C2577.cpp  
// compile with: /c  
class A {  
public:  
   A() {}  
   ~A(){  
      return 0;   // C2577  
   }  
};  
```