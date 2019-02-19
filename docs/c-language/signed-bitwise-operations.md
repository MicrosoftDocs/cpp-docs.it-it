---
title: Operazioni bit per bit con segno
ms.date: 11/04/2016
helpviewer_keywords:
- bitwise operations
- signed bitwise operations
ms.assetid: 1e5cf65b-ee32-41a0-a5c2-82c1854091f6
ms.openlocfilehash: 43f65fd5d1ea14ef5e15f18d9c8516ccf5fb1e08
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56147594"
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
