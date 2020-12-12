---
description: 'Altre informazioni su: &lt; &gt; specializzazione hash string_view'
title: '&lt; &gt; specializzazione hash string_view'
ms.date: 04/19/2019
f1_keywords:
- xstring/basic_string_view::hash
helpviewer_keywords:
- std::basic_string_view::hash
ms.openlocfilehash: cf4012752bbd8b3531920e78d612e78479de4b3d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97183685"
---
# <a name="hashltstring_viewgt-specialization"></a>&lt; &gt; specializzazione hash string_view

Una specializzazione di modello che produce un valore hash dato un string_view.

```cpp
template <class CharType, class Traits>
struct hash<basic_string_view<CharType, Traits>>
{
    typedef basic_string_view<CharType, Traits> argument_type;
    typedef size_t result_type;

    size_t operator()(const basic_string_view<CharType, Traits>) const
        noexcept;
};
```

### <a name="remarks"></a>Commenti

L'hash di un string_view è uguale all'hash dell'oggetto stringa sottostante.

### <a name="example"></a>Esempio

```cpp
//compile with: /std:c++17
#include <string>
#include <string_view>
#include <iostream>

using namespace std;

int main()
{
    string_view sv{ "Hello world" };
    string s{ "Hello world" };
    cout << boolalpha << (hash<string_view>{}(sv)
        == hash<string>{}(s)); // true
}
```
