---
title: Classe indirect_array
ms.date: 11/04/2016
f1_keywords:
- valarray/std::indirect_array
helpviewer_keywords:
- indirect_array class
ms.assetid: 10e1eaea-ba5a-405c-a25e-7bdd3eee7fc7
ms.openlocfilehash: 6be0c5153cbc94d09b414fc9e14fa498c7a4cfa7
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72687924"
---
# <a name="indirect_array-class"></a>Classe indirect_array

Modello di classe ausiliario interno che supporta oggetti che sono subset di oggetti valarray fornendo operazioni tra matrici di subset definite specificando un subset di indici di un oggetto valarray padre.

## <a name="syntax"></a>Sintassi

## <a name="remarks"></a>Note

La classe descrive un oggetto che archivia un riferimento a un oggetto `va` della classe [valarray](../standard-library/valarray-class.md)  **\<Type >** , insieme a un oggetto `xa` della classe `valarray<size_t>`, che descrive la sequenza di elementi da selezionare dall'oggetto `valarray<Type>`.

Per costruire un oggetto `indirect_array<Type>` è sufficiente scrivere un'espressione nel formato `va[xa]`. Le funzioni membro della classe indirect_array si comportano quindi come le firme di funzione corrispondenti definite per `valarray<Type>`, ad eccezione del fatto che è interessata solo la sequenza degli elementi selezionati.

La sequenza è costituita da **XA.** elementi [size](../standard-library/valarray-class.md#size) , dove element `I` diventa l'indice **XA**[`I`] all'interno `va`.

## <a name="example"></a>Esempio:

```cpp
// indirect_array.cpp
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

   // Select 2nd, 4th & 6th elements
   // and assign a value of 10 to them
   valarray<size_t> indx ( 3 );
   indx [0] = 2;
   indx [1] = 4;
   indx [2] = 6;
   va[indx] = 10;

   cout << "The modified operand valarray is:  ( ";
      for (i = 0 ; i < 10 ; i++ )
         cout << va [ i ] << " ";
   cout << ")." << endl;
}
```

### <a name="output"></a>Output

```cpp
The initial operand valarray is:  (0 -1 2 -1 4 -1 6 -1 8 -1).
The modified operand valarray is:  (0 -1 10 -1 10 -1 10 -1 8 -1).
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<valarray>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
