---
title: "Classe regex_iterator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::tr1::regex_iterator"
  - "std.tr1.regex_iterator"
  - "regex_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "regex_iterator (classe) [TR1]"
ms.assetid: 0cfd8fd0-5a95-4f3c-bf8e-6ef028c423d3
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# Classe regex_iterator
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Classe iterator per le corrispondenze.  
  
## Sintassi  
  
```  
template<class BidIt, class Elem = iterator_traits<BidIt>::value_type,  
    class RXtraits = regex_traits<Elem> >  
        class regex_iterator {  
public:  
    typedef basic_regex<Elem, RXtraits> regex_type;  
    typedef match_results<BidIt> value_type;  
    typedef std::forward_iterator_tag iterator_category;  
    typedef std::ptrdiff_t difference_type;  
    typedef const match_results<BidIt>* pointer;  
    typedef const match_results<BidIt>& reference;  
  
    regex_iterator();  
    regex_iterator(BidIt first, BidIt last,  
        const regex_type& re,  
        regex_constants::match_flag_type f = regex_constants::match_default);  
  
    bool operator==(const regex_iterator& right);  
    bool operator!=(const regex_iterator& right);  
    const match_results<BidIt>& operator*();  
    const match_results<BidIt> *operator->();  
    regex_iterator& operator++();  
    regex_iterator& operator++(int);  
  
    BidIt begin;                            // exposition only  
    BidIt end;                              // exposition only  
    regex_type *pregex;                     // exposition only  
    regex_constants::match_flag_type flags; // exposition only  
    match_results<BidIt> match;             // exposition only  
    };  
```  
  
#### Parametri  
 `BidIt`  
 Tipo di iteratore per le sottocorrispondenze.  
  
 `Elem`  
 Tipo di elementi di cui trovare una corrispondenza.  
  
 `RXtraits`  
 Classe traits per gli elementi.  
  
## Note  
 La classe modello descrive un oggetto iteratore costante in avanti. Estrae gli oggetti di tipo `match_results<BidIt>` applicando ripetutamente il relativo oggetto di espressione regolare `*pregex` alla sequenza di caratteri definita dall'intervallo dell'iteratore `[begin, end)`.  
  
## Esempi  
 Per esempi di espressioni regolari, vedere gli argomenti seguenti:  
  
-   [Funzione regex\_match](../Topic/regex_match%20Function.md)  
  
-   [Funzione regex\_replace](../Topic/regex_replace%20Function.md)  
  
-   [Funzione regex\_search](../Topic/regex_search%20Function.md)  
  
-   [Funzione swap](../Topic/swap%20Function%20%3Cregex%3E.md)  
  
## Requisiti  
 **Intestazione:** \<regex\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<regex\>](../standard-library/regex.md)   
 [regex\_iterator](../standard-library/regex-iterator-class.md)