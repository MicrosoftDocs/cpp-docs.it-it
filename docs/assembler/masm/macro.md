---
title: "MACRO | Microsoft Docs"
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
  - "MACRO"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MACRO directive"
ms.assetid: 89434f7c-bc2c-4e91-8940-fe2db8785233
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# MACRO
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Contrassegna una macro blocco denominato *nome* e stabilisce *parametro* segnaposto per gli argomenti passati quando la macro viene chiamata.  
  
## Sintassi  
  
```  
  
   name MACRO [[parameter [[:REQ | :=default | :VARARG]]]]...  
statements  
ENDM [[value]]  
```  
  
## Note  
 Restituisce macro di una funzione *valore* all'istruzione chiamante.  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)