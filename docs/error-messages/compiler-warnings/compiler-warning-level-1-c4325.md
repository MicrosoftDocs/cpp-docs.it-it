---
title: Avviso del compilatore (livello 1) C4325
ms.date: 08/27/2018
f1_keywords:
- C4325
helpviewer_keywords:
- C4325
ms.assetid: 8127a08c-d626-481b-aa7b-04a3fdc9a9ec
ms.openlocfilehash: e0a13761b0657d054065358994638779817dad6a
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80163024"
---
# <a name="compiler-warning-level-1-c4325"></a>Avviso del compilatore (livello 1) C4325

> attributi per la sezione standard '*Section*' ignorati

## <a name="remarks"></a>Osservazioni

Non è possibile modificare gli attributi di una sezione standard. Ad esempio:

```cpp
#pragma section(".sdata", long)
```

Questa operazione sovrascriverebbe la sezione `.sdata` standard che utilizza il tipo di dati **short** con il tipo di dati **Long** .

Le sezioni standard i cui attributi non possono essere modificati includono,

- . Data

- .sdata

- . bss

- . sbss

- text

- . const

- .sconst

- .rdata

- .srdata

Le sezioni aggiuntive possono essere aggiunte in un secondo momento.

## <a name="see-also"></a>Vedere anche

[section](../../preprocessor/section.md)
