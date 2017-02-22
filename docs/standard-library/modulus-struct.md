---
title: "Struct modulus | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "modulus"
  - "std::modulus"
  - "xfunctional/std::modulus"
  - "std.modulus"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "modulus (classe)"
  - "modulus (struct)"
ms.assetid: 86d342f7-b7b1-46a4-b0bb-6b7ae827369b
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# Struct modulus
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un oggetto funzione predefinito che esegue l'operazione di divisione di modulo \(`operator%`\) sui suoi argomenti.  
  
## Sintassi  
  
```  
template<class Type = void>  
   struct modulus : public binary_function <Type, Type, Type>   
   {  
      Type operator()(  
         const Type& Left,   
         const Type& Right   
         ) const;  
   };  
  
// specialized transparent functor for operator%  
template<>  
   struct modulus<void>  
   {  
      template<class Type1, class Type2>  
      auto operator()(Type1&& Left, Type2&& Right) const  
      -> decltype(std::forward<Type1>(Left)  
         % std::forward<Type2>(Right));  
   };  
  
```  
  
#### Parametri  
 `Type`, `Type1`, `Type2`  
 Qualsiasi tipo che supporti `operator%` che accetta gli operandi dei tipi specificati o derivati.  
  
 `Left`  
 L'operando a sinistra dell'operazione di modulo.  Il modello non specializzato accetta un argomento di riferimento a lvalue di tipo `Type`.  Il modello specializzato perfeziona l'inoltro degli argomenti di riferimento a rvalue e lvalue di tipo derivato `Type1`.  
  
 `Right`  
 L'operando a destra dell'operazione di modulo.  Il modello non specializzato accetta un argomento di riferimento a lvalue di tipo `Type`.  Il modello specializzato perfeziona l'inoltro degli argomenti di riferimento a rvalue e lvalue di tipo derivato `Type2`.  
  
## Valore restituito  
 Il risultato di `Left` `%` `Right`.  Il modello specializzato perfeziona l'inoltro del risultato, il cui tipo è restituito da `operator%`.  
  
## Note  
 La funzione `modulus` è limitata ai tipi integrali per i tipi di dati di base, o ai tipi definiti dall'utente che implementano `operator%`.  
  
## Esempio  
  
```  
// functional_modulus.cpp  
// compile with: /EHsc  
#include <vector>  
#include <functional>  
#include <algorithm>  
#include <iostream>  
  
using namespace std;  
  
int main( )  
{  
   vector <int> v1, v2, v3 ( 6 );  
   vector <int>::iterator Iter1, Iter2, Iter3;  
  
   int i;  
   for ( i = 1 ; i <= 6 ; i++ )  
   {  
      v1.push_back( 5 * i );  
   }  
  
   int j;  
   for ( j = 1 ; j <= 6 ; j++ )  
   {  
      v2.push_back( 3 * j );  
   }  
  
   cout << "The vector v1 = ( " ;  
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )  
      cout << *Iter1 << " ";  
   cout << ")" << endl;  
  
   cout << "The vector v2 = ( " ;  
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )  
      cout << *Iter2 << " ";  
   cout << ")" << endl;  
  
   // Finding the element-wise remainders of the elements of v1 & v2  
   transform (v1.begin( ),  v1.end( ), v2.begin( ), v3.begin ( ),   
      modulus<int>() );  
  
   cout << "The element-wise remainders of the modular division\n are: ( " ;  
   for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )  
      cout << *Iter3 << " ";  
   cout << ")" << endl;  
}  
```  
  
  **The vector v1 \= \( 5 10 15 20 25 30 \)**  
**Il vettore v2 \= \( 3 6 9 12 15 18 \)**  
**The element\-wise remainders of the modular division**  
 **are: \( 2 4 6 8 10 12 \)**   
## Requisiti  
 **Intestazione:** \<funzionale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)