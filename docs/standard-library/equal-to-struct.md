---
description: 'Altre informazioni su: equal_to struct'
title: Struct equal_to
ms.date: 11/04/2016
f1_keywords:
- functional/std::equal_to
helpviewer_keywords:
- equal_to function
- equal_to struct
ms.assetid: 8e4f2b50-b2db-48e3-b4cc-6cc03362c2a6
ms.openlocfilehash: cae0531c31396d16d447e3b0123dc679bbfd5aa6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324436"
---
# <a name="equal_to-struct"></a>Struct equal_to

Predicato binario che esegue l'operazione di uguaglianza ( `operator==` ) sui relativi argomenti.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type = void>
struct equal_to : public binary_function<Type, Type, bool>
{
    bool operator()(const Type& Left, const Type& Right) const;
};

// specialized transparent functor for operator==
template <>
struct equal_to<void>
{
    template <class T, class U>
    auto operator()(T&& Left, U&& Right) const
      ->  decltype(std::forward<T>(Left) == std::forward<U>(Right));
};
```

### <a name="parameters"></a>Parametri

*Digitare*, *T*, *U*\
Qualsiasi tipo che supporta un `operator==` che accetta gli operandi dei tipi specificati o dedotti.

*Sinistra*\
L'operando sinistro dell'operatore di uguaglianza. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo *Type*. Il modello specializzato esegue l'avanzamento perfetto degli argomenti di riferimento lvalue e rvalue del tipo derivato *T*.

*Ok*\
L'operando destro dell'operatore di uguaglianza. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo *Type*. Il modello specializzato esegue l'avanzamento perfetto degli argomenti di riferimento lvalue e rvalue del tipo derivato *U*.

## <a name="return-value"></a>Valore restituito

Risultato di `Left == Right`. Il modello specializzato esegue un inoltro perfetto del risultato, con il tipo restituito da `operator==`.

## <a name="remarks"></a>Commenti

Gli oggetti di tipo *Type* devono essere confrontabili con l'uguaglianza. È necessario che l'operatore `operator==` definito nel set di oggetti soddisfi le proprietà matematiche di una relazione di equivalenza. Tutti i tipi di puntatore e numerici incorporati soddisfano questo requisito.

## <a name="example"></a>Esempio

```cpp
// functional_equal_to.cpp
// compile with: /EHsc
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

int main( )
{
   vector <double> v1, v2, v3 ( 6 );
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
   transform ( v1.begin( ),  v1.end( ), v2.begin( ), v3.begin ( ),
      equal_to<double>( ) );

   cout << "The result of the element-wise equal_to comparison\n"
      << "between v1 & v2 is: ( " ;
   for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )
      cout << *Iter3 << " ";
   cout << ")" << endl;
}
```

```Output
The vector v1 = ( 0 1 4 5 8 9 )
The vector v2 = ( -0 1 -4 5 -8 9 )
The result of the element-wise equal_to comparison
between v1 & v2 is: ( 1 1 0 1 0 1 )
```
