---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4105'
title: Avviso degli strumenti del linker LNK4105
ms.date: 11/04/2016
f1_keywords:
- LNK4105
helpviewer_keywords:
- LNK4105
ms.assetid: 6c7bebf4-4ea6-4533-a6ed-e563d43abbd7
ms.openlocfilehash: 6536273a0b3e5b6e60b782e5953a70a7b3eb2798
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97294418"
---
# <a name="linker-tools-warning-lnk4105"></a>Avviso degli strumenti del linker LNK4105

nessun argomento specificato con l'opzione ' Option '; opzione ignorata

Questo avviso viene visualizzato solo quando è impostata l'opzione [/LIBPATH](../../build/reference/libpath-additional-libpath.md) . Se non viene specificata alcuna directory con questa opzione, il linker ignora l'opzione e genera questo messaggio di avviso.

Se non è necessario eseguire l'override delle impostazioni della libreria ambientale esistente, rimuovere l'opzione/LIBPATH dalla riga di comando del linker. Se si vuole usare un percorso di ricerca alternativo per le librerie, specificare il percorso alternativo dopo l'opzione/LIBPATH.

## <a name="example"></a>Esempio

```
link /libpath:c:\filepath\lib bar.obj
```

indica al linker di cercare le librerie richieste in prima di `c:\filepath\lib` cercare nei percorsi predefiniti.
