---
title: "Costanti setvbuf | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_IOFBF"
  - "_IONBF"
  - "_IOLBF"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_IOFBF (costante)"
  - "_IOLBF (costante)"
  - "_IONBF (costante)"
  - "IOFBF (costante)"
  - "IOLBF (costante)"
  - "IONBF (costante)"
ms.assetid: a6ec4dd5-1f24-498c-871a-e874cd28d33c
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Costanti setvbuf
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
#include <stdio.h>  
  
```  
  
## Note  
 Queste costanti rappresentano il tipo di buffer per `setvbuf`.  
  
 I valori possibili sono forniti dalle costanti del manifest:  
  
|Costante|Significato|  
|--------------|-----------------|  
|`_IOFBF`|Memorizzazione completa: Il buffer specificato nella chiamata a `setvbuf` viene utilizzato e la dimensione è specificata nella chiamata di `setvbuf`.  Se il puntatore del buffer è **NULL**, viene utilizzato il buffer allocato automaticamente di dimensione specificata.|  
|`_IOLBF`|Uguale a `_IOFBF`.|  
|`_IONBF`|Nessun buffer viene utilizzato, indipendentemente dagli argomenti nella chiamata a `setvbuf`.|  
  
## Vedere anche  
 [setbuf](../c-runtime-library/reference/setbuf.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)