---
title: Avviso degli strumenti del linker LNK4105
ms.date: 11/04/2016
f1_keywords:
- LNK4105
helpviewer_keywords:
- LNK4105
ms.assetid: 6c7bebf4-4ea6-4533-a6ed-e563d43abbd7
ms.openlocfilehash: 655a6dfde77984cd0c941ec0d8abb0c4d099c80f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80183293"
---
# <a name="linker-tools-warning-lnk4105"></a>Avviso degli strumenti del linker LNK4105

nessun argomento specificato con l'opzione ' Option '; opzione ignorata

Questo avviso viene visualizzato solo quando è impostata l'opzione [/LIBPATH](../../build/reference/libpath-additional-libpath.md) . Se non viene specificata alcuna directory con questa opzione, il linker ignora l'opzione e genera questo messaggio di avviso.

Se non è necessario eseguire l'override delle impostazioni della libreria ambientale esistente, rimuovere l'opzione/LIBPATH dalla riga di comando del linker. Se si vuole usare un percorso di ricerca alternativo per le librerie, specificare il percorso alternativo dopo l'opzione/LIBPATH.

## <a name="example"></a>Esempio

```
link /libpath:c:\filepath\lib bar.obj
```

indicherà al linker di cercare le librerie richieste in `c:\filepath\lib` prima di cercare nei percorsi predefiniti.
