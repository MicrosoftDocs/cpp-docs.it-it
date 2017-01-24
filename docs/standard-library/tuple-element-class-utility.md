---
title: "Classe tuple_element &lt;utility&gt; | Microsoft Docs"
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
  - "Classe tuple_element <utility> (TR1)"
ms.assetid: f9db79e8-685c-49e3-97ee-81763e516ce3
caps.latest.revision: 20
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe tuple_element &lt;utility&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esegue il wrapping del tipo di un elemento `pair`.  
  
## Sintassi  
  
```  
// CLASS tuple_element (find element by index)  
template<size_t Index, class Tuple>  
struct tuple_element;  
  
// struct to determine type of element 0 in pair  
template<class Ty1, class Ty2>  
struct tuple_element<0, pair<Ty1, Ty2> >;  
  
// struct to determine type of element 1 in pair  
template<class Ty1, class Ty2>  
struct tuple_element<1, pair<Ty1, Ty2> >;  
  
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
  
#### Parametri  
 Indice  
 La posizione dell'elemento; per la coppia questo valore è 0 o 1.  
  
 `T1`  
 Tipo di elemento della prima coppia.  
  
 `T2`  
 Tipo di elemento della seconda coppia.  
  
 tipo  
  
## Note  
 I modelli sono specializzazioni della classe modello [Classe tuple\_element](../standard-library/tuple-element-class-tuple.md). Ognuno presenta un singolo membro typedef, `type`, che è un sinonimo del tipo di elemento in corrispondenza della posizione specificata in `pair`, con qualsiasi qualificazione const e\/o volatile mantenuta.`tuple_element_t` è un alias conveniente per `tuple_element<N, pair<T1, T2>>::type`. Usare la [Funzione get](../Topic/get%20Function%20%3Cutility%3E.md) per restituire l'elemento in una posizione specificata oppure \(in C \+ \+ 14 \/ Visual Studio 2015\) di un tipo specificato.  
  
## Esempio  
  
```  
#include <utility>   
#include <iostream>   
  
using namespace std;  
  
typedef pair<int, double> MyPair;  
int main()  
{  
    MyPair c0(0, 1.333);  
  
    // display contents " 0 1"   
    cout << " " << get<0>(c0);  
    cout << " " << get<1>(c0) << endl;  
  
    // display first element " 0" by index  
    tuple_element<0, MyPair>::type val = get<0>(c0);  
    cout << " " << val;  
  
    // display second element by type   
    tuple_element<1, MyPair>::type val2 = get<double>(c0);  
    cout << " " << val2 << endl;  
}  
  
/*  
Output:  
0 1.333  
0 1.333  
*/  
```  
  
## Requisiti  
 **Intestazione:** \<utility\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<utility\>](../standard-library/utility.md)   
 [Funzione get](../Topic/get%20Function%20%3Cutility%3E.md)   
 [Classe tuple\_size](../standard-library/tuple-size-class-utility.md)