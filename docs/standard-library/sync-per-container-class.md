---
title: "Classe sync_per_container | Microsoft Docs"
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
  - "stdext.sync_per_container"
  - "sync_per_container"
  - "stdext::sync_per_container"
  - "allocators/stdext::sync_per_container"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sync_per_container (classe)"
ms.assetid: 0b4b2904-b668-4d94-a422-d4f919cbffab
caps.latest.revision: 21
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe sync_per_container
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene descritto [filtro di sincronizzazione](../standard-library/allocators-header.md) che fornisce un oggetto cache separato per ogni oggetto allocatore.  
  
## Sintassi  
  
```  
template <class Cache> class sync_per_container  
    : public Cache  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Cache`|Il tipo della cache associato al filtro di sincronizzazione.  Questa operazione può essere [cache\_chunklist](../standard-library/cache-chunklist-class.md), [cache\_freelist](../standard-library/cache-freelist-class.md), o [cache\_suballoc](../standard-library/cache-suballoc-class.md).|  
  
### Funzioni del membro  
  
|||  
|-|-|  
|[equals](../Topic/sync_per_container::equals.md)|Confronta due cache per uguaglianza.|  
  
## Requisiti  
 allocatori \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [\<allocators\>](../standard-library/allocators-header.md)