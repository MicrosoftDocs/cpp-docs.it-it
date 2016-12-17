---
title: "Classe bad_function_call | Microsoft Docs"
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
  - "std::tr1::bad_function_call"
  - "functional/std::tr1::bad_function_call"
  - "std.tr1.bad_function_call"
  - "bad_function_call"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bad_function_call (classe) [TR1]"
ms.assetid: b70a0268-43ff-4f3b-a283-faf1cb172d4c
caps.latest.revision: 20
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe bad_function_call
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica una chiamata a una funzione non corretta.  
  
## Sintassi  
  
```  
class bad_function_call  
    : public std::exception {  
    };  
```  
  
## Note  
 La classe viene descritta un'eccezione generata per indicare che una chiamata a `operator()` su un oggetto [Classe function](../standard-library/function-class.md) è fallita perché l'oggetto vuota.  
  
## Esempio  
  
```  
// std_tr1__functional__bad_function_call.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
typedef double (Fd)(double);   
typedef std::function<Fd> Myfunc;   
  
double square(double x)   
    {   
    return (x * x);   
    }   
  
int main()   
    {   
    Myfunc fd0(square);   
    std::cout << "x * x == " << fd0(3) << std::endl;   
  
    try   
        {   
        Myfunc fd1;   
        std::cout << fd1(3) << std::endl;   
        }   
    catch (const std::bad_function_call&)   
        {   
        std::cout << "bad function call" << std::endl;   
        }   
    catch (...)   
        {   
        std::cout << "unknown exception" << std::endl;   
        }   
  
    return (0);   
    }  
  
```  
  
  **x \* x \=\= 9**  
**chiamata a una funzione non corretta**   
## Requisiti  
 **Intestazione:** \<funzionale\>  
  
 **Spazio dei nomi:** std