---
title: Commenti in un makefile
ms.date: 11/04/2016
helpviewer_keywords:
- makefiles, comments
ms.assetid: 76fd9e3d-5966-47f4-a091-c9e80b232b49
ms.openlocfilehash: c66819210d2112f9a68243ed4d3b34f491caae9d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62294356"
---
# <a name="comments-in-a-makefile"></a>Commenti in un makefile

Anteporre un commento con un simbolo di cancelletto (#). NMAKE ignora il testo compreso il simbolo di cancelletto e il successivo carattere di nuova riga. Esempi:

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

Per specificare un valore letterale cancelletto, anteporvi un accento circonflesso (**^**), come indicato di seguito:

```
DEF = ^#define  #Macro for a C preprocessing directive
```

## <a name="see-also"></a>Vedere anche

[Contenuto di un makefile](contents-of-a-makefile.md)
