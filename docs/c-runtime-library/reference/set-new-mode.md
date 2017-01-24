---
title: "_set_new_mode | Microsoft Docs"
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
  - "_set_new_mode"
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
  - "set_new_mode"
  - "_set_new_mode"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_set_new_mode (funzione)"
  - "modalità di gestione"
  - "set_new_mode (funzione)"
ms.assetid: 4d14039a-e54e-4689-8c70-74a4b9834768
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _set_new_mode
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta una nuova modalità di gestione per `malloc`.  
  
## Sintassi  
  
```  
int _set_new_mode(  
   int newhandlermode   
);  
```  
  
#### Parametri  
 `newhandlermode`  
 Nuova modalità di gestione per `malloc`; il valore valido è 0 o 1.  
  
## Valore restituito  
 Restituisce la modalità precedente del gestore impostata per `malloc`.  Un valore restituito 1 indica che, in caso di errore per allocare memoria, `malloc` ha chiamato precedentemente la nuova routine di gestione; un valore restituito 0 indica che non lo chiama.  Se l'argomento `newhandlermode` non equivale a 0 o 1, restituisce \-1.  
  
## Note  
 La funzione C\+\+ `_set_new_mode` imposta la nuova modalità di gestione per [malloc](../../c-runtime-library/reference/malloc.md).  La nuova modalità del gestore indica se, in caso di errore, `malloc` deve richiamare la nuova routine del gestore come imposto da [\_set\_new\_handler](../../c-runtime-library/reference/set-new-handler.md).  Per impostazione predefinita, `malloc` non richiama la nuova routine di gestione in caso di errore nell'allocare memoria.  È possibile eseguire l'override di questo comportamento predefinito affinché, quando `malloc` non riesce ad allocare memoria, `malloc` chiami la nuova routine del gestore allo stesso modo di come avviene con l'operatore `new` quando si verifica il medesimo errore.  Per ulteriori informazioni, vedere gli operatori [nuovo](../../cpp/new-operator-cpp.md) e [elimina](../../cpp/delete-operator-cpp.md) in *Riferimenti al linguaggio C\+\+*.  Per eseguire l'override del comportamento predefinito, chiamare:  
  
```  
_set_new_mode(1)  
```  
  
 all'inizio del programma o collegare con Newmode.obj \(vedere [Opzioni collegamento](../../c-runtime-library/link-options.md)\).  
  
 Questa funzione convalida il parametro.  Se `newhandlermode` è un valore diverso da 0 o 1, la funzione richiama il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, **\_**`set_new_mode` ritorna \-1 ed imposta `errno` a `EINVAL`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_set_new_mode`|\<new.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [free](../../c-runtime-library/reference/free.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)   
 [\_query\_new\_handler](../../c-runtime-library/reference/query-new-handler.md)   
 [\_query\_new\_mode](../../c-runtime-library/reference/query-new-mode.md)