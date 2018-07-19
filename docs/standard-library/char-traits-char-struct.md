---
title: Struct char_traits&lt;char&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- iosfwd/std::char_traits<char>
- char_traits<char >
dev_langs:
- C++
helpviewer_keywords:
- char_traits<char> class
ms.assetid: abd9373a-77db-4031-bf4b-f8ac15087581
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1150de3c94f8a656d46d54b673cb2d08dc05a7be
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38959326"
---
# <a name="chartraitsltchargt-struct"></a>Struct char_traits&lt;char&gt;

Struct che rappresenta una specializzazione dello struct modello **char_traits\<CharType >** a un elemento di tipo **char**.

## <a name="syntax"></a>Sintassi

```cpp
template <>
struct char_traits<char>;
```

## <a name="remarks"></a>Note

La specializzazione consente allo struct di sfruttare i vantaggi delle funzioni della libreria che modificano oggetti di questo tipo **char**.

## <a name="example"></a>Esempio

Vedere le funzioni di typedef e membro della classe modello [char_traits](../standard-library/char-traits-struct.md)
