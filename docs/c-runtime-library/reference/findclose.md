---
title: "_findclose | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_findclose"
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
  - "api-ms-win-crt-filesystem-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_findclose"
  - "findclose"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_findclose (funzione)"
  - "findclose (funzione)"
ms.assetid: 9216c573-0878-444c-b5d7-cdaf16fb9163
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# _findclose
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiude il punto di controllo della ricerca specificato e rilascia le risorse collegate.  
  
## Sintassi  
  
```  
int _findclose(   
   intptr_t handle   
);  
```  
  
#### Parametri  
 `handle`  
 Individuare il punto di controllo restituito da una chiamata precedente a `_findfirst`.  
  
## Valore restituito  
 In caso di successo, `_findclose` restituisce 0.  In caso contrario, restituisce \-1 ed imposta `errno` a `ENOENT`, ad indicare che possono essere trovati ulteriori file corrispondenti.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_findclose`|\<io.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Chiamate di sistema](../../c-runtime-library/system-calls.md)   
 [Funzioni di ricerca dei nomi file](../../c-runtime-library/filename-search-functions.md)