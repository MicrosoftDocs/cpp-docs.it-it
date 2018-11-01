---
title: Avviso degli strumenti del linker LNK4197
ms.date: 09/05/2018
f1_keywords:
- LNK4197
helpviewer_keywords:
- LNK4197
ms.assetid: 8a976fd7-a74b-4c83-ab66-a9e7d7073c4a
ms.openlocfilehash: 0abad1b98ff4782f077312752603ec17fd611c12
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50527335"
---
# <a name="linker-tools-warning-lnk4197"></a>Avviso degli strumenti del linker LNK4197

> esportare '*exportname*' specificato più volte; verrà utilizzata la prima specifica

Un'esportazione è stata specificata più e diversi modi. Il linker utilizza la prima specifica e ignora il resto.

Se si rigenera la libreria di runtime C, è possibile ignorare questo messaggio.

Se un'esportazione sia specificata esattamente allo stesso modo più volte, il linker non emetterà un avviso.

Ad esempio, il contenuto seguente di un file con estensione def provocherebbe l'avviso:

```
EXPORTS
   functioname      NONAME
   functioname      @10
```

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Viene specificata la stessa esportazione sia nella riga di comando (tramite esportazione:) e nel file def.

2. La stessa esportazione viene elencata due volte nel file def con attributi diversi.