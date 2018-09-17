---
title: Effetti collaterali delle dipendenze | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- dependencies, side effects
- NMAKE program, dependents
ms.assetid: d4e8db25-fdc0-4d73-81ec-1538f2e1b3e8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9a70df679434b187bc2eee4eb4aad5881db0da1c
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45716534"
---
# <a name="dependency-side-effects"></a>Effetti collaterali delle dipendenze

Se viene specificata una destinazione con due punti (:) nelle due righe di dipendenza in posizioni diverse, e se i comandi vengono visualizzati solo dopo una delle righe, vengono interpretate le dipendenze come se adiacenti o la combinazione. Questo strumento non richiama una regola di inferenza per la dipendenza che non dispone di alcun comando, ma si presuppone che le dipendenze appartengono al blocco di una descrizione ed esegue i comandi specificati con le altre dipendenze. Ad esempio, questo set di regole:

```Output
bounce.exe : jump.obj
   echo Building bounce.exe...

bounce.exe : up.obj
```

viene valutato come questo:

```Output
bounce.exe : jump.obj up.obj
   echo Building bounce.exe...
```

Questo effetto non si verifica se un doppio carattere due punti (`::`) viene usato. Ad esempio, questo set di regole:

```Output
bounce.exe :: jump.obj
   echo Building bounce.exe...

bounce.exe :: up.obj
```

viene valutato come questo:

```Output
bounce.exe : jump.obj
   echo Building bounce.exe...

bounce.exe : up.obj
# invokes an inference rule
```

## <a name="see-also"></a>Vedere anche

[Destinazioni](../build/targets.md)