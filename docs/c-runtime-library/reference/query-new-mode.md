---
title: "_query_new_mode | Microsoft Docs"
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
  - "_query_new_mode"
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
  - "query_new_mode"
  - "_query_new_mode"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_query_new_mode (funzione)"
  - "modalità di gestione"
  - "query_new_mode (funzione)"
ms.assetid: e185c5f9-b73b-4257-8eff-b47648374768
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _query_new_mode
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce un intero che indica la nuova modalità del gestore impostata da `_set_new_mode` per `malloc`.  
  
## Sintassi  
  
```  
  
      int _query_new_mode(  
   void   
);  
```  
  
## Valore restituito  
 Restituisce la nuova modalità corrente del gestore, 0 o 1, per `malloc`.  Un valore restituito 1 indica che, in caso di errore per allocare memoria, `malloc` chiama la nuova routine di gestione; un valore restituito 0 indica che non lo chiama.  
  
## Note  
 La funzione C\+\+ `_query_new_mode` restituisce un numero intero che indica la nuova modalità del gestore che viene impostata tramite la funzione C\+\+ [\_set\_new\_mode](../../c-runtime-library/reference/set-new-mode.md) per [malloc](../../c-runtime-library/reference/malloc.md).  La nuova modalità del gestore indica se, in caso di errore nell'allocazione di memoria, `malloc` deve richiamare la nuova routine del gestore come imposto da [\_set\_new\_handler](../../c-runtime-library/reference/set-new-handler.md).  Per impostazione predefinita, `malloc` non richiama la nuova routine di gestione in caso di errore.  È possibile usare `_set_new_mode` per eseguire l'ovverride di questo comportamento così che in caso di errore `malloc` chiami la nuova routine del gestore allo stesso modo di come avviene con l'operatore **new** quando si verifica l'errore di allocazione di memoria.  Per ulteriori informazioni, vedere le funzioni [operator delete](../../misc/operator-new-function.md) e [operator delete](../../misc/operator-delete-function.md) in *C\+\+ Language Reference*.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_query_new_mode`|\<new.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [free](../../c-runtime-library/reference/free.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)   
 [\_query\_new\_handler](../../c-runtime-library/reference/query-new-handler.md)