---
title: Struct char_traits&lt;char16_t&gt;
ms.date: 11/04/2016
f1_keywords:
- char_traits<char16_t>
- iosfwd/std::char_traits<char16_t>
helpviewer_keywords:
- char_traits<char16_t> class
ms.assetid: 5daf3b62-dd6e-451f-b189-0350a04ff966
ms.openlocfilehash: d83f5278c2c4f8344334bfce40946612e9ca3e56
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68448956"
---
# <a name="chartraitsltchar16tgt-struct"></a>Struct char_traits&lt;char16_t&gt;

Struct che rappresenta una specializzazione dello struct modello **char_traits\<CharType>** in un elemento di tipo `char16_t`.

## <a name="syntax"></a>Sintassi

```cpp
template <>
struct char_traits<char16_t>;
```

## <a name="remarks"></a>Note

La specializzazione consente allo struct di sfruttare i vantaggi delle funzioni della libreria che modificano gli oggetti di tipo `char16_t`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<string>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<string>](../standard-library/string.md)\
[Struct char_traits](../standard-library/char-traits-struct.md)\
[Sicurezza dei thread nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
