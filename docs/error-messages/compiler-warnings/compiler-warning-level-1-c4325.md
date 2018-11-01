---
title: Avviso del compilatore (livello 1) C4325
ms.date: 08/27/2018
f1_keywords:
- C4325
helpviewer_keywords:
- C4325
ms.assetid: 8127a08c-d626-481b-aa7b-04a3fdc9a9ec
ms.openlocfilehash: 293cbbcfe134f6cb4f5e1bf924be7c03fa278833
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50492594"
---
# <a name="compiler-warning-level-1-c4325"></a>Avviso del compilatore (livello 1) C4325

> gli attributi di sezione standard '*sezione*' ignorato

## <a name="remarks"></a>Note

Non è possibile modificare gli attributi di una sezione standard. Ad esempio:

```cpp
#pragma section(".sdata", long)
```

Questo sovrascriverebbe le `.sdata` sezione standard che utilizza il **breve** del tipo di dati con il **long** tipo di dati.

Includono le sezioni standard di cui non è possibile modificare gli attributi,

- . Data

- . sdata

- BSS

- sbss

- . Text

- const

- .sconst

- rdata

- .srdata

È possibile aggiungere le sezioni aggiuntive in un secondo momento.

## <a name="see-also"></a>Vedere anche

[section](../../preprocessor/section.md)