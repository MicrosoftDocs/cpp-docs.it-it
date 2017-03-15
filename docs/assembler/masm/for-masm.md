---
title: "FOR (MASM) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "for"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FOR directive"
ms.assetid: 99872e61-f503-4d34-b305-59f8556ba6b7
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# FOR (MASM)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Contrassegna un blocco che venga ripetuto una volta per ciascuna `argument`, alla versione corrente  `argument` sostituire  `parameter` a ogni ripetizione.  
  
## Sintassi  
  
```  
  
   FOR   
   parameter [[:REQ | :=default]] , <argument [[, argument]]...>  
statements  
ENDM  
```  
  
## Note  
 Equivale a [IRP](../../assembler/masm/irp.md).  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)