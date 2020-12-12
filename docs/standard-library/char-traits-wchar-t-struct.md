---
description: 'Altre informazioni su: char_traits &lt; &gt; struct wchar_t'
title: Struct char_traits&lt;wchar_t&gt;
ms.date: 11/04/2016
f1_keywords:
- char_traits<wchar_t>
- iosfwd/std::char_traits<wchar_t>
helpviewer_keywords:
- char_traits<wchar_t> class
ms.assetid: 31f34072-04d6-4871-88fe-48e17d473484
ms.openlocfilehash: 0276f4b50cb0039d0bec49b1b3eb2a0b3b2463aa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325222"
---
# <a name="char_traitsltwchar_tgt-struct"></a>Struct char_traits&lt;wchar_t&gt;

Classe che rappresenta una specializzazione dello struct modello **char_traits \<CharType>** a un elemento di tipo **`wchar_t`** .

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

## <a name="see-also"></a>Vedi anche

[Struct char_traits](../standard-library/char-traits-struct.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
