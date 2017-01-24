---
title: "Struct binary_function | Microsoft Docs"
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
  - "std.binary_function"
  - "functional/std::binary_function"
  - "std::binary_function"
  - "binary_function"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "binary_function (classe)"
ms.assetid: 79b6d53d-644c-4add-b0ba-3a5f40f69c60
caps.latest.revision: 17
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Struct binary_function
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una struttura di base vuoto che definisce i tipi che possono essere ereditati dalle classi derivate che fornisce un oggetto funzione binario.  
  
## Sintassi  
  
```  
  
   template<class Arg1, class Arg2, class Result>  
struct binary_function {  
   typedef Arg1 first_argument_type;  
   typedef Arg2 second_argument_type;  
   typedef Result result_type;  
};  
```  
  
## Note  
 La struttura del modello funge da base per le classi che definiscono una funzione membro del form:  
  
 **result\_type operator\(\)**\( **const first\_argument\_type&**,  
  
 **const second\_argument\_type&** \) **const**  
  
 Tutte queste funzioni binarie possono fare riferimento al primo tipo di argomento viene illustrato come **first\_argument\_type**, al secondo tipo di argomento viene illustrato come **second\_argument\_type** e il relativo tipo restituito come ***result\_type***.  
  
## Esempio  
  
```  
// functional_binary_function.cpp  
// compile with: /EHsc  
#include <vector>  
#include <functional>  
#include <algorithm>  
#include <iostream>  
  
using namespace std;  
  
template <class Type> class average:   
binary_function<Type, Type, Type>   
{  
public:  
   result_type operator( ) ( first_argument_type a,   
                 second_argument_type b )  
   {  
      return (result_type) ( ( a + b ) / 2 );  
   }  
};  
  
int main( )  
{  
   vector <double> v1, v2, v3 ( 6 );  
   vector <double>::iterator Iter1, Iter2, Iter3;  
  
   for ( int i = 1 ; i <= 6 ; i++ )  
      v1.push_back( 11.0 / i );  
  
   for ( int j = 0 ; j <= 5 ; j++ )  
      v2.push_back( -2.0 * j );  
  
   cout << "The vector v1 = ( " ;  
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )  
      cout << *Iter1 << " ";  
   cout << ")" << endl;  
  
   cout << "The vector v2 = ( " ;  
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )  
      cout << *Iter2 << " ";  
   cout << ")" << endl;  
  
   // Finding the element-wise averages of the elements of v1 & v2  
   transform ( v1.begin( ),  v1.end( ), v2.begin( ), v3.begin ( ),   
      average<double>( ) );  
  
   cout << "The element-wise averages are: ( " ;  
   for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )  
      cout << *Iter3 << " ";  
   cout << ")" << endl;  
}  
```  
  
  **The vector v1 \= \( 11 5.5 3.66667 2.75 2.2 1.83333 \)**  
**The vector v2 \= \( \-0 \-2 \-4 \-6 \-8 \-10 \)**  
**Le medie come elemento sono: \(5,5 1,75 \-0,166667 \-1,625 \-2,9 \-4,08333\)**   
## Requisiti  
 **Intestazione:** \<funzionale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Esempio di struttura binary\_function](../misc/binary-function-structure-sample.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)