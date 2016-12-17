---
title: "EXTERN (MASM) | Microsoft Docs"
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
  - "extern"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "EXTERN directive"
ms.assetid: 667d703d-3aaf-4139-a586-29bc5dab1aff
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# EXTERN (MASM)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Definisce uno o più variabili, etichette, o simboli esterni denominati nome di cui tipo è `type`.  
  
## Sintassi  
  
```  
  
   EXTERN [[langtype]] name [[(altid)]] :  
type [[, [[langtype]] name [[(altid)]] :type]]...  
```  
  
## Note  
 `type` può essere  [ABS](../../assembler/masm/operator-abs.md), che incorpora nome come costante.  Equivale a [EXTRN](../../assembler/masm/extrn.md).  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)