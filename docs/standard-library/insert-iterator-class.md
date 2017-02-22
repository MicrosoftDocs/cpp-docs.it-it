---
title: "Classe insert_iterator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::insert_iterator"
  - "iterator/std::insert_iterator"
  - "std.insert_iterator"
  - "insert_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "insert_iterator (classe)"
  - "insert_iterator (classe), sintassi"
ms.assetid: d5d86405-872e-4e3b-9e68-c69a2b7e8221
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 17
---
# Classe insert_iterator
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un adattatore dell'iteratore che soddisfa i requisiti dell'iteratore di output.  Inserisce, anziché sovrascrivere, gli elementi in una sequenza, fornendo in questo modo una semantica diversa dalla semantica di sovrascrittura fornita dagli iteratori dei contenitori associativi e di sequenza C\+\+.  Viene creato un modello della classe `insert_iterator` in base al tipo di contenitore da adattare.  
  
## Sintassi  
  
```  
template <class Container> class insert_iterator;  
```  
  
#### Parametri  
 `Container`  
 Tipo di contenitore in cui devono essere inseriti gli elementi da un `insert_iterator`.  
  
## Note  
 Il contenitore di tipo **Container** deve soddisfare i requisiti relativi a un contenitore a dimensione variabile e disporre di una funzione membro di inserimento a due argomenti in cui i parametri sono di tipo **Container::iterator** e **Container::value\_type** e che restituisce un tipo **Container::iterator**.  La sequenza della libreria di modelli standard e i contenitori associativi ordinati soddisfano tali requisiti e possono essere adattati per l'utilizzo con gli `insert_iterator`.  Per i contenitori associativi, l'argomento della posizione viene considerato come un suggerimento, che potrebbe migliorare o ridurre le prestazioni a seconda della validità di tale suggerimento.  Un `insert_iterator` deve essere sempre inizializzato insieme al relativo contenitore.  
  
### Costruttori  
  
|||  
|-|-|  
|[insert\_iterator](../Topic/insert_iterator::insert_iterator.md)|Costruisce un `insert_iterator` che inserisce un elemento in una posizione specificata di un contenitore.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[container\_type](../Topic/insert_iterator::container_type.md)|Tipo che rappresenta il contenitore in cui è necessario effettuare un inserimento generale.|  
|[riferimenti](../Topic/insert_iterator::reference.md)|Tipo che fornisce un riferimento a un elemento di una sequenza controllata dal contenitore associato.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\*](../Topic/insert_iterator::operator*.md)|Operatore di dereferenziazione utilizzato per implementare l'espressione dell'iteratore di output \*`i` \= `x` per un inserimento generale.|  
|[operator\+\+](../Topic/insert_iterator::operator++.md)|Incrementa `insert_iterator` alla posizione successiva in cui è possibile archiviare un valore.|  
|[operator\=](../Topic/insert_iterator::operator=.md)|Operatore di assegnazione utilizzato per implementare l'espressione dell'iteratore di output \*`i` \= `x` per un inserimento generale.|  
  
## Requisiti  
 **Intestazione**: \<iterator\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<iterator\>](../standard-library/iterator.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)