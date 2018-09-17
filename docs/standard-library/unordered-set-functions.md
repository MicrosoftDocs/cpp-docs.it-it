---
title: Funzioni &lt;unordered_set&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- unordered_set/std::swap (set)
- unordered_set/std::swap (unordered_multiset)
ms.assetid: 66b35671-4023-4411-ad50-83786580d8ee
ms.openlocfilehash: 28fb028f3383225d89a8366461400bf704c7a4dd
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45720083"
---
# <a name="ltunorderedsetgt-functions"></a>Funzioni &lt;unordered_set&gt;

|||
|-|-|
|[swap (set)](#swap)|[swap (unordered_multiset)](#swap_unordered_multiset)|

## <a name="swap"></a>  swap (unordered_set)

Scambia il contenuto di due contenitori.

```

template <class Key, class Hash, class Pred, class Alloc>
void swap(
   unordered_set <Key, Hash, Pred, Alloc>& left,
   unordered_set <Key, Hash, Pred, Alloc>& right);
```

### <a name="parameters"></a>Parametri

*Key*<br/>
Tipo di chiave.

*hash*<br/>
Tipo di oggetto della funzione hash.

*Pred*<br/>
Tipo di oggetto della funzione di confronto di uguaglianza.

*Alloc*<br/>
Classe Allocator.

*left*<br/>
Primo contenitore da scambiare.

*right*<br/>
Secondo contenitore da scambiare.

### <a name="remarks"></a>Note

La funzione modello esegue `left.`[unordered_set::swap](../standard-library/unordered-set-class.md#swap)`(right)`.

### <a name="example"></a>Esempio

```cpp
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
Myset c1;

c1.insert('a');
c1.insert('b');
c1.insert('c');

// display contents " [c] [b] [a]"
for (Myset::const_iterator it = c1.begin();
it != c1.end(); ++it)
std::cout << " [" << *it << "]";
std::cout << std::endl;

Myset c2;

c2.insert('d');
c2.insert('e');
c2.insert('f');

c1.swap(c2);

// display contents " [f] [e] [d]"
for (Myset::const_iterator it = c1.begin();
it != c1.end(); ++it)
std::cout << " [" << *it << "]";
std::cout << std::endl;

swap(c1, c2);

// display contents " [c] [b] [a]"
for (Myset::const_iterator it = c1.begin();
it != c1.end(); ++it)
std::cout << " [" << *it << "]";
std::cout << std::endl;

return (0);
}

```

```Output

[c] [b] [a]
[f] [e] [d]
[c] [b] [a]

```

## <a name="swap_unordered_multiset"></a>  swap (unordered_multiset)

Scambia il contenuto di due contenitori.

```

template <class Key, class Hash, class Pred, class Alloc>
void swap(
   unordered_multiset <Key, Hash, Pred, Alloc>& left,
   unordered_multiset <Key, Hash, Pred, Alloc>& right);
```

### <a name="parameters"></a>Parametri

*Key*<br/>
Tipo di chiave.

*hash*<br/>
Tipo di oggetto della funzione hash.

*Pred*<br/>
Tipo di oggetto della funzione di confronto di uguaglianza.

*Alloc*<br/>
Classe Allocator.

*left*<br/>
Primo contenitore da scambiare.

*right*<br/>
Secondo contenitore da scambiare.

### <a name="remarks"></a>Note

La funzione modello esegue `left.`[unordered_multiset::swap](../standard-library/unordered-multiset-class.md#swap)`(right)`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__u_ms_swap.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents " [c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << *it << "]";
    std::cout << std::endl;

    Myset c2;

    c2.insert('d');
    c2.insert('e');
    c2.insert('f');

    c1.swap(c2);

    // display contents " [f] [e] [d]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << *it << "]";
    std::cout << std::endl;

    swap(c1, c2);

    // display contents " [c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << *it << "]";
    std::cout << std::endl;

    return (0);
}

```

```Output

[c] [b] [a]
[f] [e] [d]
[c] [b] [a]

```

## <a name="see-also"></a>Vedere anche

[<unordered_set>](../standard-library/unordered-set.md)<br/>
