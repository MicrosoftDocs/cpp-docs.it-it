---
title: "Errore del compilatore C3239 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3239"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3239"
ms.assetid: 22a518b7-020f-4f3c-9963-a094667fd1ac
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3239
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type': il puntatore su puntatore interno\/di blocco non consentito da Common Language Runtime  
  
 Il compilatore ha rilevato un tipo non valido.  
  
 L'esempio seguente genera l'errore C3229:  
  
```  
// C3239.cpp // compile with: /clr int main() { interior_ptr<int>* pip0;   // C3239 // OK int * pip1; interior_ptr<int> pip2; int ** pip; }  
```