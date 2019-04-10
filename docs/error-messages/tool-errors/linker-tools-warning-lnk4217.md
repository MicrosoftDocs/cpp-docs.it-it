---
title: Avviso degli strumenti del linker LNK4217
ms.date: 04/09/2019
f1_keywords:
- LNK4217
helpviewer_keywords:
- LNK4217
ms.assetid: 280dc03e-5933-4e8d-bb8c-891fbe788738
ms.openlocfilehash: 3fcb806afa064a4f6d9c9c0680c617662a3b9a21
ms.sourcegitcommit: 0ad3f4517e64900a2702dd3d366586f9e2bce2c2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/10/2019
ms.locfileid: "59477392"
---
# <a name="linker-tools-warning-lnk4217"></a>Avviso degli strumenti del linker LNK4217

> simbolo '*simbolo*'definito '*filename_1.obj*'è importato dal'*filename_2.obj*'nella funzione'*funzione*'

[declspec](../../cpp/dllexport-dllimport.md) è stato specificato per un simbolo, anche se il simbolo è definito in un file di oggetti della stessa immagine. Rimuovere il `__declspec(dllimport)` modificatore per risolvere il problema.

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