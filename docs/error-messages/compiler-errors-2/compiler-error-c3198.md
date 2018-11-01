---
title: Errore del compilatore C3198
ms.date: 11/04/2016
f1_keywords:
- C3198
helpviewer_keywords:
- C3198
ms.assetid: ec4ecf61-0067-4aa4-b443-a91013a1e59d
ms.openlocfilehash: 61a3d14f9ad47edaa1e9b9f2b25d38b8dae7165c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50567453"
---
# <a name="compiler-error-c3198"></a>Errore del compilatore C3198

utilizzo non valido di pragma a virgola mobile: il pragma fenv_access funziona solo in modalità precise

[fenv_access](../../preprocessor/fenv-access.md) pragma è stato usato in un [/fp](../../build/reference/fp-specify-floating-point-behavior.md) impostazione diversa da **/fp: precise**.

L'esempio seguente genera l'errore C3198:

```
// C3198.cpp
// compile with: /fp:fast
#pragma fenv_access(on)   // C3198
```