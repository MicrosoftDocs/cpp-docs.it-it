---
title: "Costanti fseek, _lseek | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SEEK_END"
  - "SEEK_SET"
  - "SEEK_CUR"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SEEK_CUR (costante)"
  - "SEEK_END (costante)"
  - "SEEK_SET (costante)"
ms.assetid: 9deeb13e-5aa3-4c33-80d8-721c80a4de9d
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Costanti fseek, _lseek
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
#include <stdio.h>  
  
```  
  
## Note  
 L'argomento *origin* specifica la posizione iniziale e può essere una delle costanti del manifest:  
  
|Costante|Significato|  
|--------------|-----------------|  
|`SEEK_END`|Fine del file|  
|`SEEK_CUR`|Posizione corrente del puntatore del file|  
|`SEEK_SET`|Inizio del file|  
  
## Vedere anche  
 [fseek, \_fseeki64](../c-runtime-library/reference/fseek-fseeki64.md)   
 [\_lseek, \_lseeki64](../c-runtime-library/reference/lseek-lseeki64.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)