---
title: Operazioni bit per bit con segno | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- bitwise operations
- signed bitwise operations
ms.assetid: 1e5cf65b-ee32-41a0-a5c2-82c1854091f6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 184fd5a0e6c12cb58e9fed759459e7b8172896f8
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46038297"
---
# <a name="signed-bitwise-operations"></a>Operazioni bit per bit con segno

**ANSI 3.3**   Risultati delle operazioni bit per bit sui interi con segno

Le operazioni bit per bit sui valori Signed Integer funzionano in modo analogo alle operazioni bit per bit sui valori Unsigned Integer. Ad esempio, `-16 & 99` può essere espresso in formato binario come

```
  11111111 11110000
& 00000000 01100011
  _________________
  00000000 01100000
```

Il risultato dell'operazione AND bit per bit è 96.

## <a name="see-also"></a>Vedere anche

[Valori Integer](../c-language/integers.md)