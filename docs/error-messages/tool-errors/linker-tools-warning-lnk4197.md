---
title: Strumenti del linker LNK4197 avviso | Microsoft Docs
ms.custom: ''
ms.date: 09/05/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4197
dev_langs:
- C++
helpviewer_keywords:
- LNK4197
ms.assetid: 8a976fd7-a74b-4c83-ab66-a9e7d7073c4a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 55044ce511e2584e2859b7e8a8d723cbe0976105
ms.sourcegitcommit: d10a2382832373b900b1780e1190ab104175397f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2018
ms.locfileid: "43894486"
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