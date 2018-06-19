---
title: Struct char_traits&lt;char32_t&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- iosfwd/std::char_traits<char_32t>
- char_traits<char32_t>
dev_langs:
- C++
helpviewer_keywords:
- char_traits<char32_t> class
ms.assetid: c0315466-45d0-4a99-b83e-3b1dbfbfbbc3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6caffb278fbcb94eff1042716adc384b56ae6050
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33847013"
---
# <a name="chartraitsltchar32tgt-struct"></a>Struct char_traits&lt;char32_t&gt;

Struct che rappresenta una specializzazione dello struct modello **char_traits\<CharType>** in un elemento di tipo `char32_t`.

## <a name="syntax"></a>Sintassi

```cpp
template <>
struct char_traits<char32_t>;
```

## <a name="remarks"></a>Note

La specializzazione consente allo struct di sfruttare i vantaggi delle funzioni della libreria che modificano gli oggetti di questo tipo `char32_t`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<string>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<string>](../standard-library/string.md)<br/>
[Struct char_traits](../standard-library/char-traits-struct.md)<br/>
