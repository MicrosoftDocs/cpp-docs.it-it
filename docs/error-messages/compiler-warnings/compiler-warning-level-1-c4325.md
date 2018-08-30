---
title: Compilatore avviso (livello 1) C4325 | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4325
dev_langs:
- C++
helpviewer_keywords:
- C4325
ms.assetid: 8127a08c-d626-481b-aa7b-04a3fdc9a9ec
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cd265938afb51cc402dc84f38b7e95188c6292a7
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43197485"
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