---
description: 'Altre informazioni su: iterator_traits struct'
title: Struct iterator_traits
ms.date: 11/04/2016
f1_keywords:
- xutility/std::iterator_traits
helpviewer_keywords:
- iterator_traits struct
- iterator_traits class
ms.assetid: 8b92c2c5-f658-402f-8ca1-e7ae301b8514
ms.openlocfilehash: ac97b84ff7bcedc00f2b069ce05f734ac65618ee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97289680"
---
# <a name="iterator_traits-struct"></a>Struct iterator_traits

Struct helper modello usata per specificare tutte le definizioni di tipi critici che deve avere un iteratore.

## <a name="syntax"></a>Sintassi

```cpp
struct iterator_traits {
   typedef typename Iterator::iterator_category iterator_category;
   typedef typename Iterator::value_type value_type;
   typedef typename Iterator::difference_type difference_type;
   typedef difference_type distance_type;
   typedef typename Iterator::pointer pointer;
   typedef typename Iterator::reference reference;
   };
```

## <a name="remarks"></a>Osservazioni

La struct modello definisce i tipi di membro:

- `iterator_category`: sinonimo di `Iterator::iterator_category` .

- `value_type`: sinonimo di `Iterator::value_type` .

- `difference_type`: sinonimo di `Iterator::difference_type` .

- `distance_type`: sinonimo di `Iterator::difference_type.`

- `pointer`: sinonimo di `Iterator::pointer` .

- `reference`: sinonimo di `Iterator::reference` .

Le specializzazioni parziali determinano i tipi critici associati a un puntatore a un oggetto di tipo **Type** <strong>\*</strong> o **const** <strong>\*</strong> .

In questa implementazione è anche possibile usare varie funzioni modello che non fanno uso di specializzazioni parziali:

```cpp
template <class Category, class Type, class Diff>
C _Iter_cat(const iterator<Category, Ty, Diff>&);

template <class Ty>
random_access_iterator_tag _Iter_cat(const Ty *);

template <class Category, class Ty, class Diff>
Ty *val_type(const iterator<Category, Ty, Diff>&);

template <class Ty>
Ty *val_type(const Ty *);

template <class Category, class Ty, class Diff>
Diff *_Dist_type(const iterator<Category, Ty, Diff>&);

template <class Ty>
ptrdiff_t *_Dist_type(const Ty *);
```

Ciò determina indirettamente la presenza di più funzioni dello stesso tipo. È possibile usare queste funzioni come argomenti per una chiamata di funzione. Il loro unico scopo è fornire un parametro di modello di classe utile alla funzione chiamata.

## <a name="example"></a>Esempio

```cpp
// iterator_traits.cpp
// compile with: /EHsc
#include <iostream>
#include <iterator>
#include <vector>
#include <list>

using namespace std;

template< class it >
void
function( it i1, it i2 )
{
   iterator_traits<it>::iterator_category cat;
   cout << typeid( cat ).name( ) << endl;
   while ( i1 != i2 )
   {
      iterator_traits<it>::value_type x;
      x = *i1;
      cout << x << " ";
      i1++;
   };
   cout << endl;
};

int main( )
{
   vector<char> vc( 10,'a' );
   list<int> li( 10 );
   function( vc.begin( ), vc.end( ) );
   function( li.begin( ), li.end( ) );
}
/* Output:
struct std::random_access_iterator_tag
a a a a a a a a a a
struct std::bidirectional_iterator_tag
0 0 0 0 0 0 0 0 0 0
*/
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<iterator>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[\<iterator>](../standard-library/iterator.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
