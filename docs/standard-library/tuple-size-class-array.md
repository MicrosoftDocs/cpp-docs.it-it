---
title: "Classe tuple_size &lt;array&gt; | Microsoft Docs"
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
  - "tuple_size"
  - "std::tr1::tuple_size"
  - "std.tr1.tuple_size"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Classe tuple_size <array> (TR1)"
ms.assetid: ef95ffee-59b4-4396-817f-487d4486772d
caps.latest.revision: 20
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe tuple_size &lt;array&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esegue il wrapping della dimensione di una matrice.  
  
## Sintassi  
  
```  
template<class Tuple>  
struct tuple_size;  
  
// struct to determine number of elements in array  
template<class T, size_t Size>  
struct tuple_size<array<T, Size> >  
: integral_constant<size_t, Size>;  
  
// size of const tuple  
template<class Tuple>  
struct tuple_size<const Tuple>;  
  
// size of volatile tuple  
template<class Tuple>  
struct tuple_size<volatile Tuple>;  
  
// size of const volatile tuple  
template<class Tuple>  
struct tuple_size<const volatile Tuple>;  
  
```  
  
## Parametri di template  
 `T`  
 Tipo di un elemento.  
  
 `Size`  
 Dimensione della matrice.  
  
## Note  
 Questo modello è una specializzazione della classe modello [Classe tuple\_size](../standard-library/tuple-size-class-tuple.md). Include un membro `value` che è un'espressione costante integrale il cui valore è `N`, che corrisponde alla dimensione della matrice.  
  
## Esempio  
  
```  
#include <array>   
#include <iostream>   
  
using namespace std;  
  
typedef array<int, 4> MyArray;  
  
int main()  
{  
    MyArray c0 { 0, 1, 2, 3 };  
  
    // display contents " 0 1 2 3"   
    for (const auto& e : c0)  
    {  
        cout << e;  
    }  
    cout << endl;  
  
    // display size " 4"   
    cout << " " << tuple_size<MyArray>::value << endl;  
}  
/*  
Output:  
0123  
4  
*/  
  
```  
  
## Requisiti  
 **Intestazione:** \<array\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<array\>](../standard-library/array.md)   
 [\<tuple\>](../standard-library/tuple.md)   
 [Classe tuple\_size](../standard-library/tuple-size-class-tuple.md)