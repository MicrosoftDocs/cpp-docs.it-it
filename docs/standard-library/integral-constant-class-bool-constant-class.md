---
title: "integral_constant (classe), bool_constant (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.integral_constant"
  - "integral_constant"
  - "std::tr1::integral_constant"
  - "std.integral_constant"
  - "std::integral_constant"
  - "type_traits/std::integral_constant"
  - "std.bool_constant"
  - "std::bool_constant"
  - "type_traits/std::bool_constant"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "integral_constant (classe) [TR1]"
  - "integral_constant"
  - "bool_constant"
ms.assetid: 11c002c6-4d31-4042-9341-f2543f43e108
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# integral_constant (classe), bool_constant (classe)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rende costante integrale di un tipo e valore.  
  
## Sintassi  
  
```  
template <class T, T v>  
    struct integral_constant {  
        static constexpr T value = v;  
        typedef T value_type;  
        typedef integral_constant<T, v> type;  
        constexpr operator value_type() const noexcept { return (value); }  
        constexpr value_type operator()() const noexcept { return (value); }  
    };  
  
template <bool v>  
    using bool_constant = integral_constant<bool, v>;  
  
```  
  
#### Parametri  
 `T`  
 Il tipo della costante.  
  
 `v`  
 Il valore della costante.  
  
## Note  
 La `integral_constant` classe modello, quando specializzato con un tipo integrale `T` e un valore `v` di tale tipo rappresenta un oggetto che contiene una costante di tipo integrale con il valore specificato. Il membro denominato `type` è un alias per il tipo di specializzazione di modello generate e `value` membro contiene il valore `v` utilizzato per creare la specializzazione.  
  
 La `bool_constant` classe modello è una specializzazione esplicita parziale di `integral_constant` che utilizza `bool` come il `T` argomento.  
  
## Esempio  
  
```cpp  
// std__type_traits__integral_constant.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    std::cout << "integral_constant<int, 5> == "   
        << std::integral_constant<int, 5>::value << std::endl;   
    std::cout << "integral_constant<bool, false> == " << std::boolalpha   
        << std::integral_constant<bool, false>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
integral_constant < int, 5 > = = 5 integral_constant false < bool > = = false  
```  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [Typedef false\_type](../Topic/false_type%20Typedef.md)   
 [Typedef true\_type](../Topic/true_type%20Typedef.md)