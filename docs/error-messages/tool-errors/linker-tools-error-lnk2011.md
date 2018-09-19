---
title: Strumenti del linker LNK2011 errore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK2011
dev_langs:
- C++
helpviewer_keywords:
- LNK2011
ms.assetid: 04991ef5-49d5-46c7-8eee-a9d1d3fc541e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 18562a21886508ff0766641f95ac2e15b76fd424
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46095391"
---
# <a name="linker-tools-error-lnk2011"></a>Errore degli strumenti del linker LNK2011

oggetto precompilato non collegata. immagine non venga eseguita

Se si usano intestazioni precompilate, collegamento richiede che tutti i file oggetto creati con le intestazioni precompilate devono essere collegati. Se si dispone di un file di origine utilizzato per generare un'intestazione precompilata per l'uso con altri file di origine, è ora necessario includere il file oggetto creato con l'intestazione precompilata.

Ad esempio, se si compila un file denominato stub. cpp per creare un'intestazione precompilata per l'uso con altri file di origine, è necessario collegarlo con stub o si verificherà questo errore. Nelle righe di comando seguente, la riga 1 consente di creare un'intestazione precompilata, COMMON.pch, che viene usato con PROG1. cpp e PROG2. cpp nelle righe di due e tre. Il file stub. cpp contiene solo `#include` righe (lo stesso `#include` righe PROG1. cpp e PROG2. cpp) e viene usato solo per generare le intestazioni precompilate. Nell'ultima riga, stub deve essere collegato evitare LNK2011.

```
cl /c /Yccommon.h stub.cpp
cl /c /Yucommon.h prog1.cpp
cl /c /Yucommon.h prog2.cpp
link /out:prog.exe stub.obj prog1.obj prog2.obj
```