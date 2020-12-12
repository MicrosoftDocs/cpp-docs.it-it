---
description: 'Altre informazioni su: classe hash'
title: Classe hash
ms.date: 11/04/2016
f1_keywords:
- functional/std::hash
- bitset/std::hash
- memory/std::hash
- string/std::hash
- system_error/std::hash
- vector/std::hash
- XSTDDEF/std::hash
- xstring/std::hash
helpviewer_keywords:
- std::hash [C++]
- std::hash [C++]
- std::hash [C++]
- std::hash [C++]
- std::hash [C++]
- std::hash [C++]
- std::hash [C++]
- std::hash [C++]
- std::hash [C++]
ms.assetid: e1b500c6-a5c8-4f6f-ad33-7ec52eb8e2e4
ms.openlocfilehash: 124740486482722ec065c01f0d71e9bbc413f8f7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324161"
---
# <a name="hash-class"></a>Classe hash

Calcola il codice hash per un valore.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct hash {
    size_t operator()(Ty val) const;
};
```

## <a name="remarks"></a>Osservazioni

L'oggetto funzione definisce una funzione hash, idonea per il mapping di valori di tipo *Ty* con una distribuzione di valori di indice. Il membro `operator()` restituisce un codice hash per *Val*, adatto per l'utilizzo con i modelli di classe `unordered_map` ,, `unordered_multimap` `unordered_set` e `unordered_multiset` . La libreria standard fornisce specializzazioni per i tipi di base: *Ty* può essere qualsiasi tipo scalare, inclusi tipi di puntatore e tipi di enumerazione. Sono inoltre disponibili specializzazioni per i tipi della libreria `string`, `wstring`, `u16string`, `u32string`, `string_view`, `wstring_view`, `u16string_view`, `u32string_view`, `bitset`, `error_code`, `error_condition`, `optional`, `shared_ptr`, `thread`, `type_index`, `unique_ptr`, `variant` e `vector<bool>`.

## <a name="example"></a>Esempio

```cpp
// std__functional__hash.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>
#include <unordered_set>

int main()
    {
    std::unordered_set<int, std::hash<int> > c0;
    c0.insert(3);
    std::cout << *c0.find(3) << std::endl;

    return (0);
    }
```

```Output
3
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<functional>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<unordered_map>](../standard-library/unordered-map.md)\
[Classe unordered_multimap](../standard-library/unordered-multimap-class.md)\
[Classe unordered_multiset](../standard-library/unordered-multiset-class.md)\
[<unordered_set>](../standard-library/unordered-set.md)
