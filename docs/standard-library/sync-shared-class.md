---
title: "Classe sync_shared | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "sync_shared"
  - "allocators/stdext::sync_shared"
  - "stdext.sync_shared"
  - "stdext::sync_shared"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sync_shared (classe)"
ms.assetid: cab3af9e-3d1a-4f2c-8580-0f89e5687d8e
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe sync_shared
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un [filtro di sincronizzazione](../standard-library/allocators-header.md) che usa un mutex per controllare l'accesso a un oggetto della cache condiviso da tutti gli allocatori.  
  
## Sintassi  
  
```  
template <class Cache> class sync_shared  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Cache`|Tipo di cache associato al filtro di sincronizzazione. Può essere [cache\_chunklist](../standard-library/cache-chunklist-class.md), [cache\_freelist](../standard-library/cache-freelist-class.md) o [cache\_suballoc](../standard-library/cache-suballoc-class.md).|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[allocate](../Topic/sync_shared::allocate.md)|Alloca un blocco di memoria.|  
|[deallocate](../Topic/sync_shared::deallocate.md)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|  
|[uguale a](../Topic/sync_shared::equals.md)|Confronta due cache per stabilirne l'uguaglianza.|  
  
## Requisiti  
 **Intestazione:** \<allocators\>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [\<allocators\>](../standard-library/allocators-header.md)