---
title: "Struct logical_and | Microsoft Docs"
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
  - "std::logical_and"
  - "xfunctional/std::logical_and"
  - "std.logical_and"
  - "logical_and"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "logical_and (classe)"
  - "logical_and (struct)"
ms.assetid: 1a375cc2-0592-4d57-a553-78009c7ad610
caps.latest.revision: 22
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Struct logical_and
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un oggetto funzione predefinito che esegue l'operazione di congiunzione logica \(`operator&&`\) sui relativi argomenti.  
  
## Sintassi  
  
```  
template<class Type = void>  
   struct logical_and : public binary_function<Type, Type, bool>   
   {  
      bool operator()(  
         const Type& Left,   
         const Type& Right  
      ) const;  
   };  
  
// specialized transparent functor for operator&&  
template<>  
   struct logical_and<void>  
   {  
      template<class Type1, class Type2>  
      auto operator()(Type1&& Left, Type2&& Right) const  
         -> decltype(std::forward<Type1>(Left)  
            && std::forward<Type2>(Right));  
   };  
  
```  
  
#### Parametri  
 `Type`, `Type1`, `Type2`  
 Qualsiasi tipo che supporti `operator&&` che accetta gli operandi dei tipi specificati di derivati.  
  
 `Left`  
 L'operando a sinistra dell'operazione logica di combinazione.  Il modello non specializzato accetta un argomento di riferimento a lvalue di tipo `Type`.  Il modello specializzato perfeziona l'inoltro degli argomenti di riferimento a rvalue e lvalue di tipo derivato `Type1`.  
  
 `Right`  
 L'operando a destra dell'operazione logica di combinazione.  Il modello non specializzato accetta un argomento di riferimento a lvalue di tipo `Type`.  Il modello specializzato perfeziona l'inoltro degli argomenti di riferimento a rvalue e lvalue di tipo derivato `Type2`.  
  
## Valore restituito  
 Il risultato di `Left` `&&` `Right`.  Il modello specializzato perfeziona l'inoltro del risultato, il cui tipo è restituito da `operator&&`.  
  
## Note  
 Per i tipi definiti dall'utente, non c'è corto circuito nella valutazione dell'operando.  Entrambi gli argomenti vengono valutati da `operator&&`.  
  
## Esempio  
  
```  
// functional_logical_and.cpp  
// compile with: /EHsc  
  
#define _CRT_RAND_S  
#include <stdlib.h>  
#include <deque>  
#include <algorithm>  
#include <functional>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   deque<bool> d1, d2, d3( 7 );  
   deque<bool>::iterator iter1, iter2, iter3;  
  
   unsigned int randomValue;  
  
   int i;  
   for ( i = 0 ; i < 7 ; i++ )  
   {  
      if ( rand_s( &randomValue ) == 0 )  
      {  
         d1.push_back((bool)(( randomValue % 2 ) != 0));  
      }  
  
   }  
  
   int j;  
   for ( j = 0 ; j < 7 ; j++ )  
   {  
      if ( rand_s( &randomValue ) == 0 )  
      {  
         d2.push_back((bool)(( randomValue % 2 ) != 0));  
      }  
   }  
  
   cout << boolalpha;    // boolalpha I/O flag on  
  
   cout << "Original deque:\n d1 = ( " ;  
   for ( iter1 = d1.begin( ) ; iter1 != d1.end( ) ; iter1++ )  
      cout << *iter1 << " ";  
   cout << ")" << endl;  
  
   cout << "Original deque:\n d2 = ( " ;  
   for ( iter2 = d2.begin( ) ; iter2 != d2.end( ) ; iter2++ )  
      cout << *iter2 << " ";  
   cout << ")" << endl;  
  
   // To find element-wise conjunction of the truth values  
   // of d1 & d2, use the logical_and function object  
   transform( d1.begin( ), d1.end( ), d2.begin( ),  
      d3.begin( ), logical_and<bool>( ) );  
   cout << "The deque which is the conjuction of d1 & d2 is:\n d3 = ( " ;  
   for ( iter3 = d3.begin( ) ; iter3 != d3.end( ) ; iter3++ )  
      cout << *iter3 << " ";  
   cout << ")" << endl;  
}  
```  
  
  **Cosa originale:**  
 **d1 \= \( true true true true true false false \)**  
**Cosa originale:**  
 **d2 \= \( true false true true false true false \)**  
**The deque which is the conjuction of d1 & d2 is:**  
 **d3 \= \( true false true true false false false \)**   
## Requisiti  
 **Intestazione:** \<funzionale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)