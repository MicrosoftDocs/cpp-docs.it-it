---
title: "_FREEENTRY, _USEDENTRY | Microsoft Docs"
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
  - "USEDENTRY"
  - "_USEDENTRY"
  - "_FREEENTRY"
  - "FREEENTRY"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_FREEENTRY (costante)"
  - "_USEDENTRY (costante)"
  - "FREEENTRY (costante)"
  - "USEDENTRY (costante)"
ms.assetid: 26f658e6-6846-4a4e-9984-262cfe392770
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _FREEENTRY, _USEDENTRY
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
#include <malloc.h>  
```  
  
## Note  
 Queste costanti rappresentano i valori assegnati dalle routine `_heapwalk` all'elemento **\_useflag** della struttura **\_HEAPINFO**.  Indicano lo stato della voce dell'heap.  
  
## Vedere anche  
 [\_heapwalk](../c-runtime-library/reference/heapwalk.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)