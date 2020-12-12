---
description: 'Altre informazioni su: less_equal struct'
title: less_equal (struct)
ms.date: 11/04/2016
f1_keywords:
- functional/std::less_equal
helpviewer_keywords:
- less_equal function
- less_equal struct
ms.assetid: 32085782-c7e0-4310-9b40-8aa3c1bff211
ms.openlocfilehash: b2d715971c5278629a6ea812c5a9c199f00c4a07
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97312891"
---
# <a name="less_equal-struct"></a>less_equal (struct)

Predicato binario che esegue l'operazione di minore o uguale a ( `operator<=` ) sui relativi argomenti.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type = void>
struct less_equal : public binary_function <Type, Type, bool>
{
    bool operator()(const Type& Left, const Type& Right) const;
};

// specialized transparent functor for operator<=
template <>
struct less_equal<void>
{
  template <class T, class U>
  auto operator()(T&& Left, U&& Right) const
    -> decltype(std::forward<T>(Left) <= std::forward<U>(Right));
};
```

### <a name="parameters"></a>Parametri

*Digitare*, *T*, *U*\
Qualsiasi tipo che supporta un `operator<=` che accetta gli operandi dei tipi specificati o dedotti.

*Sinistra*\
Operando sinistro dell'operazione di minore o uguale a. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo *Type*. Il modello specializzato esegue l'avanzamento perfetto degli argomenti di riferimento lvalue e rvalue del tipo derivato *T*.

*Ok*\
Operando destro dell'operazione di minore o uguale a. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo *Type*. Il modello specializzato esegue l'avanzamento perfetto degli argomenti di riferimento lvalue e rvalue del tipo derivato *U*.

## <a name="return-value"></a>Valore restituito

Risultato di `Left <= Right`. Il modello specializzato esegue un inoltro perfetto del risultato, con il tipo restituito da `operator<=`.

## <a name="remarks"></a>Commenti

Il predicato binario `less_equal` < `Type`> fornisce un ordinamento debole rigoroso di un set di valori  di elementi di tipo Type in classi di equivalenza, se e solo se questo tipo soddisfa i requisiti matematici standard per essere ordinati. Le specializzazioni per qualsiasi tipo di puntatore producono un ordinamento totale degli elementi, in quanto tutti gli elementi di valori distinti vengono ordinati l'uno rispetto all'altro.

## <a name="example"></a>Esempio

```cpp
// functional_less_equal.cpp
// compile with: /EHsc
#define _CRT_RAND_S
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <functional>
#include <cstdlib>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;
   vector <int>::iterator Iter1;
   vector <int>::reverse_iterator rIter1;
   unsigned int randomNumber;

   int i;
   for ( i = 0 ; i < 5 ; i++ )
   {
      if ( rand_s( &randomNumber ) == 0 )
      {
         // Convert the random number to be between 1 - 50000
         // This is done for readability purposes
         randomNumber = ( unsigned int) ((double)randomNumber /
            (double) UINT_MAX * 50000) + 1;

         v1.push_back( randomNumber );
      }
   }
   for ( i = 0 ; i < 3 ; i++ )
   {
      v1.push_back( 2836 );
   }

   cout << "Original vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout << *Iter1 << " ";
   cout << ")" << endl;

   // To sort in ascending order,
   // use the binary predicate less_equal<int>( )
   sort( v1.begin( ), v1.end( ), less_equal<int>( ) );
   cout << "Sorted vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout << *Iter1 << " ";
   cout << ")" << endl;
}
```

```Output
Original vector v1 = (31247 37154 48755 15251 6205 2836 2836 2836)
Sorted vector v1 = (2836 2836 2836 6205 15251 31247 37154 48755)
```
