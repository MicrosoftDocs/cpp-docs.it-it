---
title: Classe slice | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- valarray/std::slice
- valarray/std::slice::size
- valarray/std::slice::start
- valarray/std::slice::stride
dev_langs:
- C++
helpviewer_keywords:
- std::slice [C++]
- std::slice [C++], size
- std::slice [C++], start
- std::slice [C++], stride
ms.assetid: 00f0b03d-d657-4b81-ba53-5a9034bb2bf2
caps.latest.revision: 23
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: cb28a7f309566d6bf4c296190cd65e77fbadc4ac
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="slice-class"></a>Classe slice

Classe di utilità per valarray usata per definire subset unidimensionali di un elemento valarray padre. Se valarray viene considerato come una matrice bidimensionale con tutti gli elementi di una matrice, slice estrae un vettore di una dimensione all'esterno della matrice bidimensionale.

## <a name="remarks"></a>Note

La classe archivia i parametri che caratterizzano un oggetto di tipo [slice_array](../standard-library/slice-array-class.md). Il subset di valarray viene costruito indirettamente quando un oggetto della classe slice viene visualizzato come argomento per un oggetto della classe [valarray](../standard-library/valarray-class.md#op_at)**\<Type>**. I valori archiviati che specificano il subset selezionato da valarray padre includono:

- Un indice iniziale in valarray.

- Una lunghezza totale o un numero di elementi in slice.

- Uno stride o una distanza tra indici di elementi successivi in valarray.

Se il set definito da una slice è il subset di un valarray costante, slice è un nuovo valarray. Se il set definito da una slice è il subset di un valarray non costante, slice contiene una semantica di riferimento al valarray originale. Il meccanismo di valutazione per i valarray non costanti consente di risparmiare tempo e memoria.

Le operazioni sui valarray sono consentite solo se i subset di origine e di destinazione definiti dagli slice sono distinti e tutti gli indici sono validi.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[slice](#slice)|Definisce un subset di un `valarray` che è costituito da un numero di elementi che sono equidistanti e che iniziano da un elemento specificato.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[size](#size)|Trova il numero di elementi in uno slice di un `valarray`.|
|[start](#start)|Trova l'indice iniziale di uno slice di un `valarray`.|
|[stride](#stride)|Trova la distanza tra gli elementi in uno slice di un `valarray`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<valarray>

**Spazio dei nomi:** std

## <a name="size"></a>  slice::size

Trova il numero di elementi di una sezione di un valarray.

```cpp
size_t size() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi di una sezione di un valarray.

### <a name="example"></a>Esempio

```cpp
// slice_size.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;
   size_t sizeVA, sizeVAR;

   valarray<int> va ( 20 ), vaResult;
   for ( i = 0 ; i < 20 ; i += 1 )
      va [ i ] =  i+1;

   cout << "The operand valarray va is:\n ( ";
      for ( i = 0 ; i < 20 ; i++ )
         cout << va [ i ] << " ";
   cout << ")." << endl;

   sizeVA = va.size ( );
   cout << "The size of the valarray is: "
        << sizeVA << "." << endl << endl;

   slice vaSlice ( 3 , 6 , 3 );
   vaResult = va [ vaSlice ];

   cout << "The slice of valarray va is vaResult = "
        << "va[slice( 3, 6, 3)] =\n ( ";
      for ( i = 0 ; i < 6 ; i++ )
         cout << vaResult [ i ] << " ";
   cout << ")." << endl;

   sizeVAR = vaSlice.size ( );
   cout << "The size of slice vaSlice is: "
        << sizeVAR << "." << endl;
}
```

```Output
The operand valarray va is:
 ( 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 ).
The size of the valarray is: 20.

The slice of valarray va is vaResult = va[slice( 3, 6, 3)] =
 ( 4 7 10 13 16 19 ).
The size of slice vaSlice is: 6.
```

## <a name="slice"></a>  slice::slice

Definisce un subset di un valarray costituito da un numero di elementi che sono equidistanti e che iniziano da un elemento specificato.

```cpp
slice();

slice(
    size_t _StartIndex,
    size_t _Len,
    size_t stride);
```

### <a name="parameters"></a>Parametri

`_StartIndex` Indice del primo elemento nel subset di valarray.

`_Len` Il numero di elementi nel subset.

`stride` La distanza tra gli elementi nel subset.

### <a name="return-value"></a>Valore restituito

Il costruttore predefinito archivia zero per l'indice iniziale, la lunghezza totale e lo stride. Il secondo costruttore archivia `_StartIndex` per l'indice iniziale, `_Len` per la lunghezza totale e `stride` per lo stride.

### <a name="remarks"></a>Note

Lo stride non può essere negativo.

### <a name="example"></a>Esempio

```cpp
// slice_ctor.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> va ( 20 ), vaResult;
   for ( i = 0 ; i < 20 ; i+=1 )
      va [ i ] =  2 * (i + 1 );

   cout << "The operand valarray va is:\n( ";
      for ( i = 0 ; i < 20 ; i++ )
         cout << va [ i ] << " ";
   cout << ")." << endl;

   slice vaSlice ( 1 , 7 , 3 );
   vaResult = va [ vaSlice ];

   cout << "\nThe slice of valarray va is vaResult:"
        << "\nva[slice( 1, 7, 3)] = ( ";
      for ( i = 0 ; i < 7 ; i++ )
         cout << vaResult [ i ] << " ";
   cout << ")." << endl;
}
```

```Output
The operand valarray va is:
( 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 ).

The slice of valarray va is vaResult:
va[slice( 1, 7, 3)] = ( 4 10 16 22 28 34 40 ).
```

## <a name="start"></a>  slice::start

Trova l'indice iniziale di una sezione di un valarray.

```cpp
size_t start() const;
```

### <a name="return-value"></a>Valore restituito

Indice iniziale di una sezione di un valarray.

### <a name="example"></a>Esempio

```cpp
// slice_start.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;
   size_t startVAR;

   valarray<int> va ( 20 ), vaResult;
   for ( i = 0 ; i < 20 ; i += 1 )
      va [ i ] = i+1;

   cout << "The operand valarray va is:\n ( ";
      for ( i = 0 ; i < 20 ; i++ )
         cout << va [ i ] << " ";
   cout << ")." << endl;

   slice vaSlice ( 3 , 6 , 3 );
   vaResult = va [ vaSlice ];

   cout << "The slice of valarray va is vaResult = "
        << "va[slice( 3, 6, 3)] =\n ( ";
      for ( i = 0 ; i < 6 ; i++ )
         cout << vaResult [ i ] << " ";
   cout << ")." << endl;

   startVAR = vaSlice.start ( );
   cout << "The start index of slice vaSlice is: "
        << startVAR << "." << endl;
}
```

```Output
The operand valarray va is:
 ( 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 ).
The slice of valarray va is vaResult = va[slice( 3, 6, 3)] =
 ( 4 7 10 13 16 19 ).
The start index of slice vaSlice is: 3.
```

## <a name="stride"></a>  slice::stride

Trova la distanza tra gli elementi di una sezione di un valarray.

```cpp
size_t stride() const;
```

### <a name="return-value"></a>Valore restituito

Distanza tra gli elementi di una sezione di un valarray.

### <a name="example"></a>Esempio

```cpp
// slice_stride.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;
   size_t strideVAR;

   valarray<int> va ( 20 ), vaResult;
   for ( i = 0 ; i < 20 ; i += 1 )
      va [ i ] =  3 * ( i + 1 );

   cout << "The operand valarray va is:\n ( ";
      for ( i = 0 ; i < 20 ; i++ )
         cout << va [ i ] << " ";
   cout << ")." << endl;

   slice vaSlice ( 4 , 5 , 3 );
   vaResult = va [ vaSlice ];

   cout << "The slice of valarray va is vaResult = "
        << "va[slice( 4, 5, 3)] =\n ( ";
      for ( i = 0 ; i < 5 ; i++ )
         cout << vaResult [ i ] << " ";
   cout << ")." << endl;

   strideVAR = vaSlice.stride ( );
   cout << "The stride of slice vaSlice is: "
        << strideVAR << "." << endl;
}
```

```Output
The operand valarray va is:
 ( 3 6 9 12 15 18 21 24 27 30 33 36 39 42 45 48 51 54 57 60 ).
The slice of valarray va is vaResult = va[slice( 4, 5, 3)] =
 ( 15 24 33 42 51 ).
The stride of slice vaSlice is: 3.
```

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
