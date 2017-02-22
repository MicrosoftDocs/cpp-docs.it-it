---
title: "Classe remove_all_extents | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.remove_all_extents"
  - "std::tr1::remove_all_extents"
  - "remove_all_extents"
  - "std.remove_all_extents"
  - "std::remove_all_extents"
  - "type_traits/std::remove_all_extents"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "remove_all_extents (classe) [TR1]"
  - "remove_all_extents"
ms.assetid: 548dc536-82e7-423a-b8c1-443d66d9632e
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# Classe remove_all_extents
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Crea un tipo non matrice da un tipo matrice.  
  
## Sintassi  
  
```  
template<class T>  
    struct remove_all_extents;  
  
template<class T>  
  using remove_all_extents_t = typename remove_all_extents<T>::type;  
```  
  
#### Parametri  
 `T`  
 Tipo da modificare.  
  
## Note  
 Un'istanza di `remove_all_extents<T>` contiene un tipo modificato che è il tipo di elemento del tipo di matrice `T` con tutte le dimensioni della matrice rimosse o `T` se `T` non è un tipo di matrice.  
  
## Esempio  
  
```  
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    std::cout << "remove_all_extents<int> == "   
        << typeid(std::remove_all_extents_t<int>).name()   
        << std::endl;   
    std::cout << "remove_all_extents_t<int[5]> == "   
        << typeid(std::remove_all_extents_t<int[5]>).name()   
        << std::endl;   
    std::cout << "remove_all_extents_t<int[5][10]> == "   
        << typeid(std::remove_all_extents_t<int[5][10]>).name()   
        << std::endl;   
  
    return (0);   
    }  
  
```  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [Classe remove\_extent](../standard-library/remove-extent-class.md)