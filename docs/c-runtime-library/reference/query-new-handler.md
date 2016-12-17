---
title: "_query_new_handler | Microsoft Docs"
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
  - "_query_new_handler"
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
  - "api-ms-win-crt-heap-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_query_new_handler"
  - "query_new_handler"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_query_new_handler (funzione)"
  - "gestione errori"
  - "routine del gestore"
  - "query_new_handler (funzione)"
ms.assetid: 9a84b5c3-fe33-4c01-83a0-be87dc3ec518
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _query_new_handler
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce l'indirizzo della nuova routine corrente del gestore.  
  
## Sintassi  
  
```  
  
      _PNH _query_new_handler(  
   void   
);  
```  
  
## Valore restituito  
 Restituisce l'indirizzo della nuova routine corrente del gestore impostato da `_set_new_handler`.  
  
## Note  
 La funzione C\+\+ `_query_new_handler` restituisce l'indirizzo dell'insieme corrente della funzione di gestione delle eccezioni impostata dalla funzione C\+\+ [\_set\_new\_handler](../../c-runtime-library/reference/set-new-handler.md).  `_set_new_handler` viene utilizzato per specificare una funzione di gestione delle eccezioni che è di un ulteriore controllo se l'operatore **new** non riesce ad allocare memoria.  Per ulteriori informazioni, consultare le discussioni delle funzioni di [operatore new](../../misc/operator-new-function.md) e [operatore delete](../../misc/operator-delete-function.md) in *C\+\+ Language Reference*.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_query_new_handler`|\<new.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [free](../../c-runtime-library/reference/free.md)