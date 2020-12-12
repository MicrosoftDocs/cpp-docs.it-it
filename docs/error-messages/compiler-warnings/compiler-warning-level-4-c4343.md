---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4343'
title: Avviso del compilatore (livello 4) C4343
ms.date: 11/04/2016
f1_keywords:
- C4343
helpviewer_keywords:
- C4343
ms.assetid: a721b710-e04f-4d15-b678-e4a2c8fd0181
ms.openlocfilehash: 906dee40eb0e9ef55c67657e93f42a6e2279a9d1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97294496"
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
