---
title: "Classe aligned_union | Microsoft Docs"
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
  - "aligned_union"
  - "std.aligned_union"
  - "std::aligned_union"
  - "type_traits/std::aligned_union"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "aligned_union"
ms.assetid: 9931a44d-3a67-4f29-a0f6-d47a7cf560ac
caps.latest.revision: 10
caps.handback.revision: 2
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe aligned_union
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Fornisce un tipo POD adeguatamente allineato e sufficientemente grande per archiviare un tipo di unione e la dimensione della richiesta.  
  
## Sintassi  
  
```  
template <std::size_t Len, class... Types>  
    struct aligned_union;  
  
template <std::size_t Len, class... Types>  
    using aligned_union_t = typename aligned_union<Len, Types...>::type;  
```  
  
#### Parametri  
 `Len`  
 Valore di allineamento per il tipo più grande dell'unione.  
  
 `Types`  
 Tipi distinti nell'unione sottostante.  
  
## Note  
 Utilizzare la classe modello per ottenere l'allineamento e la dimensione necessaria per archiviare un'unione nell'archivio non inizializzato. Il membro typedef `type` nomi un PODCAST digitare adatto per l'archiviazione di qualsiasi tipo elencato nella `Types`; la dimensione minima è `Len`. Il membro statico `alignment_value` di tipo `std::size_t` contiene l'allineamento più rigorose richieste di tutti i tipi elencati nella `Types`.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare `aligned_union` per allocare un buffer di stack allineato per inserire un'unione.  
  
```  
// std__type_traits__aligned_union.cpp  
#include <iostream>  
#include <type_traits>  
  
union U_type  
{  
    int i;  
    float f;  
    double d;  
    U_type(float e) : f(e) {}  
};  
  
typedef std::aligned_union<16, int, float, double>::type aligned_U_type;  
  
int main()  
{  
    // allocate memory for a U_type aligned on a 16-byte boundary  
    aligned_U_type au;  
    // do placement new in the aligned memory on the stack  
    U_type* u = new (&au) U_type(1.0f);  
    if (nullptr != u)  
    {  
        std::cout << "value of u->i is " << u->i << std::endl;  
        // must clean up placement objects manually!  
        u->~U_type();  
    }  
}  
```  
  
```Output  
valore è -> i è 1065353216  
```  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [Classe alignment\_of](../standard-library/alignment-of-class.md)