---
title: Struct greater | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- xfunctional/std::greater
dev_langs:
- C++
helpviewer_keywords:
- greater struct
- greater function
ms.assetid: ebc348e1-edcd-466b-b21a-db95bd8f9079
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 06fe531330b1043c78882fb511caafe9cc3a7b6d
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38963807"
---
# <a name="greater-struct"></a>greater (struct)

Un predicato binario che esegue la maggiore-operazione di confronto (`operator>`) sui relativi argomenti.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type = void>
struct greater : public binary_function <Type, Type, bool>
{
    bool operator()(
    const Type& Left,
    const Type& Right) const;

};

// specialized transparent functor for operator>
template <>
struct greater<void>
{
  template <class T, class U>
  auto operator()(T&& Left, U&& Right) const
    ->  decltype(std::forward<T>(Left)> std::forward<U>(Right));
 };
```

### <a name="parameters"></a>Parametri

*Tipo di*, *T*, *U* qualsiasi tipo che supporta un `operator>` che accetta gli operandi dei tipi specificati o dedotti.

*Sinistra* l'operando sinistro del maggiore-operazione di confronto. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo *tipo*. Il modello specializzato esegue un inoltro di lvalue perfetto e gli argomenti di riferimento rvalue del tipo di dedurre *T*.

*Destra* l'operando destro del maggiore-operazione di confronto. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo *tipo*. Il modello specializzato esegue un inoltro di lvalue perfetto e gli argomenti di riferimento rvalue del tipo di dedurre *U*.

## <a name="return-value"></a>Valore restituito

Risultato di `Left > Right`. Il modello specializzato esegue un inoltro perfetto del risultato, con il tipo restituito da `operator>`.

## <a name="remarks"></a>Note

Il predicato binario `greater` <  `Type`> fornisce un rigido ordinamento debole di un set di valori di elemento di tipo *tipo* in classi di equivalenza esclusivamente se il tipo soddisfa lo standard di matematico requisiti per l'ordinamento. Le specializzazioni per qualsiasi tipo di puntatore producono un ordinamento totale degli elementi, in quanto tutti gli elementi di valori distinti vengono ordinati l'uno rispetto all'altro.

## <a name="example"></a>Esempio

```cpp
// functional_greater.cpp
// compile with: /EHsc
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

   int i;
   for ( i = 0 ; i < 8 ; i++ )
   {
      v1.push_back( rand( ) );
   }

   cout << "Original vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout << *Iter1 << " ";
   cout << ")" << endl;

   // To sort in ascending order,
   // use default binary predicate less<int>( )
   sort( v1.begin( ), v1.end( ) );
   cout << "Sorted vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout << *Iter1 << " ";
   cout << ")" << endl;

   // To sort in descending order,
   // specify binary predicate greater<int>( )
   sort( v1.begin( ), v1.end( ), greater<int>( ) );
   cout << "Resorted vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout << *Iter1 << " ";
   cout << ")" << endl;
}
```

```Output
Original vector v1 = (41 18467 6334 26500 19169 15724 11478 29358)
Sorted vector v1 = (41 6334 11478 15724 18467 19169 26500 29358)
Resorted vector v1 = (29358 26500 19169 18467 15724 11478 6334 41)
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<functional>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
