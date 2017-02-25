---
title: "initializer_list Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 1f2c0ff4-5636-4f79-b008-e75426e3d2ab
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 17
---
# initializer_list Class
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Fornisce l'accesso a una matrice di elementi in cui ogni membro è del tipo specificato.  
  
## Sintassi  
  
```cpp  
template<  
    class Type >  
    class initializer_list  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`_Elem`|Tipo di dati degli elementi da archiviare in `initializer_list`.|  
|`_First`|Puntatore al primo elemento di `initializer_list`.|  
|`_Last`|Puntatore all'ultimo elemento dell'oggetto `initializer_list`.|  
  
## Note  
 Un oggetto `initializer_list` può essere costruito utilizzando un elenco di inizializzatori tra parentesi:  
  
```cpp  
initializer_list<int> i1{ 1, 2, 3, 4 };  
```  
  
 Il compilatore trasforma gli elenchi di inizializzatori tra parentesi graffe con elementi omogenei in un oggetto `initializer_list` ogni volta che la firma della funzione richiede un oggetto `initializer_list`.  Per altre informazioni sull'uso di `initializer_list`, vedere [Inizializzazione uniforme e costruttori deleganti](../cpp/uniform-initialization-and-delegating-constructors.md)  
  
### Costruttori  
  
|||  
|-|-|  
|[initializer\_list](../Topic/forward_list::forward_list.md)|Costruisce un oggetto di tipo `initializer_list`.|  
  
### Typedef  
  
|||  
|-|-|  
|value\_type|Tipo degli elementi contenuti nell'oggetto `initializer_list`.|  
|riferimento|Tipo che fornisce un riferimento a un elemento archiviato in `initializer_list`.|  
|const\_reference|Tipo che fornisce un riferimento costante a un elemento in `initializer_list`.|  
|size\_type|Tipo che rappresenta il numero di elementi in `initializer_list`.|  
|iteratore|Tipo che fornisce un iteratore per `initializer_list`.|  
|const\_iterator|Tipo che fornisce un iteratore costante per `initializer_list`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[begin](../Topic/initializer_list::begin.md)|Restituisce un puntatore al primo elemento in `initializer_list`.|  
|[end](../Topic/initializer_list::end.md)|Restituisce un puntatore nella posizione successiva dopo l'ultimo elemento in `initializer_list`.|  
|[size](../Topic/initializer_list::size.md)|Restituisce il numero di elementi nel `initializer_list`.|  
  
## Requisiti  
 **Intestazione:** \<initializer\_list\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<forward\_list\>](../standard-library/forward-list.md)