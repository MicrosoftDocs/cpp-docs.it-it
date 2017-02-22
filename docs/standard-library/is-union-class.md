---
title: "Classe is_union | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "is_union"
  - "std::tr1::is_union"
  - "std.tr1.is_union"
  - "std.is_union"
  - "std::is_union"
  - "type_traits/std::is_union"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_union (classe) [TR1]"
  - "is_union"
ms.assetid: 80eda256-40b8-4db5-9ac1-d58bb8032a3e
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe is_union
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se il tipo è un'unione.  
  
## Sintassi  
  
```  
template<class Ty>  
    struct is_union;  
```  
  
#### Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## Note  
 Un'istanza del predicato di tipo contiene true se il tipo `Ty` è un tipo di unione o un form `cv-qualified` di un tipo di unione; in caso contrario, contiene false.  
  
## Esempio  
  
```  
// std_tr1__type_traits__is_union.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
union ints   
    {   
    int in;   
    long lo;   
    };   
  
int main()   
    {   
    std::cout << "is_union<trivial> == " << std::boolalpha   
        << std::is_union<trivial>::value << std::endl;   
    std::cout << "is_union<int> == " << std::boolalpha   
        << std::is_union<int>::value << std::endl;   
    std::cout << "is_union<ints> == " << std::boolalpha   
        << std::is_union<ints>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **is\_union\<trivial\> \=\= false**  
**is\_union\<int\> \=\= false**  
**is\_union\<ints\> \=\= true**   
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [Classe is\_class](../standard-library/is-class-class.md)