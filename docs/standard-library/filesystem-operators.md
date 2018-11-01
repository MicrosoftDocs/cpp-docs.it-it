---
title: Operatori &lt;filesystem&gt;
ms.date: 11/04/2016
f1_keywords:
- FILESYSTEM/std::experimental::filesystem::operator==
- FILESYSTEM/std::experimental::filesystem::operator!=
- FILESYSTEM/std::experimental::filesystem::operator<
- FILESYSTEM/std::experimental::filesystem::operator<=
- FILESYSTEM/std::experimental::filesystem::operator>
- FILESYSTEM/std::experimental::filesystem::operator>=
- FILESYSTEM/std::experimental::filesystem::operator/
- FILESYSTEM/std::experimental::filesystem::operator<<
- FILESYSTEM/std::experimental::filesystem::operator>>
ms.assetid: 102c4833-aa3b-41a8-8998-f5003c546bfd
ms.openlocfilehash: 378e5d7b8b36aa9b891a87662d432a451ac6bafe
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50631022"
---
# <a name="ltfilesystemgt-operators"></a>Operatori &lt;filesystem&gt;

Gli operatori eseguono un confronto lessicale di due percorsi come stringhe. Usare il `equivalent` funzione per determinare se due percorsi (ad esempio un percorso relativo e un percorso assoluto) fanno riferimento allo stesso file o directory sul disco.

Per altre informazioni, vedere [Esplorazione del file system (C++)](../standard-library/file-system-navigation.md).

## <a name="operator"></a>operator==

```cpp
bool operator==(const path& left, const path& right) noexcept;
```

La funzione restituisce left.native() == right.native().

## <a name="operator"></a>operator!=

```cpp
bool operator!=(const path& left, const path& right) noexcept;
```

La funzione restituisce !(left == right).

## <a name="operator"></a>operator<

```cpp
bool operator<(const path& left, const path& right) noexcept;
```

La funzione restituisce left.native() < right.native().

## <a name="operator"></a>operator<=

```cpp
bool operator<=(const path& left, const path& right) noexcept;
```

La funzione restituisce !(right \< left).

## <a name="operator"></a>operator>

```cpp
bool operator>(const path& left, const path& right) noexcept;
```

La funzione restituisce right \< left.

## <a name="operator"></a>operator>=

```cpp
bool operator>=(const path& left, const path& right) noexcept;
```

La funzione restituisce !(left < right).

## <a name="operator"></a>operatore /

```cpp
path operator/(const path& left, const path& right);
```

La funzione esegue:

```cpp
basic_string<Elem, Traits> str;
path ans = left;
return (ans /= right);
```

## <a name="operator"></a>operator<<

```cpp
template <class Elem, class Traits>
basic_ostream<Elem, Traits>& operator<<(basic_ostream<Elem, Traits>& os, const path& pval);
```

La funzione restituisce os << pval.string\<Elem, Traits>().

## <a name="operator"></a>operator>>

```cpp
template <class Elem, class Traits>
basic_istream<Elem, Traits>& operator<<(basic_istream<Elem, Traits>& is, const path& pval);
```

La funzione esegue:

```cpp
basic_string<Elem, Traits> str;
is>> str;
pval = str;
return (is);
```

## <a name="see-also"></a>Vedere anche

[Classe Path (libreria C++ Standard)](../standard-library/path-class.md)<br/>
[Esplorazione del file system (C++)](../standard-library/file-system-navigation.md)<br/>
[\<filesystem>](../standard-library/filesystem.md)<br/>
