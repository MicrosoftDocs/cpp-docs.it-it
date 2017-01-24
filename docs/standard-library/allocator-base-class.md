---
title: "Classe allocator_base | Microsoft Docs"
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
  - "allocators.allocator_base"
  - "stdext.allocators.allocator_base"
  - "allocator_base"
  - "allocators/stdext::allocator_base"
  - "stdext::allocator_base"
  - "stdext::allocators::allocator_base"
  - "allocators/stdext::allocators::allocator_base"
  - "allocators::allocator_base"
  - "stdext.allocator_base"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "allocator_base (classe)"
ms.assetid: f920b45f-2a88-4bb0-8ead-b6126b426ed4
caps.latest.revision: 17
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe allocator_base
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce la classe base e le funzioni comuni necessari per creare un allocatore definito dall'utente da un filtro di sincronizzazione.  
  
## Sintassi  
  
```  
template <class Type, class Sync> class allocator_base  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Type`|Tipo degli elementi assegnato dall'allocatore.|  
|`Sync`|I criteri di sincronizzazione per l'allocatore, ossia [Classe sync\_none](../standard-library/sync-none-class.md), [Classe sync\_per\_container](../standard-library/sync-per-container-class.md), [Classe sync\_per\_thread](../standard-library/sync-per-thread-class.md) o [Classe sync\_shared](../standard-library/sync-shared-class.md).|  
  
### Costruttori  
  
|||  
|-|-|  
|[allocator\_base](../Topic/allocator_base::allocator_base.md)|Costruisce un oggetto di tipo `allocator_base`.|  
  
### Typedef  
  
|||  
|-|-|  
|[const\_pointer](../Topic/allocator_base::const_pointer.md)|Tipo che fornisce un puntatore costante al tipo di oggetto gestito dall'allocatore.|  
|[const\_reference](../Topic/allocator_base::const_reference.md)|Tipo che fornisce un riferimento costante al tipo di oggetto gestito dall'allocatore.|  
|[difference\_type](../Topic/allocator_base::difference_type.md)|Tipo integrale con segno che può rappresentare la differenza tra valori di puntatori al tipo di oggetto gestito dall'allocatore.|  
|[puntatore](../Topic/allocator_base::pointer.md)|Tipo che fornisce un puntatore al tipo di oggetto gestito dall'allocatore.|  
|[riferimento](../Topic/allocator_base::reference.md)|Tipo che fornisce un riferimento al tipo di oggetto gestito dall'allocatore.|  
|[size\_type](../Topic/allocator_base::size_type.md)|Un tipo integrale senza segno che può rappresentare la lunghezza di qualsiasi sequenza che un oggetto della classe modello `allocator_base` può allocare.|  
|[value\_type](../Topic/allocator_base::value_type.md)|Tipo gestito dall'allocatore.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[\_Charalloc](../Topic/allocator_base::_Charalloc.md)|Alloca lo spazio di archiviazione per una matrice di tipo `char`.|  
|[\_Chardealloc](../Topic/allocator_base::_Chardealloc.md)|Libera lo spazio di archiviazione per la matrice contenente gli elementi di tipo `char`.|  
|[indirizzo](../Topic/allocator_base::address.md)|Trova l'indirizzo di un oggetto il cui valore è specificato.|  
|[allocate](../Topic/allocator_base::allocate.md)|Alloca un blocco di memoria sufficiente a contenere almeno un numero specificato di elementi.|  
|[construct](../Topic/allocator_base::construct.md)|Costruisce un tipo specifico di oggetto su un indirizzo specificato che viene inizializzato con un valore specificato.|  
|[deallocate](../Topic/allocator_base::deallocate.md)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|  
|[elimina](../Topic/allocator_base::destroy.md)|Chiama un distruttore di oggetti senza deallocare la memoria in cui è stato archiviato l'oggetto.|  
|[max\_size](../Topic/allocator_base::max_size.md)|Restituisce il numero di elementi di tipo `Type` che potrebbe essere assegnata da un oggetto dell'allocatore della classe prima che la memoria libera si esaurisca.|  
  
## Requisiti  
 **Intestazione:** \<allocators\>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [\<allocators\>](../standard-library/allocators-header.md)