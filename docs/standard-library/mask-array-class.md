---
title: Classe mask_array | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- mask_array
- valarray/std::mask_array
dev_langs:
- C++
helpviewer_keywords:
- mask_array class
ms.assetid: c49bed6a-3000-4f39-bff6-cb9a453acb0b
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: bdc17f9cd2964cc18895b7fe4063aabd054268a1
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="maskarray-class"></a>Classe mask_array
Classe modello ausiliaria interna che supporta oggetti che sono subset di oggetti valarray padre, specificati con un'espressione booleana, fornendo operazioni tra le matrici di subset.  
  
## <a name="syntax"></a>Sintassi  
  
  
  
## <a name="remarks"></a>Note  
 La classe descrive un oggetto che archivia un riferimento a un oggetto **va** della classe [valarray](../standard-library/valarray-class.md)**\<Type>**, insieme a un oggetto **ba** della classe [valarray\<bool>](../standard-library/valarray-bool-class.md), che descrive la sequenza di elementi da selezionare dall'oggetto **valarray\<Type>**.  
  
 Si costruisce un oggetto **mask_array\<Type>** solo scrivendo un'espressione nel formato [va&#91;ba&#93;](../standard-library/valarray-class.md#op_at). Le funzioni membro della classe mask_array si comportano quindi come le firme di funzione corrispondenti definite per **valarray\<Type>**, ad eccezione del fatto che è interessata solo la sequenza degli elementi selezionati.  
  
 La sequenza è costituita da un numero massimo di elementi pari al valore di **ba.size** . Un elemento *J* viene incluso solo se **ba**[ *J*] è true. Nella sequenza è quindi presente un numero di elementi pari al numero di elementi true in **ba**. Se `I` è l'indice dell'elemento true più basso in **ba**, allora **va**[ `I`] è l'elemento zero nella sequenza selezionata.  
  
## <a name="example"></a>Esempio:  
  
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
  
### <a name="output"></a>Output  
  
```  
The initial operand valarray is:  (0 -1 2 -1 4 -1 6 -1 8 -1).  
The modified operand valarray is:  (0 -1 2 -1 10 -1 10 -1 10 -1).  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<valarray>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md) (Thread safety nella libreria standard C++)


