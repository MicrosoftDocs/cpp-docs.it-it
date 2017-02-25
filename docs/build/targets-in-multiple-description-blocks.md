---
title: "Destinazioni in pi&#249; blocchi di descrizione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "blocchi, di descrizione multipli"
  - "blocchi di descrizione"
  - "blocchi di descrizione multipli"
ms.assetid: 8618dcd9-c11d-4562-91a7-0c904ed438a8
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Destinazioni in pi&#249; blocchi di descrizione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per aggiornare una destinazione in più blocchi di descrizione utilizzando comandi diversi, specificare una coppia di due punti \(::\) tra destinazioni e dipendenti.  
  
```  
target.lib :: one.asm two.asm three.asm  
    ml one.asm two.asm three.asm  
    lib target one.obj two.obj three.obj  
target.lib :: four.c five.c  
    cl /c four.c five.c  
    lib target four.obj five.obj  
```  
  
## Vedere anche  
 [Destinazioni](../build/targets.md)