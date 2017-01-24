---
title: "Classe binary_negate | Microsoft Docs"
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
  - "xfunctional/std::binary_negate"
  - "std::binary_negate"
  - "binary_negate"
  - "std.binary_negate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "binary_negate (classe)"
ms.assetid: 7b86f02c-af7e-4c7f-9df1-08addae4dd65
caps.latest.revision: 20
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe binary_negate
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una classe modello che fornisce una funzione membro che nega il valore restituito di una funzione binaria specificata.  
  
## Sintassi  
  
```  
  
   template<class Operation>  
class binary_negate  
   : public binary_function <  
      typename Operation::first_argument_type,  
      typename Operation::second_argument_type,   
      bool>   
{  
public:  
explicit binary_negate(  
   const Operation& _Func  
);  
bool operator()(  
   const typename Operation::first_argument_type& _Left,  
   const typename Operation::second_argument_type& _Right  
) const;  
};  
```  
  
#### Parametri  
 `_Func`  
 La funzione binaria da negare.  
  
 `_Left`  
 L'operando sinistro della funzione binaria da negare.  
  
 `_Right`  
 L'operando della funzione binaria da negare.  
  
## Valore restituito  
 La negazione della funzione binaria.  
  
## Note  
 La classe modello archivia una copia di un oggetto funzione binario \_*Func* function.  Definisce la relativa funzione membro `operator()` come restituire il \_Func di **\!***\(\_Left, \_Right\).*  
  
 Il costruttore di `binary_negate` viene utilizzata raramente direttamente.  La funzione di supporto [not2](../Topic/not2%20Function.md) in genere è preferibile utilizzare per dichiarare e utilizzare il predicato dell'adattatore di **binary\_negator**.  
  
## Esempio  
  
```  
// functional_binary_negate.cpp  
// compile with: /EHsc  
#define _CRT_RAND_S  
#include <stdlib.h>  
  
#include <vector>  
#include <algorithm>  
#include <functional>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   vector <unsigned int> v1;  
   vector <unsigned int>::iterator Iter1;  
  
   unsigned int i;  
   v1.push_back( 6262 );  
   v1.push_back( 6262 );  
   unsigned int randVal = 0;  
   for ( i = 0 ; i < 5 ; i++ )  
   {  
      rand_s(&randVal);  
      v1.push_back( randVal );  
   }  
  
   cout << "Original vector v1 = ( " ;  
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )  
      cout << *Iter1 << " ";  
   cout << ")" << endl;  
  
   // To sort in ascending order,  
   // use default binary predicate less<unsigned int>( )  
   sort( v1.begin( ), v1.end( ) );  
   cout << "Sorted vector v1 = ( " ;  
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )  
      cout << *Iter1 << " ";  
   cout << ")" << endl;  
  
   // To sort in descending order,  
   // use the binary_negate function  
   sort( v1.begin( ), v1.end( ),  
   binary_negate<less<unsigned int> >(less<unsigned int>( ) ) );  
  
   // The helper function not2 could also have been used  
   // in the above line and is usually preferred for convenience  
   // sort( v1.begin( ), v1.end( ), not2(less<unsigned int>( ) ) );  
  
   cout << "Resorted vector v1 = ( " ;  
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )  
      cout << *Iter1 << " ";  
   cout << ")" << endl;  
}  
```  
  
  **Vettore originali v1 \= \(6262 6262 2233879413 2621500314 580942933 3715465425 3739828298\)**  
**Vettore ordinato v1 \= \(6262 6262 580942933 2233879413 2621500314 3715465425 3739828298\)**  
**Vettore l'affidamento v1 \= \(3739828298 3715465425 2621500314 2233879413 580942933 6262 6262\)**   
## Requisiti  
 **Intestazione:** \<funzionale\>  
  
 std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)