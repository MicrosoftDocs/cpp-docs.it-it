---
description: 'Altre informazioni su: operazioni bit per bit firmate'
title: Operazioni bit per bit con segno
ms.date: 11/04/2016
helpviewer_keywords:
- bitwise operations
- signed bitwise operations
ms.assetid: 1e5cf65b-ee32-41a0-a5c2-82c1854091f6
ms.openlocfilehash: 98cca4d7450e0b65301ba3d2ad65f0cb3aca81ea
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97292650"
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

## <a name="see-also"></a>Vedi anche

[Integer](../c-language/integers.md)
