---
title: Effetti collaterali delle dipendenze
ms.date: 11/04/2016
helpviewer_keywords:
- dependencies, side effects
- NMAKE program, dependents
ms.assetid: d4e8db25-fdc0-4d73-81ec-1538f2e1b3e8
ms.openlocfilehash: b89306b6e4d85e0e08729fb1d35fb041d69647e7
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57827209"
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

[Destinazioni](targets.md)