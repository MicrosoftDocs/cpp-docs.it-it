---
title: "Classe reverse_iterator | Microsoft Docs"
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
  - "reverse_iterator"
  - "std::reverse_iterator"
  - "std.reverse_iterator"
  - "xutility/std::reverse_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "reverse_iterator (classe)"
ms.assetid: c0b34d04-ae9a-4999-9aff-28b313897ffa
caps.latest.revision: 21
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe reverse_iterator
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello è un adattatore di iteratore che descrive un oggetto iteratore inverso che si comporta come un iteratore ad accesso casuale o bidirezionale solo in senso inverso.  Consente l'attraversamento all'indietro di un intervallo.  
  
## Sintassi  
  
```  
template <class RandomIterator>  
class reverse_iterator  
```  
  
#### Parametri  
 RandomIterator  
 Tipo che rappresenta l'iteratore da adattare perché operi in senso inverso.  
  
## Note  
 I contenitori della libreria di modelli standard definiscono inoltre i tipi `reverse_iterator` e `const_reverse_iterator` e dispongono di funzioni membro `rbegin` e `rend` che restituiscono iteratori inversi.  Tali iteratori dispongono di una semantica di sovrascrittura.  L'adattatore `reverse_iterator` integra questa funzionalità in quanto offre semantica di inserimento e può essere utilizzato anche con i flussi.  
  
 Gli `reverse_iterator` che richiedono un iteratore bidirezionale non devono chiamare alcuna funzione membro `operator+=`, `operator+`, `operator-=`, `operator-` o `operator[]` che possono essere utilizzate solo con gli iteratori ad accesso casuale.  
  
 Se l'intervallo di un iteratore è \[`_First`, \_Last\), in cui la parentesi quadra a sinistra indica l'inclusione di \_*First* e la parentesi a destra indica l'inclusione degli elementi fino a \_*Left* escluso.  Questi stessi elementi sono inclusi nella sequenza inversa \[**rev** – `_First`, **rev** – \_*Left*\) in modo tale che se \_*Left* è l'elemento immediatamente successivo all'ultimo elemento di una sequenza, il primo elemento **rev** – \_*First*  della sequenza inversa punti a \*\(\_*Left* – 1\).  L'identità che collega tutti gli iteratori inversi ai relativi iteratori sottostanti è:  
  
 &\*\(**reverse\_iterator** \( *i* \) \) \=\= &\*\( *i* – 1 \).  
  
 In pratica, questo significa che in tale sequenza inversa reverse\_iterator farà riferimento all'elemento immediatamente successivo \(a destra\) all'elemento a cui ha fatto riferimento l'iteratore nella sequenza originale.  Quindi, se un iteratore ha puntato all'elemento 6 della sequenza \(2, 4, 6, 8\), `reverse_iterator` punterà all'elemento 4 della sequenza inversa \(8, 6, 4, 2\).  
  
### Costruttori  
  
|||  
|-|-|  
|[reverse\_iterator](../Topic/reverse_iterator::reverse_iterator.md)|Costruisce un `reverse_iterator` predefinito o un `reverse_iterator` da un iteratore sottostante.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[difference\_type](../Topic/reverse_iterator::difference_type.md)|Tipo che fornisce la differenza tra due `reverse_iterator` che fanno riferimento agli elementi all'interno dello stesso contenitore.|  
|[iterator\_type](../Topic/reverse_iterator::iterator_type.md)|Tipo che fornisce l'iteratore sottostante per un `reverse_iterator`.|  
|[puntatore](../Topic/reverse_iterator::pointer.md)|Tipo che fornisce un puntatore a un elemento a cui punta un `reverse_iterator`.|  
|[riferimenti](../Topic/reverse_iterator::reference.md)|Tipo che fornisce un riferimento a un elemento a cui punta un `reverse_iterator`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[base](../Topic/reverse_iterator::base.md)|Recupera l'iteratore sottostante dal relativo `reverse_iterator`.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\*](../Topic/reverse_iterator::operator*.md)|Restituisce l'elemento a cui punta un `reverse_iterator`.|  
|[operator\+](../Topic/reverse_iterator::operator+.md)|Aggiunge un offset a un iteratore e restituisce il nuovo `reverse_iterator` che punta all'elemento inserito in corrispondenza della nuova posizione dell'offset.|  
|[operator\+\+](../Topic/reverse_iterator::operator++.md)|Incrementa `reverse_iterator` all'elemento successivo.|  
|[operator\+\=](../Topic/reverse_iterator::operator+=.md)|Aggiunge un offset specificato da un `reverse_iterator`.|  
|[operator\-](../Topic/reverse_iterator::operator-.md)|Sottrae un offset da un `reverse_iterator` e restituisce un `reverse_iterator` che punta all'elemento in corrispondenza della posizione dell'offset.|  
|[operator\-\-](../Topic/reverse_iterator::operator--.md)|Decrementa `reverse_iterator` all'elemento precedente.|  
|[operator\-\=](../Topic/reverse_iterator::operator-=.md)|Sottrae un offset specificato da un `reverse_iterator`.|  
|[operator\-\>](../Topic/reverse_iterator::operator-%3E.md)|Restituisce un puntatore all'elemento a cui punta un `reverse_iterator`.|  
|[operator&#91;&#93;](../Topic/reverse_iterator::operator.md)|Restituisce un riferimento all'offset di un elemento dall'elemento a cui punta un `reverse_iterator` di un numero specificato di posizioni.|  
  
## Requisiti  
 **Intestazione:** \<iterator\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<iterator\>](../standard-library/iterator.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)