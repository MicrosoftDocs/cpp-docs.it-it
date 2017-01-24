---
title: "Debugging and Error Reporting Macros | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "macro, segnalazione di errori"
ms.assetid: 4da9b87f-ec5c-4a32-ab93-637780909b9d
caps.latest.revision: 18
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Debugging and Error Reporting Macros
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Queste macro forniscono le funzionalità utili di debug e tracciatura.  
  
|||  
|-|-|  
|[\_ATL\_DEBUG\_INTERFACES](../Topic/_ATL_DEBUG_INTERFACES.md)|Scritture, nella finestra di output, tutte le perdite dell'interfaccia rilevate quando `_Module.Term` viene chiamato.|  
|[\_ATL\_DEBUG\_QI](../Topic/_ATL_DEBUG_QI.md)|Scrive tutte le chiamate a `QueryInterface` nella finestra di output.|  
|[ATLASSERT](../Topic/ATLASSERT.md)|Esegue la stessa funzionalità di macro [\_ASSERTE](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) trovata nella libreria di runtime del linguaggio C.|  
|[ATLENSURE](../Topic/ATLENSURE.md)|Esegue la convalida dei parametri.  Chiamata `AtlThrow` se necessario|  
|[ATLTRACENOTIMPL](../Topic/ATLTRACENOTIMPL.md)|Invia un messaggio al dispositivo di dump che la funzione specificata non è implementata.|  
|[ATLTRACE](../Topic/ATLTRACE%20\(ATL\).md)|Segnala gli avvisi in un dispositivo di output, ad esempio la finestra del debugger, come i flag e i livelli visualizzati.  Incluso per compatibilità con le versioni precedenti.|  
|[ATLTRACE2](../Topic/ATLTRACE2.md)|Segnala gli avvisi in un dispositivo di output, ad esempio la finestra del debugger, come i flag e i livelli visualizzati.|  
  
## Vedere anche  
 [Macros](../../atl/reference/atl-macros.md)   
 [Debugging and Error Reporting Global Functions](../../atl/reference/debugging-and-error-reporting-global-functions.md)