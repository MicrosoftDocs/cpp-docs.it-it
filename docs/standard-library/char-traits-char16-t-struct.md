---
description: 'Altre informazioni su: char_traits &lt; &gt; struct char16_t'
title: Struct char_traits&lt;char16_t&gt;
ms.date: 11/04/2016
f1_keywords:
- char_traits<char16_t>
- iosfwd/std::char_traits<char16_t>
helpviewer_keywords:
- char_traits<char16_t> class
ms.assetid: 5daf3b62-dd6e-451f-b189-0350a04ff966
ms.openlocfilehash: 2ad725b514d6804edfdea6d4ba72c2cfd44c4f21
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325262"
---
# <a name="char_traitsltchar16_tgt-struct"></a>Struct char_traits&lt;char16_t&gt;

Struct che rappresenta una specializzazione dello struct modello **char_traits \<CharType>** a un elemento di tipo **`char16_t`** .

## <a name="syntax"></a>Sintassi

```cpp
template <>
struct char_traits<char16_t>;
```

## <a name="remarks"></a>Osservazioni

La specializzazione consente allo struct di sfruttare i vantaggi delle funzioni della libreria che modificano oggetti di tipo **`char16_t`** .

## <a name="requirements"></a>Requisiti

**Intestazione:**\<string>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[\<string>](../standard-library/string.md)\
[Struct char_traits](../standard-library/char-traits-struct.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
