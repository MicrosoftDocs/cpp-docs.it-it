---
title: Compilatore Warning (level 1) C4103 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4103
dev_langs:
- C++
helpviewer_keywords:
- C4103
ms.assetid: 9021b514-375e-4d62-b261-ccb06f299e8e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1942acc2d9c5c274806e06127f9f98d4bfcb5077
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46085537"
---
# <a name="compiler-warning-level-1-c4103"></a>Compilatore Warning (level 1) C4103

'filename': l'allineamento è cambiato dopo l'inclusione dell'intestazione, potrebbe essere causato dalla mancanza #pragma pack (POP)

Compressione influisce sul layout delle classi, e in genere, se la compressione delle modifiche nei file di intestazione, possono verificarsi problemi.

Usare #pragma [pack](../../preprocessor/pack.md)(pop) prima di chiudere il file di intestazione per risolvere il problema.

L'esempio seguente genera l'errore C4103:

```
// C4103.h
#pragma pack(push, 4)

// defintions and declarations

// uncomment the following line to resolve
// #pragma pack(pop)
```

E quindi,

```
// C4103.cpp
// compile with: /LD /W1
#include "c4103.h"   // C4103
```