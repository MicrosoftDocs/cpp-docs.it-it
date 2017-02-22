---
title: "Classe is_polymorphic | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.is_polymorphic"
  - "is_polymorphic"
  - "std::tr1::is_polymorphic"
  - "std.is_polymorphic"
  - "std::is_polymorphic"
  - "type_traits/std::is_polymorphic"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_polymorphic (classe) [TR1]"
  - "is_polymorphic"
ms.assetid: 4e1704db-d6f9-4154-a100-0ba02a373f20
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe is_polymorphic
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se il tipo ha una funzione virtuale.  
  
## Sintassi  
  
```  
template<class Ty>  
    struct is_polymorphic;  
```  
  
#### Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## Note  
 Un'istanza del predicato di tipo contiene true se il tipo `Ty` è una classe dichiara o eredita una funzione virtuale; in caso contrario, contiene false.  
  
## Esempio  
  
```  
// std_tr1__type_traits__is_polymorphic.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
struct throws   
    {   
    throws() throw(int)   
        {   
        }   
  
    throws(const throws&) throw(int)   
        {   
        }   
  
    throws& operator=(const throws&) throw(int)   
        {   
        }   
  
    virtual ~throws()   
        {   
        }   
  
    int val;   
    };   
  
int main()   
    {   
    std::cout << "is_polymorphic<trivial> == " << std::boolalpha   
        << std::is_polymorphic<trivial>::value << std::endl;   
    std::cout << "is_polymorphic<throws> == " << std::boolalpha   
        << std::is_polymorphic<throws>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **is\_polymorphic\<trivial\> \=\= false**  
**is\_polymorphic\<throws\> \=\= true**   
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [Classe is\_abstract](../standard-library/is-abstract-class.md)