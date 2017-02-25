---
title: "Classe is_member_pointer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::tr1::is_member_pointer"
  - "is_member_pointer"
  - "std.tr1.is_member_pointer"
  - "std.is_member_pointer"
  - "std::is_member_pointer"
  - "type_traits/std::is_member_pointer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_member_pointer (classe) [TR1]"
  - "is_member_pointer"
ms.assetid: da07ff4e-9ee0-4baa-ad93-1741f10913d1
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe is_member_pointer
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verificare se il tipo è un puntatore al membro.  
  
## Sintassi  
  
```  
template<class Ty>  
    struct is_member_pointer;  
```  
  
#### Parametri  
 `Ty`  
 Il tipo da eseguire la query.  
  
## Note  
 Un'istanza del predicato del tipo ha valore true se il tipo `Ty` è un puntatore a una funzione membro o un puntatore all'oggetto membro, o un form di `cv-qualified` di uno di essi è contenuta in caso contrario, false.  
  
## Esempio  
  
```  
// std_tr1__type_traits__is_member_pointer.cpp   
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
    std::cout << "is_member_pointer<trivial *> == "   
        << std::boolalpha   
        << std::is_member_pointer<trivial *>::value   
        << std::endl;   
    std::cout << "is_member_pointer<int trivial::*> == "   
        << std::boolalpha   
        << std::is_member_pointer<int trivial::*>::value   
        << std::endl;   
    std::cout << "is_member_pointer<int (functional::*)()> == "   
        << std::boolalpha   
        << std::is_member_pointer<int (functional::*)()>::value   
        << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **is\_member\_pointertrivial\<\*\> \=\= false**  
**\=\=\<di trivial::\*\> di is\_member\_pointerint true**  
**\=\=\<di is\_member\_pointerint \(functional::\*\) \(true\)\>**   
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [Classe is\_member\_function\_pointer](../standard-library/is-member-function-pointer-class.md)   
 [Classe is\_member\_object\_pointer](../standard-library/is-member-object-pointer-class.md)   
 [Classe is\_pointer](../standard-library/is-pointer-class.md)