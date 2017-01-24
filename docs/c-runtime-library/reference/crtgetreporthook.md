---
title: "_CrtGetReportHook | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CrtGetReportHook"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
apitype: "DLLExport"
f1_keywords: 
  - "CrtGetReportHook"
  - "_CrtGetReportHook"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "CrtGetReportHook (funzione)"
  - "_CrtGetReportHook (funzione)"
ms.assetid: 922758ed-7edd-4359-9c92-0535192dc11a
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _CrtGetReportHook
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera la funzione definita dal client di report per l'associazione nel runtime di C per il processo di creazione di report di debug \(solo per versione di debug\).  
  
## Sintassi  
  
```  
_CRT_REPORT_HOOK _CrtGetReportHook( void );  
```  
  
## Valore restituito  
 Restituisce la funzione di segnalazione definita dal client corrente.  
  
## Note  
 `_CrtGetReportHook` consente a un'applicazione di recuperare la funzione di report corrente per il processo di creazione della libreria di debug CRT.  
  
 Per ulteriori informazioni sull'utilizzo di altre funzioni di runtime hook per e la scrittura delle funzioni hook definite dal client, consultare [Scrittura di funzioni hook di debug](../Topic/Debug%20Hook%20Function%20Writing.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_CrtGetReportHook`|\<crtdbg.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Solo versioni di debug di [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
 Per un esempio su come utilizzare `_CrtSetReportHook`, vedere il [report](http://msdn.microsoft.com/it-it/f6e08c30-6bd9-459a-830a-56deec0d2051).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [\_CrtSetReportHook](../../c-runtime-library/reference/crtsetreporthook.md)