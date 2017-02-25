---
title: "Struct iterator_traits | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::iterator_traits"
  - "xutility/std::iterator_traits"
  - "iterator_traits"
  - "std.iterator_traits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "iterator_traits (classe)"
  - "iterator_traits (struct)"
ms.assetid: 8b92c2c5-f658-402f-8ca1-e7ae301b8514
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# Struct iterator_traits
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Uno struct di supporto del modello utilizzato per specificare tutte le definizioni di tipo critiche che un iteratore deve disporre.  
  
## Sintassi  
  
```  
template<class Iterator>  
    struct iterator_traits {  
        typedef typename Iterator::iterator_category iterator_category;  
        typedef typename Iterator::value_type value_type;  
        typedef typename Iterator::difference_type difference_type;  
        typedef difference_type distance_type;  
        typedef typename Iterator::pointer pointer;  
        typedef typename Iterator::reference reference;  
    };  
template<class Type>  
    struct iterator_traits<Type*> {  
        typedef random_access_iterator_tag iterator_category;  
        typedef Type value_type;  
        typedef ptrdiff_t difference_type;  
        typedef difference_type distance_type;  
        typedef Type *pointer;  
        typedef Type& reference;  
    };  
template<class Type>  
    struct iterator_traits<const Type*> {  
        typedef random_access_iterator_tag iterator_category;  
        typedef Type value_type;  
        typedef ptrdiff_t difference_type;  
        typedef difference_type distance_type;  
        typedef const Type *pointer;  
        typedef const Type& reference;  
    };  
```  
  
## Note  
 La struttura del modello definisce i tipi di membri  
  
-   **iterator\_category**: sinonimo di **Iterator::iterator\_category**.  
  
-   `value_type`: sinonimo di **Iterator::value\_type**.  
  
-   `difference_type`: sinonimo di **Iterator::difference\_type**.  
  
-   `distance_type`: sinonimo di **Iterator::difference\_type.**  
  
-   **pointer**: sinonimo di **Iterator::pointer**.  
  
-   **riferimento**: sinonimo di **Iterator::reference**.  
  
 Le specializzazioni parziali determinano i tipi critici associati a un puntatore a un oggetto di tipo **Type \*** o di const **Type \***.  
  
 In questa implementazione è inoltre possibile utilizzare diverse funzioni del modello che non utilizzino la specializzazione parziale:  
  
```  
template<class Category, class Type, class Diff>  
C _Iter_cat(const iterator<Category, Ty, Diff>&);  
template<class Ty>  
    random_access_iterator_tag _Iter_cat(const Ty *);  
  
template<class Category, class Ty, class Diff>  
Ty *_Val_type(const iterator<Category, Ty, Diff>&);  
template<class Ty>  
    Ty *_Val_type(const Ty *);  
  
template<class Category, class Ty, class Diff>  
Diff *_Dist_type(const iterator<Category, Ty, Diff>&);  
template<class Ty>  
    ptrdiff_t *_Dist_type(const Ty *);  
```  
  
 quale determinano più indirettamente molti degli stessi tipi.  Utilizzare queste funzioni come argomenti in una chiamata di funzione.  Il singolo obiettivo è fornire un parametro di classe modello utile alla funzione chiamata.  
  
## Esempio  
  
```  
// iterator_traits.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iterator>  
#include <vector>  
#include <list>  
  
using namespace std;  
  
template< class it >  
void  
function( it i1, it i2 )  
{  
   iterator_traits<it>::iterator_category cat;  
   cout << typeid( cat ).name( ) << endl;  
   while ( i1 != i2 )  
   {  
      iterator_traits<it>::value_type x;  
      x = *i1;  
      cout << x << " ";  
      i1++;  
   };     
   cout << endl;  
};  
  
int main( )   
{  
   vector<char> vc( 10,'a' );  
   list<int> li( 10 );  
   function( vc.begin( ), vc.end( ) );  
   function( li.begin( ), li.end( ) );  
}  
```  
  
  **std::random\_access\_iterator\_tag struct**  
**una a**   
**std::bidirectional\_iterator\_tag struct**  
**0 0 0 0 0 0 0 0 0 0**    
## Requisiti  
 **Intestazione:** \<iteratore\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<iterator\>](../standard-library/iterator.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)