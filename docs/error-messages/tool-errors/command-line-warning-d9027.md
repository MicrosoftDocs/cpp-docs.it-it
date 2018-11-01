---
title: Avviso della riga di comando D9027
ms.date: 11/04/2016
f1_keywords:
- D9027
helpviewer_keywords:
- D9027
ms.assetid: 2a29edc5-5649-48f2-9058-2057c747284c
ms.openlocfilehash: f89e7416efe7a0069ee2dae8df921933bbe76bcf
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50482602"
---
# <a name="command-line-warning-d9027"></a>Avviso della riga di comando D9027

file di origine '\<nomefile >' ignorato

CL.exe ignorato il file di origine di input.

Questo avviso può essere causato da uno spazio tra l'opzione /Fo e un nome di file di output in una riga di comando con l'opzione/c. Ad esempio:

```
cl /c /Fo output.obj input.c
```

Poiché è presente uno spazio tra /Fo e `output.obj`, accetta CL.exe `output.obj` come il nome del file di input. Per risolvere il problema, rimuovere lo spazio:

```
cl /c /Fooutput.obj input.c
```