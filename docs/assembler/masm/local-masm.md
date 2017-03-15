---
title: "LOCAL (MASM) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "Local"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LOCAL directive"
ms.assetid: 76147e2d-23ca-4f1e-8817-81428becd113
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# LOCAL (MASM)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nella prima direttiva, all'interno di una macro, **LOCALE** definisce le etichette che sono univoci a ogni istanza della macro.  
  
## Sintassi  
  
```  
  
      LOCAL localname [[, localname]]...  
LOCAL label [[ [count ] ]] [[:type]] [[, label [[ [count] ]] [[type]]]]...  
```  
  
## Note  
 Nella seconda direttiva, all'interno di una definizione della routine \(**PROC**\),  **LOCALE** crea le variabili basate su stack esistenti per la durata della routine.  *etichetta* può essere una variabile semplice o contenere di matrice *conteggio* elementi.  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)