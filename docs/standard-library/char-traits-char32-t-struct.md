---
description: 'Altre informazioni su: char_traits &lt; &gt; struct char32_t'
title: Struct char_traits&lt;char32_t&gt;
ms.date: 11/04/2016
f1_keywords:
- iosfwd/std::char_traits<char_32t>
- char_traits<char32_t>
helpviewer_keywords:
- char_traits<char32_t> class
ms.assetid: c0315466-45d0-4a99-b83e-3b1dbfbfbbc3
ms.openlocfilehash: 5b1b37421ef5e43c301cf36e1688806c8b6c8724
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325248"
---
# <a name="char_traitsltchar32_tgt-struct"></a>Struct char_traits&lt;char32_t&gt;

Struct che rappresenta una specializzazione dello struct modello **char_traits \<CharType>** a un elemento di tipo **`char32_t`** .

## <a name="syntax"></a>Sintassi

```cpp
template <>
struct char_traits<char32_t>;
```

## <a name="remarks"></a>Osservazioni

La specializzazione consente allo struct di sfruttare i vantaggi delle funzioni della libreria che modificano oggetti di questo tipo **`char32_t`** .

## <a name="requirements"></a>Requisiti

**Intestazione:**\<string>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[\<string>](../standard-library/string.md)\
[Struct char_traits](../standard-library/char-traits-struct.md)
