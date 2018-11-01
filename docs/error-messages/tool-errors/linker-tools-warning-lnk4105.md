---
title: Avviso degli strumenti del linker LNK4105
ms.date: 11/04/2016
f1_keywords:
- LNK4105
helpviewer_keywords:
- LNK4105
ms.assetid: 6c7bebf4-4ea6-4533-a6ed-e563d43abbd7
ms.openlocfilehash: 880c8519a530f492d0c322575a1386af8a7d0187
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50475591"
---
# <a name="linker-tools-warning-lnk4105"></a>Avviso degli strumenti del linker LNK4105

Nessun argomento specificato con l'opzione 'option'; l'opzione verrà ignorata

Questo avviso viene generato solo quando la [/LIBPATH](../../build/reference/libpath-additional-libpath.md) opzione è impostata. Se questa opzione viene specificata alcuna directory, il linker ignora l'opzione e genera questo messaggio di avviso.

Se non è necessaria eseguire l'override le impostazioni della libreria dell'ambiente esistente, rimuovere l'opzione /LIBPATH dalla riga di comando del linker. Se si desidera utilizzare un percorso di ricerca alternative per le librerie, specificare il percorso alternativo seguendo il /LIBPATH (opzione).

## <a name="example"></a>Esempio

```
link /libpath:c:\filepath\lib bar.obj
```

potrebbe indicare al linker di cercare le librerie necessarie in `c:\filepath\lib` prima di eseguire ricerche nelle posizioni predefinite.