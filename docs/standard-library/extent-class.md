---
title: "Classe extent | Microsoft Docs"
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
  - "std.tr1.extent"
  - "extent"
  - "std::tr1::extent"
  - "std.extent"
  - "std::extent"
  - "type_traits/std::extent"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "extent (classe) [TR1]"
  - "extent"
ms.assetid: 6d16263d-90b2-4330-9ec7-b59ed898792d
caps.latest.revision: 20
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe extent
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene una dimensione di matrice.  
  
## Sintassi  
  
```  
template<class Ty, unsigned I = 0>  
    struct extent;  
```  
  
#### Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
 `I`  
 La matrice associata alla query.  
  
## Note  
 Se `Ty` è un tipo di matrice con almeno `I` dimensioni, la query di tipo contiene il numero di elementi nella dimensione specificata da `I`.  Se `Ty` non è un tipo di matrice o la sua classificazione è minore di `I`, o se `I` è zero e `Ty` è di tipo "matrice di valori associati sconosciuti di `U`", la query di tipo contiene il valore 0.  
  
## Esempio  
  
```  
// std_tr1__type_traits__extent.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    std::cout << "extent 0 == "   
        << std::extent<int[5][10]>::value << std::endl;   
    std::cout << "extent 1 == "   
        << std::extent<int[5][10], 1>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **extent 0 \=\= 5**  
**extent 1 \=\= 10**   
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [Classe remove\_all\_extents](../standard-library/remove-all-extents-class.md)   
 [Classe remove\_extent](../standard-library/remove-extent-class.md)