---
title: Avviso del compilatore (livello 4) C4343
ms.date: 11/04/2016
f1_keywords:
- C4343
helpviewer_keywords:
- C4343
ms.assetid: a721b710-e04f-4d15-b678-e4a2c8fd0181
ms.openlocfilehash: acc14d9679aed932b65041bf3eb109a8d0964c89
ms.sourcegitcommit: d0504e2337bb671e78ec6dd1c7b05d89e7adf6a7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/02/2019
ms.locfileid: "74683281"
---
# <a name="compiler-warning-level-4-c4343"></a>Avviso del compilatore (livello 4) C4343

\#pragma optimize ("g", off) esegue l'override dell'opzione/og

Questo avviso, valido solo nel compilatore IPF (Itanium Processor Family), segnala che un pragma [optimize](../../preprocessor/optimize.md) ha eseguito l'override dell'opzione del compilatore [/Og](../../build/reference/og-global-optimizations.md) .

L'esempio seguente genera l'errore C4343:

```cpp
// C4343.cpp
// compile with: /Og /W4 /LD
// processor: IPF
#pragma optimize ("g", off)   // C4343
```