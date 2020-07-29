---
title: Struct char_traits&lt;wchar_t&gt;
ms.date: 11/04/2016
f1_keywords:
- char_traits<wchar_t>
- iosfwd/std::char_traits<wchar_t>
helpviewer_keywords:
- char_traits<wchar_t> class
ms.assetid: 31f34072-04d6-4871-88fe-48e17d473484
ms.openlocfilehash: 3b2504dbb124ccca7f9b27619585abb2b5795f92
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219170"
---
# <a name="char_traitsltwchar_tgt-struct"></a>Struct char_traits&lt;wchar_t&gt;

Classe che rappresenta una specializzazione dello struct modello **char_traits \<CharType> ** a un elemento di tipo **`wchar_t`** .

## <a name="syntax"></a>Sintassi

```cpp
template <>
struct char_traits<wchar_t>;
```

## <a name="remarks"></a>Osservazioni

La specializzazione consente allo struct di sfruttare i vantaggi delle funzioni della libreria che modificano oggetti di questo tipo **`wchar_t`** .

## <a name="requirements"></a>Requisiti

**Intestazione:**\<string>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Struct char_traits](../standard-library/char-traits-struct.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
