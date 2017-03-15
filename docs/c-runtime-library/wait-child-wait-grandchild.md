---
title: "_WAIT_CHILD, _WAIT_GRANDCHILD | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_WAIT_GRANDCHILD"
  - "WAIT_CHILD"
  - "WAIT_GRANDCHILD"
  - "_WAIT_CHILD"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_WAIT_CHILD (costante)"
  - "_WAIT_GRANDCHILD (costante)"
  - "WAIT_CHILD (costante)"
  - "WAIT_GRANDCHILD (costante)"
ms.assetid: 7acd96fa-d118-4339-bb00-e5afaf286945
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# _WAIT_CHILD, _WAIT_GRANDCHILD
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
#include <process.h>  
  
```  
  
## Note  
 La funzione `_cwait` può essere utilizzata da qualsiasi processo per attendere qualsiasi altro processo \(se l'id del processo è noto\).  L'argomento dell'azione può essere uno dei seguenti valori:  
  
|Costante|Significato|  
|--------------|-----------------|  
|`_WAIT_CHILD`|Il processo chiamante attende fino a quando il nuovo processo specificato termina.|  
|`_WAIT_GRANDCHILD`|Il processo chiamante attende fino a quando il nuovo processo specificato e tutti gli altri processi creati da tale nuovo processo terminano.|  
  
## Vedere anche  
 [\_cwait](../c-runtime-library/reference/cwait.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)