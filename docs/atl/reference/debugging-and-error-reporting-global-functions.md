---
title: "Debugging and Error Reporting Global Functions | Microsoft Docs"
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
  - "funzioni [ATL], segnalazione di errori"
ms.assetid: 11339c02-98cd-428d-b3b9-7deeb155a6a3
caps.latest.revision: 17
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Debugging and Error Reporting Global Functions
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Queste funzioni consentono di debug e traccia utile le funzionalità.  
  
|||  
|-|-|  
|[AtlHresultFromLastError](../Topic/AtlHresultFromLastError.md)|Restituisce un codice di errore `GetLastError` sotto forma di HRESULT.|  
|[AtlHresultFromWin32](../Topic/AtlHresultFromWin32.md)|Converte un codice di errore Win32 in un HRESULT.|  
|[AtlReportError](../Topic/AtlReportError.md)|Installazione **IErrorInfo** per fornire dettagli di errore a un client.|  
|[AtlThrow](../Topic/AtlThrow.md)|Genera un'eccezione `CAtlException`.|  
|[AtlThrowLastWin32](../Topic/AtlThrowLastWin32.md)|Chiamare la funzione per segnalare un errore in base al risultato della funzione Windows `GetLastError`.|  
|[AtlTraceLoadSettings](../../misc/atltraceloadsettings.md)|Chiamare la funzione per caricare le impostazioni di traccia da un file.|  
|[AtlTraceSaveSettings](../../misc/atltracesavesettings.md)|Chiamare la funzione per salvare le impostazioni correnti di traccia in un file.|  
  
## Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)   
 [Debugging and Error Reporting Macros](../../atl/reference/debugging-and-error-reporting-macros.md)