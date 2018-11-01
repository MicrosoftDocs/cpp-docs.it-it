---
title: Funzioni senza prototipo
ms.date: 11/04/2016
ms.assetid: 34200b8c-5b52-4f0d-aff8-9f70d82868ed
ms.openlocfilehash: 38207be6111dadc338593e55b683b88e0480e1ca
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50633428"
---
# <a name="unprototyped-functions"></a>Funzioni senza prototipo

Per le funzioni senza prototipo, il chiamante passerà i valori interi come valori a virgola mobile e interi come precisione doppia. Per i valori a virgola mobile, il registro integer sia i registri a virgola mobile conterrà il valore float nel caso in cui il destinatario della chiamata prevede che il valore nei registri integer.

```
func1();
func2() {   // RCX = 2, RDX = XMM1 = 1.0, and R8 = 7
   func1(2, 1.0, 7);
}
```

## <a name="see-also"></a>Vedere anche

[Convenzione di chiamata](../build/calling-convention.md)