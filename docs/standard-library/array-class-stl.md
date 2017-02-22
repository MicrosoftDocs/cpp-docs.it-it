---
title: "Classe array (STL) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "array/std::tr1::array"
  - "std.tr1.array"
  - "array"
  - "std::tr1::array"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "array (classe) [TR1]"
ms.assetid: fdfd43a5-b2b5-4b9e-991f-93bf10fb4293
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# Classe array (STL)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un oggetto che controlla una sequenza di elementi di tipo `Ty` lunghezza `N`.  La sequenza viene archiviata come matrice di `Ty`, contenuta nell'oggetto `array<Ty, N>`.  
  
## Sintassi  
  
```  
template<class Ty, std::size_t N>  
    class array;  
```  
  
#### Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`Ty`|Tipo di un elemento.|  
|`N`|Numero di elementi.|  
  
## Membri  
  
|||  
|-|-|  
|Definizione dei tipi|Descrizione|  
|[array::const\_iterator](../Topic/array::const_iterator.md)|Tipo di un iteratore costante per la sequenza controllata.|  
|[array::const\_pointer](../Topic/array::const_pointer.md)|Tipo di un puntatore costante a un elemento.|  
|[array::const\_reference](../Topic/array::const_reference.md)|Tipo di un riferimento costante a un elemento.|  
|[array::const\_reverse\_iterator](../Topic/array::const_reverse_iterator.md)|Tipo di un iteratore inverso costante per la sequenza controllata.|  
|[array::difference\_type](../Topic/array::difference_type.md)|Tipo di una distanza Signed tra due elementi.|  
|[array::iterator](../Topic/array::iterator.md)|Tipo di un iteratore per la sequenza controllata.|  
|[array::pointer](../Topic/array::pointer.md)|Tipo di un puntatore a un elemento.|  
|[array::reference](../Topic/array::reference.md)|Tipo di un riferimento a un elemento.|  
|[array::reverse\_iterator](../Topic/array::reverse_iterator.md)|Tipo di un iteratore inverso della sequenza controllata.|  
|[array::size\_type](../Topic/array::size_type.md)|Tipo di una distanza Unsigned tra due elementi.|  
|[array::value\_type](../Topic/array::value_type.md)|Tipo di un elemento.|  
  
|||  
|-|-|  
|Funzione membro|Descrizione|  
|[array::array](../Topic/array::array.md)|Costruisce un oggetto di matrice.|  
|[array::assign](../Topic/array::assign.md)|Sostituisce tutti gli elementi.|  
|[array::at](../Topic/array::at.md)|Accede a un elemento in una posizione specificata.|  
|[array::back](../Topic/array::back.md)|Accede all'ultimo elemento.|  
|[array::begin](../Topic/array::begin.md)|Indica l'inizio della sequenza controllata.|  
|[array::cbegin](../Topic/array::cbegin.md)|Restituisce un iteratore const ad accesso casuale al primo elemento nella matrice.|  
|[array::cend](../Topic/array::cend.md)|Restituisce un iteratore const ad accesso casuale che punta appena oltre la fine della matrice.|  
|[array::crbegin](../Topic/array::crbegin.md)|Restituisce un iteratore const che punta al primo elemento di una matrice invertita.|  
|[array::crend](../Topic/array::crend.md)|Restituisce un iteratore const alla fine di una matrice invertita.|  
|[array::data](../Topic/array::data.md)|Ottiene l'indirizzo del primo elemento.|  
|[array::empty](../Topic/array::empty.md)|Verifica se sono presenti elementi.|  
|[array::end](../Topic/array::end.md)|Indica la fine della sequenza controllata.|  
|[array::fill](../Topic/array::fill.md)|Sostituisce tutti gli elementi con un valore specificato.|  
|[array::front](../Topic/array::front.md)|Accede al primo elemento.|  
|[array::max\_size](../Topic/array::max_size.md)|Conta il numero di elementi.|  
|[array::rbegin](../Topic/array::rbegin.md)|Indica l'inizio della sequenza controllata inversa.|  
|[array::rend](../Topic/array::rend.md)|Indica la fine della sequenza controllata inversa.|  
|[array::size](../Topic/array::size.md)|Conta il numero di elementi.|  
|[array::swap](../Topic/array::swap.md)|Scambia il contenuto di due contenitori.|  
  
|||  
|-|-|  
|Operatore|Descrizione|  
|[array::operator\=](../Topic/array::operator=.md)|Sostituisce la sequenza controllata.|  
|[array::operator](../Topic/array::operator.md)|Accede a un elemento in una posizione specificata.|  
  
## Note  
 Il tipo ha un costruttore predefinito `array()` e un operatore di assegnazione predefinito `operator=` e soddisfa i requisiti per un `aggregate`.  Pertanto, gli oggetti di tipo `array<Ty, N>` possono essere inizializzati usando un inizializzatore di aggregazione.  Ad esempio,  
  
```  
array<int, 4> ai = { 1, 2, 3 };  
```  
  
 crea l'oggetto `ai` contenente quattro valori interi, inizializza i primi tre elementi sui valori 1, 2 e 3 rispettivamente e inizializza il quarto elemento su 0.  
  
## Requisiti  
 **Intestazione:** \<array\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<array\>](../standard-library/array.md)