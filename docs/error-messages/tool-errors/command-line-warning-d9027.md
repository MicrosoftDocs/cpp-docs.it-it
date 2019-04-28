---
title: Avviso della riga di comando D9027
ms.date: 11/04/2016
f1_keywords:
- D9027
helpviewer_keywords:
- D9027
ms.assetid: 2a29edc5-5649-48f2-9058-2057c747284c
ms.openlocfilehash: f89e7416efe7a0069ee2dae8df921933bbe76bcf
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62214127"
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