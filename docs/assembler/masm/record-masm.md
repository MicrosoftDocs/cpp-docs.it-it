---
title: "RECORD (MASM) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "RECORD"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RECORD directive"
ms.assetid: c83db394-0fe3-468f-813f-13302cdc862d
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# RECORD (MASM)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Dichiara un tipo di record costituito dai campi specificati.  *fieldname* denominare il campo, *larghezza* specifica il numero di bit e *espressione* fornisce il valore iniziale.  
  
## Sintassi  
  
```  
  
   recordname RECORD fieldname:width [[= expression]]   
[[, fieldname:width [[= expression]]]]...  
```  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)