---
title: Operatori &lt;unordered_set&gt;
ms.date: 11/04/2016
f1_keywords:
- unordered_set/std::operator!=
- unordered_set/std::operator==
ms.assetid: 8653eea6-12f2-4dd7-aa2f-db38a71599a0
ms.openlocfilehash: 7780b5dd031d6babc13bc202c948c3e8233f7170
ms.sourcegitcommit: 72161bcd21d1ad9cc3f12261aa84a5b026884afa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2020
ms.locfileid: "90741944"
---
# <a name="ltunordered_setgt-operators"></a>Operatori &lt;unordered_set&gt;

## <a name="operator"></a><a name="op_neq"></a> operatore! =

Verifica se l'oggetto [unordered_set](../standard-library/unordered-set-class.md) a sinistra dell'operatore non è uguale all'oggetto unordered_set a destra.

```cpp
bool operator!=(const unordered_set <Key, Hash, Pred, Allocator>& left, const unordered_set <Key, Hash, Pred, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `unordered_set`.

*Ok*\
Oggetto di tipo `unordered_set`.

### <a name="return-value"></a>Valore restituito

**`true`** Se il unordered_sets non è uguale. **`false`** se sono uguali.

### <a name="remarks"></a>Osservazioni

Il confronto tra oggetti unordered_set non è influenzato dall'ordine arbitrario in cui vengono archiviati gli elementi. Due oggetti unordered_set sono uguali se hanno lo stesso numero di elementi e gli elementi di un contenitore sono la permutazione degli elementi dell'altro contenitore. In caso contrario, non sono uguali.

### <a name="example"></a>Esempio

```cpp
// unordered_set_ne.cpp
// compile by using: cl.exe /EHsc /nologo /W4 /MTd
#include <unordered_set>
#include <iostream>
#include <ios>

int main()
{
    using namespace std;

    unordered_set<char> c1, c2, c3;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    c2.insert('c');
    c2.insert('a');
    c2.insert('d');

    c3.insert('c');
    c3.insert('a');
    c3.insert('b');

   cout << boolalpha;
   cout << "c1 != c2: " << (c1 != c2) << endl;
   cout << "c1 != c3: " << (c1 != c3) << endl;
   cout << "c2 != c3: " << (c2 != c3) << endl;

    return (0);
}
```

**Output:**

`c1 != c2: true`

`c1 != c3: false`

`c2 != c3: true`

## <a name="operator"></a><a name="op_eq_eq"></a> operatore = =

Verifica se l'oggetto [unordered_set](../standard-library/unordered-set-class.md) a sinistra dell'operatore è uguale all'oggetto unordered_set a destra.

```cpp
bool operator==(const unordered_set <Key, Hash, Pred, Allocator>& left, const unordered_set <Key, Hash, Pred, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `unordered_set`.

*Ok*\
Oggetto di tipo `unordered_set`.

### <a name="return-value"></a>Valore restituito

**`true`** Se la unordered_sets è uguale; **`false`** se non sono uguali.

### <a name="remarks"></a>Osservazioni

Il confronto tra oggetti unordered_set non è influenzato dall'ordine arbitrario in cui vengono archiviati gli elementi. Due oggetti unordered_set sono uguali se hanno lo stesso numero di elementi e gli elementi di un contenitore sono la permutazione degli elementi dell'altro contenitore. In caso contrario, non sono uguali.

### <a name="example"></a>Esempio

```cpp
// unordered_set_eq.cpp
// compile by using: cl.exe /EHsc /nologo /W4 /MTd
#include <unordered_set>
#include <iostream>
#include <ios>

int main()
{
    using namespace std;

    unordered_set<char> c1, c2, c3;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    c2.insert('c');
    c2.insert('a');
    c2.insert('d');

    c3.insert('c');
    c3.insert('a');
    c3.insert('b');

   cout << boolalpha;
   cout << "c1 == c2: " << (c1 == c2) << endl;
   cout << "c1 == c3: " << (c1 == c3) << endl;
   cout << "c2 == c3: " << (c2 == c3) << endl;

    return (0);
}
```

```Output
c1 == c2: false
c1 == c3: true
c2 == c3: false
```

## <a name="operator-multiset"></a><a name="op_neq_unordered_multiset"></a> operatore! = (multiset)

Verifica se l'oggetto [unordered_multiset](../standard-library/unordered-multiset-class.md) a sinistra dell'operatore non è uguale all'oggetto unordered_multiset a destra.

```cpp
bool operator!=(const unordered_multiset <Key, Hash, Pred, Allocator>& left, const unordered_multiset <Key, Hash, Pred, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `unordered_multiset`.

*Ok*\
Oggetto di tipo `unordered_multiset`.

### <a name="return-value"></a>Valore restituito

**`true`** Se il unordered_multisets non è uguale. **`false`** se sono uguali.

### <a name="remarks"></a>Osservazioni

Il confronto tra oggetti unordered_multiset non è influenzato dall'ordine arbitrario in cui vengono archiviati gli elementi. Due oggetti unordered_multiset sono uguali se hanno lo stesso numero di elementi e gli elementi di un contenitore sono la permutazione degli elementi dell'altro contenitore. In caso contrario, non sono uguali.

### <a name="example"></a>Esempio

```cpp
// unordered_multiset_ne.cpp
// compile by using: cl.exe /EHsc /nologo /W4 /MTd
#include <unordered_set>
#include <iostream>
#include <ios>

int main()
{
    using namespace std;

    unordered_multiset<char> c1, c2, c3;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');
    c1.insert('c');

    c2.insert('c');
    c2.insert('c');
    c2.insert('a');
    c2.insert('d');

    c3.insert('c');
    c3.insert('c');
    c3.insert('a');
    c3.insert('b');

   cout << boolalpha;
   cout << "c1 != c2: " << (c1 != c2) << endl;
   cout << "c1 != c3: " << (c1 != c3) << endl;
   cout << "c2 != c3: " << (c2 != c3) << endl;

    return (0);
}
```

```Output
c1 != c2: true
c1 != c3: false
c2 != c3: true
```

## <a name="operator-multiset"></a><a name="op_eq_eq_unordered_multiset"></a> operatore = = (multiset)

Verifica se l'oggetto [unordered_multiset](../standard-library/unordered-multiset-class.md) a sinistra dell'operatore è uguale all'oggetto unordered_multiset a destra.

```cpp
bool operator==(const unordered_multiset <Key, Hash, Pred, Allocator>& left, const unordered_multiset <Key, Hash, Pred, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `unordered_multiset`.

*Ok*\
Oggetto di tipo `unordered_multiset`.

### <a name="return-value"></a>Valore restituito

**`true`** Se la unordered_multisets è uguale; **`false`** se non sono uguali.

### <a name="remarks"></a>Osservazioni

Il confronto tra oggetti unordered_multiset non è influenzato dall'ordine arbitrario in cui vengono archiviati gli elementi. Due oggetti unordered_multiset sono uguali se hanno lo stesso numero di elementi e gli elementi di un contenitore sono la permutazione degli elementi dell'altro contenitore. In caso contrario, non sono uguali.

### <a name="example"></a>Esempio

```cpp
// unordered_multiset_eq.cpp
// compile by using: cl.exe /EHsc /nologo /W4 /MTd
#include <unordered_set>
#include <iostream>
#include <ios>

int main()
{
    using namespace std;

    unordered_multiset<char> c1, c2, c3;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');
    c1.insert('c');

    c2.insert('c');
    c2.insert('c');
    c2.insert('a');
    c2.insert('d');

    c3.insert('c');
    c3.insert('c');
    c3.insert('a');
    c3.insert('b');

   cout << boolalpha;
   cout << "c1 == c2: " << (c1 == c2) << endl;
   cout << "c1 == c3: " << (c1 == c3) << endl;
   cout << "c2 == c3: " << (c2 == c3) << endl;

    return (0);
}
```

```Output
c1 == c2: false
c1 == c3: true
c2 == c3: false
```
