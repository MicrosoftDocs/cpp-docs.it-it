---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4197'
title: Avviso degli strumenti del linker LNK4197
ms.date: 09/05/2018
f1_keywords:
- LNK4197
helpviewer_keywords:
- LNK4197
ms.assetid: 8a976fd7-a74b-4c83-ab66-a9e7d7073c4a
ms.openlocfilehash: a2054caf5e60cc7333c0da70c6027966536e8406
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97294353"
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

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. La stessa esportazione viene specificata sia nella riga di comando (tramite esportazione:) e nel file def.

2. La stessa esportazione è elencata due volte nel file con estensione def con attributi diversi.
