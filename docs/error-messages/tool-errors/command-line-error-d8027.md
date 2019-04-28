---
title: Errore della riga di comando D8027
ms.date: 11/04/2016
f1_keywords:
- D8027
helpviewer_keywords:
- D8027
ms.assetid: f228220f-0c7f-49a6-a6e0-1f7bd4745aa6
ms.openlocfilehash: d3a7908ec9e7e37d83fd7b928cad2ef256313c40
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62214181"
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