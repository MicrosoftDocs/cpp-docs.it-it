---
title: "Classe is_pod | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.is_pod"
  - "is_pod"
  - "std::tr1::is_pod"
  - "std.is_pod"
  - "std::is_pod"
  - "type_traits/std::is_pod"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_pod (classe) [TR1]"
  - "is_pod"
ms.assetid: d73ebdee-746b-4082-9fa4-2db71432eb0e
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# Classe is_pod
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se il tipo è POD.  
  
## Sintassi  
  
```  
template<class Ty>  
    struct is_pod;  
```  
  
#### Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## Note  
 `is_pod<Ty>::value` è `true` se il tipo `Ty` è POD \(Plain Old Data, dati non aggiornati\).  In caso contrario, sarà `false`.  
  
 I tipi aritmetici, i tipi di enumerazione, i tipi di puntatori e i tipi di puntatore a membro sono POD.  
  
 Una versione cv\-qualified di un tipo POD è a sua volta un tipo POD.  
  
 Una matrice di POD è a sua volta POD.  
  
 Uno struct o un'unione, in cui tutti i membri dati non statici sono POD, è a sua volta POD se:  
  
-   Non ha costruttori dichiarati dall'utente.  
  
-   Non ha membri dati non statici privati o protetti.  
  
-   Non ha classi di base.  
  
-   Non ha funzioni virtuali.  
  
-   Non ha membri dati non statici di tipo di riferimento.  
  
-   Non ha un operatore di assegnazione di copia definito dall'utente.  
  
-   Non ha un distruttore definito dall'utente.  
  
 Pertanto, è possibile creare in modo ricorsivo matrici e struct POD che contengono matrici e struct POD.  
  
## Esempio  
  
```  
// std_tr1__type_traits__is_pod.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
struct throws   
    {   
    throws() throw(int)   
        {   
        }   
  
    throws(const throws&) throw(int)   
        {   
        }   
  
    throws& operator=(const throws&) throw(int)   
        {   
        }   
  
    int val;   
    };   
  
int main()   
    {   
    std::cout << "is_pod<trivial> == " << std::boolalpha   
        << std::is_pod<trivial>::value << std::endl;   
    std::cout << "is_pod<int> == " << std::boolalpha   
        << std::is_pod<int>::value << std::endl;   
    std::cout << "is_pod<throws> == " << std::boolalpha   
        << std::is_pod<throws>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **is\_pod\<trivial\> \=\= true**  
**is\_pod\<int\> \=\= true**  
**is\_pod\<throws\> \=\= false**   
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)