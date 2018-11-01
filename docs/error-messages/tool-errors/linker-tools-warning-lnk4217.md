---
title: Avviso degli strumenti del linker LNK4217
ms.date: 11/04/2016
f1_keywords:
- LNK4217
helpviewer_keywords:
- LNK4217
ms.assetid: 280dc03e-5933-4e8d-bb8c-891fbe788738
ms.openlocfilehash: 12766241832d39f0b47ed85036c0ebeb0447fc75
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50448048"
---
# <a name="linker-tools-warning-lnk4217"></a>Avviso degli strumenti del linker LNK4217

simbolo 'symbol' importato nella funzione 'function' definito localmente

[declspec](../../cpp/dllexport-dllimport.md) anche se il simbolo è definito localmente è stato specificato per un simbolo. Rimuovere il `__declspec` modificatore per risolvere il problema.

`symbol` è il nome del simbolo definito all'interno dell'immagine. `function` è la funzione che viene importato il simbolo.

Questo avviso non viene visualizzato quando si esegue la compilazione con l'opzione [/clr](../../build/reference/clr-common-language-runtime-compilation.md).

LNK4217 può verificarsi anche se si prova a collegare due moduli, quando invece è necessario compilare il secondo modulo con la libreria di importazione del modulo prima.

```
// LNK4217.cpp
// compile with: /LD
#include "windows.h"
__declspec(dllexport) void func(unsigned short*) {}
```

E quindi,

```
// LNK4217b.cpp
// compile with: /c
#include "windows.h"
__declspec(dllexport) void func(unsigned short*) {}
```

Tentativo di collegare i due moduli consente di ottenere in LNK4217, compilare il secondo esempio con la libreria di importazione del primo campione a risolvere.