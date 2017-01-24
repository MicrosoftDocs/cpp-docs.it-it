---
title: "Classe regex_traits | Microsoft Docs"
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
  - "regex_traits"
  - "std::tr1::regex_traits"
  - "std.tr1.regex_traits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "regex_traits (classe) [TR1]"
ms.assetid: bc5a5eed-32fc-4eb7-913d-71c42e729e81
caps.latest.revision: 19
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe regex_traits
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive le caratteristiche degli elementi per la corrispondenza.  
  
## Sintassi  
  
```  
template<class Elem>  
    struct regex_traits {  
    regex_traits();  
  
    static size_type length(const char_type *str);  
    char_type translate(char_type ch) const;  
    char_type translate_nocase(char_type ch) const;  
    template<class FwdIt>  
        string_type transform(FwdIt first, FwdIt last) const;  
    template<class FwdIt>  
        string_type transform_primary(FwdIt first, FwdIt last) const;  
    template<class FwdIt>  
        char_class_type lookup_classname(FwdIt first, FwdIt last) const;  
    template<class FwdIt>  
        string_type lookup_collatename(FwdIt first, FwdIt last) const;  
    bool isctype(char_type ch, char_class_type cls) const;  
    int value(Elem ch, int base) const;  
    locale_type imbue(locale_type loc);  
    locale_type getloc() const;  
  
    typedef Elem char_type;  
    typedef T6 size_type;  
    typedef basic_string<Elem> string_type;  
    typedef T7 locale_type;  
    typedef T8 char_class_type;  
    };  
```  
  
#### Parametri  
 `Elem`  
 Il tipo di elemento da descrivere.  
  
## Note  
 La classe modello descrive vari tratti dell'espressione regolare per il tipo `Elem`. La classe modello [Classe basic\_regex](../standard-library/basic-regex-class.md) usa queste informazioni per modificare gli elementi di tipo `Elem`.  
  
 Ogni oggetto `regex_traits` contiene un oggetto di tipo `regex_traits::locale` usto da alcune delle sue funzioni membro. Le impostazioni locali predefinite sono una copia di `regex_traits::locale()`. La funzione membro `imbue` sostituisce l'oggetto delle impostazioni locali e la funzione membro `getloc` restituisce una copia dell'oggetto delle impostazioni locali.  
  
## Requisiti  
 **Intestazione:** \<regex\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<regex\>](../standard-library/regex.md)   
 [regex\_traits](../standard-library/regex-traits-class.md)   
 [regex\_traits \< char \> \(classe\)](../standard-library/regex-traits-char-class.md)   
 [Classe regex\_traits\<wchar\_t\>](../standard-library/regex-traits-wchar-t-class.md)