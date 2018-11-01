---
title: Avviso del compilatore (livello 4) C4343
ms.date: 11/04/2016
f1_keywords:
- C4343
helpviewer_keywords:
- C4343
ms.assetid: a721b710-e04f-4d15-b678-e4a2c8fd0181
ms.openlocfilehash: c8f0bb514a3da932500f986e50a20af0947827c5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50475803"
---
# <a name="compiler-warning-level-4-c4343"></a>Avviso del compilatore (livello 4) C4343

\#pragma optimize("g",off) esegue l'override dell'opzione /Og

Questo avviso, valido solo nel compilatore IPF (Itanium Processor Family), segnala che un pragma [optimize](../../preprocessor/optimize.md) ha eseguito l'override dell'opzione del compilatore [/Og](../../build/reference/og-global-optimizations.md) .

L'esempio seguente genera l'errore C4343:

```
// C4343.cpp
// compile with: /Og /W4 /LD
// processor: IPF
#pragma optimize ("g", off)   // C4343
```