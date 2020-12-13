---
description: 'Altre informazioni su: Command-Line avviso D9027'
title: Avviso della riga di comando D9027
ms.date: 11/04/2016
f1_keywords:
- D9027
helpviewer_keywords:
- D9027
ms.assetid: 2a29edc5-5649-48f2-9058-2057c747284c
ms.openlocfilehash: 8c17750f3310072f8f69c77587a1c17fc9377e79
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97136110"
---
# <a name="command-line-warning-d9027"></a>Avviso della riga di comando D9027

il file di origine '' è stato \<filename> ignorato

CL.exe ignorato il file di origine di input.

Questo avviso può essere causato da uno spazio tra l'opzione/Fo e un nome file di output in una riga di comando con l'opzione/c. Ad esempio:

```
cl /c /Fo output.obj input.c
```

Poiché è presente uno spazio tra/Fo e `output.obj` , CL.exe accetta `output.obj` come nome del file di input. Per risolvere il problema, rimuovere lo spazio:

```
cl /c /Fooutput.obj input.c
```
