---
title: "Struct logical_not | Microsoft Docs"
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
  - "std.logical_not"
  - "logical_not"
  - "xfunctional/std::logical_not"
  - "std::logical_not"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "logical_not (classe)"
  - "logical_not (struct)"
ms.assetid: 892db678-31da-4540-974b-17b05efc0849
caps.latest.revision: 21
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Struct logical_not
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un oggetto funzione predefinito che esegue l'operazione di negazione logica \(`operator!`\) sul suo argomento.  
  
## Sintassi  
  
```  
template<class Type = void>  
   struct logical_not : public unary_function<Type, bool>   
   {  
      bool operator()(  
         const Type& Left  
      ) const;  
   };  
  
// specialized transparent functor for operator!  
template<>  
   struct logical_not<void>  
   {  
      template<class Type>  
      auto operator()(Type&& Left) const  
         -> decltype(!std::forward<Type>(Left));  
   };  
  
```  
  
#### Parametri  
 `Type`  
 Qualsiasi tipo che supporti un `operator!` che accetta un operando del tipo specificato o derivato.  
  
 `Left`  
 L'operando della operazione logica di negazione.  Il modello non specializzato accetta un argomento di riferimento a lvalue di tipo `Type`.  Il modello specializzato perfeziona l'inoltro degli argomenti di riferimento a rvalue e lvalue di tipo derivato `Type`.  
  
## Valore restituito  
 Il risultato di `!``Left`.  Il modello specializzato perfeziona l'inoltro del risultato, il cui tipo è restituito da `operator!`.  
  
## Esempio  
  
```  
// functional_logical_not.cpp  
// compile with: /EHsc  
#include <deque>  
#include <algorithm>  
#include <functional>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   deque<bool> d1, d2 ( 7 );  
   deque<bool>::iterator iter1, iter2;  
  
   int i;  
   for ( i = 0 ; i < 7 ; i++ )  
   {  
      d1.push_back((bool)((i % 2) != 0));  
   }  
  
   cout << boolalpha;    // boolalpha I/O flag on  
  
   cout << "Original deque:\n d1 = ( " ;  
   for ( iter1 = d1.begin( ) ; iter1 != d1.end( ) ; iter1++ )  
      cout << *iter1 << " ";  
   cout << ")" << endl;  
  
   // To flip all the truth values of the elements,  
   // use the logical_not function object  
   transform( d1.begin( ), d1.end( ), d2.begin( ),logical_not<bool>( ) );  
   cout << "The deque with its values negated is:\n d2 = ( " ;  
   for ( iter2 = d2.begin( ) ; iter2 != d2.end( ) ; iter2++ )  
      cout << *iter2 << " ";  
   cout << ")" << endl;  
}  
```  
  
  **Cosa originale:**  
 **d1 \= \( false true false true false true false \)**  
**The deque with its values negated is:**  
 **d2 \= \( true false true false true false true \)**   
## Requisiti  
 **Intestazione:** \<funzionale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)