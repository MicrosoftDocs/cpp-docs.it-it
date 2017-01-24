---
title: "Classe cache_freelist | Microsoft Docs"
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
  - "stdext.cache_freelist"
  - "allocators/stdext::cache_freelist"
  - "stdext::cache_freelist"
  - "cache_freelist"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cache_freelist (classe)"
ms.assetid: 840694de-36ba-470f-8dae-2b723d5a8cd9
caps.latest.revision: 19
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe cache_freelist
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce un [blocco allocatore](../standard-library/allocators-header.md) che alloca e dealloca i blocchi di memoria di una singola dimensione.  
  
## Sintassi  
  
```  
template <std::size_t Sz, class Max> class cache_freelist  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Sz`|Il numero di elementi nella matrice da allocare.|  
|`Max`|La classe max che rappresenta la dimensione massima dell'elenco di disponibilità. Può trattarsi di [max\_fixed\_size](../standard-library/max-fixed-size-class.md), [max\_none](../standard-library/max-none-class.md), [max\_unbounded](../standard-library/max-unbounded-class.md), o [max\_variable\_size](../standard-library/max-variable-size-class.md).|  
  
## Note  
 La classe di modello cache\_freelist gestisce un elenco di blocchi di memoria di dimensioni `Sz`. Quando l'elenco di disponibilità è pieno utilizza `operator delete` per deallocare la memoria si blocca. Quando l'elenco di disponibilità è vuoto viene `operator new` per allocare nuovi blocchi di memoria. La dimensione massima dell'elenco di disponibilità è determinata dalla classe classe max passato il `Max` parametro.  
  
 Ogni blocco di memoria contiene `Sz` byte di memoria utilizzabile e i dati che `operator new` e `operator delete` richiedono.  
  
### Costruttori  
  
|||  
|-|-|  
|[cache\_freelist](../Topic/cache_freelist::cache_freelist.md)|Costruisce un oggetto di tipo `cache_freelist`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[allocate](../Topic/cache_freelist::allocate.md)|Alloca un blocco di memoria.|  
|[deallocate](../Topic/cache_freelist::deallocate.md)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|  
  
## Requisiti  
 **Intestazione:** \<allocators\>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [\<allocators\>](../standard-library/allocators-header.md)