---
title: "Costanti spawn | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_P_NOWAIT"
  - "_P_OVERLAY"
  - "_P_WAIT"
  - "_P_DETACH"
  - "_P_NOWAITO"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_P_DETACH (costante)"
  - "_P_NOWAIT (costante)"
  - "_P_NOWAITO (costante)"
  - "_P_OVERLAY (costante)"
  - "_P_WAIT (costante)"
  - "P_DETACH (costante)"
  - "P_NOWAIT (costante)"
  - "P_NOWAITO (costante)"
  - "P_OVERLAY (costante)"
  - "P_WAIT (costante)"
  - "spawn (costanti)"
ms.assetid: e0533e88-d362-46fc-b53c-5f193226d879
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Costanti spawn
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
#include <process.h>  
```  
  
## Note  
 L'argomento `mode` determina le azioni intraprese dal processo chiamante prima e durante un'operazione di spawn.  I valori possibili per `mode` sono i seguenti:  
  
|Costante|Significato|  
|--------------|-----------------|  
|`_P_OVERLAY`|Sovrappone un processo di chiamata con un nuovo processo, distruggendo il processo chiamante \(lo stesso effetto delle chiamate di `_exec` \).|  
|`_P_WAIT`|Sospende un thread chiamante finché l'esecuzione del nuovo processo non è completo \(`_spawn` sincrono\).|  
|`_P_NOWAIT`, `_P_NOWAITO`|Continua ad eseguire un processo chiamante contemporaneamente al nuovo processo \(`_spawn` asincrono\).|  
|`_P_DETACH`|Continua l'esecuzione del processo chiamante; il nuovo processo viene eseguito in background senza accesso alla console o alla tastiera.  Le chiamate a `_cwait` contro al nuovo processo avrà esito negativo.  Questo è un `_spawn` asincrono.|  
  
## Vedere anche  
 [Funzioni \_spawn, \_wspawn](../c-runtime-library/spawn-wspawn-functions.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)