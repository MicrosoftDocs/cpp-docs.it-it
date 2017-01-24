---
title: "_CRT_DISABLE_PERFCRIT_LOCKS | Microsoft Docs"
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
  - "_CRT_DISABLE_PERFCRIT_LOCKS"
  - "CRT_DISABLE_PERFCRIT_LOCKS"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_CRT_DISABLE_PERFCRIT_LOCKS (costante)"
  - "CRT_DISABLE_PERFCRIT_LOCKS (costante)"
ms.assetid: 36cc2d86-cdb1-4b2b-a03c-c0d3818e7c6f
caps.latest.revision: 4
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _CRT_DISABLE_PERFCRIT_LOCKS
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Disabilita il blocco per particolari requisiti di prestazioni nelle operazioni di I\/O.  
  
## Sintassi  
  
```  
#define _CRT_DISABLE_PERFCRIT_LOCKS  
```  
  
## Note  
 La definizione di questo simbolo può migliorare le prestazioni dei programmi a thread singola che presentano vincoli di I\/O forzando tutte le operazioni I\/O ad assumere un modello I\/O a thread singolo.  Per ulteriori informazioni, vedere [Prestazioni librerie multithread](../c-runtime-library/multithreaded-libraries-performance.md).  
  
## Vedere anche  
 [Costanti globali](../c-runtime-library/global-constants.md)