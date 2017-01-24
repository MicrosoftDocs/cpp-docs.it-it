---
title: "Classe add_const | Microsoft Docs"
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
  - "std::tr1::add_const"
  - "add_const"
  - "std.tr1.add_const"
  - "std.add_const"
  - "std::add_const"
  - "type_traits/std::add_const"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "add_const (classe) [TR1]"
  - "add_const"
ms.assetid: 1262a1eb-8c9c-4dd6-9f43-88ba280182f1
caps.latest.revision: 19
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe add_const
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Crea un tipo costante dal tipo.  
  
## Sintassi  
  
```  
template<class Ty>  
    struct add_const;  
```  
  
#### Parametri  
 `Ty`  
 Tipo da modificare.  
  
## Note  
 Un'istanza del modificatore di tipo contiene un tipo modificato che è `Ty` se `Ty` è un riferimento, una funzione o un tipo qualificato da const; in caso contrario, `const Ty`.  
  
## Esempio  
  
```  
// std_tr1__type_traits__add_const.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    std::add_const<int>::type *p = (const int *)0;   
  
    p = p;  // to quiet "unused" warning   
    std::cout << "add_const<int> == "   
        << typeid(*p).name() << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **add\_const\<int\> \=\= int**   
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [Classe remove\_const](../standard-library/remove-const-class.md)