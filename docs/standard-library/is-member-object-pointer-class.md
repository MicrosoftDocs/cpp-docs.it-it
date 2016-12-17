---
title: "Classe is_member_object_pointer | Microsoft Docs"
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
  - "is_member_object_pointer"
  - "std.tr1.is_member_object_pointer"
  - "std::tr1::is_member_object_pointer"
  - "std.is_member_object_pointer"
  - "std::is_member_object_pointer"
  - "type_traits/std::is_member_object_pointer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_member_object_pointer (classe) [TR1]"
  - "is_member_object_pointer"
ms.assetid: 64f9cdf3-4621-4310-a076-a7bc986926b9
caps.latest.revision: 19
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe is_member_object_pointer
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se il tipo è un puntatore a un oggetto membro.  
  
## Sintassi  
  
```  
template<class Ty>  
    struct is_member_object_pointer;  
```  
  
#### Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## Note  
 Un'istanza del predicato di tipo contiene true se il tipo `Ty` è un puntatore a un oggetto membro o un puntatore `cv-qualified`a un oggetto membro; in caso contrario, contiene false.  Si noti che `is_member_object_pointer` contiene false se `Ty` è un puntatore a una funzione membro.  
  
## Esempio  
  
```  
// std_tr1__type_traits__is_member_object_pointer.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
struct functional   
    {   
    int f();   
    };   
  
int main()   
    {   
    std::cout << "is_member_object_pointer<trivial *> == "   
        << std::boolalpha   
        << std::is_member_object_pointer<trivial *>::value   
        << std::endl;   
    std::cout << "is_member_object_pointer<int trivial::*> == "   
        << std::boolalpha   
        << std::is_member_object_pointer<int trivial::*>::value   
        << std::endl;   
    std::cout << "is_member_object_pointer<int (functional::*)()> == "   
        << std::boolalpha   
        << std::is_member_object_pointer<int (functional::*)()>::value   
        << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **is\_member\_object\_pointer\<trivial \*\> \=\= false**  
**is\_member\_object\_pointer\<int trivial::\*\> \=\= true**  
**is\_member\_object\_pointer\<int \(functional::\*\)\(\)\> \=\= false**   
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [Classe is\_member\_pointer](../standard-library/is-member-pointer-class.md)