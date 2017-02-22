---
title: "IF (MASM) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "if"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IF directive"
ms.assetid: 82e43712-4f0c-4bf6-90ce-0663e81af707
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# IF (MASM)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

concede il montaggio di *ifstatements* se *expression1* è true \(diverso da zero\) o *elseifstatements* se *expression1* è false \(0\) e *expression2* è true.  
  
## Sintassi  
  
```  
  
   IF expression1  
ifstatements  
[[ELSEIF expression2  
   elseifstatements]]  
[[ELSE  
   elsestatements]]  
ENDIF  
```  
  
## Note  
 Le seguenti direttive possono essere sostituiti per [ELSEIF](../../assembler/masm/elseif-masm.md):  **ELSEIFB**,  **ELSEIFDEF**,  **ELSEIFDIF**,  **ELSEIFDIFI**,  **ELSEIFE**,  **ELSEIFIDN**,  **ELSEIFIDNI**,  **ELSEIFNB**e  **ELSEIFNDEF**.  Facoltativamente, assemblerà *elsestatements* se l'espressione precedente è false.  Si noti che le espressioni vengono valutate al momento dell'assembly.  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)