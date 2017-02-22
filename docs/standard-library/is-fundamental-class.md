---
title: "Classe is_fundamental | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "is_fundamental"
  - "std.tr1.is_fundamental"
  - "std::tr1::is_fundamental"
  - "std.is_fundamental"
  - "std::is_fundamental"
  - "type_traits/std::is_fundamental"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_fundamental (classe) [TR1]"
  - "is_fundamental"
ms.assetid: b84eee84-2fb2-4611-beaf-b384074d8b6a
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe is_fundamental
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se il tipo è void o aritmetico.  
  
## Sintassi  
  
```  
template<class Ty>  
    struct is_fundamental;  
```  
  
#### Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## Note  
 Un'istanza del predicato di tipo contiene true se il tipo `Ty` è un tipo fondamentale, ovvero `void`, un tipo integrale, un tipo a virgola mobile o un form `cv-qualified` di uno di essi; in caso contrario, contiene false.  
  
## Esempio  
  
```  
// std_tr1__type_traits__is_fundamental.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
int main()   
    {   
    std::cout << "is_fundamental<trivial> == " << std::boolalpha   
        << std::is_fundamental<trivial>::value << std::endl;   
    std::cout << "is_fundamental<int> == " << std::boolalpha   
        << std::is_fundamental<int>::value << std::endl;   
    std::cout << "is_fundamental<const float> == " << std::boolalpha   
        << std::is_fundamental<const float>::value << std::endl;   
    std::cout << "is_fundamental<void> == " << std::boolalpha   
        << std::is_fundamental<void>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **is\_fundamental\<trivial\> \=\= false**  
**is\_fundamental\<int\> \=\= true**  
**is\_fundamental\<const float\> \=\= true**  
**is\_fundamental\<void\> \=\= true**   
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [Classe is\_compound](../standard-library/is-compound-class.md)