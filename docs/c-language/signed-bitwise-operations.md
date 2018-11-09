---
title: Operazioni bit per bit con segno
ms.date: 11/04/2016
helpviewer_keywords:
- bitwise operations
- signed bitwise operations
ms.assetid: 1e5cf65b-ee32-41a0-a5c2-82c1854091f6
ms.openlocfilehash: d178900a25a5d7a080068fb1919fcba2853bef14
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50652010"
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