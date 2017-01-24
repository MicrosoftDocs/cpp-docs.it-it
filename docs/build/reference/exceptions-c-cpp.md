---
title: "Eccezioni (C/C++) | Microsoft Docs"
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
  - "ERROR_MOD_NOT_FOUND"
  - "vcppException"
  - "ERROR_SEVERITY_ERROR"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestione delle eccezioni di C++, caricamento ritardato di DLL"
  - "caricamento ritardato di DLL, eccezioni"
  - "ERROR_MOD_NOT_FOUND (eccezione)"
  - "ERROR_SEVERITY_ERROR (eccezione)"
  - "vcppException"
ms.assetid: c03be05d-1c39-4f35-84cf-00c9af3bae9a
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Eccezioni (C/C++)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando vengono rilevati errori possono essere generati due codici di eccezione:  
  
-   Per un errore relativo a **LoadLibrary**  
  
-   Per un errore relativo a **GetProcAddress**  
  
 Le informazioni relative all'eccezione saranno:  
  
```  
//  
// Exception information  
//  
#define FACILITY_VISUALCPP  ((LONG)0x6d)  
#define VcppException(sev,err)  ((sev) | (FACILITY_VISUALCPP<<16) | err)  
```  
  
 I codici di eccezione generati sono i valori standard di VcppException\(ERROR\_SEVERITY\_ERROR, ERROR\_MOD\_NOT\_FOUND\) e VcppException\(ERROR\_SEVERITY\_ERROR, ERROR\_PROC\_NOT\_FOUND\).  L'eccezione consente di passare un puntatore a una struttura **DelayLoadInfo** nel valore LPDWORD che può essere recuperato da **GetExceptionInformation** nella struttura [EXCEPTION\_RECORD](http://msdn.microsoft.com/library/windows/desktop/aa363082), campo ExceptionInformation\[0\].  
  
 Inoltre, se nel campo grAttrs sono impostati bit non corretti, viene generata l'eccezione ERROR\_INVALID\_PARAMETER.  Questa eccezione risulta irreversibile per qualsiasi scopo.  
  
 Per ulteriori informazioni, vedere [Struttura e definizioni di costanti](../../build/reference/structure-and-constant-definitions.md).  
  
## Vedere anche  
 [Gestione e notifica degli errori](../../build/reference/error-handling-and-notification.md)