---
title: "Costanti campo _stat Structure st_mode | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "S_IFCHR"
  - "S_IFDIR"
  - "_S_IWRITE"
  - "S_IFMT"
  - "_S_IFDIR"
  - "_S_IREAD"
  - "S_IEXEC"
  - "_S_IEXEC"
  - "_S_IFMT"
  - "S_IWRITE"
  - "S_IFREG"
  - "S_IREAD"
  - "_S_IFCHR"
  - "_S_IFREG"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_S_IEXEC (costante)"
  - "_S_IFCHR (costante)"
  - "_S_IFDIR (costante)"
  - "_S_IFMT (costante)"
  - "_S_IFREG (costante)"
  - "_S_IREAD (costante)"
  - "_S_IWRITE (costante)"
  - "S_IEXEC (costante)"
  - "S_IFCHR (costante)"
  - "S_IFDIR (costante)"
  - "S_IFMT (costante)"
  - "S_IFREG (costante)"
  - "S_IREAD (costante)"
  - "S_IWRITE (costante)"
  - "st_mode (costanti di campo)"
  - "struttura stat"
  - "struttura stat, costanti"
ms.assetid: fd462004-7563-4766-8443-30b0a86174b6
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Costanti campo _stat Structure st_mode
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
#include <sys/stat.h>  
  
```  
  
## Note  
 Queste costanti vengono utilizzate per indicare il tipo di file nel campo **st\_mode** della [struttura \_stat](../c-runtime-library/standard-types.md).  
  
 Le costanti maschere di bit sono descritte di seguito:  
  
|Costante|Significato|  
|--------------|-----------------|  
|`_S_IFMT`|Maschera del tipo di file|  
|`_S_IFDIR`|Directory|  
|`_S_IFCHR`|Speciale di carattere \(indica un dispositivo se impostato\)|  
|`_S_IFREG`|Regolare|  
|`_S_IREAD`|Permessi di lettura, proprietario|  
|`_S_IWRITE`|Permessi di scrittura, proprietario|  
|`_S_IEXEC`|Permessi di esecuzione\/ricerca, proprietario|  
  
## Vedere anche  
 [Funzioni \_stat, \_wstat](../c-runtime-library/reference/stat-functions.md)   
 [\_fstat, \_fstat32, \_fstat64, \_fstati64, \_fstat32i64, \_fstat64i32](../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)   
 [Tipi standard](../c-runtime-library/standard-types.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)