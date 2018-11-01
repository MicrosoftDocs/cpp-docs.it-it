---
title: Compilatore Warning (level 1) C4103
ms.date: 11/04/2016
f1_keywords:
- C4103
helpviewer_keywords:
- C4103
ms.assetid: 9021b514-375e-4d62-b261-ccb06f299e8e
ms.openlocfilehash: 15d7403d461467e33b7e89957821a311179d33a7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50577814"
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