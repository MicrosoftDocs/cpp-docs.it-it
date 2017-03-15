---
title: "Classe cache_suballoc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "stdext.cache_suballoc"
  - "allocators/stdext::cache_suballoc"
  - "stdext::cache_suballoc"
  - "cache_suballoc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cache_suballoc (classe)"
ms.assetid: 9ea9c5e9-1dcc-45d0-b3a7-a56a93d88898
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 17
---
# Classe cache_suballoc
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce un [blocco allocatore](../standard-library/allocators-header.md) che alloca e dealloca i blocchi di memoria di una singola dimensione.  
  
## Sintassi  
  
```  
template <std::size_t Sz, size_t Nelts = 20> class cache_suballoc  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Sz`|Il numero di elementi nella matrice da allocare.|  
  
## Note  
 La classe di modello cache\_suballoc archivia blocchi di memoria rilasciata in un elenco con lunghezza illimitata, utilizzare `freelist<sizeof(Type), max_unbounded>`, e suballocates blocchi di memoria da un blocco più grande allocato con `operator new` quando l'elenco di disponibilità è vuota.  
  
 Ogni blocco contiene `Sz * Nelts` byte di memoria utilizzabile e i dati che `operator new` e `operator delete` richiedono. Allocato blocchi non vengono liberate.  
  
### Costruttori  
  
|||  
|-|-|  
|[cache\_suballoc](../Topic/cache_suballoc::cache_suballoc.md)|Costruisce un oggetto di tipo `cache_suballoc`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[allocate](../Topic/cache_suballoc::allocate.md)|Alloca un blocco di memoria.|  
|[deallocate](../Topic/cache_suballoc::deallocate.md)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|  
  
## Requisiti  
 **Intestazione:** \<allocators\>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [\<allocators\>](../standard-library/allocators-header.md)