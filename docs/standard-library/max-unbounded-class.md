---
title: "Classe max_unbounded | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "allocators/stdext::max_unbounded"
  - "stdext::max_unbounded"
  - "stdext.max_unbounded"
  - "max_unbounded"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "max_unbounded (classe)"
ms.assetid: e34627a9-c231-4031-a483-cbb0514fff46
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# Classe max_unbounded
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene descritto un [max classe](../standard-library/allocators-header.md) oggetto che non limita la lunghezza massima di un [freelist](../standard-library/freelist-class.md) oggetto.  
  
## Sintassi  
  
```  
class max_unbounded  
```  
  
### Funzioni membro  
  
|||  
|-|-|  
|[allocato](../Topic/max_unbounded::allocated.md)|Incrementa il conteggio dei blocchi di memoria allocata.|  
|[DEALLOCATE](../Topic/max_unbounded::deallocated.md)|Decrementa il conteggio di allocati blocchi di memoria.|  
|[completo](../Topic/max_unbounded::full.md)|Restituisce un valore che specifica se più blocchi di memoria devono essere aggiunto all'elenco disponibile.|  
|[rilasciato](../Topic/max_unbounded::released.md)|Decrementa il conteggio di memoria blocchi di memoria.|  
|[salvato](../Topic/max_unbounded::saved.md)|Incrementa il conteggio dei blocchi di memoria all'elenco di disponibilità.|  
  
## Requisiti  
 **Intestazione:** \<allocators\>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [\<allocators\>](../standard-library/allocators-header.md)