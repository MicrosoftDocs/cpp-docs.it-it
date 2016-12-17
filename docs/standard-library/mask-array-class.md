---
title: "Classe mask_array | Microsoft Docs"
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
  - "std.mask_array"
  - "mask_array"
  - "std::mask_array"
  - "valarray/std::mask_array"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mask_array (classe)"
ms.assetid: c49bed6a-3000-4f39-bff6-cb9a453acb0b
caps.latest.revision: 20
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe mask_array
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Classe modello ausiliaria interna che supporta oggetti che sono subset di oggetti valarray padre, specificati con un'espressione booleana, fornendo operazioni tra le matrici di subset.  
  
## Sintassi  
  
```  
template<class Type>  
   class mask_array {  
public:  
   typedef Type value_type;  
   void operator=(  
      const valarray<Type>& x  
   ) const;  
  
   void operator=(  
      const Type& x  
   ) const;  
  
   void operator*=(  
      const valarray<Type>& x  
   ) const;  
  
   void operator/=(  
      const valarray<Type>& x  
   ) const;  
  
   void operator%=(  
      const valarray<Type>& x  
   ) const;  
  
   void operator+=(  
      const valarray<Type>& x  
   ) const;  
  
   void operator-=(  
      const valarray<Type>& x  
   ) const;  
  
   void operator^=(  
      const valarray<Type>& x  
   ) const;  
  
   void operator&=(  
      const valarray<Type>& x  
   ) const;  
  
   void operator|=(  
      const valarray<Type>& x  
   ) const;  
  
   void operator<<=(  
      const valarray<Type>& x  
   ) const;  
  
   void operator>>=(  
      const valarray<Type>& x  
   ) const;  
  
// The rest is private or implementation defined  
}  
```  
  
## Note  
 La classe descrive un oggetto che archivia un riferimento a un oggetto **va** della classe [valarray](../standard-library/valarray-class.md)**\<Type\>**, insieme a un oggetto **ba** della classe [valarray\<bool\>](../standard-library/valarray-bool-class.md), che descrive la sequenza di elementi da selezionare dall'oggetto **valarray\<Type\>**.  
  
 Un oggetto **mask\_array\<Type\>** si costruisce solo scrivendo un'espressione nel formato [va&#91;ba&#93;](../Topic/valarray::operator.md). Le funzioni membro della classe mask\_array si comportano quindi come le firme di funzione corrispondenti definite per **valarray\<Type\>**, ad eccezione del fatto che è interessata solo la sequenza degli elementi selezionati.  
  
 La sequenza è costituita da un numero massimo di elementi pari al valore di **ba.size**. Un elemento *J* viene incluso solo se **ba**\[*J*\] è true. Nella sequenza è quindi presente un numero di elementi pari al numero di elementi true in **ba**. Se `I` è l'indice dell'elemento true più basso in **ba**, allora **va**\[`I`\] è l'elemento zero nella sequenza selezionata.  
  
## Esempio:  
  
```  
// mask_array.cpp  
// compile with: /EHsc  
#include <valarray>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   valarray<int> va ( 10 );  
   for ( i = 0 ; i < 10 ; i += 2 )  
      va [ i ] =  i;  
   for ( i = 1 ; i < 10 ; i += 2 )  
      va [ i ] =  -1;  
  
   cout << "The initial operand valarray is:  ( ";  
      for ( i = 0 ; i < 10 ; i++ )  
         cout << va [ i ] << " ";  
   cout << ")." << endl;  
  
   // Use masked subsets to assign a value of 10  
   // to all elements grrater than 3 in value  
   va [va > 3 ] = 10;  
   cout << "The modified operand valarray is:  ( ";  
      for ( i = 0 ; i < 10 ; i++ )  
         cout << va [ i ] << " ";  
   cout << ")." << endl;  
}  
```  
  
### Output  
  
```  
The initial operand valarray is:  ( 0 -1 2 -1 4 -1 6 -1 8 -1 ).  
The modified operand valarray is:  ( 0 -1 2 -1 10 -1 10 -1 10 -1 ).  
```  
  
## Requisiti  
 **Intestazione:** \<valarray\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)