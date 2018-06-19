---
title: Struct multiplies | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- xfunctional/std::multiplies
dev_langs:
- C++
helpviewer_keywords:
- multiplies class
- multiplies struct
ms.assetid: ec85e8af-70ad-44ad-90f0-d961a5847864
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bf42d118118a849a841967404bc626ed3b9205ab
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33852650"
---
# <a name="multiplies-struct"></a>Struct multiplies

Oggetto funzione predefinito che esegue l'operazione di moltiplicazione (`operator*` binario) sugli argomenti.

## <a name="syntax"></a>Sintassi

```
template <class Type = void>
struct multiplies : public binary_function <Type, Type, Type>
{
    Type operator()(const Type& Left, const Type& Right) const;
};

// specialized transparent functor for operator*
template <>
struct multiplies<void>
{
  template <class T, class U>
  auto operator()(T&& Left, U&& Right) const`
    -> decltype(std::forward<T>(Left) * std::forward<U>(Right));
 };
```

### <a name="parameters"></a>Parametri

`Type`, `T`, `U` Un tipo che supporta un file binario `operator*` che accetta gli operandi dei tipi specificati o dedotti.

`Left` L'operando sinistro dell'operazione di moltiplicazione. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo `Type`. Il modello specializzato esegue un inoltro perfetto degli argomenti di riferimento lvalue e rvalue del tipo dedotto `T`.

`Right` L'operando destro dell'operazione di moltiplicazione. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo `Type`. Il modello specializzato esegue un inoltro perfetto degli argomenti di riferimento lvalue e rvalue del tipo dedotto `U`.

## <a name="return-value"></a>Valore restituito

Risultato di `Left * Right`. Il modello specializzato esegue un inoltro perfetto del risultato, con il tipo restituito da `operator*`.

## <a name="example"></a>Esempio

```cpp
// functional_multiplies.cpp
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
      v1.push_back( 2 * i );
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

   // Finding the element-wise products of the elements of v1 & v2
   transform ( v1.begin( ),  v1.end( ), v2.begin( ), v3.begin ( ),
      multiplies<int>( ) );

   cout << "The element-wise products of vectors V1 & v2\n are: ( " ;
   for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )
      cout << *Iter3 << " ";
   cout << ")" << endl;
}
\* Output:
The vector v1 = ( 2 4 6 8 10 12 )
The vector v2 = ( 3 6 9 12 15 18 )
The element-wise products of vectors V1 & v2
 are: ( 6 24 54 96 150 216 )
*\
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<functional>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
