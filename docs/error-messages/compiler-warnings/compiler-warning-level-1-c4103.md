---
title: Avviso del compilatore (livello 1) C4103
ms.date: 11/04/2016
f1_keywords:
- C4103
helpviewer_keywords:
- C4103
ms.assetid: 9021b514-375e-4d62-b261-ccb06f299e8e
ms.openlocfilehash: 456e7d393eb751e99c1969619ccfdcc649193c75
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73627061"
---
# <a name="compiler-warning-level-1-c4103"></a>Avviso del compilatore (livello 1) C4103

' filename ': l'allineamento è stato modificato dopo l'inclusione dell'intestazione, probabilmente a causa della mancata #pragma pack (pop)

L'operazione di compressione influiscono sul layout delle classi e, in genere, in caso di compressione delle modifiche nei file di intestazione, possono verificarsi problemi.

Usare #pragma [Pack](../../preprocessor/pack.md)(pop) prima di uscire dal file di intestazione per risolvere l'avviso.

L'esempio seguente genera l'C4103:

```cpp
// C4103.h
#pragma pack(push, 4)

// defintions and declarations

// uncomment the following line to resolve
// #pragma pack(pop)
```

E quindi,

```cpp
// C4103.cpp
// compile with: /LD /W1
#include "c4103.h"   // C4103
```