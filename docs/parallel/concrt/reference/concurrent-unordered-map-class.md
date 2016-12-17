---
title: "Classe concurrent_unordered_map | Microsoft Docs"
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
  - "concurrent_unordered_map/concurrency::concurrent_unordered_map"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "concurrent_unordered_map (classe)"
ms.assetid: b2d879dd-87ef-4af9-a266-a5443fd538b8
caps.latest.revision: 13
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe concurrent_unordered_map
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe `concurrent_unordered_map` è un contenitore indipendente dalla concorrenza che controlla una sequenza di lunghezza variabile di elementi di tipo `std::pair<const _Key_type, _Element_type>`.  La sequenza viene rappresentata in un modo che abilita le operazioni di accodamento, accesso elementi, accesso iteratori e attraversamento iteratori in modo indipendente dalla concorrenza.  
  
## Sintassi  
  
```  
template <  
   typename _Key_type,  
   typename _Element_type,  
   typename _Hasher = std::tr1::hash<_Key_type>,  
   typename _Key_equality = std::equal_to<_Key_type>,  
   typename _Allocator_type = std::allocator<std::pair<const _Key_type,  
   _Element_type> >  
>  
, typename _Key_equality = std::equal_to<_Key_type>, typename _Allocator_type = std::allocator<std::pair<const _Key_type, _Element_type> > > class concurrent_unordered_map : public details::_Concurrent_hash< details::_Concurrent_unordered_map_traits<_Key_type, _Element_type, details::_Hash_compare<_Key_type, _Hasher, _Key_equality>, _Allocator_type, false> >;  
```  
  
#### Parametri  
 `_Key_type`  
 Il tipo di chiave.  
  
 `_Element_type`  
 Il tipo di cui è stato eseguito il mapping.  
  
 `_Hasher`  
 Il tipo di oggetto di funzione hash.  Questo argomento è facoltativo e il valore predefinito è `std::tr1::hash<``_Key_type``>`.  
  
 `_Key_equality`  
 Il tipo di oggetto della funzione di confronto di uguaglianza.  Questo argomento è facoltativo e il valore predefinito è `std::equal_to<``_Key_type``>`.  
  
 `_Allocator_type`  
 Tipo rappresentante l'oggetto dell'allocatore memorizzato che include i dettagli sull'allocazione e sulla deallocazione di memoria per la mappa non ordinata simultanea.  Questo argomento è facoltativo e il valore predefinito è `std::allocator<std::pair<``_Key_type`, `_Element_type``>>`.  
  
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
|`mapped_type`|Il tipo di un valore mappato associato a ogni chiave.|  
|`pointer`|Il tipo di un puntatore a un elemento.|  
|`reference`|Il tipo di un riferimento a un elemento.|  
|`size_type`|Il tipo di una distanza senza segno tra due elementi.|  
|`value_type`|Il tipo di un elemento.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore concurrent\_unordered\_map::concurrent\_unordered\_map](../Topic/concurrent_unordered_map::concurrent_unordered_map%20Constructor.md)|Di overload.  Costruisce una mappa non ordinata simultanea.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo concurrent\_unordered\_map::at](../Topic/concurrent_unordered_map::at%20Method.md)|Di overload.  Individua un elemento in un oggetto `concurrent_unordered_map` con un valore chiave specificato.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_unordered\_map::hash\_function](../Topic/concurrent_unordered_map::hash_function%20Method.md)|Ottiene l'oggetto della funzione hash archiviato.|  
|[Metodo concurrent\_unordered\_map::insert](../Topic/concurrent_unordered_map::insert%20Method.md)|Di overload.  Aggiunge elementi all'oggetto `concurrent_unordered_map`.|  
|[Metodo concurrent\_unordered\_map::key\_eq](../Topic/concurrent_unordered_map::key_eq%20Method.md)|Ottiene l'oggetto della funzione di confronto di uguaglianza archiviato.|  
|[Metodo concurrent\_unordered\_map::swap](../Topic/concurrent_unordered_map::swap%20Method.md)|Scambia il contenuto di due oggetti `concurrent_unordered_map`.  Tale metodo non è sicuro per concorrenza.|  
|[Metodo concurrent\_unordered\_map::unsafe\_erase](../Topic/concurrent_unordered_map::unsafe_erase%20Method.md)|Di overload.  Rimuove gli elementi da `concurrent_unordered_map` alle posizioni specificate.  Tale metodo non è sicuro per concorrenza.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[concurrent\_unordered\_map::operatorOperator](../Topic/concurrent_unordered_map::operatorOperator.md)|Di overload.  Individua o inserisce un elemento con la chiave specificata.  Tale metodo è sicuro per concorrenza.|  
|[Operatore concurrent\_unordered\_map::operator\=](../Topic/concurrent_unordered_map::operator=%20Operator.md)|Di overload.  Assegna il contenuto di un altro oggetto `concurrent_unordered_map` a questo.  Tale metodo non è sicuro per concorrenza.|  
  
## Note  
 Per informazioni dettagliate sulla classe `concurrent_unordered_map`, vedere [Contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md).  
  
## Gerarchia di ereditarietà  
 `_Traits`  
  
 `_Concurrent_hash`  
  
 `concurrent_unordered_map`  
  
## Requisiti  
 **Intestazione:** concurrent\_unordered\_map.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md)