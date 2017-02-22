---
title: "Classe remove_cv | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "remove_cv"
  - "std::tr1::remove_cv"
  - "std.tr1.remove_cv"
  - "std.remove_cv"
  - "std::remove_cv"
  - "type_traits/std::remove_cv"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "remove_cv (classe) [TR1]"
  - "remove_cv"
ms.assetid: 8502602a-1c80-479c-84e0-33bd1d6496d6
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# Classe remove_cv
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Crea un tipo non const\/volatile dal tipo.  
  
## Sintassi  
  
```  
template<class T>  
    struct remove_cv;  
  
template<class T>  
  using remove_cv_t = typename remove_cv<T>::type;  
```  
  
#### Parametri  
 `T`  
 Tipo da modificare.  
  
## Note  
 Un'istanza di `remove_cv<T>` contiene un tipo modificato che è `T1` quando `T` è nel formato `const T1`, `volatile T1` o `const volatile T1`; in caso contrario, `T`.  
  
## Esempio  
  
```  
  
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    int *p = (std::remove_cv_t<const volatile int> *)0;   
  
    p = p;  // to quiet "unused" warning   
    std::cout << "remove_cv_t<const volatile int> == "   
        << typeid(*p).name() << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **remove\_cv\_t\<const volatile int\> \=\= int**   
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [Classe remove\_const](../standard-library/remove-const-class.md)   
 [Classe remove\_volatile](../standard-library/remove-volatile-class.md)