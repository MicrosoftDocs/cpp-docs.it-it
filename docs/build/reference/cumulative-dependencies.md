---
title: Dipendenze cumulative
ms.date: 11/04/2016
helpviewer_keywords:
- dependencies, cumulative
- cumulative dependencies in NMAKE
- dependencies
ms.assetid: fa6dd777-80b8-437d-87a7-aec0ed818a49
ms.openlocfilehash: de0a9649be8f0dae58f45d8980d2df610ff2febe
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62294083"
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

[Destinazioni](targets.md)
