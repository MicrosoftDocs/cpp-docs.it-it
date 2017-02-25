---
title: "Classe is_empty | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::tr1::is_empty"
  - "std.tr1.is_empty"
  - "is_empty"
  - "std.is_empty"
  - "std::is_empty"
  - "type_traits/std::is_empty"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_empty (classe) [TR1]"
  - "is_empty"
ms.assetid: 44a6fc92-7e55-4fbe-9a24-2a0ce2dccba0
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe is_empty
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se il tipo è una classe vuota.  
  
## Sintassi  
  
```  
template<class Ty>  
    struct is_empty;  
```  
  
#### Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## Note  
 Un'istanza del predicato di tipo contiene true se il tipo `Ty` è una classe vuota; in caso contrario, contiene false.  
  
## Esempio  
  
```  
// std_tr1__type_traits__is_empty.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct empty   
    {   
    };   
  
struct trivial   
    {   
    int val;   
    };   
  
int main()   
    {   
    std::cout << "is_empty<trivial> == " << std::boolalpha   
        << std::is_empty<trivial>::value << std::endl;   
    std::cout << "is_empty<empty> == " << std::boolalpha   
        << std::is_empty<empty>::value << std::endl;   
    std::cout << "is_empty<int> == " << std::boolalpha   
        << std::is_empty<int>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
is_empty < trivial > = = false is_empty < vuoto > = = true is_empty < int > = = false  
```  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)