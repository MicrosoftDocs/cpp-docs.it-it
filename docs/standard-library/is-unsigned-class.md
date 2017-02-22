---
title: "Classe is_unsigned | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::tr1::is_unsigned"
  - "is_unsigned"
  - "std.tr1.is_unsigned"
  - "std.is_unsigned"
  - "std::is_unsigned"
  - "type_traits/std::is_unsigned"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_unsigned (classe) [TR1]"
  - "is_unsigned"
ms.assetid: ba5bec3d-796b-4e54-8595-a3941ec6a8dc
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe is_unsigned
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se il tipo è un Unsigned Integer.  
  
## Sintassi  
  
```  
template<class Ty>  
    struct is_unsigned;  
```  
  
#### Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## Note  
 Un'istanza del predicato di tipo contiene true se il tipo `Ty` è un tipo integrale unsigned o un o un tipo integrale unsigned `cv-qualified`; in caso contrario, contiene false.  
  
## Esempio  
  
```  
// std_tr1__type_traits__is_unsigned.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
int main()   
    {   
    std::cout << "is_unsigned<trivial> == " << std::boolalpha   
        << std::is_unsigned<trivial>::value << std::endl;   
    std::cout << "is_unsigned<int> == " << std::boolalpha   
        << std::is_unsigned<int>::value << std::endl;   
    std::cout << "is_unsigned<unsigned int> == " << std::boolalpha   
        << std::is_unsigned<unsigned int>::value << std::endl;   
    std::cout << "is_unsigned<float> == " << std::boolalpha   
        << std::is_unsigned<float>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **is\_unsigned\<trivial\> \=\= false**  
**is\_unsigned\<int\> \=\= false**  
**is\_unsigned\<unsigned int\> \=\= true**  
**is\_unsigned\<float\> \=\= false**   
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [Classe is\_signed](../standard-library/is-signed-class.md)