---
title: "Classe concurrent_unordered_set | Microsoft Docs"
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
  - "concurrent_unordered_set/concurrency::concurrent_unordered_set"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "concurrent_unordered_set (classe)"
ms.assetid: c61f9a9a-4fd9-491a-9251-e300737ecf4b
caps.latest.revision: 12
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe concurrent_unordered_set
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe `concurrent_unordered_set` è un contenitore indipendente dalla concorrenza che controlla una sequenza di lunghezza variabile di elementi di tipo \_Key\_type.  La sequenza viene rappresentata in un modo che abilita le operazioni di accodamento, accesso elementi, accesso iteratori e attraversamento iteratori in modo indipendente dalla concorrenza.  
  
## Sintassi  
  
```  
template <  
   typename _Key_type,  
   typename _Hasher = std::tr1::hash<_Key_type>,  
   typename _Key_equality = std::equal_to<_Key_type>,  
   typename _Allocator_type = std::allocator<_Key_type>  
>  
, typename _Key_equality = std::equal_to<_Key_type>, typename _Allocator_type = std::allocator<_Key_type> > class concurrent_unordered_set : public details::_Concurrent_hash< details::_Concurrent_unordered_set_traits<_Key_type, details::_Hash_compare<_Key_type, _Hasher, _Key_equality>, _Allocator_type, false> >;  
```  
  
#### Parametri  
 `_Key_type`  
 Il tipo di chiave.  
  
 `_Hasher`  
 Il tipo di oggetto di funzione hash.  Questo argomento è facoltativo e il valore predefinito è `std::tr1::hash<``_Key_type``>`.  
  
 `_Key_equality`  
 Il tipo di oggetto della funzione di confronto di uguaglianza.  Questo argomento è facoltativo e il valore predefinito è `std::equal_to<``_Key_type``>`.  
  
 `_Allocator_type`  
 Il tipo rappresentante l'oggetto dell'allocatore memorizzato che include i dettagli sull'allocazione e sulla deallocazione di memoria per il set non ordinato simultaneo.  Questo argomento è facoltativo e il valore predefinito è `std::allocator<``_Key_type``>`.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`allocator_type`|Il tipo di un allocatore per gestire l'archiviazione.|  
|`const_iterator`|Il tipo di un iteratore costante della sequenza controllata.|  
|`const_local_iterator`|Il tipo di un iteratore di bucket costante della sequenza controllata.|  
|`const_pointer`|Il tipo di un puntatore costante a un elemento.|  
|`const_reference`|Il tipo di un riferimento costante a un elemento.|  
|`difference_type`|Il tipo di una distanza con segno tra due elementi.|  
|`hasher`|Tipo della funzione hash.|  
|`iterator`|Il tipo di un iteratore della sequenza controllata.|  
|`key_equal`|Il tipo della funzione di confronto.|  
|`key_type`|Il tipo di una chiave di ordinamento.|  
|`local_iterator`|Il tipo di un iteratore di bucket della sequenza controllata.|  
|`pointer`|Il tipo di un puntatore a un elemento.|  
|`reference`|Il tipo di un riferimento a un elemento.|  
|`size_type`|Il tipo di una distanza senza segno tra due elementi.|  
|`value_type`|Il tipo di un elemento.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore concurrent\_unordered\_set::concurrent\_unordered\_set](../Topic/concurrent_unordered_set::concurrent_unordered_set%20Constructor.md)|Di overload.  Costruisce un set non ordinato simultaneo.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo concurrent\_unordered\_set::hash\_function](../Topic/concurrent_unordered_set::hash_function%20Method.md)|Restituisce l'oggetto archiviato della funzione hash.|  
|[Metodo concurrent\_unordered\_set::insert](../Topic/concurrent_unordered_set::insert%20Method.md)|Di overload.  Aggiunge elementi all'oggetto `concurrent_unordered_set`.|  
|[Metodo concurrent\_unordered\_set::key\_eq](../Topic/concurrent_unordered_set::key_eq%20Method.md)|Restituisce l'oggetto archiviato della funzione di confronto di uguaglianza.|  
|[Metodo concurrent\_unordered\_set::swap](../Topic/concurrent_unordered_set::swap%20Method.md)|Scambia il contenuto di due oggetti `concurrent_unordered_set`.  Tale metodo non è sicuro per concorrenza.|  
|[Metodo concurrent\_unordered\_set::unsafe\_erase](../Topic/concurrent_unordered_set::unsafe_erase%20Method.md)|Di overload.  Rimuove gli elementi da `concurrent_unordered_set` alle posizioni specificate.  Tale metodo non è sicuro per concorrenza.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore concurrent\_unordered\_set::operator\=](../Topic/concurrent_unordered_set::operator=%20Operator.md)|Di overload.  Assegna il contenuto di un altro oggetto `concurrent_unordered_set` a questo.  Tale metodo non è sicuro per concorrenza.|  
  
## Note  
 Per informazioni dettagliate sulla classe `concurrent_unordered_set`, vedere [Contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md).  
  
## Gerarchia di ereditarietà  
 `_Traits`  
  
 `_Concurrent_hash`  
  
 `concurrent_unordered_set`  
  
## Requisiti  
 **Intestazione:** concurrent\_unordered\_set.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md)