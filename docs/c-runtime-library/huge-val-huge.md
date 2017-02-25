---
title: "HUGE_VAL, _HUGE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_HUGE"
apilocation: 
  - "msvcrt.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_HUGE"
  - "HUGE_VAL"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_HUGE (costante)"
  - "HUGE_VAL (costante)"
  - "valore double"
ms.assetid: 3f044b45-02cd-46b2-b1de-87fd0441dd6a
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# HUGE_VAL, _HUGE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
#include <math.h>  
  
```  
  
## Note  
 `HUGE_VAL` è il massimo valore double rappresentabile.  Questo valore viene restituito da numerose funzioni matematiche di runtime quando si verifica un errore.  Per alcune funzioni, viene restituito –`HUGE_VAL`.  `HUGE_VAL` viene definito come `_HUGE`, ma funzioni matematiche di runtime restituiscono `HUGE_VAL`.  Inoltre, utilizzare nel codice `HUGE_VAL`, per coerenza.  
  
## Vedere anche  
 [Costanti globali](../c-runtime-library/global-constants.md)