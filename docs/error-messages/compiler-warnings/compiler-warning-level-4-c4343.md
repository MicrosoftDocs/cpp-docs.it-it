---
title: Compilatore avviso (livello 4) C4343 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4343
dev_langs:
- C++
helpviewer_keywords:
- C4343
ms.assetid: a721b710-e04f-4d15-b678-e4a2c8fd0181
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 300bab652c88322ef7e3b28cbf2cafe304d361d5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33302334"
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