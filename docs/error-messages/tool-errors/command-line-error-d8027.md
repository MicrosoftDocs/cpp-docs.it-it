---
title: Errore della riga di comando D8027 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- D8027
dev_langs:
- C++
helpviewer_keywords:
- D8027
ms.assetid: f228220f-0c7f-49a6-a6e0-1f7bd4745aa6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8234835d3bb0545c8a72bf35cfb55b2e18bc7da2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46070379"
---
# <a name="command-line-error-d8027"></a>Errore della riga di comando D8027

Impossibile eseguire 'component'

Il compilatore non è stato eseguito il componente specificato del compilatore o il linker.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Memoria insufficiente per caricare il componente. Se NMAKE richiamato il compilatore, eseguire il compilatore di fuori del makefile.

1. Il sistema operativo corrente non è stato eseguito il componente. Assicurarsi che il percorso punta ai file eseguibili appropriato al sistema operativo.

1. Il componente è stato danneggiato. Copiare il componente dai dischi originali usando il programma di installazione.

1. È stata specificata un'opzione in modo non corretto. Ad esempio:

    ```
    cl /B1 file1.c
    ```