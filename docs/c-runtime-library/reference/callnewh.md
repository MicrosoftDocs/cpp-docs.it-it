---
title: "_callnewh | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_callnewh"
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
  - "_callnewh"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_callnewh"
ms.assetid: 4dcb73e9-6384-4d12-a973-a8807d4de7a8
caps.latest.revision: 3
caps.handback.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _callnewh
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiama il *nuovo gestore* attualmente installato.  
  
## Sintassi  
  
```cpp  
int _callnewh(  
   size_t size  
   )  
  
```  
  
#### Parametri  
 `size`  
 La quantità di memoria che il [nuovo operatore](../../cpp/new-operator-cpp.md) tenta di allocare.  
  
## Valore restituito  
  
|Valore|Descrizione|  
|------------|-----------------|  
|0|Errore: O non è installato alcun nuovo gestore o nessun gestore è attivo.|  
|1|Completato: Il nuovo gestore è stato installato e attivato.  Si può ritentare di allocare la memoria.|  
  
## Eccezioni  
 Questa funzione genera [bad\_alloc](../../standard-library/bad-alloc-class.md) se il *nuovo gestore* non può essere individuato.  
  
## Note  
 Il *nuovo gestore* viene chiamato se il [nuovo operatore](../../cpp/new-operator-cpp.md) non alloca la memoria con successo.  Il nuovo gestore può quindi iniziare un'azione appropriata, ad esempio liberare la memoria in modo che le allocazioni successive abbiano successo.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|\_callnewh|internal.h|  
  
## Vedere anche  
 [\_set\_new\_handler](../../c-runtime-library/reference/set-new-handler.md)   
 [\_set\_new\_mode](../../c-runtime-library/reference/set-new-mode.md)