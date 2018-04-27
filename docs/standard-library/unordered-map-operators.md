---
title: Operatori &lt;unordered_map&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- unordered_map/std::operator!=
- unordered_map/std::operator==
dev_langs:
- C++
ms.assetid: 9d5add0b-84bd-4a79-bd82-3f58b55145ed
caps.latest.revision: 7
manager: ghogen
ms.openlocfilehash: a38b08f2311ef4f4f9e863d6739937c47129ac06
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="ltunorderedmapgt-operators"></a>Operatori &lt;unordered_map&gt;

|||||
|-|-|-|-|
|[operator!=](#op_neq)|[operator==](#op_eq_eq)|[operator!=](#op_neq_multimap)|[operator==](#op_eq_eq_multimap)|

## <a name="op_neq"></a>  operator!=

Verifica se l'oggetto [unordered_map](../standard-library/unordered-map-class.md) a sinistra dell'operatore non è uguale all'oggetto unordered_map a destra.

```cpp
bool operator!=(const unordered_map <Key, Type, Hash, Pred, Allocator>& left, const unordered_map <Key, Type, Hash, Pred, Allocator>& right);
```

### <a name="parameters"></a>Parametri

`left` Un oggetto di tipo `unordered_map`.

`right` Un oggetto di tipo `unordered_map`.

### <a name="return-value"></a>Valore restituito

`true` se gli oggetti unordered_map non sono uguali; `false` se sono uguali.

### <a name="remarks"></a>Note

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

## <a name="op_eq_eq"></a>  operator==

Verifica se l'oggetto [unordered_map](../standard-library/unordered-map-class.md) a sinistra dell'operatore è uguale all'oggetto unordered_map a destra.

```cpp
bool operator==(const unordered_map <Key, Type, Hash, Pred, Allocator>& left, const unordered_map <Key, Type, Hash, Pred, Allocator>& right);
```

### <a name="parameters"></a>Parametri

`left` Un oggetto di tipo `unordered_map`.

`right` Un oggetto di tipo `unordered_map`.

### <a name="return-value"></a>Valore restituito

`true` se gli oggetti unordered_map sono uguali; `false` se non sono uguali.

### <a name="remarks"></a>Note

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

## <a name="op_neq_multimap"></a>  operator!=

Verifica se l'oggetto [unordered_multimap](../standard-library/unordered-multimap-class.md) a sinistra dell'operatore non è uguale all'oggetto unordered_multimap a destra.

```cpp
bool operator!=(const unordered_multimap <Key, Type, Hash, Pred, Allocator>& left, const unordered_multimap <Key, Type, Hash, Pred, Allocator>& right);
```

### <a name="parameters"></a>Parametri

`left` Un oggetto di tipo `unordered_multimap`.

`right` Un oggetto di tipo `unordered_multimap`.

### <a name="return-value"></a>Valore restituito

`true` se gli oggetti unordered_multimap non sono uguali; `false` se sono uguali.

### <a name="remarks"></a>Note

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

## <a name="op_eq_eq_multimap"></a>  operator==

Verifica se l'oggetto [unordered_multimap](../standard-library/unordered-multimap-class.md) a sinistra dell'operatore è uguale all'oggetto unordered_multimap a destra.

```cpp
bool operator==(const unordered_multimap <Key, Type, Hash, Pred, Allocator>& left, const unordered_multimap <Key, Type, Hash, Pred, Allocator>& right);
```

### <a name="parameters"></a>Parametri

`left` Un oggetto di tipo `unordered_multimap`.

`right` Un oggetto di tipo `unordered_multimap`.

### <a name="return-value"></a>Valore restituito

`true` se gli oggetti unordered_multimap sono uguali; `false` se non sono uguali.

### <a name="remarks"></a>Note

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

[<unordered_map>](../standard-library/unordered-map.md)<br/>
