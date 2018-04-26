---
title: Struct char_traits&lt;char32_t&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- iosfwd/std::char_traits<char_32t>
- char_traits<char32_t>
dev_langs:
- C++
helpviewer_keywords:
- char_traits<char32_t> class
ms.assetid: c0315466-45d0-4a99-b83e-3b1dbfbfbbc3
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5ed195f6ed4d1319d079a58f736c65a03e397bd1
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
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
