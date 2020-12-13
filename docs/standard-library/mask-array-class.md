---
description: 'Altre informazioni su: mask_array Class'
title: Classe mask_array
ms.date: 11/04/2016
f1_keywords:
- valarray/std::mask_array
helpviewer_keywords:
- mask_array class
ms.assetid: c49bed6a-3000-4f39-bff6-cb9a453acb0b
ms.openlocfilehash: d3eb105c7779ff54ddbec3d68a518dc74d089903
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97149357"
---
# <a name="mask_array-class"></a>Classe mask_array

Modello di classe ausiliario interno che supporta oggetti che sono subset di oggetti valarray padre, specificati con un'espressione booleana, fornendo operazioni tra le matrici di subset.

## <a name="syntax"></a>Sintassi

## <a name="remarks"></a>Osservazioni

La classe descrive un oggetto che archivia un riferimento a un oggetto `va` della classe [valarray](../standard-library/valarray-class.md) **\<Type>** , insieme a un oggetto `ba` della classe [valarray \<bool>](../standard-library/valarray-bool-class.md), che descrive la sequenza di elementi da selezionare dall' `valarray<Type>` oggetto.

Per costruire un `mask_array<Type>` oggetto, è sufficiente scrivere un'espressione nel formato [va&#91;BA&#93;](../standard-library/valarray-class.md#op_at). Le funzioni membro della classe mask_array si comportano quindi come le firme di funzione corrispondenti definite per `valarray<Type>` , ad eccezione del fatto che è interessata solo la sequenza degli elementi selezionati.

La sequenza è costituita dal numero massimo di `ba.size` elementi. Un elemento *J* viene incluso solo se **BA**[ *J*] è true. Sono pertanto presenti tutti gli elementi nella sequenza perché sono presenti elementi true in `ba` . Se `I` è l'indice dell'elemento true più basso in `ba` , allora **va**[ `I` ] è l'elemento zero nella sequenza selezionata.

## <a name="example"></a>Esempio

```cpp
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

```Output
The initial operand valarray is:  (0 -1 2 -1 4 -1 6 -1 8 -1).
The modified operand valarray is:  (0 -1 2 -1 10 -1 10 -1 10 -1).
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<valarray>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
