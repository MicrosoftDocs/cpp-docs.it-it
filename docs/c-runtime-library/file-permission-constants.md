---
title: "Costanti di autorizzazione file | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_S_IWRITE"
  - "_S_IREAD"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_S_IREAD (costante)"
  - "_S_IWRITE (costante)"
  - "costanti [C++], attributi dei file"
  - "autorizzazioni di file [C++]"
  - "S_IREAD (costante)"
  - "S_IWRITE (costante)"
ms.assetid: 593cad33-31d1-44d2-8941-8af7d210c88c
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Costanti di autorizzazione file
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
#include <sys/stat.h>  
  
```  
  
## Note  
 Una di queste costanti è necessaria quando `_O_CREAT` \(`_open`, `_sopen`\) viene specificato.  
  
 L'argomento `pmode` specifica le impostazioni delle autorizzazioni del file come segue.  
  
|Costante|Significato|  
|--------------|-----------------|  
|`_S_IREAD`|Lettura consentita|  
|`_S_IWRITE`|Scrittura consentita|  
|`_S_IREAD`  &#124; `_S_IWRITE`|Lettura e scrittura consentite|  
  
 Una volta utilizzata come argomento di `pmode` per `_umask`, la costante del manifesto imposta l'impostazione di autorizzazione, come illustrato di seguito.  
  
|Costante|Significato|  
|--------------|-----------------|  
|`_S_IREAD`|Scrittura non consentita \(file è di sola lettura\)|  
|`_S_IWRITE`|Lettura non consentita \(file è in sola scrittura\)|  
|`_S_IREAD`  &#124; `_S_IWRITE`|Lettura e scrittura non consentite|  
  
## Vedere anche  
 [\_open, \_wopen](../c-runtime-library/reference/open-wopen.md)   
 [\_sopen, \_wsopen](../c-runtime-library/reference/sopen-wsopen.md)   
 [\_umask](../c-runtime-library/reference/umask.md)   
 [Tipi standard](../c-runtime-library/standard-types.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)