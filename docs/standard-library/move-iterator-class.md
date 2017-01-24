---
title: "Classe move_iterator | Microsoft Docs"
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
  - "std.move_iterator"
  - "move_iterator"
  - "iterator/std::move_iterator"
  - "std::move_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "move_iterator (classe)"
ms.assetid: a5e5cdd8-a264-4c6b-9f9c-68b0e8edaab7
caps.latest.revision: 20
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe move_iterator
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il modello di classe `move_iterator` è un wrapper di un iteratore.  move\_iterator offre lo stesso comportamento dell'iteratore di cui esegue il wrapping \(archivia\), con la differenza che trasforma l'operatore di dereferenziazione dell'iteratore archiviato in un riferimento rvalue, trasformando una copia in uno spostamento.  Per ulteriori informazioni sugli rvalues, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).  
  
## Sintassi  
  
```  
template<class Iterator>  
    class move_iterator {  
public:  
    typedef Iterator iterator_type;  
    typedef typename      
        iterator_traits<Iterator>::iterator_category  
            iterator_category;  
    typedef typename iterator_traits<Iterator>::value_type  
        value_type;  
    typedef typename iterator_traits<Iterator>::difference_type  
        difference_type;  
    typedef Iterator  
        pointer;  
    typedef value_type&&  
        reference;  
  
    move_iterator();  
    explicit move_iterator (Iterator right);  
    template<class Type>  
        move_iterator (const move_iterator<Type>& right);  
    template <class Type>   
        move_iterator& operator=(const move_iterator<Type>& right);  
  
    iterator_type base () const;  
    reference operator* () const;  
    pointer operator-> () const;  
  
    move_iterator& operator++ ();  
    move_iterator operator++ (int);  
    move_iterator& operator-- ();  
    move_iterator operator-- (int);  
  
    move_iterator& operator+= (difference_type off);  
    move_iterator operator+ (difference_type off) const;  
    move_iterator& operator-= (difference_type off);  
    move_iterator operator- (difference_type off) const;  
    reference operator[] (difference_type off) const;  
    };  
```  
  
## Note  
 La classe modello descrive un oggetto che si comporta come un iteratore, eccetto quando viene dereferenziato.  Archivia un iteratore ad accesso casuale di tipo `Iterator`, a cui si accede tramite la funzione membro `base``()`.  Tutte le operazioni effettuate su un `move_iterator` vengono eseguite direttamente sull'iteratore archiviato, ad eccezione del fatto che viene eseguito il cast in modo implicito del risultato di `operator*` a `value_type&&` per creare un riferimento rvalue.  
  
 Un `move_iterator` potrebbe essere in grado di effettuare operazioni non definite dall'iteratore di cui è stato eseguito il wrapping.  Queste operazioni non devono essere utilizzate.  
  
### Costruttori  
  
|||  
|-|-|  
|[move\_iterator](../Topic/move_iterator::move_iterator.md)|Costruttore per oggetti di tipo `move_iterator`.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[move\_iterator::iterator\_type](../Topic/move_iterator::iterator_type.md)|Sinonimo del parametro di modello `RandomIterator`.|  
|[move\_iterator::iterator\_category](../Topic/move_iterator::iterator_category.md)|Un sinonimo di un'espressione dello stesso nome `typename` più lunga, `iterator_category`, identifica le capacità generali dell'iteratore.|  
|[move\_iterator::value\_type](../Topic/move_iterator::value_type.md)|Un sinonimo di un'espressione dello stesso nome `typename` più lunga, `value_type`, descrive i tipi di elementi dell'iteratore.|  
|[move\_iterator::difference\_type](../Topic/move_iterator::difference_type.md)|Un sinonimo di un'espressione dello stesso nome `typename` più lunga, `difference_type`, descrive il tipo integrale necessario per esprimere i valori di differenza tra gli elementi.|  
|[move\_iterator::pointer](../Topic/move_iterator::pointer.md)|Sinonimo del parametro di modello `RandomIterator`.|  
|[move\_iterator::reference](../Topic/move_iterator::reference.md)|Sinonimo del riferimento `rvalue` `value_type&&`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[move\_iterator::base](../Topic/move_iterator::base.md)|La funzione membro restituisce l'iteratore archiviato di cui è stato eseguito il wrapping da `move_iterator`.|  
  
### Operatori  
  
|||  
|-|-|  
|[move\_iterator::operator\*](../Topic/move_iterator::operator*.md)|Restituisce `(reference)*``base``().`.|  
|[move\_iterator::operator\+\+](../Topic/move_iterator::operator++.md)|Incrementa l'iteratore archiviato.  Il comportamento esatto dipende dal fatto che si tratti di un'operazione di incremento prefisso o incremento suffisso.|  
|[move\_iterator::operator\-\-](../Topic/move_iterator::operator--.md)|Decrementa l'iteratore archiviato.  Il comportamento esatto dipende dal fatto che si tratti di un'operazione di incremento prefisso o di incremento suffisso.|  
|[move\_iterator::operator\-\>](../Topic/move_iterator::operator-%3E.md)|Restituisce `&**this`.|  
|[move\_iterator::operator\-](../Topic/move_iterator::operator-.md)|Restituisce `move_iterator(*this) -=` sottraendo innanzitutto il valore a destra dalla posizione corrente.|  
|[move\_iterator::operator](../Topic/move_iterator::operator.md)|Restituisce `(reference)*(*this + off)`.  Consente di specificare un offset dalla base corrente per ottenere il valore in corrispondenza di tale posizione.|  
|[move\_iterator::operator\+](../Topic/move_iterator::operator+.md)|Restituisce il valore `move_iterator(*this) +=` .  Consente di aggiungere un offset dalla base per ottenere il valore in corrispondenza di tale posizione.|  
|[move\_iterator::operator\+\=](../Topic/move_iterator::operator+=.md)|Aggiunge il valore a destra nell'iteratore archiviato e restituisce `*this`.|  
|[move\_iterator::operator\-\=](../Topic/move_iterator::operator-=.md)|Sottrae il valore a destra dall'iteratore archiviato e restituisce `*this`.|  
  
## Requisiti  
 **Intestazione:** \<iterator\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<iterator\>](../standard-library/iterator.md)   
 [Elementi Lvalue e Rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md)   
 [Costruttori di spostamento e operatori di assegnazione di spostamento \(C\+\+\)](../cpp/move-constructors-and-move-assignment-operators-cpp.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)