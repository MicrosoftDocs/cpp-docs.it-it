---
title: "Classe tuple_size &lt;utility&gt; | Microsoft Docs"
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
  - "Classe tuple_size <utility> (TR1)"
ms.assetid: 36d04207-ed87-4c11-9875-150c59833b79
caps.latest.revision: 21
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe tuple_size &lt;utility&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esegue il wrapping del conteggio di elementi `pair`.  
  
## Sintassi  
  
```  
template<class Tuple>  
struct tuple_size;  
  
template<class T1, class T2>  
struct tuple_size<pair<T1, T2>>   : integral_constant<size_t, 2>  
  
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
  
#### Parametri  
 `T1`  
 Tipo di elemento della prima coppia.  
  
 `T2`  
 Tipo di elemento della seconda coppia.  
  
## Note  
 Questo modello è una specializzazione della classe modello [Classe tuple\_size](../standard-library/tuple-size-class-tuple.md). Include un membro `value` che è un'espressione costante integrale il cui valore è 2.  
  
## Esempio  
  
```  
#include <utility>   
#include <iostream>   
  
using namespace std;  
  
typedef pair<int, double> MyPair;  
  
int main()  
{  
    MyPair c0(0, 1.1);  
  
    // display contents " 0 1.1"   
    cout << " " << get<0>(c0);  
    cout << " " << get<1>(c0) << endl;  
  
    // display size " 2"   
    cout << " " << tuple_size<MyPair>::value << endl;  
  
}  
  
/*  
Output:  
0 1.1  
2  
*/  
```  
  
## Requisiti  
 **Intestazione:** \<utility\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<utility\>](../standard-library/utility.md)   
 [Funzione get](../Topic/get%20Function%20%3Cutility%3E.md)   
 [Classe tuple\_element](../standard-library/tuple-element-class-utility.md)