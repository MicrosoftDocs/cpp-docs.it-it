---
description: 'Altre informazioni su: Makefile di esempio'
title: Makefile di esempio
ms.date: 11/04/2016
ms.assetid: 8343ce71-5556-4ae0-8d1e-7efd82673070
ms.openlocfilehash: 95b7eef18ca2b517d1b3de9ca450b1bbd03116d2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97224907"
---
# <a name="sample-makefile"></a>Makefile di esempio

Questo argomento contiene un makefile di esempio.

## <a name="sample"></a>Esempio

### <a name="code"></a>Codice

```
# Sample makefile

!include <win32.mak>

all: simple.exe challeng.exe

.c.obj:
  $(cc) $(cdebug) $(cflags) $(cvars) $*.c

simple.exe: simple.obj
  $(link) $(ldebug) $(conflags) -out:simple.exe simple.obj $(conlibs) lsapi32.lib

challeng.exe: challeng.obj md4c.obj
  $(link) $(ldebug) $(conflags) -out:challeng.exe $** $(conlibs) lsapi32.lib
```

## <a name="see-also"></a>Vedi anche

[Contenuto di un makefile](contents-of-a-makefile.md)
