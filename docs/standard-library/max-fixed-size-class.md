---
title: "Classe max_fixed_size | Microsoft Docs"
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
  - "allocators/stdext::max_fixed_size"
  - "max_fixed_size"
  - "stdext::max_fixed_size"
  - "stdext.max_fixed_size"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "max_fixed_size (classe)"
ms.assetid: 8c8f4588-37e9-4579-8168-ba3553800914
caps.latest.revision: 18
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe max_fixed_size
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Vengono descritti un oggetto t [classe massima](../standard-library/allocators-header.md) che limiti un oggetto di [freelist](../standard-library/freelist-class.md) a una lunghezza massima fissa.  
  
## Sintassi  
  
```  
template <std::size_t Max> class max_fixed_size  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Max`|La classe massima che determina il numero massimo di elementi da archiviare in `freelist`.|  
  
### Costruttori  
  
|||  
|-|-|  
|[max\_fixed\_size](../Topic/max_fixed_size::max_fixed_size.md)|Crea un oggetto di tipo `max_fixed_size`.|  
  
### Funzioni del membro  
  
|||  
|-|-|  
|[allocato](../Topic/max_fixed_size::allocated.md)|Incrementa il conteggio dei blocchi di memoria allocati.|  
|[eliminato](../Topic/max_fixed_size::deallocated.md)|Decrementa il conteggio dei blocchi di memoria allocati.|  
|[full](../Topic/max_fixed_size::full.md)|Restituisce un valore che specifica se più blocchi di memoria devono essere aggiunte a free list.|  
|[eliminato](../Topic/max_fixed_size::released.md)|Decrementa il conteggio dei blocchi di memoria su free list.|  
|[salvato](../Topic/max_fixed_size::saved.md)|Incrementa il conteggio dei blocchi di memoria su free list.|  
  
## Requisiti  
 allocatori \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [\<allocators\>](../standard-library/allocators-header.md)