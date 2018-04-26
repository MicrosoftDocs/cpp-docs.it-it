---
title: Struct char_traits&lt;wchar_t&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- char_traits<wchar_t>
- iosfwd/std::char_traits<wchar_t>
dev_langs:
- C++
helpviewer_keywords:
- char_traits<wchar_t> class
ms.assetid: 31f34072-04d6-4871-88fe-48e17d473484
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3f2b20b72bf92679395b19b2ad6b8ae68143bb6d
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="chartraitsltwchartgt-struct"></a>Struct char_traits&lt;wchar_t&gt;

Classe che rappresenta una specializzazione dello struct modello **char_traits\<CharType>** in un elemento di tipo `wchar_t`.

## <a name="syntax"></a>Sintassi

```cpp
template <>
struct char_traits<wchar_t>;
```

## <a name="remarks"></a>Note

La specializzazione consente allo struct di sfruttare i vantaggi delle funzioni della libreria che modificano gli oggetti di questo tipo `wchar_t`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<string>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Struct char_traits](../standard-library/char-traits-struct.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
