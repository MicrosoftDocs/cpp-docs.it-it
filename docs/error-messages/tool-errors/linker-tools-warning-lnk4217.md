---
title: Strumenti del linker LNK4217 avviso | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4217
dev_langs:
- C++
helpviewer_keywords:
- LNK4217
ms.assetid: 280dc03e-5933-4e8d-bb8c-891fbe788738
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3c650eddd8078419f63df48cc91705d2e86eb5c8
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46067982"
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