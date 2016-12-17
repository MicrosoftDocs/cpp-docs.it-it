---
title: "INVOKE | Microsoft Docs"
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
  - "Invoke"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "INVOKE directive"
ms.assetid: 12d9bb40-33b9-411e-b801-45a1d675967e
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# INVOKE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiama la routine all'indirizzo fornito da l *espressione*, passando gli argomenti nello stack o nei registri secondo le convenzioni di chiamata standard del tipo di linguaggio.  
  
## Sintassi  
  
```  
  
INVOKE   
expression [[, arguments]]  
```  
  
## Note  
 Ogni argomento passato alla routine può essere un'espressione, una coppia del log, o un'espressione di indirizzo \(un'espressione preceduta da `ADDR`\).  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)