---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4325'
title: Avviso del compilatore (livello 1) C4325
ms.date: 08/27/2018
f1_keywords:
- C4325
helpviewer_keywords:
- C4325
ms.assetid: 8127a08c-d626-481b-aa7b-04a3fdc9a9ec
ms.openlocfilehash: 17e14d4909e4b76d6a0a71d6e77fad1d01e3f41b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97311591"
---
# <a name="compiler-warning-level-1-c4325"></a>Avviso del compilatore (livello 1) C4325

> attributi per la sezione standard '*Section*' ignorati

## <a name="remarks"></a>Commenti

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

## <a name="see-also"></a>Vedi anche

[sezione](../../preprocessor/section.md)
