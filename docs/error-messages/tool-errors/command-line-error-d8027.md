---
title: Errore della riga di comando D8027
ms.date: 11/04/2016
f1_keywords:
- D8027
helpviewer_keywords:
- D8027
ms.assetid: f228220f-0c7f-49a6-a6e0-1f7bd4745aa6
ms.openlocfilehash: 42341507dfc2d3da02639dd28ab1265783452388
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80196885"
---
# <a name="command-line-error-d8027"></a>Errore della riga di comando D8027

non è possibile eseguire ' Component '

Il compilatore non è riuscito a eseguire il componente o il linker del compilatore specificato.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:

1. Memoria insufficiente per caricare il componente. Se NMAKE ha richiamato il compilatore, eseguire il compilatore all'esterno del makefile.

1. Il sistema operativo corrente non è stato in grado di eseguire il componente. Verificare che il percorso punti ai file eseguibili appropriati per il sistema operativo in uso.

1. Il componente è danneggiato. Ricopiare il componente dai dischi di distribuzione, usando il programma di installazione.

1. Un'opzione non è stata specificata correttamente. Ad esempio:

    ```
    cl /B1 file1.c
    ```
