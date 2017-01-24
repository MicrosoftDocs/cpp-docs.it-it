---
title: "Struct pointer_traits | Microsoft Docs"
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
  - "memory/std::pointer_traits::element_type"
  - "memory/std::pointer_traits::pointer"
  - "memory/std::pointer_traits"
  - "memory/std::pointer_traits::difference_type"
  - "memory/std::pointer_traits::rebind"
  - "xmemory0/std::pointer_traits::element_type"
  - "xmemory0/std::pointer_traits::pointer"
  - "xmemory0/std::pointer_traits"
  - "xmemory0/std::pointer_traits::difference_type"
  - "xmemory0/std::pointer_traits::rebind"
dev_langs: 
  - "C++"
ms.assetid: 545aecf1-3561-4859-8b34-603c079fe1b3
caps.latest.revision: 13
caps.handback.revision: 2
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Struct pointer_traits
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Vengono fornite informazioni richieste da un oggetto di classe modello `allocator_traits` per descrivere un allocatore con tipo di puntatore `Ptr`.  
  
## Sintassi  
  
```cpp  
template<class Ptr>  
    struct pointer_traits;  
```  
  
## Note  
 La stampante può essere un puntatore non elaborato di tipo `Ty *` o di classe con le seguenti proprietà.  
  
```  
template<class Ty, class... Rest>  
    struct Ptr  
    { // describes a pointer type usable by allocators  
    typedef Ptr pointer;  
    typedef T1 element_type; // optional  
    typedef T2 difference_type; // optional  
    template<class Other>  
        using rebind = typename Ptr<Other, Rest...>; // optional  
  
    static pointer pointer_to(element_type& obj); // optional  
    };  
```  
  
> [!WARNING]
>  Mentre lo standard C\+\+ specifica il membro di `rebind` come modello di alias, i mezzi di Visual C\+\+ riassociano come `struct`.  
  
### Definizioni typedef  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`typedef T2 difference_type`|Il tipo `T2` è `Ptr::difference_type` se il tipo non è presente in caso contrario, `ptrdiff_t`.  Se `Ptr` è un puntatore non elaborato, il tipo viene `ptrdiff_t`.|  
|`typedef T1 element_type`|Il tipo `T1` è `Ptr::element_type` se il tipo non è presente in caso contrario, `Ty`.  Se `Ptr` è un puntatore non elaborato, il tipo viene `Ty`.|  
|`typedef Ptr pointer`|Il tipo è `Ptr`.|  
  
### Strutture  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`pointer_traits::rebind`|Tenta di convertire il tipo di puntatore nel tipo sottostante specificato.|  
  
### Metodi  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo pointer\_traits::pointer\_to](../Topic/pointer_traits::pointer_to%20Method.md)|Converte un riferimento arbitrario a un oggetto di classe `Ptr`.|  
  
## Requisiti  
 **Header:** \<memory\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<memory\>](../standard-library/memory.md)   
 [Classe allocator\_traits](../standard-library/allocator-traits-class.md)