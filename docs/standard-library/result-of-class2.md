---
title: "Classe result_of | Microsoft Docs"
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
  - "functional/std::tr1::result_of"
  - "std::tr1::result_of"
  - "result_of"
  - "std.tr1.result_of"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "result_of (classe) [TR1]"
ms.assetid: 14ec0040-07f1-45a5-80b5-d0c9f9b00c8f
caps.latest.revision: 20
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe result_of
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tipo restituito di chiamare oggetto di cui effettua il wrapping.  
  
## Sintassi  
  
```  
template<class Ty>  
    struct result_of {  
    typedef T0 type;  
    };  
```  
  
#### Parametri  
 `Ty`  
 Una descrizione di una chiamata di funzione \(vedere la sezione relativa alle osservazioni\).  
  
## Note  
 La classe modello definisce il relativo membro `type` come un sinonimo del tipo restituito di una chiamata di funzione descritta dal relativo argomento di modello `Ty`.  Un argomento di template deve essere nel formato `Fty(T1, T2, ..., TN)`, in cui `Fty` è un tipo che può essere chiamato.  Il modello determina il tipo restituito come il primo delle seguenti regole che si applica a:  
  
-   se `Fty` è un puntatore a funzione tipo `R(*)(U1, U2, ..., UN)` il tipo restituito è `R`;  
  
-   se `Fty` è un riferimento al tipo di funzione `R(&)(U1, U2, ..., UN)` il tipo restituito è `R`;  
  
-   se `Fty` è un puntatore al tipo `R(U1::*)(U2, ..., UN)` funzione membro del tipo restituito è `R`;  
  
-   se `Fty` è un puntatore al tipo `R U1::*` del membro dati il tipo restituito è `R`;  
  
-   se `Fty` è una classe con un typedef `result_type` membro del tipo restituito è `Fty::result_type`;  
  
-   se `N` è 0 \(ovvero `Ty` è espresso in formato `Fty()`\) che il tipo restituito è `void`;  
  
-   se `Fty` è una classe con un modello del membro denominato `result` il tipo restituito è `Fty::result<T1, T2, ..., TN>::type`;  
  
-   in tutti gli altri casi di errore.  
  
## Esempio  
  
```  
// std_tr1__functional__result_of.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
double square(double x)   
    {   
    return (x * x);   
    }   
  
template<class Fun,   
    class Arg>   
    void test_result(const Fun& fun, Arg arg)   
    {   
    typename std::result_of<Fun(Arg)>::type val = fun(arg);   
    std::cout << "val == " << val << std::endl;   
    }   
  
int main()   
    {   
    test_result(&square, 3.0);   
  
    return (0);   
    }  
  
```  
  
  **val \=\= 9**   
## Requisiti  
 **Intestazione:** \<funzionale\>  
  
 **Spazio dei nomi:** std