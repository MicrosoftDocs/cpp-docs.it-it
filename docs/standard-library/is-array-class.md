---
title: "Classe is_array | Microsoft Docs"
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
  - "is_array"
  - "std.tr1.is_array"
  - "std::tr1::is_array"
  - "std.is_array"
  - "std::is_array"
  - "type_traits/std::is_array"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_array (classe) [TR1]"
  - "is_array"
ms.assetid: 61fb2201-8de3-4746-9721-617f02df170f
caps.latest.revision: 19
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe is_array
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se è di tipo matrice.  
  
## Sintassi  
  
```  
template<class Ty>  
    struct is_array;  
```  
  
#### Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## Note  
 Un'istanza del predicato di tipo contiene true se il tipo `Ty` è un tipo matrice; in caso contrario, contiene false.  
  
## Esempio  
  
```  
// std_tr1__type_traits__is_array.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
int main()   
    {   
    std::cout << "is_array<trivial> == " << std::boolalpha   
        << std::is_array<trivial>::value << std::endl;   
    std::cout << "is_array<int> == " << std::boolalpha   
        << std::is_array<int>::value << std::endl;   
    std::cout << "is_array<int[5]> == " << std::boolalpha   
        << std::is_array<int[5]>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **is\_array\<trivial\> \=\= false**  
**is\_array\<int\> \=\= false**  
**is\_array\<int\[5\]\> \=\= true**   
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [Classe extent](../standard-library/extent-class.md)   
 [Classe rank](../standard-library/rank-class.md)