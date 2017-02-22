---
title: "Classe is_same | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::tr1::is_same"
  - "std.tr1.is_same"
  - "is_same"
  - "std.is_same"
  - "std::is_same"
  - "type_traits/std::is_same"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_same (classe) [TR1]"
  - "is_same"
ms.assetid: d9df6c1d-c270-4ec2-802a-af275648dd1d
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe is_same
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se due tipi sono uguali.  
  
## Sintassi  
  
```  
template<class Ty1, class Ty2>  
    struct is_same;  
```  
  
#### Parametri  
 `Ty1`  
 Primo tipo su cui eseguire una query.  
  
 `Ty2`  
 Secondo tipo su cui eseguire una query.  
  
## Note  
 Un'istanza del predicato di tipo contiene true se i tipi `Ty1` e `Ty2` sono dello stesso tipo; in caso contrario, contiene false.  
  
## Esempio  
  
```  
// std_tr1__type_traits__is_same.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct base   
    {   
    int val;   
    };   
  
struct derived   
    : public base   
    {   
    };   
  
int main()   
    {   
    std::cout << "is_same<base, base> == " << std::boolalpha   
        << std::is_same<base, base>::value << std::endl;   
    std::cout << "is_same<base, derived> == " << std::boolalpha   
        << std::is_same<base, derived>::value << std::endl;   
    std::cout << "is_same<derived, base> == " << std::boolalpha   
        << std::is_same<derived, base>::value << std::endl;   
    std::cout << "is_same<int, int> == " << std::boolalpha   
        << std::is_same<int, int>::value << std::endl;   
    std::cout << "is_same<int, const int> == " << std::boolalpha   
        << std::is_same<int, const int>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **is\_same\<base, base\> \=\= true**  
**is\_same\<base, derived\> \=\= false**  
**is\_same\<derived, base\> \=\= false**  
**is\_same\<int, int\> \=\= true**  
**is\_same\<int, const int\> \=\= false**   
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [Classe is\_convertible](../standard-library/is-convertible-class.md)   
 [Classe is\_base\_of](../standard-library/is-base-of-class.md)