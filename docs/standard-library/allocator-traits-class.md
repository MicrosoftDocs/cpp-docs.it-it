---
title: "Classe allocator_traits | Microsoft Docs"
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
  - "memory/std::allocator_traits"
  - "memory/std::allocator_traits::propagate_on_container_move_assignment"
  - "memory/std::allocator_traits::const_pointer"
  - "memory/std::allocator_traits::propagate_on_container_swap"
  - "memory/std::allocator_traits::propagate_on_container_copy_assignment"
  - "memory/std::allocator_traits::difference_type"
  - "memory/std::allocator_traits::allocator_type"
  - "memory/std::allocator_traits::value_type"
  - "memory/std::allocator_traits::pointer"
  - "memory/std::allocator_traits::size_type"
  - "memory/std::allocator_traits::const_void_pointer"
  - "memory/std::allocator_traits::void_pointer"
dev_langs: 
  - "C++"
ms.assetid: 612974b8-b5d4-4668-82fb-824bff6821d6
caps.latest.revision: 12
caps.handback.revision: 2
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe allocator_traits
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che completa *il tipo di un allocatore*.  Il tipo di un allocatore è qualsiasi tipo che descrive un oggetto allocatore utilizzato per gestire l'archiviazione allocata.  In particolare, per qualsiasi tipo di `Alloc`allocatore, è possibile utilizzare `allocator_traits<Alloc>` per determinare tutte le informazioni necessarie a un contenitore allocatore\- abilitato.  Per ulteriori informazioni, vedere [Classe allocator](../standard-library/allocator-class.md)predefinito.  
  
## Sintassi  
  
```cpp  
template<class Alloc>  
    class allocator_traits;  
```  
  
### Definizioni typedef  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`allocator_traits::allocator_type`|Questo tipo è sinonimo del parametro di template `Alloc`.|  
|`allocator_traits::const_pointer`|Questo tipo è `Alloc::const_pointer`, se il tipo è ben formato; in caso contrario, il tipo è `pointer_traits<pointer>::rebind<const value_type>`.|  
|`allocator_traits::const_void_pointer`|Questo tipo è `Alloc::const_void_pointer`, se il tipo è ben formato; in caso contrario, il tipo è `pointer_traits<pointer>::rebind<const void>`.|  
|`allocator_traits::difference_type`|Questo tipo è `Alloc::difference_type`, se il tipo è ben formato; in caso contrario, il tipo è `pointer_traits<pointer>::difference_type`.|  
|`allocator_traits::pointer`|Questo tipo è `Alloc::pointer`, se il tipo è ben formato; in caso contrario, il tipo è `value_type *`.|  
|`allocator_traits::propagate_on_container_copy_assignment`|Questo tipo è `Alloc::propagate_on_container_copy_assignment`, se il tipo è ben formato; in caso contrario, il tipo è `false_type`.|  
|`allocator_traits::propagate_on_container_move_assignment`|Questo tipo è `Alloc::propagate_on_container_move_assignment`, se il tipo è ben formato; in caso contrario, il tipo è `false_type`.  Se il tipo ha valore true, un contenitore allocatore\- abilitato copia il relativo allocatore archiviato in un'istruzione di assegnazione di spostamento.|  
|`allocator_traits::propagate_on_container_swap`|Questo tipo è `Alloc::propagate_on_container_swap`, se il tipo è ben formato; in caso contrario, il tipo è `false_type`.  Se il tipo ha valore true, un contenitore allocatore\- abilitato scambia il relativo allocatore archiviato in uno scambio.|  
|`allocator_traits::size_type`|Questo tipo è `Alloc::size_type`, se il tipo è ben formato; in caso contrario, il tipo è `make_unsigned<difference_type>::type`.|  
|`allocator_traits::value_type`|Questo tipo è sinonimo di `Alloc::value_type`.|  
|`allocator_traits::void_pointer`|Questo tipo è `Alloc::void_pointer`, se il tipo è ben formato; in caso contrario, il tipo è `pointer_traits<pointer>::rebind<void>`.|  
  
### Metodi statici  
 I seguenti metodi statici chiamare il metodo corrispondente con un parametro specificato di allocatore.  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo allocator\_traits::allocate](../Topic/allocator_traits::allocate%20Method.md)|Metodo statico che alloca memoria utilizzando il parametro specificato di allocatore.|  
|[Metodo allocator\_traits::construct](../Topic/allocator_traits::construct%20Method.md)|Metodo statico contenente un allocatore specificato per costruire un oggetto.|  
|[Metodo allocator\_traits::deallocate](../Topic/allocator_traits::deallocate%20Method.md)|Metodo statico contenente un allocatore specificato per rilasciare un numero specificato di oggetti.|  
|[Metodo allocator\_traits::destroy](../Topic/allocator_traits::destroy%20Method.md)|Metodo statico contenente un allocatore specificato per chiamare il distruttore su un oggetto senza rilasciare la memoria.|  
|[Metodo allocator\_traits::max\_size](../Topic/allocator_traits::max_size%20Method.md)|Metodo statico contenente un allocatore specificato per determinare il numero massimo di oggetti che possono essere allocati.|  
|[Metodo allocator\_traits::select\_on\_container\_copy\_construction](../Topic/allocator_traits::select_on_container_copy_construction%20Method.md)|Metodo statico che chiama `select_on_container_copy_construction` su allocatore specificato.|  
  
## Requisiti  
 **Header:** \<memory\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<memory\>](../standard-library/memory.md)   
 [Struct pointer\_traits](../standard-library/pointer-traits-struct.md)   
 [Classe scoped\_allocator\_adaptor](../standard-library/scoped-allocator-adaptor-class.md)