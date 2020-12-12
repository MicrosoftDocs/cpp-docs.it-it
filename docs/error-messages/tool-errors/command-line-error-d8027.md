---
description: 'Altre informazioni su: Command-Line errore D8027'
title: Errore della riga di comando D8027
ms.date: 11/04/2016
f1_keywords:
- D8027
helpviewer_keywords:
- D8027
ms.assetid: f228220f-0c7f-49a6-a6e0-1f7bd4745aa6
ms.openlocfilehash: 80d0812571043249616108e99e763b105b527475
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97115651"
---
# <a name="command-line-error-d8027"></a>Errore della riga di comando D8027

non è possibile eseguire ' Component '

Il compilatore non è riuscito a eseguire il componente o il linker del compilatore specificato.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Memoria insufficiente per caricare il componente. Se NMAKE ha richiamato il compilatore, eseguire il compilatore all'esterno del makefile.

1. Il sistema operativo corrente non è stato in grado di eseguire il componente. Verificare che il percorso punti ai file eseguibili appropriati per il sistema operativo in uso.

1. Il componente è danneggiato. Ricopiare il componente dai dischi di distribuzione, usando il programma di installazione.

1. Un'opzione non è stata specificata correttamente. Ad esempio:

    ```
    cl /B1 file1.c
    ```
