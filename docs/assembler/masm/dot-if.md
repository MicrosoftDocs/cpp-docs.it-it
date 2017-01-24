---
title: ".IF | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - ".IF"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".IF directive"
ms.assetid: dccc7615-8fc7-4829-9f39-0ee405f6c1e3
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# .IF
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Genera codice per la verifica `condition1` ad esempio, l'ASCIA \> 7\) ed esegue istruzioni se la condizione è true.  
  
## Sintassi  
  
```  
  
   .IF condition1   
statements  
[[.ELSEIF condition2   
   statements]]  
[[.ELSE  
   statements]]  
.ENDIF  
```  
  
## Note  
 se a [.ELSE](../../assembler/masm/dot-else.md) seguente, le relative istruzioni vengono eseguite se lo stato di origine è false.  Si noti che le condizioni vengono valutate in fase di esecuzione.  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)