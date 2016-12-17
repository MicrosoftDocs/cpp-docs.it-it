---
title: ".REPEAT | Microsoft Docs"
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
  - ".REPEAT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".REPEAT directive"
ms.assetid: cb8ad8c6-587b-42f9-a0ad-b5316a24918c
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# .REPEAT
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Genera codice di cui ripete l'esecuzione del blocco istruzioni finché `condition` diventa true.  [.UNTILCXZ](../../assembler/masm/dot-untilcxz.md), che diventa true se la CX è zero, può essere sostituito con  [.UNTIL](../../assembler/masm/dot-until.md).  `condition` è facoltativo contenente  **.UNTILCXZ**.  
  
## Sintassi  
  
```  
  
   .REPEAT  
statements  
.UNTIL condition  
```  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)