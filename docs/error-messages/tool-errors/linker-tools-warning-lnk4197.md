---
title: Avviso degli strumenti del linker LNK4197
ms.date: 09/05/2018
f1_keywords:
- LNK4197
helpviewer_keywords:
- LNK4197
ms.assetid: 8a976fd7-a74b-4c83-ab66-a9e7d7073c4a
ms.openlocfilehash: 92702864a00455e4b70f00dfc9988bfb754e2e64
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80183280"
---
# <a name="linker-tools-warning-lnk4197"></a>Avviso degli strumenti del linker LNK4197

> esportazione di '*exportname*' specificata più volte; uso della prima specifica

Un'esportazione viene specificata in diversi modi. Il linker usa la prima specifica e ignora il resto.

Se si sta ricompilando la libreria di runtime del linguaggio C, è possibile ignorare questo messaggio.

Se un'esportazione viene specificata esattamente allo stesso modo più volte, il linker non emetterà un avviso.

Ad esempio, il seguente contenuto di un file con estensione def genera questo avviso:

```
EXPORTS
   functioname      NONAME
   functioname      @10
```

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:

1. La stessa esportazione viene specificata sia nella riga di comando (tramite esportazione:) e nel file def.

2. La stessa esportazione è elencata due volte nel file con estensione def con attributi diversi.
