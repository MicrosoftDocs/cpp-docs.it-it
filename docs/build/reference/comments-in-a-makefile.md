---
description: 'Altre informazioni su: commenti in un makefile'
title: Commenti in un makefile
ms.date: 11/04/2016
helpviewer_keywords:
- makefiles, comments
ms.assetid: 76fd9e3d-5966-47f4-a091-c9e80b232b49
ms.openlocfilehash: 9edee594c0299d8e93928c1284b7244af71f61e1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97182294"
---
# <a name="comments-in-a-makefile"></a>Commenti in un makefile

Precede un commento con un simbolo di cancelletto (#). NMAKE ignora il testo dal simbolo di cancelletto al successivo carattere di nuova riga. Esempi:

```
# Comment on line by itself
OPTIONS = /MAP  # Comment on macro definition line

all.exe : one.obj two.obj  # Comment on dependency line
    link one.obj two.obj
# Comment in commands block
#   copy *.obj \objects  # Command turned into comment
    copy one.exe \release

.obj.exe:  # Comment on inference rule line
    link $<

my.exe : my.obj ; link my.obj  # Err: cannot comment this
# Error: # must be the first character
.obj.exe: ; link $<  # Error: cannot comment this
```

Per specificare un segno di cancelletto letterale, precederlo con un accento circonflesso ( **^** ), come indicato di seguito:

```
DEF = ^#define  #Macro for a C preprocessing directive
```

## <a name="see-also"></a>Vedi anche

[Contenuto di un makefile](contents-of-a-makefile.md)
