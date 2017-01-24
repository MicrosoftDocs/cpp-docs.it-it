---
title: "Classe add_rvalue_reference | Microsoft Docs"
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
  - "type_traits/std::add_rvalue_reference"
  - "std::add_rvalue_reference"
  - "add_rvalue_reference"
  - "std.add_rvalue_reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Classe add_rvalue_reference"
ms.assetid: 76b0cb7c-1031-45d0-b409-f03ab0297580
caps.latest.revision: 11
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe add_rvalue_reference
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Crea un tipo di riferimento rvalue del parametro di modello, in caso di un tipo di oggetto o una funzione. In caso contrario, a causa la semantica di riferimento di compressione, il tipo è lo stesso come parametro di modello.  
  
## Sintassi  
  
```cpp  
template<class T>  
    struct add_rvalue_reference;  
  
template<class T>  
    using add_rvalue_reference_t = typename add_rvalue_reference<T>::type;  
```  
  
#### Parametri  
 T  
 Tipo da modificare.  
  
## Note  
 La `add_rvalue_reference` classe dispone di un membro denominato `type`, che è un alias per il tipo di un riferimento rvalue al parametro di modello `T`. La semantica di compressione dei riferimenti implica che, per i tipi non oggetto e non di funzione `T`, `T&&` è un `T`. Ad esempio, quando `T` è un tipo di riferimento lvalue,  `add_rvalue_reference<T>::type` è il tipo di riferimento lvalue, non un riferimento rvalue.  
  
 Per comodità, \< type\_traits \> definisce un modello di supporto, `add_rvalue_reference_t`, tale alias di `type` membro del `add_rvalue_reference`.  
  
## Esempio  
 Questo esempio di codice utilizza static\_assert per mostrare come tipi di riferimento rvalue vengono creati utilizzando `add_rvalue_reference` e `add_rvalue_reference_t`, e come il risultato di `add_rvalue_reference` su un riferimento lvalue tipo non è un riferimento rvalue, ma consente di comprimere al tipo di riferimento lvalue.  
  
```cpp  
// ex_add_rvalue_reference.cpp  
// Build by using: cl /EHsc /W4 ex_add_rvalue_reference.cpp  
#include <type_traits>   
#include <iostream>   
#include <string>  
  
using namespace std;  
int main()  
{  
    static_assert(is_same<add_rvalue_reference<string>::type, string&&>::value,   
        "Expected add_rvalue_reference_t<string> to be string&&");  
    static_assert(is_same<add_rvalue_reference_t<string*>, string*&&>::value,   
        "Expected add_rvalue_reference_t<string*> to be string*&&");  
    static_assert(is_same<add_rvalue_reference<string&>::type, string&>::value,   
        "Expected add_rvalue_reference_t<string&> to be string&");  
    static_assert(is_same<add_rvalue_reference_t<string&&>, string&&>::value,   
        "Expected add_rvalue_reference_t<string&&> to be string&&");  
    cout << "All static_assert tests of add_rvalue_reference passed." << endl;  
    return 0;  
}  
  
/*Output:  
All static_assert tests of add_rvalue_reference passed.  
*/  
```  
  
## Requisiti  
 Intestazione: \<type\_traits\> Spazio dei nomi: std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [Classe add\_lvalue\_reference](../standard-library/add-lvalue-reference-class.md)   
 [Classe is\_rvalue\_reference](../standard-library/is-rvalue-reference-class.md)