---
title: "Classe basic_regex | Microsoft Docs"
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
  - "std::tr1::basic_regex"
  - "basic_regex"
  - "std.tr1.basic_regex"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_regex (classe) [TR1]"
ms.assetid: 8a18c6b4-f22a-4cfd-bc16-b4267867ebc3
caps.latest.revision: 21
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe basic_regex
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esegue il wrapping di un'espressione regolare.  
  
## Sintassi  
  
```  
template<class Elem,  
    class RXtraits = regex_traits<Elem>,  
    class basic_regex {  
public:  
    basic_regex();  
    explicit basic_regex(const Elem *ptr,  
        flag_type flags = ECMAScript);  
    basic_regex(const Elem *ptr, size_type len,  
        flag_type flags = ECMAScript);  
    basic_regex(const basic_regex& right);  
    template<class STtraits, class STalloc>  
        explicit basic_regex(const basic_string<Elem, STtraits, STalloc>& str,  
            flag_type flags = ECMAScript);  
    template<class InIt>  
        explicit basic_regex(InIt first, InIt last,  
            flag_type flags = ECMAScript);  
  
    basic_regex& operator=(const basic_regex& right);  
    basic_regex& operator=(const Elem *ptr);  
    template<class STtraits, class STalloc>  
        basic_regex& operator=(const basic_string<Elem, STtraits, STalloc>& str);  
    basic_regex& assign(const basic_regex& right);  
    basic_regex& assign(const Elem *ptr,  
        flag_type flags = ECMAScript);  
    basic_regex& assign(const Elem *ptr, size_type len,  
        flag_type flags = ECMAScript);  
    template<class STtraits, class STalloc>  
    basic_regex& assign(const basic_string<Elem, STtraits, STalloc>& str,  
        flag_type flags = ECMAScript);  
    template<class InIt>  
        basic_regex& assign(InIt first, InIt last,  
            flag_type flags = ECMAScript);  
  
    locale_type imbue(locale_type loc);  
    locale_type getloc() const;  
    void swap(basic_regex& other) throw();  
    unsigned mark_count() const;  
    flag_type flags() const;  
  
    typedef Elem value_type;  
    typedef regex_constants::syntax_option_type flag_type;  
    typedef typename RXtraits::locale_type locale_type;  
    static const flag_type icase = regex_constants::icase;  
    static const flag_type nosubs = regex_constants::nosubs;  
    static const flag_type optimize = regex_constants::optimize;  
    static const flag_type collate = regex_constants::collate;  
    static const flag_type ECMAScript = regex_constants::ECMAScript;  
    static const flag_type basic = regex_constants::basic;  
    static const flag_type extended = regex_constants::extended;  
    static const flag_type awk = regex_constants::awk;  
    static const flag_type grep = regex_constants::grep;  
    static const flag_type egrep = regex_constants::egrep;  
private:  
    RXtraits traits;    // exposition only  
    };  
```  
  
#### Parametri  
 `Elem`  
 Tipo di elementi di cui trovare una corrispondenza.  
  
 `RXtraits`  
 Classe traits per gli elementi.  
  
## Note  
 La classe modello descrive un oggetto contenente un'espressione regolare.  Gli oggetti di questa classe modello possono essere passati alle funzioni del modello [Funzione regex\_match](../Topic/regex_match%20Function.md), [Funzione regex\_search](../Topic/regex_search%20Function.md) e [Funzione regex\_replace](../Topic/regex_replace%20Function.md), insieme agli argomenti stringa di testo appropriati per cercare il testo che corrisponde all'espressione regolare.  Esistono due specializzazioni di questa classe modello, con le definizioni di tipo [Typedef regex](../Topic/regex%20Typedef.md) per gli elementi di tipo `char` e [Typedef wregex](../Topic/wregex%20Typedef.md) per gli elementi di tipo `wchar_t`.  
  
 Nell'argomento di modello `RXtraits` vengono descritte le diverse proprietà importanti della sintassi delle espressioni regolari supportate dalla classe modello.  Una classe che specifica questi tratti dell'espressione regolare deve avere la stessa interfaccia esterna di un oggetto della classe modello [Classe regex\_traits](../standard-library/regex-traits-class.md).  
  
 Alcune funzioni accettano una sequenza di operandi che definisce un'espressione regolare.  È possibile specificare tale sequenza di operandi in diversi modi:  
  
 `ptr`: una sequenza con terminazione Null, come ad esempio una stringa C, per `Elem` di tipo `char`, che inizia con `ptr` \(che non deve essere un puntatore Null\), in cui l'elemento di terminazione è costituito dal valore `value_type()` e non fa parte della sequenza di operandi.  
  
 `ptr`, `count`: una sequenza di elementi `count` che inizia con `ptr` \(che non deve essere un puntatore Null\)  
  
 `str`: la sequenza specificata dall'oggetto `basic_string` `str`  
  
 `first`, `last`: una sequenza di elementi delimitata dagli iteratori `first` e `last` nell'intervallo `[first, last)`  
  
 `right`: l'oggetto `basic_regex` `right`  
  
 Queste funzioni membro accettano anche un argomento `flags` che specifica le diverse opzioni per l'interpretazione dell'espressione regolare oltre a quelle descritte dal tipo `RXtraits`.  
  
## Requisiti  
 **Intestazione:** \<regex\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<regex\>](../standard-library/regex.md)   
 [Funzione regex\_match](../Topic/regex_match%20Function.md)   
 [Funzione regex\_search](../Topic/regex_search%20Function.md)   
 [Funzione regex\_replace](../Topic/regex_replace%20Function.md)   
 [Typedef regex](../Topic/regex%20Typedef.md)   
 [Typedef wregex](../Topic/wregex%20Typedef.md)   
 [Classe regex\_traits](../standard-library/regex-traits-class.md)