---
title: "PUSHCONTEXT | Microsoft Docs"
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
  - "PUSHCONTEXT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PUSHCONTEXT directive"
ms.assetid: 18e528ee-df6c-4ce6-8823-b35b40f757fd
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# PUSHCONTEXT
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

salva la parte o tutta corrente `context`: il registro di segmento presuppone, flag di valore di base, elenco e cref, o valori coprocessore del processore.  `context` può essere  **PRESUPPONE**,  `RADIX`,  **ELENCO**,  **La CPU**, o  **TUTTI**.  
  
## Sintassi  
  
```  
  
PUSHCONTEXT context  
```  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)