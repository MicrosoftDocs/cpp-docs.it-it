---
title: "Classe sync_per_thread | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "stdext::sync_per_thread"
  - "sync_per_thread"
  - "allocators/stdext::sync_per_thread"
  - "stdext.sync_per_thread"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sync_per_thread (classe)"
ms.assetid: 47bf75f8-5b02-4760-b1d3-3099d08fe14c
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe sync_per_thread
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene descritto [filtro di sincronizzazione](../standard-library/allocators-header.md) che fornisce un oggetto cache separata per ogni thread.  
  
## Sintassi  
  
```  
template <class Cache> class sync_per_thread  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Cache`|Il tipo della cache associato al filtro di sincronizzazione.  Questa operazione può essere [cache\_chunklist](../standard-library/cache-chunklist-class.md), [cache\_freelist](../standard-library/cache-freelist-class.md), o [cache\_suballoc](../standard-library/cache-suballoc-class.md).|  
  
## Note  
 Gli allocatori che utilizzano `sync_per_thread` possibile confrontare il partizionamento anche se i blocchi allocati in un thread non possono essere rilasciati da un altro thread.  Quando utilizzare uno di questi blocchi di memoria allocati di allocatori in un thread non deve essere reso visibile agli altri thread.  In pratica questo significa che un contenitore che utilizza uno di questi allocatori deve essere eseguito solo da un singolo thread.  
  
### Funzioni del membro  
  
|||  
|-|-|  
|[allocare](../Topic/sync_per_thread::allocate.md)|Alloca un blocco di memoria.|  
|[rilasciare](../Topic/sync_per_thread::deallocate.md)|Libera un numero specificato di oggetti dall'inizio di archiviazione a una posizione specificata.|  
|[equals](../Topic/sync_per_thread::equals.md)|Confronta due cache per uguaglianza.|  
  
## Requisiti  
 allocatori \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [\<allocators\>](../standard-library/allocators-header.md)