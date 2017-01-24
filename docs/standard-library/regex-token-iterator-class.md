---
title: "Classe regex_token_iterator | Microsoft Docs"
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
  - "regex_token_iterator"
  - "std.tr1.regex_token_iterator"
  - "std::tr1::regex_token_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "regex_token_iterator (classe) [TR1]"
ms.assetid: a213ba48-8e4e-4b6b-871a-2637acf05f15
caps.latest.revision: 15
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe regex_token_iterator
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Classe iterator per le sottocorrispondenze.  
  
## Sintassi  
  
```  
template<class BidIt, class Elem = iterator_traits<BidIt>::value_type,  
    class RXtraits = regex_traits<Elem> >  
        class regex_token_iterator {  
public:  
    typedef basic_regex<Elem, RXtraits> regex_type;  
    typedef sub_match<BidIt> value_type;  
    typedef std::forward_iterator_tag iterator_category;  
    typedef std::ptrdiff_t difference_type;  
    typedef const sub_match<BidIt> *pointer;  
    typedef const sub_match<BidIt>& reference;  
  
    regex_token_iterator();  
    regex_token_iterator(BidIt first, BidIt last,  
        const regex_type& re, int submatch = 0,  
        regex_constants::match_flag_type f = regex_constants::match_default);  
    regex_token_iterator(BidIt first, BidIt last,  
        const regex_type& re, const std::vector<int> submatches,  
        regex_constants::match_flag_type f = regex_constants::match_default);  
    template<std::size_t N>  
    regex_token_iterator(BidIt first, BidIt last,  
        const regex_type& re, const int (&submatches)[N],  
        regex_constants::match_flag_type f = regex_constants::match_default);  
  
    bool operator==(const regex_token_iterator& right);  
    bool operator!=(const regex_token_iterator& right);  
    const basic_string<Elem>& operator*();  
    const basic_string<Elem> *operator->();  
    regex_token_iterator& operator++();  
    regex_token_iterator& operator++(int);  
private:  
    regex_iterator<BidIt, Elem, RXtraits> it; // exposition only  
    vector<int> subs;                         // exposition only  
    int pos;                                  // exposition only  
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
 La classe modello descrive un oggetto iteratore costante in avanti. Concettualmente, contiene un oggetto `regex_iterator` usato per eseguire la ricerca di corrispondenze di espressione regolare in una sequenza di caratteri. Estrae gli oggetti di tipo `sub_match<BidIt>` che rappresentano le sottocorrispondenze identificate dai valori di indice nel vettore archiviato `subs` per ogni corrispondenza di espressione regolare.  
  
 Un valore di indice di \-1 indica la sequenza di caratteri che comincia subito dopo la fine della precedente corrispondenza di espressione regolare o all'inizio della sequenza di caratteri se non esisteva alcuna corrispondenza di espressione regolare precedente e che si estende, senza includerlo, al primo carattere della corrispondenza di espressione regolare corrente o alla fine della sequenza di caratteri se non esiste alcuna corrispondenza corrente. Qualsiasi altro valore di indice `idx` definisce il contenuto del gruppo Capture contenuto in `it.match[idx]`.  
  
## Requisiti  
 **Intestazione:** \<regex\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<regex\>](../standard-library/regex.md)   
 [regex\_token\_iterator](../standard-library/regex-token-iterator-class.md)   
 [Classe regex\_iterator](../standard-library/regex-iterator-class.md)