---
title: "Condivisione costanti | Microsoft Docs"
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
  - "_SH_DENYNO"
  - "_SH_DENYRD"
  - "_SH_DENYRW"
  - "_SH_DENYWR"
  - "_SH_COMPAT"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_SH_COMPAT (costante)"
  - "_SH_DENYNO (costante)"
  - "_SH_DENYRD (costante)"
  - "_SH_DENYRW (costante)"
  - "_SH_DENYWR (costante)"
  - "SH_COMPAT (costante)"
  - "SH_DENYNO (costante)"
  - "SH_DENYRD (costante)"
  - "SH_DENYRW (costante)"
  - "SH_DENYWR (costante)"
  - "condivisione costanti"
ms.assetid: 95fadc3a-55dc-473d-98b5-e8211900465d
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Condivisione costanti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Costanti per le modalità di condivisione file.  
  
## Sintassi  
  
```  
  
#include <share.h>  
  
```  
  
## Note  
 L'argomento *shflag* determina la modalità di condivisione, che è costituito da uno o più costanti del manifest.  Questi possono essere combinati con gli argomenti *oflag* \(consultare [Costanti di file](../c-runtime-library/file-constants.md)\).  
  
 Nella tabella seguente sono elencate le costanti e i relativi significati:  
  
|Costante|Significato|  
|--------------|-----------------|  
|`_SH_DENYRW`|Accesso negato in lettura\/scrittura al file.|  
|`_SH_DENYWR`|Nega l'accesso in scrittura a un file|  
|`_SH_DENYRD`|Nega l'accesso in lettura a un file|  
|`_SH_DENYNO`|Consente l'accesso in lettura e scrittura|  
|`_SH_SECURE`|Imposta una modalità sicura \(condivisa accesso in lettura e scrittura esclusiva\).|  
  
## Vedere anche  
 [\_sopen, \_wsopen](../c-runtime-library/reference/sopen-wsopen.md)   
 [\_fsopen, \_wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)