---
title: Operatori &lt;unordered_set&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- unordered_set/std::operator!=
- unordered_set/std::operator==
dev_langs:
- C++
ms.assetid: 8653eea6-12f2-4dd7-aa2f-db38a71599a0
caps.latest.revision: 7
manager: ghogen
ms.openlocfilehash: e08be6d6228f9f636134bc9f78eff47bd9fc5ed7
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="ltunorderedsetgt-operators"></a>Operatori &lt;unordered_set&gt;

|||||
|-|-|-|-|
|[operator!=](#op_neq)|[operator==](#op_eq_eq)|[operator!=](#op_neq_unordered_multiset)|[operator==](#op_eq_eq_unordered_multiset)|

## <a name="op_neq"></a>  operator!=

Verifica se l'oggetto [unordered_set](../standard-library/unordered-set-class.md) a sinistra dell'operatore non è uguale all'oggetto unordered_set a destra.

```cpp
bool operator!=(const unordered_set <Key, Hash, Pred, Allocator>& left, const unordered_set <Key, Hash, Pred, Allocator>& right);
```

### <a name="parameters"></a>Parametri

`left` Un oggetto di tipo `unordered_set`.

`right` Un oggetto di tipo `unordered_set`.

### <a name="return-value"></a>Valore restituito

`true` se gli oggetti unordered_set non sono uguali; in caso contrario, `false`.

### <a name="remarks"></a>Note

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

## <a name="op_eq_eq"></a>  operator==

Verifica se l'oggetto [unordered_set](../standard-library/unordered-set-class.md) a sinistra dell'operatore è uguale all'oggetto unordered_set a destra.

```cpp
bool operator==(const unordered_set <Key, Hash, Pred, Allocator>& left, const unordered_set <Key, Hash, Pred, Allocator>& right);
```

### <a name="parameters"></a>Parametri

`left` Un oggetto di tipo `unordered_set`.

`right` Un oggetto di tipo `unordered_set`.

### <a name="return-value"></a>Valore restituito

`true` se gli oggetti unordered_set sono uguali; in caso contrario, `false`.

### <a name="remarks"></a>Note

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

**Output:**

`c1 == c2: false`

`c1 == c3: true`

`c2 == c3: false`

## <a name="op_neq_unordered_multiset"></a>  operator!=

Verifica se l'oggetto [unordered_multiset](../standard-library/unordered-multiset-class.md) a sinistra dell'operatore non è uguale all'oggetto unordered_multiset a destra.

```cpp
bool operator!=(const unordered_multiset <Key, Hash, Pred, Allocator>& left, const unordered_multiset <Key, Hash, Pred, Allocator>& right);
```

### <a name="parameters"></a>Parametri

`left` Un oggetto di tipo `unordered_multiset`.

`right` Un oggetto di tipo `unordered_multiset`.

### <a name="return-value"></a>Valore restituito

`true` se gli oggetti unordered_multiset non sono uguali; in caso contrario, `false`.

### <a name="remarks"></a>Note

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

**Output:**

`c1 != c2: true`

`c1 != c3: false`

`c2 != c3: true`

## <a name="op_eq_eq_unordered_multiset"></a>  operator==

Verifica se l'oggetto [unordered_multiset](../standard-library/unordered-multiset-class.md) a sinistra dell'operatore è uguale all'oggetto unordered_multiset a destra.

```cpp
bool operator==(const unordered_multiset <Key, Hash, Pred, Allocator>& left, const unordered_multiset <Key, Hash, Pred, Allocator>& right);
```

### <a name="parameters"></a>Parametri

`left` Un oggetto di tipo `unordered_multiset`.

`right` Un oggetto di tipo `unordered_multiset`.

### <a name="return-value"></a>Valore restituito

`true` se gli oggetti unordered_multiset sono uguali; in caso contrario, `false`.

### <a name="remarks"></a>Note

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

**Output:**

`c1 == c2: false`

`c1 == c3: true`

`c2 == c3: false`

## <a name="see-also"></a>Vedere anche

[<unordered_set>](../standard-library/unordered-set.md)<br/>
