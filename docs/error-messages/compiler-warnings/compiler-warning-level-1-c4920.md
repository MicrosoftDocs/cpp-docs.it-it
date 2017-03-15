---
title: "Avviso del compilatore (livello 1) C4920 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4920"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4920"
ms.assetid: 1e501f2e-93c1-4d27-a4fa-54fc86271ae7
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4920
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

enum 'enum' membro 'member'\='value' già presente in enum 'enum' come 'member'\='value'  
  
 Se un file TLB passato a \#import contiene lo stesso simbolo definito in due o più enumerazioni, questo avviso indica che i simboli identici successivi verranno ignorati e impostati come commento nel file TLH.  
  
 Si supponga che un file TLB contenga quanto segue:  
  
```  
library MyLib { typedef enum { enumMember = 512 } AProblem; typedef enum { enumMember = 1024 } BProblem; };  
```  
  
 Gli esempi seguenti generano l'errore C4920:  
  
```  
// C4920.cpp // compile with: /W1 #import "t4920.tlb"   // C4920 int main() { }  
```