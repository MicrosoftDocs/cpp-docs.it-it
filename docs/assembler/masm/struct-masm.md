---
title: "STRUCT (MASM) | Microsoft Docs"
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
  - "struct"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "STRUCT directive"
ms.assetid: 70c3ba6b-00db-461e-8dd9-eafd3ae5b3c8
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# STRUCT (MASM)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Dichiara un tipo di struttura che consente di specificare *fielddeclarations*.  Ciascun campo deve essere una definizione dei dati valida.  Equivale a [STRUC](../../assembler/masm/struc.md).  
  
## Sintassi  
  
```  
  
   name STRUCT [[alignment]] [[, NONUNIQUE]]  
fielddeclarations  
name ENDS  
```  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)