---
title: Strumenti del linker LNK4105 avviso | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4105
dev_langs:
- C++
helpviewer_keywords:
- LNK4105
ms.assetid: 6c7bebf4-4ea6-4533-a6ed-e563d43abbd7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4411421741cf8bf7c714a6322d58bd177e7e7270
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46024983"
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