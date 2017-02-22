---
title: "Classe scoped_allocator_adaptor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.scoped_allocator_adaptor"
  - "scoped_allocator_adaptor"
  - "scoped_allocator/std::scoped_allocator_adaptor"
  - "std::scoped_allocator_adaptor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Classe scoped_allocator_adaptor"
ms.assetid: 0d9b06a1-9a4a-4669-9470-8805cae48e89
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Classe scoped_allocator_adaptor
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta un annidamento di allocatori.  
  
## Sintassi  
  
```cpp  
template<class Outer, class... Inner>  
    class scoped_allocator_adaptor;  
```  
  
## Note  
 La classe modello include un annidamento di uno o più allocatori.  Ciascuna classe dispone di un allocatore più esterno di tipo `outer_allocator_type`, un sinonimo di `Outer`, una base pubblica dell'oggetto di `scoped_allocator_adaptor`.  `Outer` viene utilizzato per allocare memoria da utilizzare da un contenitore.  È possibile ottenere un riferimento a questo oggetto di base di un allocatore chiamando `outer_allocator`.  
  
 Il resto dell'annidamento di tipo `inner_allocator_type`.  Un allocatore interno viene utilizzato per allocare memoria per gli elementi all'interno di un contenitore.  È possibile ottenere un riferimento all'oggetto archiviato di questo tipo chiamando `inner_allocator`.  Se `Inner...` non è vuoto, `inner_allocator_type` è di tipo `scoped_allocator_adaptor<Inner...>` e `inner_allocator` definisce un oggetto membro.  In caso contrario, `inner_allocator_type` è di tipo `scoped_allocator_adaptor<Outer>` e `inner_allocator` definisce l'intero oggetto.  
  
 L'annidamento si comporta come se si profondità arbitraria, ripiegando il relativo allocatore incapsulato più interno in base alle necessità.  
  
 Numerosi concetti che non fanno parte dell'assistente visibile dell'interfaccia nella descrizione del comportamento di questa classe modello.  *Un allocatore più esterno* media tutte le chiamate al costrutto ed elimina i metodi.  Viene efficacemente definito dalla funzione ricorsiva `OUTERMOST(X)`, dove `OUTERMOST(X)` è uno dei seguenti valori.  
  
-   Se `X.outer_allocator()` è ben formato, quindi `OUTERMOST(X)` è `OUTERMOST(X.outer_allocator())`.  
  
-   In caso contrario, `OUTERMOST(X)` sarà `X`.  
  
 Tre tipi vengono definiti per l'esposizione:  
  
|Type|Descrizione|  
|----------|-----------------|  
|`Outermost`|Tipo di `OUTERMOST(*this)`.|  
|`Outermost_traits`|`allocator_traits<Outermost>`|  
|`Outer_traits`|`allocator_traits<Outer>`|  
  
### Costruttori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore scoped\_allocator\_adaptor::scoped\_allocator\_adaptor](../Topic/scoped_allocator_adaptor::scoped_allocator_adaptor%20Constructor.md)|Costruisce un oggetto `scoped_allocator_adaptor`.|  
  
### Definizioni typedef  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`const_pointer`|Questo tipo è sinonimo di `const_pointer` associato all'allocatore `Outer`.|  
|`const_void_pointer`|Questo tipo è sinonimo di `const_void_pointer` associato all'allocatore `Outer`.|  
|`difference_type`|Questo tipo è sinonimo di `difference_type` associato all'allocatore `Outer`.|  
|`inner_allocator_type`|Questo tipo è sinonimo del tipo dell'adattatore annidato `scoped_allocator_adaptor<Inner...>`.|  
|`outer_allocator_type`|Questo tipo è sinonimo del tipo di allocatore di base `Outer`.|  
|`pointer`|Questo tipo è sinonimo di `pointer` associato all'allocatore `Outer`.|  
|`propagate_on_container_copy_assignment`|Il tipo vale solo se `Outer_traits::propagate_on_container_copy_assignment` sostiene mantenute di `inner_allocator_type::propagate_on_container_copy_assignment` o true.|  
|`propagate_on_container_move_assignment`|Il tipo vale solo se `Outer_traits::propagate_on_container_move_assignment` sostiene mantenute di `inner_allocator_type::propagate_on_container_move_assignment` o true.|  
|`propagate_on_container_swap`|Il tipo vale solo se `Outer_traits::propagate_on_container_swap` sostiene mantenute di `inner_allocator_type::propagate_on_container_swap` o true.|  
|`size_type`|Questo tipo è sinonimo di `size_type` associato all'allocatore `Outer`.|  
|`value_type`|Questo tipo è sinonimo di `value_type` associato all'allocatore `Outer`.|  
|`void_pointer`|Questo tipo è sinonimo di `void_pointer` associato all'allocatore `Outer`.|  
  
### Strutture  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Struct scoped\_allocator\_adaptor::rebind](../Topic/scoped_allocator_adaptor::rebind%20Struct.md)|Definisce il tipo `Outer::rebind<Other>::other` come un sinonimo di `scoped_allocator_adaptor<Other, Inner...>`.|  
  
### Metodi  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo scoped\_allocator\_adaptor::allocate](../Topic/scoped_allocator_adaptor::allocate%20Method.md)|Alloca memoria utilizzando l'allocatore di `Outer`.|  
|[Metodo scoped\_allocator\_adaptor::construct](../Topic/scoped_allocator_adaptor::construct%20Method.md)|Costruisce un oggetto.|  
|[Metodo scoped\_allocator\_adaptor::deallocate](../Topic/scoped_allocator_adaptor::deallocate%20Method.md)|Rilascia oggetti utilizzando l'allocatore esterno.|  
|[Metodo scoped\_allocator\_adaptor::destroy](../Topic/scoped_allocator_adaptor::destroy%20Method.md)|Elimina un oggetto specificato.|  
|[Metodo scoped\_allocator\_adaptor::inner\_allocator](../Topic/scoped_allocator_adaptor::inner_allocator%20Method.md)|Recupera un riferimento all'oggetto archiviato di tipo `inner_allocator_type`.|  
|[Metodo scoped\_allocator\_adaptor::max\_size](../Topic/scoped_allocator_adaptor::max_size%20Method.md)|Determina il numero massimo di oggetti che possono essere allocati da allocatore esterno.|  
|[Metodo scoped\_allocator\_adaptor::outer\_allocator](../Topic/scoped_allocator_adaptor::outer_allocator%20Method.md)|Recupera un riferimento all'oggetto archiviato di tipo `outer_allocator_type`.|  
|[Metodo scoped\_allocator\_adaptor::select\_on\_container\_copy\_construction](../Topic/scoped_allocator_adaptor::select_on_container_copy_construction%20Method.md)|Crea un nuovo oggetto di `scoped_allocator_adaptor` con ogni oggetto archiviato di allocatore inizializzato chiamando `select_on_container_copy_construction` per ogni allocatore corrispondente.|  
  
## Requisiti  
 scoped\_allocator \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)