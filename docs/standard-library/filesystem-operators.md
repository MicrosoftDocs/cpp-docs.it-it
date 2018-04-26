---
title: Operatori &lt;filesystem&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
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
dev_langs:
- C++
ms.assetid: 102c4833-aa3b-41a8-8998-f5003c546bfd
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 237287af88a7bf726948e0b17e5d1f3980ab459f
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="ltfilesystemgt-operators"></a>Operatori &lt;filesystem&gt;

Gli operatori eseguono un confronto lessicale di due percorsi come stringhe. Usare la funzione **equivalent** per determinare se due percorsi (ad esempio, un percorso relativo e un percorso assoluto) fanno riferimento allo stesso file o directory sul disco.

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
