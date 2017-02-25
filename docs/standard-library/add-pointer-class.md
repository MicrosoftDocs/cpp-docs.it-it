---
title: "Classe add_pointer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::tr1::add_pointer"
  - "std.tr1.add_pointer"
  - "add_pointer"
  - "std.add_pointer"
  - "std::add_pointer"
  - "type_traits/std::add_pointer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "add_pointer (classe) [TR1]"
  - "add_pointer"
ms.assetid: d8095cb0-6578-4143-b78f-87f82485298c
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# Classe add_pointer
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Crea un puntatore al tipo da un tipo specificato.  
  
## Sintassi  
  
```  
template<class Ty>  
    struct add_pointer;  
  
template<class T>  
using add_pointer_t = typename add_pointer<T>::type;  
```  
  
#### Parametri  
 `Ty`  
 Tipo da modificare.  
  
## Note  
 Il tipo typedef del membro assegna allo stesso tipo il nome di `remove_reference<T>::type*`.  
  
 Poiché non è valido creare un puntatore da un riferimento, `add_pointer` rimuove il riferimento, se presente, dal tipo specificato prima di creare un puntatore al tipo.  È pertanto possibile utilizzare un tipo con `add_pointer` senza doversi preoccupare che il tipo sia un riferimento.  
  
## Esempio  
 Nell'esempio seguente viene illustrato che `add_pointer` di un tipo equivale a un puntatore a tale tipo.  
  
```  
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    std::add_pointer_t<int> *p = (int **)0;   
  
    p = p;  // to quiet "unused" warning   
    std::cout << "add_pointer_t<int> == "   
        << typeid(*p).name() << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **add\_pointer\_t\<int\> \=\= int \***   
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [Classe remove\_pointer](../standard-library/remove-pointer-class.md)