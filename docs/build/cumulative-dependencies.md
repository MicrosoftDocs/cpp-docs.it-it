---
title: Dipendenze cumulative | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- dependencies, cumulative
- cumulative dependencies in NMAKE
- dependencies
ms.assetid: fa6dd777-80b8-437d-87a7-aec0ed818a49
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5a66b153a52da06cca14845b9a58fcef0f42676d
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45725712"
---
# <a name="cumulative-dependencies"></a>Dipendenze cumulative

Le dipendenze sono cumulative in un blocco di descrizione, se una destinazione viene ripetuta.

Ad esempio, questo set di regole,

```Output
bounce.exe : jump.obj
bounce.exe : up.obj
   echo Building bounce.exe...
```

viene valutato come questo:

```Output
bounce.exe : jump.obj up.obj
   echo Building bounce.exe...
```

Destinazioni multiple in più righe di dipendenza in un unico blocco di descrizione vengono valutate come se ognuno sono stati specificati in un blocco di descrizione separate, ma le destinazioni che non sono nell'ultima riga dipendenza non utilizzano il blocco di comandi. NMAKE tenta di usare una regola di inferenza per tali destinazioni.

Ad esempio, questo set di regole,

```Output
leap.exe bounce.exe : jump.obj
bounce.exe climb.exe : up.obj
   echo Building bounce.exe...
```

viene valutato come questo:

```Output

leap.exe : jump.obj
# invokes an inference rule
bounce.exe : jump.obj up.obj
   echo Building bounce.exe...
climb.exe : up.obj
   echo Building bounce.exe...
```

## <a name="see-also"></a>Vedere anche

[Destinazioni](../build/targets.md)