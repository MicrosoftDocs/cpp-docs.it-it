---
title: "Classe freelist | Microsoft Docs"
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
  - "stdext::freelist"
  - "freelist"
  - "stdext.freelist"
  - "allocators/stdext::freelist"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "freelist (classe)"
ms.assetid: 8ad7e35c-4c80-4479-8ede-1a2497b06d71
caps.latest.revision: 17
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe freelist
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gestisce un elenco dei blocchi di memoria.  
  
## Sintassi  
  
```  
template <std::size_t Sz, class Max> class freelist  
    : public Max  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Sz`|Il numero di elementi nella matrice da allocare.|  
|`Max`|La classe massima che rappresenta il numero massimo di elementi da memorizzare in free list.  La classe massima può essere [max\_none](../standard-library/max-none-class.md), [max\_unbounded](../standard-library/max-unbounded-class.md), [max\_fixed\_size](../standard-library/max-fixed-size-class.md), o [max\_variable\_size](../standard-library/max-variable-size-class.md).|  
  
## Note  
 Questa classe modello gestisce un elenco dei blocchi di memoria di dimensione `Sz` con lunghezza massima dell'elenco determinato dalla classe massima passata in `Max`.  
  
### Costruttori  
  
|||  
|-|-|  
|[freelist](../Topic/freelist::freelist.md)|Crea un oggetto di tipo `freelist`.|  
  
### Funzioni del membro  
  
|||  
|-|-|  
|[pop](../Topic/freelist::pop.md)|Rimuove il primo blocco di memoria da free list.|  
|[push](../Topic/freelist::push.md)|Aggiunge un blocco di memoria all'elenco.|  
  
## Requisiti  
 allocatori \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [\<allocators\>](../standard-library/allocators-header.md)