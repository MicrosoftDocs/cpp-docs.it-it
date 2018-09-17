---
title: Funzioni senza prototipo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 34200b8c-5b52-4f0d-aff8-9f70d82868ed
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2c030bd99fc185b3c52535aecb45697672ef4c14
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45717678"
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