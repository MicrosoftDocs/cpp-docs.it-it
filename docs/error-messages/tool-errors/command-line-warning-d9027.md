---
title: Avviso della riga di comando D9027 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- D9027
dev_langs:
- C++
helpviewer_keywords:
- D9027
ms.assetid: 2a29edc5-5649-48f2-9058-2057c747284c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 105ebbf62027ac3d9377c513c4f7c59e261b983d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46112525"
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