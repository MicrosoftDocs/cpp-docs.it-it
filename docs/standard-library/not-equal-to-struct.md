---
title: "Struct not_equal_to | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.not_equal_to"
  - "std::not_equal_to"
  - "not_equal_to"
  - "xfunctional/std::not_equal_to"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "not_equal_to (funzione)"
  - "not_equal_to (struct)"
ms.assetid: 333fce09-4f51-44e0-ba26-533bccffd485
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# Struct not_equal_to
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un predicato binario che esegue l'operazione di disuguaglianza \(`operator!=`\) sui suoi argomenti.  
  
## Sintassi  
  
```  
template<class Type = void>  
   struct not_equal_to : public binary_function<Type, Type, bool>   
   {  
      bool operator()(  
         const Type& Left,   
         const Type& Right  
      ) const;  
   };  
  
// specialized transparent functor for operator!=  
template<>  
   struct not_equal_to<void>  
   {  
      template<class Type1, class Type2>  
      auto operator()(Type1&& Left, Type2&& Right) const  
      -> decltype(std::forward<Type1>(Left)  
         != std::forward<Type2>(Right));  
   };  
  
```  
  
#### Parametri  
 `Type`, `Type1`, `Type2`  
 Qualsiasi tipo che supporti `operator!=` che accetta gli operandi dei tipi specificati di derivati.  
  
 `Left`  
 L'operando a sinistra dell'operazione di disuguaglianza.  Il modello non specializzato accetta un argomento di riferimento a lvalue di tipo `Type`.  Il modello specializzato perfeziona l'inoltro degli argomenti di riferimento a rvalue e lvalue di tipo derivato `Type1`.  
  
 `Right`  
 L'operando a destra dell'operazione di disuguaglianza.  Il modello non specializzato accetta un argomento di riferimento a lvalue di tipo `Type`.  Il modello specializzato perfeziona l'inoltro degli argomenti di riferimento a rvalue e lvalue di tipo derivato `Type2`.  
  
## Valore restituito  
 Il risultato di `Left` `!=` `Right`.  Il modello specializzato perfeziona l'inoltro del risultato, il cui tipo è restituito da `operator!=`.  
  
## Note  
 Gli oggetti di tipo `Type` devono essere confrontabili per l'uguaglianza.  È quindi necessario che `operator!=` definito sul set di oggetti soddisfi le proprietà matematiche di una relazione di equivalenza.  Tutti i tipi numerici e di puntatore incorporati soddisfano questo requisito.  
  
## Esempio  
  
```  
// functional_not_equal_to.cpp  
// compile with: /EHsc  
#include <vector>  
#include <functional>  
#include <algorithm>  
#include <iostream>  
  
using namespace std;  
  
int main( )  
{  
   vector <double> v1, v2, v3 (6);  
   vector <double>::iterator Iter1, Iter2, Iter3;  
  
   int i;  
   for ( i = 0 ; i <= 5 ; i+=2 )  
   {  
      v1.push_back( 2.0 *i );  
      v1.push_back( 2.0 * i + 1.0 );  
   }  
  
   int j;  
   for ( j = 0 ; j <= 5 ; j+=2 )  
   {  
      v2.push_back( - 2.0 * j );  
      v2.push_back( 2.0 * j + 1.0 );  
   }  
  
   cout << "The vector v1 = ( " ;  
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )  
      cout << *Iter1 << " ";  
   cout << ")" << endl;  
  
   cout << "The vector v2 = ( " ;  
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )  
      cout << *Iter2 << " ";  
   cout << ")" << endl;  
  
   // Testing for the element-wise equality between v1 & v2  
   transform ( v1.begin( ), v1.end( ), v2.begin( ), v3.begin ( ),   
      not_equal_to<double>( ) );  
  
   cout << "The result of the element-wise not_equal_to comparsion\n"  
      << "between v1 & v2 is: ( " ;  
   for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )  
      cout << *Iter3 << " ";  
   cout << ")" << endl;  
}  
```  
  
  **The vector v1 \= \( 0 1 4 5 8 9 \)**  
**The vector v2 \= \( \-0 1 \-4 5 \-8 9 \)**  
**The result of the element\-wise not\_equal\_to comparsion**  
**between v1 & v2 is: \( 0 0 1 0 1 0 \)**   
## Requisiti  
 **Intestazione:** \<funzionale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Libreria di modelli standard](../misc/standard-template-library.md)