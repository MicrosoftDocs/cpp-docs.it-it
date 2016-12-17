---
title: "Struct greater | Microsoft Docs"
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
  - "greater"
  - "xfunctional/std::greater"
  - "std.greater"
  - "std::greater"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "greater (struct)"
  - "greater (funzione)"
ms.assetid: ebc348e1-edcd-466b-b21a-db95bd8f9079
caps.latest.revision: 22
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Struct greater
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un predicato binario che esegue l'operazione maggiore \(`operator>`\) sui suoi argomenti.  
  
## Sintassi  
  
```  
template<class Type = void>  
   struct greater : public binary_function <Type, Type, bool>   
   {  
      bool operator()(  
         const Type& Left,   
         const Type& Right  
      ) const;  
   };  
  
// specialized transparent functor for operator>  
template<>  
   struct greater<void>  
   {  
      template<class Type1, class Type2>  
      auto operator()(Type1&& Left, Type2&& Right) const  
      -> decltype(std::forward<Type1>(Left)  
         > std::forward<Type2>(Right));  
   };  
  
```  
  
#### Parametri  
 `Type`, `Type1`, `Type2`  
 Qualsiasi tipo che supporti `operator>` che accetta gli operandi dei tipi specificati di derivati.  
  
 `Left`  
 L'operando sinistro dell'operazione maggiore.  Il modello non specializzato accetta un argomento di riferimento a lvalue di tipo `Type`.  Il modello specializzato perfeziona l'inoltro degli argomenti di riferimento a rvalue e lvalue di tipo derivato `Type1`.  
  
 `Right`  
 L'operando destro dell'operazione di maggiore.  Il modello non specializzato accetta un argomento di riferimento a lvalue di tipo `Type`.  Il modello specializzato perfeziona l'inoltro degli argomenti di riferimento a rvalue e lvalue di tipo derivato `Type2`.  
  
## Valore restituito  
 Il risultato di `Left` `>` `Right`.  Il modello specializzato perfeziona l'inoltro del risultato, il cui tipo è restituito da `operator>`.  
  
## Note  
 Il predicato binario `greater`\<`Type`\> fornisce un ordine debole rigido di un set di valori degli elementi di tipo `Type` nelle classi di equivalenza, se e solo se questo tipo soddisfa i requisiti matematici standard per poter essere ordinato.  Le specializzazioni per qualsiasi tipo di puntatore restituiscono un ordine totale di elementi, dove tutti gli elementi dei valori distinti vengono ordinati in base agli altri.  
  
## Esempio  
  
```  
// functional_greater.cpp  
// compile with: /EHsc  
#include <vector>  
#include <algorithm>  
#include <functional>  
#include <cstdlib>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   vector <int> v1;  
   vector <int>::iterator Iter1;  
  
   int i;  
   for ( i = 0 ; i < 8 ; i++ )  
   {  
      v1.push_back( rand( ) );  
   }  
  
   cout << "Original vector v1 = ( " ;  
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )  
      cout << *Iter1 << " ";  
   cout << ")" << endl;  
  
   // To sort in ascending order,  
   // use default binary predicate less<int>( )  
   sort( v1.begin( ), v1.end( ) );  
   cout << "Sorted vector v1 = ( " ;  
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )  
      cout << *Iter1 << " ";  
   cout << ")" << endl;  
  
   // To sort in descending order,   
   // specify binary predicate greater<int>( )  
   sort( v1.begin( ), v1.end( ), greater<int>( ) );  
   cout << "Resorted vector v1 = ( " ;  
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )  
      cout << *Iter1 << " ";  
   cout << ")" << endl;  
}  
```  
  
## Output  
  
```  
Original vector v1 = ( 41 18467 6334 26500 19169 15724 11478 29358 )  
Sorted vector v1 = ( 41 6334 11478 15724 18467 19169 26500 29358 )  
Resorted vector v1 = ( 29358 26500 19169 18467 15724 11478 6334 41 )  
```  
  
## Requisiti  
 **Intestazione:** \<funzionale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Libreria di modelli standard](../misc/standard-template-library.md)