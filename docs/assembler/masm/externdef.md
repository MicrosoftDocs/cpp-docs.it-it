---
title: "EXTERNDEF | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "EXTERNDEF"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "EXTERNDEF directive"
ms.assetid: 95a10de6-c345-4428-a2f2-90f7d411dc86
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# EXTERNDEF
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Definisce uno o più variabili, etichette, o simboli esterni denominati nome di cui tipo è `type`.  
  
## Sintassi  
  
```  
  
EXTERNDEF [[langtype]] name:type [[, [[langtype]] name:type]]...  
```  
  
## Note  
 se nome viene definito nel modulo, vengono considerati [PUBBLICO](../../assembler/masm/public-masm.md).  se nome viene fatto riferimento nel modulo, vengono considerati [ESTERNO](../../assembler/masm/extern-masm.md).  se *nome* non viene fatto riferimento, viene ignorato.  `type` può essere  [ABS](../../assembler/masm/operator-abs.md), che incorpora nome come costante.  In genere utilizzato nei file di inclusione.  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)