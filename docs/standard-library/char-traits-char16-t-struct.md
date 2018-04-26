---
title: Struct char_traits&lt;char16_t&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- char_traits<char16_t>
- iosfwd/std::char_traits<char16_t>
dev_langs:
- C++
helpviewer_keywords:
- char_traits<char16_t> class
ms.assetid: 5daf3b62-dd6e-451f-b189-0350a04ff966
caps.latest.revision: 15
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b76839dee5df211331f10f11e20ab9a45a2f4eeb
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
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

[\<string>](../standard-library/string.md)<br/>
[Struct char_traits](../standard-library/char-traits-struct.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
