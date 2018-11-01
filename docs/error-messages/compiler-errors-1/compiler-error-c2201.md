---
title: Errore del compilatore C2201
ms.date: 11/04/2016
f1_keywords:
- C2201
helpviewer_keywords:
- C2201
ms.assetid: ed927659-6e9c-447d-9963-19969ae1e957
ms.openlocfilehash: b011c5027af6c0561010c6d11d3efd07234549f3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50621599"
---
# <a name="compiler-error-c2201"></a>Errore del compilatore C2201

'identifier': deve avere un collegamento esterno per essere esportate o importate

L'identificatore esportato è `static`.

L'esempio seguente genera l'errore C2286:

```
// C2201.cpp
// compile with: /c
__declspec(dllexport) static void func() {}   // C2201 func() is static
__declspec(dllexport) void func2() {}   // OK
```

## <a name="see-also"></a>Vedere anche

[Tipi di collegamento](../../cpp/types-of-linkage.md)