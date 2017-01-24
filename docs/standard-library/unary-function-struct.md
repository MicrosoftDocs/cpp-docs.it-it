---
title: "Struct unary_function | Microsoft Docs"
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
  - "std.unary_function"
  - "unary_function"
  - "functional/std::unary_function"
  - "std::unary_function"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unary_function (classe)"
ms.assetid: 04c2fbdc-c1f6-48ed-b6cc-292a6d484627
caps.latest.revision: 21
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Struct unary_function
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una struttura di base vuoto che definisce i tipi che possono essere ereditati dalle classi derivate che fornisce un oggetto funzione unario.  
  
## Sintassi  
  
```  
  
   template<class Arg, class Result>  
struct unary_function {  
   typedef Arg argument_type;  
   typedef Result result_type;  
};  
```  
  
## Note  
 La struttura del modello funge da base per le classi che definiscono una funzione membro del form **result\_type** `operator()`\(**const argument\_type&**\) **const**.  
  
 Tutte queste funzioni unarie derivate possono fare riferimento al tipo di argomento solo come **argument\_type** e il relativo tipo restituito come **result\_type**.  
  
## Esempio  
  
```  
// functional_unary_function.cpp  
// compile with: /EHsc  
#include <vector>  
#include <functional>  
#include <algorithm>  
#include <iostream>  
  
using namespace std;  
  
// Creation of a user-defined function object  
// that inherits from the unary_function base class  
class greaterthan10: unary_function<int, bool>  
{  
public:  
    result_type operator()(argument_type i)  
    {  
        return (result_type)(i > 10);  
    }  
};  
  
int main()  
{  
    vector<int> v1;  
    vector<int>::iterator Iter;  
  
    int i;  
    for (i = 0; i <= 5; i++)  
    {  
        v1.push_back(5 * i);  
    }  
  
    cout << "The vector v1 = ( " ;  
    for (Iter = v1.begin(); Iter != v1.end(); Iter++)  
        cout << *Iter << " ";  
    cout << ")" << endl;  
  
    vector<int>::iterator::difference_type result1;  
    result1 = count_if(v1.begin(), v1.end(), greaterthan10());  
    cout << "The number of elements in v1 greater than 10 is: "  
         << result1 << "." << endl;  
}  
```  
  
  **The vector v1 \= \( 0 5 10 15 20 25 \)**  
**Il numero di elementi in v1 maggiore di 10 è: 3.**   
## Requisiti  
 **Intestazione:** \<funzionale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Struttura unary\_function\<\>](../misc/unary-function-angles-structure.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)