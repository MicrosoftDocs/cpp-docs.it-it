---
description: Altre informazioni su:/IMPORTS (DUMPBIN)
title: /IMPORTS (DUMPBIN)
ms.date: 11/04/2016
f1_keywords:
- /imports
helpviewer_keywords:
- IMPORTS dumpbin option
- /IMPORTS dumpbin option
- -IMPORTS dumpbin option
ms.assetid: 6a296216-2b1b-40f8-8736-cd4553a22456
ms.openlocfilehash: 86c428280bbca3a4957f7d7a0a640482607547de
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97199792"
---
# <a name="imports-dumpbin"></a>/IMPORTS (DUMPBIN)

```
/IMPORTS[:file]
```

Questa opzione consente di visualizzare l'elenco delle dll (collegate staticamente e a [caricamento ritardato](linker-support-for-delay-loaded-dlls.md)) importate in un file eseguibile o in una dll e tutte le singole importazioni da ognuna di queste dll.

La specifica facoltativa `file` consente di specificare che verranno visualizzate le importazioni solo per tale dll. Ad esempio:

```
dumpbin /IMPORTS:msvcrt.dll
```

## <a name="remarks"></a>Osservazioni

L'output visualizzato da questa opzione è simile all'output di [/exports.](dash-exports.md) .

Solo l'opzione [/HEADERS](headers.md) DUMPBIN può essere usata nei file generati con l'opzione del compilatore [/GL](gl-whole-program-optimization.md).

## <a name="see-also"></a>Vedi anche

[Opzioni di DUMPBIN](dumpbin-options.md)
