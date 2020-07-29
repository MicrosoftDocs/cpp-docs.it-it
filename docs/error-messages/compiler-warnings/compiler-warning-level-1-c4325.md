---
title: Avviso del compilatore (livello 1) C4325
ms.date: 08/27/2018
f1_keywords:
- C4325
helpviewer_keywords:
- C4325
ms.assetid: 8127a08c-d626-481b-aa7b-04a3fdc9a9ec
ms.openlocfilehash: 551680bc1d24097200a1e641bc4238f883ad94dd
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230701"
---
# <a name="compiler-warning-level-1-c4325"></a>Avviso del compilatore (livello 1) C4325

> attributi per la sezione standard '*Section*' ignorati

## <a name="remarks"></a>Osservazioni

Non è possibile modificare gli attributi di una sezione standard. Ad esempio:

```cpp
#pragma section(".sdata", long)
```

Questa operazione sovrascriverebbe la `.sdata` sezione standard che utilizza il **`short`** tipo di dati con il **`long`** tipo di dati.

Le sezioni standard i cui attributi non possono essere modificati includono,

- . Data

- . sdata

- . bss

- . sbss

- text

- . const

- .sconst

- . rdata

- .srdata

Le sezioni aggiuntive possono essere aggiunte in un secondo momento.

## <a name="see-also"></a>Vedere anche

[sezione](../../preprocessor/section.md)
