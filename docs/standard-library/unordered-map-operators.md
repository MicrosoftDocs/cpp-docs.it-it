---
title: Operatori &lt;unordered_map&gt;
ms.date: 11/04/2016
f1_keywords:
- unordered_map/std::operator!=
- unordered_map/std::operator==
ms.assetid: 9d5add0b-84bd-4a79-bd82-3f58b55145ed
ms.openlocfilehash: f062c4fd0332525a8b8940d2d93df41df56d2baa
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373130"
---
# <a name="ltunordered_mapgt-operators"></a>Operatori &lt;unordered_map&gt;

|||||
|-|-|-|-|
|[operatore!](#op_neq)|[operatore di comando](#op_eq_eq)|[operatore!](#op_neq_multimap)|[operatore di comando](#op_eq_eq_multimap)|

## <a name="operator"></a><a name="op_neq"></a>operatore!

Verifica se l'oggetto [unordered_map](../standard-library/unordered-map-class.md) a sinistra dell'operatore non è uguale all'oggetto unordered_map a destra.

```cpp
bool operator!=(const unordered_map <Key, Type, Hash, Pred, Allocator>& left, const unordered_map <Key, Type, Hash, Pred, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*Sinistra*\
Oggetto di tipo `unordered_map`.

*va bene*\
Oggetto di tipo `unordered_map`.

### <a name="return-value"></a>Valore restituito

**true** se le unordered_maps non sono uguali; **false** se sono uguali.

### <a name="remarks"></a>Osservazioni

Il confronto tra oggetti unordered_map non è influenzato dall'ordine arbitrario in cui vengono archiviati gli elementi. Due oggetti unordered_map sono uguali se hanno lo stesso numero di elementi e gli elementi di un contenitore sono la permutazione degli elementi dell'altro contenitore. In caso contrario, non sono uguali.

### <a name="example"></a>Esempio

```cpp
// unordered_map_op_ne.cpp
// compile by using: cl.exe /EHsc /nologo /W4 /MTd
#include <unordered_map>
#include <iostream>
#include <ios>

int main( )
{
   using namespace std;
   unordered_map<int, int> um1, um2, um3;

   for ( int i = 0 ; i < 3 ; ++i ) {
      um1.insert( make_pair( i+1, i ) );
      um1.insert( make_pair( i, i ) );

      um2.insert( make_pair( i, i+1 ) );
      um2.insert( make_pair( i, i ) );

      um3.insert( make_pair( i, i ) );
      um3.insert( make_pair( i+1, i ) );
   }

   cout << boolalpha;
   cout << "um1 != um2: " << (um1 != um2) << endl;
   cout << "um1 != um3: " << (um1 != um3) << endl;
   cout << "um2 != um3: " << (um2 != um3) << endl;
}
```

**Output:**

`um1 != um2: true`

`um1 != um3: false`

`um2 != um3: true`

## <a name="operator"></a><a name="op_eq_eq"></a>operatore di comando

Verifica se l'oggetto [unordered_map](../standard-library/unordered-map-class.md) a sinistra dell'operatore è uguale all'oggetto unordered_map a destra.

```cpp
bool operator==(const unordered_map <Key, Type, Hash, Pred, Allocator>& left, const unordered_map <Key, Type, Hash, Pred, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*Sinistra*\
Oggetto di tipo `unordered_map`.

*va bene*\
Oggetto di tipo `unordered_map`.

### <a name="return-value"></a>Valore restituito

**true** se i unordered_maps sono uguali; **false** se non sono uguali.

### <a name="remarks"></a>Osservazioni

Il confronto tra oggetti unordered_map non è influenzato dall'ordine arbitrario in cui vengono archiviati gli elementi. Due oggetti unordered_map sono uguali se hanno lo stesso numero di elementi e gli elementi di un contenitore sono la permutazione degli elementi dell'altro contenitore. In caso contrario, non sono uguali.

### <a name="example"></a>Esempio

```cpp
// unordered_map_op_eq.cpp
// compile by using: cl.exe /EHsc /nologo /W4 /MTd
#include <unordered_map>
#include <iostream>
#include <ios>

int main( )
{
   using namespace std;
   unordered_map<int, int> um1, um2, um3;

   for ( int i = 0 ; i < 3 ; ++i ) {
      um1.insert( make_pair( i+1, i ) );
      um1.insert( make_pair( i, i ) );

      um2.insert( make_pair( i, i+1 ) );
      um2.insert( make_pair( i, i ) );

      um3.insert( make_pair( i, i ) );
      um3.insert( make_pair( i+1, i ) );
   }

   cout << boolalpha;
   cout << "um1 == um2: " << (um1 == um2) << endl;
   cout << "um1 == um3: " << (um1 == um3) << endl;
   cout << "um2 == um3: " << (um2 == um3) << endl;
}
```

**Output:**

`um1 == um2: false`

`um1 == um3: true`

`um2 == um3: false`

## <a name="operator"></a><a name="op_neq_multimap"></a>operatore!

Verifica se l'oggetto [unordered_multimap](../standard-library/unordered-multimap-class.md) a sinistra dell'operatore non è uguale all'oggetto unordered_multimap a destra.

```cpp
bool operator!=(const unordered_multimap <Key, Type, Hash, Pred, Allocator>& left, const unordered_multimap <Key, Type, Hash, Pred, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*Sinistra*\
Oggetto di tipo `unordered_multimap`.

*va bene*\
Oggetto di tipo `unordered_multimap`.

### <a name="return-value"></a>Valore restituito

**true** se il unordered_multimaps non è uguale; **false** se sono uguali.

### <a name="remarks"></a>Osservazioni

Il confronto tra oggetti unordered_multimap non è influenzato dall'ordine arbitrario in cui vengono archiviati gli elementi. Due oggetti unordered_multimap sono uguali se hanno lo stesso numero di elementi e gli elementi di un contenitore sono la permutazione degli elementi dell'altro contenitore. In caso contrario, non sono uguali.

### <a name="example"></a>Esempio

```cpp
// unordered_multimap_op_ne.cpp
// compile by using: cl.exe /EHsc /nologo /W4 /MTd
#include <unordered_map>
#include <iostream>
#include <ios>

int main( )
{
   using namespace std;
   unordered_multimap<int, int> um1, um2, um3;

   for ( int i = 0 ; i < 3 ; ++i ) {
      um1.insert( make_pair( i, i ) );
      um1.insert( make_pair( i, i ) );

      um2.insert( make_pair( i, i ) );
      um2.insert( make_pair( i, i ) );
      um2.insert( make_pair( i, i ) );

      um3.insert( make_pair( i, i ) );
      um3.insert( make_pair( i, i ) );
   }

   cout << boolalpha;
   cout << "um1 != um2: " << (um1 != um2) << endl;
   cout << "um1 != um3: " << (um1 != um3) << endl;
   cout << "um2 != um3: " << (um2 != um3) << endl;
}
```

**Output:**

`um1 != um2: true`

`um1 != um3: false`

`um2 != um3: true`

## <a name="operator"></a><a name="op_eq_eq_multimap"></a>operatore di comando

Verifica se l'oggetto [unordered_multimap](../standard-library/unordered-multimap-class.md) a sinistra dell'operatore è uguale all'oggetto unordered_multimap a destra.

```cpp
bool operator==(const unordered_multimap <Key, Type, Hash, Pred, Allocator>& left, const unordered_multimap <Key, Type, Hash, Pred, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*Sinistra*\
Oggetto di tipo `unordered_multimap`.

*va bene*\
Oggetto di tipo `unordered_multimap`.

### <a name="return-value"></a>Valore restituito

**true** se i unordered_multimaps sono uguali; **false** se non sono uguali.

### <a name="remarks"></a>Osservazioni

Il confronto tra oggetti unordered_multimap non è influenzato dall'ordine arbitrario in cui vengono archiviati gli elementi. Due oggetti unordered_multimap sono uguali se hanno lo stesso numero di elementi e gli elementi di un contenitore sono la permutazione degli elementi dell'altro contenitore. In caso contrario, non sono uguali.

### <a name="example"></a>Esempio

```cpp
// unordered_multimap_op_eq.cpp
// compile by using: cl.exe /EHsc /nologo /W4 /MTd
#include <unordered_map>
#include <iostream>
#include <ios>

int main( )
{
   using namespace std;
   unordered_multimap<int, int> um1, um2, um3;

   for ( int i = 0 ; i < 3 ; ++i ) {
      um1.insert( make_pair( i, i ) );
      um1.insert( make_pair( i, i ) );

      um2.insert( make_pair( i, i ) );
      um2.insert( make_pair( i, i ) );
      um2.insert( make_pair( i, i ) );

      um3.insert( make_pair( i, i ) );
      um3.insert( make_pair( i, i ) );
   }

   cout << boolalpha;
   cout << "um1 == um2: " << (um1 == um2) << endl;
   cout << "um1 == um3: " << (um1 == um3) << endl;
   cout << "um2 == um3: " << (um2 == um3) << endl;
}
```

**Output:**

`um1 == um2: false`

`um1 == um3: true`

`um2 == um3: false`

## <a name="see-also"></a>Vedere anche

[<unordered_map>](../standard-library/unordered-map.md)
