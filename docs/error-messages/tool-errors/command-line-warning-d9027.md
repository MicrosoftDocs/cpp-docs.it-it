---
title: Avviso della riga di comando D9027
ms.date: 11/04/2016
f1_keywords:
- D9027
helpviewer_keywords:
- D9027
ms.assetid: 2a29edc5-5649-48f2-9058-2057c747284c
ms.openlocfilehash: 46ed5750bd1f315f20658ace9b83fac532fbbabb
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80196678"
---
# <a name="command-line-warning-d9027"></a>Avviso della riga di comando D9027

il file di origine '\<filename >' è stato ignorato

CL. exe ha ignorato il file di origine di input.

Questo avviso può essere causato da uno spazio tra l'opzione/Fo e un nome file di output in una riga di comando con l'opzione/c. Ad esempio:

```
cl /c /Fo output.obj input.c
```

Poiché è presente uno spazio tra/Fo e `output.obj`, CL. exe accetta `output.obj` come nome del file di input. Per risolvere il problema, rimuovere lo spazio:

```
cl /c /Fooutput.obj input.c
```
