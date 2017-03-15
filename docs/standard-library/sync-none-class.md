---
title: "Classe sync_none | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "stdext.sync_none"
  - "sync_none"
  - "allocators/stdext::sync_none"
  - "stdext::sync_none"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sync_none (classe)"
ms.assetid: f7473cee-14f3-4fe1-88bc-68cd085e59e1
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 21
---
# Classe sync_none
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene descritto [filtro di sincronizzazione](../standard-library/allocators-header.md) non fornisce sincronizzazione.  
  
## Sintassi  
  
```  
template <class Cache> class sync_none  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Cache`|Il tipo della cache associato al filtro di sincronizzazione.  Questa operazione può essere [cache\_chunklist](../standard-library/cache-chunklist-class.md), [cache\_freelist](../standard-library/cache-freelist-class.md), o [cache\_suballoc](../standard-library/cache-suballoc-class.md).|  
  
### Funzioni del membro  
  
|||  
|-|-|  
|[allocare](../Topic/sync_none::allocate.md)|Alloca un blocco di memoria.|  
|[rilasciare](../Topic/sync_none::deallocate.md)|Libera un numero specificato di oggetti dall'inizio di archiviazione a una posizione specificata.|  
|[equals](../Topic/sync_none::equals.md)|Confronta due cache per uguaglianza.|  
  
## Requisiti  
 allocatori \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [\<allocators\>](../standard-library/allocators-header.md)