---
title: "Classe sub_match | Microsoft Docs"
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
  - "sub_match"
  - "std::tr1::sub_match"
  - "std.tr1.sub_match"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sub_match (classe) [TR1]"
ms.assetid: 804e2b9e-d16a-4c4c-ac60-024e0b2dd0e8
caps.latest.revision: 19
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe sub_match
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive una sottocorrispondenza.  
  
## Sintassi  
  
```  
template<class BidIt>  
    class sub_match  
        : public std::pair<BidIt, BidIt> {  
public:  
    bool matched;  
    int compare(const sub_match& right) const;  
    int compare(const basic_string<value_type>& right) const;  
    int compare(const value_type *right) const;  
    difference_type length() const;  
    operator basic_string<value_type>() const;  
    basic_string<value_type> str() const;  
    typedef typename iterator_traits<BidIt>::value_type value_type;  
    typedef typename iterator_traits<BidIt>::difference_type difference_type;  
    typedef BidIt iterator;  
    };  
```  
  
#### Parametri  
 `BidIt`  
 Tipo di iteratore per le sottocorrispondenze.  
  
## Note  
 La classe modello descrive un oggetto che definisce una sequenza di caratteri corrispondente a un gruppo Capture in una chiamata a [Funzione regex\_match](../Topic/regex_match%20Function.md) o a [Funzione regex\_search](../Topic/regex_search%20Function.md). Oggetti di tipo [Classe match\_results](../standard-library/match-results-class.md) contengono una matrice di questi oggetti, una per ogni gruppo Capture nell'espressione regolare usata nella ricerca.  
  
 Se il gruppo Capture non è corrispondente, il membro di dati dell'oggetto `matched` contiene false e i due iteratori `first` e `second` \(ereditati dalla base `std::pair`\) sono uguali. Se il gruppo Capture è corrispondente, `matched` contiene true, l'iteratore `first` punta al primo carattere nella sequenza di destinazione corrispondente al gruppo Capture e l'iteratore `second` punti punta a una posizione dopo l'ultimo carattere nel database di destinazione che corrisponda al gruppo Capture. Si noti che per una corrispondenza di lunghezza zero il membro `matched` è true, i due iteratori saranno uguali ed entrambi punteranno alla posizione della corrispondenza.  
  
 Una corrispondenza zero si può verificare quando un gruppo Capture è costituito solamente da un'asserzione o da una ripetizione che consente zero ripetizioni. Ad esempio:  
  
 "^" corrisponde alla sequenza di destinazione "a"; l'oggetto `sub_match` corrispondente al gruppo Capture 0 contiene gli iteratori che entrambi puntano al primo carattere della sequenza.  
  
 "b\(a\*\)b" corrisponde alla sequenza di destinazione "bb"; l'oggetto `sub_match` corrispondente al gruppo Capture 1 contiene gli iteratori che entrambi puntano al secondo carattere della sequenza.  
  
## Requisiti  
 **Intestazione:** \<regex\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<regex\>](../standard-library/regex.md)   
 [sub\_match](../standard-library/sub-match-class.md)   
 [Funzione regex\_match](../Topic/regex_match%20Function.md)   
 [Funzione regex\_search](../Topic/regex_search%20Function.md)