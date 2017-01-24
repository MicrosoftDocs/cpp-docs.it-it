---
title: "Classe basic_string | Microsoft Docs"
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
  - "std.basic_string"
  - "std::basic_string"
  - "basic_string"
  - "xstring/std::basic_string"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_string (classe)"
ms.assetid: a9c3e0a2-39bf-4c8a-b093-9abe30839591
caps.latest.revision: 19
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe basic_string
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le sequenze controllate da un oggetto della classe modello `basic_string` sono rappresentate dalla classe stringa C\+\+ standard e in genere vengono definite stringhe, ma non devono essere confuse con le stringhe in formato C con terminazione Null usate nella libreria standard C\+\+.  La stringa C\+\+ standard è un contenitore che consente l'uso di stringhe come tipi normali, ad esempio come operazioni di confronto e concatenazione, iteratori, algoritmi STL e copia e assegnazione con Managed Memory dell'allocatore della classe.  Se è necessario convertire una stringa C\+\+ standard in una stringa in formato C con terminazione Null, usare il membro [basic\_string::c\_str](../Topic/basic_string::c_str.md).  
  
## Sintassi  
  
```  
template <class CharType, class Traits = char_traits<CharType>, class Allocator = allocator<CharType>> class basic_string;  
```  
  
#### Parametri  
 `CharType`  
 Tipo di dati di un singolo carattere da archiviare nella stringa.  La libreria standard C\+\+ fornisce le specializzazioni di questa classe modello con le definizioni dei tipi [string](../Topic/string%20\(C++%20STL%20%3Cstring%3E\).md) per gli elementi di tipo `char`, [wstring](../Topic/wstring.md) per `wchar_t`, [u16string](../Topic/u16string.md) per `char16_t` e [u32string](../Topic/u32string.md) per `char32_t`.  
  
 `Traits`  
 Diverse proprietà importanti degli elementi **CharType** in una specializzazione basic\_string vengono descritti dalla classe **Traits**.  Il valore predefinito è `char_traits`\<`CharType`\>.  
  
 `Allocator`  
 Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione e alla deallocazione di memoria della stringa.  Il valore predefinito è **allocator**\<`CharType`\>.  
  
### Costruttori  
  
|||  
|-|-|  
|[basic\_string](../Topic/basic_string::basic_string.md)|Costruisce una stringa vuota o inizializzata in base a caratteri specifici oppure che rappresenta una copia di tutto o parte di un altro oggetto stringa o stringa C.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[allocator\_type](../Topic/basic_string::allocator_type.md)|Tipo che rappresenta la classe `allocator` per un oggetto stringa.|  
|[const\_iterator](../Topic/basic_string::const_iterator.md)|Tipo che fornisce un iteratore ad accesso casuale che può accedere e leggere un elemento `const` nella stringa.|  
|[const\_pointer](../Topic/basic_string::const_pointer.md)|Tipo che fornisce un puntatore a un elemento `const` in una stringa.|  
|[const\_reference](../Topic/basic_string::const_reference.md)|Tipo che fornisce un riferimento a un elemento `const` archiviato in una stringa per la lettura e l'esecuzione di operazioni `const`.|  
|[const\_reverse\_iterator](../Topic/basic_string::const_reverse_iterator.md)|Tipo che fornisce un iteratore ad accesso casuale che può leggere qualsiasi elemento `const` nella stringa.|  
|[difference\_type](../Topic/basic_string::difference_type.md)|Tipo che fornisce la differenza tra due iteratori che fanno riferimento agli elementi all'interno della stessa stringa.|  
|[iterator](../Topic/basic_string::iterator.md)|Tipo che fornisce un iteratore ad accesso casuale che può leggere o modificare qualsiasi elemento in una stringa.|  
|[npos](../Topic/basic_string::npos.md)|Valore integrale senza segno inizializzato a –1 che indica "non trovato" o "tutti i caratteri rimanenti" quando una funzione di ricerca non riesce.|  
|[pointer](../Topic/basic_string::pointer.md)|Tipo che fornisce un puntatore a un elemento carattere in una matrice di stringhe o caratteri.|  
|[reference](../Topic/basic_string::reference.md)|Tipo che fornisce un riferimento a un elemento archiviato in una stringa.|  
|[reverse\_iterator](../Topic/basic_string::reverse_iterator.md)|Tipo che fornisce un iteratore ad accesso casuale che può leggere o modificare un elemento in una stringa invertita.|  
|[size\_type](../Topic/basic_string::size_type.md)|Tipo integrale senza segno per il numero di elementi in una stringa.|  
|[traits\_type](../Topic/basic_string::traits_type.md)|Tipo per i tratti dei caratteri degli elementi archiviati in una stringa.|  
|[value\_type](../Topic/basic_string::value_type.md)|Tipo che rappresenta il tipo di caratteri archiviati in una stringa.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[append](../Topic/basic_string::append.md)|Aggiunge caratteri alla fine di una stringa.|  
|[assign](../Topic/basic_string::assign.md)|Assegna nuovi valori di caratteri al contenuto di una stringa.|  
|[at](../Topic/basic_string::at.md)|Restituisce un riferimento all'elemento in una posizione specificata nella stringa.|  
|[back](../Topic/basic_string::back.md)||  
|[begin](../Topic/basic_string::begin.md)|Restituisce un iteratore che punta al primo elemento nella stringa.|  
|[c\_str](../Topic/basic_string::c_str.md)|Converte il contenuto di una stringa come stringa in formato C con terminazione Null.|  
|[capacity](../Topic/basic_string::capacity.md)|Restituisce il numero massimo di elementi che è possibile archiviare in una stringa senza aumentare l'allocazione di memoria della stringa.|  
|[cbegin](../Topic/basic_string::cbegin.md)|Restituisce un iteratore const che punta al primo elemento nella stringa.|  
|[cend](../Topic/basic_string::cend.md)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento in una stringa.|  
|[clear](../Topic/basic_string::clear.md)|Cancella tutti gli elementi di una stringa.|  
|[compare](../Topic/basic_string::compare.md)|Confronta una stringa con una stringa specificata per determinare se le due stringhe sono uguali oppure se una è minore dell'altra a livello lessicografico.|  
|[copy](../Topic/basic_string::copy.md)|Copia al massimo un numero specificato di caratteri da una posizione indicizzata all'interno di una stringa di origine in una matrice di caratteri di destinazione.  Deprecato.  In alternativa, usare [basic\_string::\_Copy\_s](../Topic/basic_string::_Copy_s.md).|  
|[crbegin](../Topic/basic_string::crbegin.md)|Restituisce un iteratore const che punta al primo elemento in una stringa invertita.|  
|[crend](../Topic/basic_string::crend.md)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento in una stringa invertita.|  
|[\_Copy\_s](../Topic/basic_string::_Copy_s.md)|Copia al massimo un numero specificato di caratteri da una posizione indicizzata all'interno di una stringa di origine in una matrice di caratteri di destinazione.|  
|[dati](../Topic/basic_string::data.md)|Converte il contenuto di una stringa in una matrice di caratteri.|  
|[empty](../Topic/basic_string::empty.md)|Verifica se la stringa contiene caratteri.|  
|[end](../Topic/basic_string::end.md)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento in una stringa.|  
|[erase](../Topic/basic_string::erase.md)|Rimuove un elemento o un intervallo di elementi in una stringa da una posizione specificata.|  
|[find](../Topic/basic_string::find.md)|Cerca in avanti in una stringa la prima occorrenza di una sottostringa che corrisponde a una sequenza di caratteri specificata.|  
|[find\_first\_not\_of](../Topic/basic_string::find_first_not_of.md)|Cerca in una stringa il primo carattere che non è un elemento di una stringa specificata.|  
|[find\_first\_of](../Topic/basic_string::find_first_of.md)|Cerca in una stringa il primo carattere che corrisponde a un elemento di una stringa specificata.|  
|[find\_last\_not\_of](../Topic/basic_string::find_last_not_of.md)|Cerca in una stringa l'ultimo carattere che non è un elemento di una stringa specificata.|  
|[find\_last\_of](../Topic/basic_string::find_last_of.md)|Cerca in una stringa l'ultimo carattere che è un elemento di una stringa specificata.|  
|[front](../Topic/basic_string::front.md)|Restituisce un riferimento al primo elemento in una stringa.|  
|[get\_allocator](../Topic/basic_string::get_allocator.md)|Restituisce una copia dell'oggetto `allocator` usato per costruire la stringa.|  
|[insert](../Topic/basic_string::insert.md)|Inserisce un elemento, un numero di elementi o un intervallo di elementi nella stringa in una posizione specificata.|  
|[length](../Topic/basic_string::length.md)|Restituisce il numero corrente di elementi in una stringa.|  
|[max\_size](../Topic/basic_string::max_size.md)|Restituisce il numero massimo di caratteri che una stringa può contenere.|  
|[pop\_back](../Topic/basic_string::pop_back.md)|Cancella l'ultimo elemento della stringa.|  
|[push\_back](../Topic/basic_string::push_back.md)|Aggiunge un elemento alla fine della stringa.|  
|[rbegin](../Topic/basic_string::rbegin.md)|Restituisce un iteratore al primo elemento in una stringa invertita.|  
|[rend](../Topic/basic_string::rend.md)|Restituisce un iteratore che punta alla posizione immediatamente successiva all'ultimo elemento in una stringa invertita.|  
|[replace](../Topic/basic_string::replace.md)|Sostituisce gli elementi in una stringa in una posizione specificata con i caratteri specificati o i caratteri copiati da altri intervalli, stringhe o stringhe C.|  
|[reserve](../Topic/basic_string::reserve.md)|Imposta la capacità della stringa su un numero grande almeno quanto un numero specificato.|  
|[resize](../Topic/basic_string::resize.md)|Specifica una nuova dimensione per una stringa, aggiungendo o cancellando gli elementi in base alle esigenze.|  
|[rfind](../Topic/basic_string::rfind.md)|Cerca all'indietro in una stringa la prima occorrenza di una sottostringa che corrisponde a una sequenza di caratteri specificata.|  
|[shrink\_to\_fit](../Topic/basic_string::shrink_to_fit.md)|Rimuove la capacità in eccesso della stringa.|  
|[size](../Topic/basic_string::size.md)|Restituisce il numero corrente di elementi in una stringa.|  
|[substr](../Topic/basic_string::substr.md)|Copia una sottostringa di al massimo un numero di caratteri da una stringa a partire da una posizione specificata.|  
|[swap](../Topic/basic_string::swap.md)|Scambia il contenuto di due stringhe.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\+\=](../Topic/basic_string::operator+=.md)|Aggiunge caratteri a una stringa.|  
|[operator \=](../Topic/basic_string::operator=.md)|Assegna nuovi valori di caratteri al contenuto di una stringa.|  
|[operator&#91;&#93;](../Topic/basic_string::operator.md)|Fornisce un riferimento al carattere con un indice specificato in una stringa.|  
  
## Note  
 Se a una funzione viene richiesto di generare una sequenza più lunga di [max\_size](../Topic/basic_string::max_size.md) elementi, la funzione segnala un errore di lunghezza generando un oggetto di tipo [length\_error](../standard-library/length-error-class.md).  
  
 I riferimenti, i puntatori e gli iteratori che definiscono gli elementi della sequenza controllata possono diventare non validi dopo una chiamata a una funzione che modifica la sequenza controllata o dopo la prima chiamata a una funzione membro non **const**.  
  
## Requisiti  
 **Intestazione:** \<string\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<string\>](../standard-library/string.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)