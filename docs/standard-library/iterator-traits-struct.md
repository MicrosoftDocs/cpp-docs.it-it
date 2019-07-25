---
title: Struct iterator_traits
ms.date: 11/04/2016
f1_keywords:
- xutility/std::iterator_traits
helpviewer_keywords:
- iterator_traits struct
- iterator_traits class
ms.assetid: 8b92c2c5-f658-402f-8ca1-e7ae301b8514
ms.openlocfilehash: 9d2f9d79d200579f539f7d9edc49d4a907e6cdb2
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68455574"
---
# <a name="iteratortraits-struct"></a>Struct iterator_traits

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

## <a name="remarks"></a>Note

La struct modello definisce i tipi di membro:

- `iterator_category`: sinonimo di `Iterator::iterator_category`.

- `value_type`: sinonimo di `Iterator::value_type`.

- `difference_type`: sinonimo di `Iterator::difference_type`.

- `distance_type`: sinonimo di`Iterator::difference_type.`

- `pointer`: sinonimo di `Iterator::pointer`.

- `reference`: sinonimo di `Iterator::reference`.

Le specializzazioni parziali determinano i tipi critici associati a un puntatore a un oggetto di tipo **Type** <strong>\*</strong> o **const** <strong>\*</strong>.

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

Ciò determina indirettamente la presenza di più funzioni dello stesso tipo. È possibile usare queste funzioni come argomenti per una chiamata di funzione. Il loro unico scopo è di fornire un utile parametro di classe modello alla funzione chiamata.

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

**Intestazione:** \<iterator>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<iterator>](../standard-library/iterator.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\ (Sicurezza dei thread nella libreria standard C++)
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
