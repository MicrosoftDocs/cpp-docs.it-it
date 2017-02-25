---
title: "GOTO (MASM) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "goto"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GOTO directive"
ms.assetid: 6a5f73e7-6784-4eae-ac52-4fc77a7f369f
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# GOTO (MASM)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Trasferisce l'assembly alla riga selezionata **:**macrolabel.  
  
## Sintassi  
  
```  
  
GOTO   
macrolabel  
  
```  
  
## Note  
 **GOTO** è consentito solo in  [MACRO](../../assembler/masm/macro.md),  [IN](../../assembler/masm/for-masm.md),  [FORC](../../assembler/masm/forc.md),  [REPEAT](../../assembler/masm/repeat.md)e  **MENTRE** blocchi.  L'etichetta deve essere l'unica direttiva sulla riga e deve essere preceduta da due punti iniziali.  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)