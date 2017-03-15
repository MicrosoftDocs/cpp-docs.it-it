---
title: "Classe max_variable_size | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "stdext::max_variable_size"
  - "allocators/stdext::max_variable_size"
  - "stdext.max_variable_size"
  - "max_variable_size"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "max_variable_size (classe)"
ms.assetid: 9f2e9df0-4148-4b37-bc30-f8eca0ef86ae
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# Classe max_variable_size
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene descritto un [max classe](../standard-library/allocators-header.md) oggetto che limita un [freelist](../standard-library/freelist-class.md) allocare l'oggetto a una lunghezza massima è approssimativamente proporzionale al numero di blocchi di memoria.  
  
## Sintassi  
  
```  
class max_variable_size  
```  
  
### Costruttori  
  
|||  
|-|-|  
|[max\_variable\_size](../Topic/max_variable_size::max_variable_size.md)|Costruisce un oggetto di tipo `max_variable_size`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[allocato](../Topic/max_variable_size::allocated.md)|Incrementa il conteggio dei blocchi di memoria allocata.|  
|[DEALLOCATE](../Topic/max_variable_size::deallocated.md)|Decrementa il conteggio di allocati blocchi di memoria.|  
|[completo](../Topic/max_variable_size::full.md)|Restituisce un valore che specifica se più blocchi di memoria devono essere aggiunto all'elenco disponibile.|  
|[rilasciato](../Topic/max_variable_size::released.md)|Decrementa il conteggio di memoria blocchi di memoria.|  
|[salvato](../Topic/max_variable_size::saved.md)|Incrementa il conteggio dei blocchi di memoria all'elenco di disponibilità.|  
  
## Requisiti  
 **Intestazione:** \<allocators\>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [\<allocators\>](../standard-library/allocators-header.md)