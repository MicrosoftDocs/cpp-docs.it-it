---
title: Avviso degli strumenti del linker LNK4217
ms.date: 04/15/2019
f1_keywords:
- LNK4217
helpviewer_keywords:
- LNK4217
ms.assetid: 280dc03e-5933-4e8d-bb8c-891fbe788738
ms.openlocfilehash: f1ea3cd0a8770571ae5c55d29a901c134311550f
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/17/2019
ms.locfileid: "59674240"
---
# <a name="linker-tools-warning-lnk4217"></a>Avviso degli strumenti del linker LNK4217

> simbolo '*simbolo*'definito '*filename_1.obj*'è importato dal'*filename_2.obj*'nella funzione'*funzione*'

[declspec](../../cpp/dllexport-dllimport.md) è stato specificato per un simbolo, anche se il simbolo è definito in un file di oggetti della stessa immagine. Rimuovere il `__declspec(dllimport)` modificatore per risolvere il problema.

## <a name="remarks"></a>Note

*simbolo* è il nome del simbolo definito all'interno dell'immagine. *funzione* è la funzione che viene importato il simbolo.

Questo avviso non viene visualizzato quando esegue la compilazione usando il [/clr](../../build/reference/clr-common-language-runtime-compilation.md) opzione.

LNK4217 può verificarsi anche se si prova a collegare due moduli, quando invece è necessario compilare il secondo modulo con la libreria di importazione del modulo prima.

```cpp
// LNK4217.cpp
// compile with: /LD
#include "windows.h"
__declspec(dllexport) void func(unsigned short*) {}
```

E quindi,

```cpp
// LNK4217b.cpp
// compile with: /c
#include "windows.h"
__declspec(dllexport) void func(unsigned short*) {}
```

Tentativo di collegare i due moduli comporterà LNK4217. Compilare il secondo esempio con la libreria di importazione del primo campione a risolvere.

## <a name="see-also"></a>Vedere anche

[Strumenti del linker LNK4049 di avviso](linker-tools-warning-lnk4049.md) \
[Avviso LNK4286 degli strumenti del linker](linker-tools-warning-lnk4286.md) \
[dllexport, dllimport](../../cpp/dllexport-dllimport.md)