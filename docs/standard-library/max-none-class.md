---
title: "Classe max_none | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "max_none"
  - "stdext::max_none"
  - "stdext.max_none"
  - "allocators/stdext::max_none"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "max_none (classe)"
ms.assetid: 12ab5376-412e-479c-86dc-2c3d6a3559b6
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe max_none
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene descritto un [max classe](../standard-library/allocators-header.md) oggetto che limita un [freelist](../standard-library/freelist-class.md) oggetto a una lunghezza massima pari a zero.  
  
## Sintassi  
  
```  
template <std::size_t Max> class max_none  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Max`|La classe max che determina il numero massimo di elementi da archiviare nel `freelist`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[allocato](../Topic/max_none::allocated.md)|Incrementa il conteggio dei blocchi di memoria allocata.|  
|[DEALLOCATE](../Topic/max_none::deallocated.md)|Decrementa il conteggio di allocati blocchi di memoria.|  
|[completo](../Topic/max_none::full.md)|Restituisce un valore che specifica se più blocchi di memoria devono essere aggiunto all'elenco disponibile.|  
|[rilasciato](../Topic/max_none::released.md)|Decrementa il conteggio di memoria blocchi di memoria.|  
|[salvato](../Topic/max_none::saved.md)|Incrementa il conteggio dei blocchi di memoria all'elenco di disponibilità.|  
  
## Requisiti  
 **Intestazione:** \<allocators\>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [\<allocators\>](../standard-library/allocators-header.md)