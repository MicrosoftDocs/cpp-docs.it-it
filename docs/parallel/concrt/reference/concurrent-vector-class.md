---
title: "Classe concurrent_vector | Microsoft Docs"
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
  - "concurrent_vector/Concurrency::concurrent_vector"
  - "concurrent_vector/concurrency::concurrent_vector"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "concurrent_vector (classe)"
ms.assetid: a217b4ac-af2b-4d41-94eb-09a75ee28622
caps.latest.revision: 21
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe concurrent_vector
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe `concurrent_vector` è una classe contenitore di sequenze che consente un accesso casuale a qualsiasi elemento.  Abilita accodamento, accesso elementi, accesso iteratori e operazioni di attraversamento iteratori.  
  
## Sintassi  
  
```  
template<  
   typename _Ty,  
   class _Ax  
>  
class concurrent_vector: protected details::_Allocator_base<_Ty, _Ax>, private details::_Concurrent_vector_base_v4;  
```  
  
#### Parametri  
 `_Ty`  
 Tipo di dati degli elementi da archiviare nel vettore.  
  
 `_Ax`  
 Tipo rappresentante l'oggetto dell'allocatore memorizzato che include i dettagli sull'allocazione e sulla deallocazione di memoria per il vettore simultaneo.  Questo argomento è facoltativo e il valore predefinito è `allocator<``_Ty``>`.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`allocator_type`|Tipo che rappresenta la classe dell'allocatore per il vettore simultaneo.|  
|`const_iterator`|Un tipo che fornisce un iteratore ad accesso casuale che può leggere un elemento `const` in un vettore simultaneo.|  
|`const_pointer`|Un tipo che fornisce un puntatore a un elemento `const` in un vettore simultaneo.|  
|`const_reference`|Un tipo che fornisce un riferimento all'elemento `const` archiviato in un vettore simultaneo per la lettura e l'esecuzione di operazioni `const`.|  
|`const_reverse_iterator`|Un tipo che fornisce un iteratore ad accesso casuale che può leggere qualsiasi elemento `const` in un vettore simultaneo.|  
|`difference_type`|Un tipo che fornisce la distanza con segno tra due elementi in un vettore simultaneo.|  
|`iterator`|Un tipo che fornisce un iteratore ad accesso casuale che può leggere qualsiasi elemento in un vettore simultaneo.  La modifica di un elemento utilizzando l'iteratore non è sicura per concorrenza.|  
|`pointer`|Un tipo che fornisce un puntatore a un elemento in un vettore simultaneo.|  
|`reference`|Un tipo che fornisce un riferimento a un elemento archiviato in un vettore simultaneo.|  
|`reverse_iterator`|Un tipo che fornisce un iteratore ad accesso casuale che può leggere qualsiasi elemento in un vettore simultaneo inverso.  La modifica di un elemento utilizzando l'iteratore non è sicura per concorrenza.|  
|`size_type`|Un tipo che conta il numero di elementi in un vettore simultaneo.|  
|`value_type`|Un tipo che rappresenta il tipo di dati archiviati nel vettore simultaneo.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore concurrent\_vector::concurrent\_vector](../Topic/concurrent_vector::concurrent_vector%20Constructor.md)|Di overload.  Costruisce un vettore simultaneo.|  
|[Distruttore concurrent\_vector::~concurrent\_vector](../Topic/concurrent_vector::~concurrent_vector%20Destructor.md)|Cancella tutti gli elementi e distrugge questo vettore simultaneo.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo concurrent\_vector::assign](../Topic/concurrent_vector::assign%20Method.md)|Di overload.  Annulla gli elementi del vettore simultaneo e gli assegna copie `_N` di `_Item` o valori specificati dall'intervallo dell'iteratore \[`_Begin`, `_End`\).  Tale metodo non è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::at](../Topic/concurrent_vector::at%20Method.md)|Di overload.  Consente di fornire accesso all'elemento all'indice specificato nel vettore simultaneo.  Il metodo è sicuro per concorrenza per le operazioni di lettura e anche durante la crescita del vettore, finché non si ha la sicurezza che il valore `_Index` sia inferiore alla dimensione del vettore simultaneo.|  
|[Metodo concurrent\_vector::back](../Topic/concurrent_vector::back%20Method.md)|Di overload.  Consente di restituire un riferimento o uno `const` all'ultimo elemento nel vettore simultaneo.  Se il vettore simultaneo è vuoto, il valore restituito non è definito.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::begin](../Topic/concurrent_vector::begin%20Method.md)|Di overload.  Consente di restituire un iteratore di tipo `iterator` o `const_iterator` all'inizio del vettore simultaneo.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::capacity](../Topic/concurrent_vector::capacity%20Method.md)|Consente di restituire la dimensione massima raggiungibile dal vettore simultaneo senza dovere allocare altra memoria.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::cbegin](../Topic/concurrent_vector::cbegin%20Method.md)|Consente di restituire un iteratore di tipo `const_iterator` all'inizio del vettore simultaneo.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::cend](../Topic/concurrent_vector::cend%20Method.md)|Consente di restituire un iteratore di tipo `const_iterator` alla fine del vettore simultaneo.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::clear](../Topic/concurrent_vector::clear%20Method.md)|Cancella tutti gli elementi nel vettore simultaneo.  Tale metodo non è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::crbegin](../Topic/concurrent_vector::crbegin%20Method.md)|Consente di restituire un iteratore di tipo `const_reverse_iterator` all'inizio del vettore simultaneo.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::crend](../Topic/concurrent_vector::crend%20Method.md)|Consente di restituire un iteratore di tipo `const_reverse_iterator` alla fine del vettore simultaneo.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::empty](../Topic/concurrent_vector::empty%20Method.md)|Consente di testare se il vettore simultaneo è vuoto nel momento della chiamata a tale metodo.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::end](../Topic/concurrent_vector::end%20Method.md)|Di overload.  Consente di restituire un iteratore di tipo `iterator` o `const_iterator` alla fine del vettore simultaneo.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::front](../Topic/concurrent_vector::front%20Method.md)|Di overload.  Consente di restituire un riferimento o uno `const` al primo elemento nel vettore simultaneo.  Se il vettore simultaneo è vuoto, il valore restituito non è definito.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::get\_allocator](../Topic/concurrent_vector::get_allocator%20Method.md)|Consente di restituire una copia dell'allocatore utilizzato per costruire il vettore simultaneo.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::grow\_by](../Topic/concurrent_vector::grow_by%20Method.md)|Di overload.  Aumenta questo vettore simultaneo di elementi `_Delta`.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::grow\_to\_at\_least](../Topic/concurrent_vector::grow_to_at_least%20Method.md)|Aumenta questo vettore simultaneo fino a quando non dispone almeno degli elementi `_N`.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::max\_size](../Topic/concurrent_vector::max_size%20Method.md)|Consente di restituire il numero massimo di elementi che il vettore simultaneo può contenere.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::push\_back](../Topic/concurrent_vector::push_back%20Method.md)|Di overload.  Aggiunge l'elemento specificato alla fine del vettore simultaneo.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::rbegin](../Topic/concurrent_vector::rbegin%20Method.md)|Di overload.  Consente di restituire un iteratore di tipo `reverse_iterator` o `const_reverse_iterator` all'inizio del vettore simultaneo.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::rend](../Topic/concurrent_vector::rend%20Method.md)|Di overload.  Consente di restituire un iteratore di tipo `reverse_iterator` o `const_reverse_iterator` alla fine del vettore simultaneo.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::reserve](../Topic/concurrent_vector::reserve%20Method.md)|Assegna spazio sufficiente per alimentare il vettore simultaneo fino alle dimensioni `_N` senza dovere allocare più memoria in un secondo tempo.  Tale metodo non è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::resize](../Topic/concurrent_vector::resize%20Method.md)|Di overload.  Modifica la dimensione del vettore simultaneo sulla dimensione richiesta, eliminando o aggiungendo elementi come necessario.  Tale metodo non è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::shrink\_to\_fit](../Topic/concurrent_vector::shrink_to_fit%20Method.md)|Comprime la rappresentazione interna del vettore simultaneo per ridurre la frammentazione e ottimizzare l'utilizzo della memoria.  Tale metodo non è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::size](../Topic/concurrent_vector::size%20Method.md)|Consente di restituire il numero di elementi nel vettore simultaneo.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_vector::swap](../Topic/concurrent_vector::swap%20Method.md)|Consente di scambiare il contenuto di due vettori simultanei.  Tale metodo non è sicuro per concorrenza.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[concurrent\_vector::operatorOperator](../Topic/concurrent_vector::operatorOperator.md)|Di overload.  Consente di fornire accesso all'elemento all'indice specificato nel vettore simultaneo.  Il metodo è sicuro per concorrenza per le operazioni di lettura e anche durante la crescita del vettore, finché non si ha la sicurezza che il valore `_Index` sia inferiore alla dimensione del vettore simultaneo.|  
|[Operatore concurrent\_vector::operator\=](../Topic/concurrent_vector::operator=%20Operator.md)|Di overload.  Assegna il contenuto di un altro oggetto `concurrent_vector` a questo.  Tale metodo non è sicuro per concorrenza.|  
  
## Note  
 Per informazioni dettagliate sulla classe `concurrent_vector`, vedere [Contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md).  
  
## Gerarchia di ereditarietà  
 `_Concurrent_vector_base_v4`  
  
 `_Allocator_base`  
  
 `concurrent_vector`  
  
## Requisiti  
 **Header:** concurrent\_vector.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md)