---
title: "Classe bitset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bitset/std::bitset"
  - "std::bitset"
  - "std.bitset"
  - "bitset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bitset (classe)"
ms.assetid: 28b86964-87b4-429c-8124-b6c251b6c50b
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# Classe bitset
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un tipo di oggetto che archivia una sequenza formata da un numero fisso di bit che forniscono un modo compatto di mantenere i flag per un set di elementi o condizioni.  La classe bitset supporta operazioni su oggetti di tipo bitset che contengono una raccolta di bit e forniscono un accesso a tempo costante a ogni bit.  
  
## Sintassi  
  
```  
  
     template <size_t   
     N  
     >  
class bitset  
```  
  
#### Parametri  
 *N*  
 Specifica il numero di bit nell'oggetto bitset con un valore Integer diverso da zero di tipo **size\_t** che deve essere noto in fase di compilazione.  
  
## Note  
 A differenza dell'analoga [classe vector\<bool\>](../standard-library/vector-bool-class.md), la classe bitset non ha iteratori e non è un contenitore della libreria di modelli standard.  Un'altra differenza rispetto alla classe vector\<bool\> riguarda le dimensioni, che vengono fissate in fase di compilazione in base alle dimensioni specificate dal parametro di modello **N** quando viene dichiarato **bitset\<N\>**.  
  
 Un bit viene impostato se il valore è 1 e reimpostato se il valore è 0.  Capovolgere o attivare e disattivare un bit significa modificarne il valore da 1 a 0 o da 0 a 1.  I bit **N** in un bitset vengono indicizzati dai valori Integer da 0 a **N** \- 1, dove 0 indicizza la prima posizione del bit e **N**\- 1 la posizione finale del bit.  
  
### Costruttori  
  
|||  
|-|-|  
|[bitset](../Topic/bitset::bitset.md)|Costruisce un oggetto di classe `bitset<N>` e inizializza i bit a zero, a un valore specificato o a valori ottenuti dai caratteri in una stringa.|  
  
### Typedef  
  
|||  
|-|-|  
|[element\_type](../Topic/bitset::element_type.md)|Tipo sinonimo del tipo di dati `bool` che può essere usato per fare riferimento ai bit dell'elemento in `bitset`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[tutti](../Topic/bitset::all.md)|Verifica tutti i bit nel `bitset` per determinare se sono tutti impostati su `true`.|  
|[qualsiasi](../Topic/bitset::any.md)|La funzione membro verifica se nella sequenza sono inclusi bit impostati su 1.|  
|[count](../Topic/bitset::count.md)|La funzione membro restituisce il numero di bit impostati nella sequenza di bit.|  
|[flip](../Topic/bitset::flip.md)|Attiva\/disattiva il valore di tutti i bit in `bitset` oppure un singolo bit in una posizione specificata.|  
|[nessuno](../Topic/bitset::none.md)|Verifica che nessun bit sia stato impostato su 1 in un oggetto `bitset`.|  
|[reimpostazione](../Topic/bitset::reset.md)|Reimposta tutti i bit in `bitset` su 0 o un bit in una posizione specificata su 0.|  
|[imposta](../Topic/bitset::set.md)|Imposta tutti i bit in `bitset` su 1 o un bit in una posizione specificata su 1.|  
|[size](../Topic/bitset::size.md)|Restituisce il numero di bit in un oggetto `bitset`.|  
|[test](../Topic/bitset::test.md)|Verifica se il bit in una posizione specificata in `bitset` è impostato su 1.|  
|[to\_string](../Topic/bitset::to_string.md)|Converte un oggetto `bitset` in una rappresentazione di stringa.|  
|[to\_ullong](../Topic/bitset::to_ullong.md)|Restituisce la somma dei valori di bit in `bitset` come `unsigned long long`.|  
|[to\_ulong](../Topic/bitset::to_ulong.md)|Converte un oggetto `bitset` in `unsigned long` che genera la sequenza dei bit contenuti se usati per inizializzare `bitset`.|  
  
### Classi membro  
  
|||  
|-|-|  
|[riferimento](../Topic/bitset::reference.md)|Classe proxy che fornisce i riferimenti ai bit contenuti in un `bitset` usata per accedere e modificare i singoli bit come classe helper per `operator[]` della classe `bitset`.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\!\=](../Topic/bitset::operator!=.md)|Verifica un `bitset` di destinazione per la disuguaglianza con un `bitset` specificato.|  
|[operator&\=](../Topic/bitset::operator&=.md)|Esegue una combinazione bit per bit di bitset con l'operazione logica `AND`.|  
|[operatore \<\<](../Topic/bitset::operator%3C%3C.md)|Sposta i bit in un `bitset` a sinistra di un numero di posizioni specificato e restituisce il risultato in un nuovo `bitset`.|  
|[operator\<\<\=](../Topic/bitset::operator%3C%3C=.md)|Sposta i bit in un `bitset` a sinistra di un numero di posizioni specificato e restituisce il risultato nel `bitset` di destinazione.|  
|[operator\=\=](../Topic/bitset::operator==.md)|Verifica un `bitset` di destinazione per l'uguaglianza con un `bitset` specificato.|  
|[operatore \>\>](../Topic/bitset::operator%3E%3E.md)|Sposta i bit in un `bitset` a destra di un numero di posizioni specificato e restituisce il risultato in un nuovo `bitset`.|  
|[operator\>\>\=](../Topic/bitset::operator%3E%3E=.md)|Sposta i bit in un `bitset` a destra di un numero di posizioni specificato e restituisce il risultato nel `bitset` di destinazione.|  
|[operator&#91;&#93;](../Topic/bitset::operator.md)|Restituisce un riferimento a un bit in una posizione specificata in un `bitset` se il `bitset` è modificabile. In caso contrario, restituisce il valore del bit in tale posizione.|  
|[operator^\=](../Topic/bitset::operator%5E=.md)|Esegue una combinazione bit per bit di bitset con l'operazione esclusiva `OR`.|  
|[operator&#124;\=](../Topic/bitset::operator%7C=.md)|Esegue una combinazione bit per bit di bitset con l'operazione inclusiva `OR`.|  
|[operator~](../Topic/bitset::operator~.md)|Attiva\/disattiva tutti i bit in un `bitset` di destinazione e restituisce il risultato.|  
  
## Requisiti  
 **Intestazione:** \<bitset\>  
  
 **Spazio dei nomi:** std