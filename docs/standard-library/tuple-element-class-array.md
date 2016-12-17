---
title: "Classe tuple_element &lt;array&gt; | Microsoft Docs"
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
  - "std.tr1.tuple_element"
  - "tuple_element"
  - "std::tr1::tuple_element"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Classe tuple_element <array> (TR1)"
ms.assetid: 99201ca4-190a-4d9e-9013-de95ddfe5901
caps.latest.revision: 21
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe tuple_element &lt;array&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esegue il wrapping del tipo di un elemento di matrice.  
  
## Sintassi  
  
```  
// CLASS tuple_element (find element by index)  
template<size_t Index, class Tuple>  
struct tuple_element;  
  
template<size_t Index, class T, size_t Size>  
struct tuple_element<Index, array<T, Size>>  
  
// tuple_element for const  
template<size_t Index, class Tuple>  
struct tuple_element<Index, const Tuple>;  
  
// tuple_element for volatile  
template<size_t Index, class Tuple>  
struct tuple_element<Index, volatile Tuple>;  
  
// tuple_element for const volatile  
template<size_t Index, class Tuple>  
struct tuple_element<Index, const volatile Tuple>;  
  
template<size_t Index, class Tuple>  
using tuple_element_t = typename tuple_element<Index, Tuple>::type;  
  
```  
  
## Parametri  
 `Index`  
 Posizione dell'elemento.  
  
 `T`  
 Tipo di un elemento.  
  
 `N`  
 Dimensione della matrice.  
  
## Note  
 Questa classe modello è una specializzazione della classe modello [Classe tuple\_element](../standard-library/tuple-element-class-tuple.md) per le matrici. Questa classe fornisce un'interfaccia a una matrice come una tupla di N elementi, ognuno dei quali è dello stesso tipo. Ogni specializzazione dispone di un typedef annidato `type` che è un sinonimo del tipo dell'elemento `Index` di `array`, con qualsiasi qualificazione const\-volatile mantenuta.  
  
## Esempio  
  
```  
  
#include <array>   
#include <iostream>   
  
using namespace std;  
typedef array<int, 4> MyArray;  
  
int main()  
{  
    MyArray c0 { 0, 1, 2, 3 };  
  
    for (const auto& e : c0)  
    {  
        cout << " " << e;  
    }  
    cout << endl;  
  
    // display first element " 0"   
    tuple_element<0, MyArray>::type val = c0.front();  
    cout << " " << val << endl;  
}  
  
/*  
Output:  
0 1 2 3  
0  
*/  
  
```  
  
## Requisiti  
 **Intestazione:** \<array\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<array\>](../standard-library/array.md)   
 [\<tuple\>](../standard-library/tuple.md)   
 [Classe tuple\_element](../standard-library/tuple-element-class-tuple.md)