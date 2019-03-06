---
title: /IMPORTS (DUMPBIN)
ms.date: 11/04/2016
f1_keywords:
- /imports
helpviewer_keywords:
- IMPORTS dumpbin option
- /IMPORTS dumpbin option
- -IMPORTS dumpbin option
ms.assetid: 6a296216-2b1b-40f8-8736-cd4553a22456
ms.openlocfilehash: 94009670329887a0b8a35e7b8b36996a84c7faa6
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57417502"
---
# <a name="imports-dumpbin"></a>/IMPORTS (DUMPBIN)

```
/IMPORTS[:file]
```

Questa opzione consente di visualizzare l'elenco di DLL (entrambi collegate staticamente e [caricata ritardato](../../build/reference/linker-support-for-delay-loaded-dlls.md)) che vengono importati in un file eseguibile o DLL e tutte le importazioni singoli da ognuna di queste DLL.

L'opzione facoltativa `file` specification consente di specificare che verranno visualizzate le importazioni per solo tale DLL. Ad esempio:

```
dumpbin /IMPORTS:msvcrt.dll
```

## <a name="remarks"></a>Note

L'output restituito da questa opzione è simile al [/EXPORTS](../../build/reference/dash-exports.md) output.

Solo le [/HEADERS](../../build/reference/headers.md) (opzione dumpbin) è disponibile per l'uso con i file generati con la [/GL](../../build/reference/gl-whole-program-optimization.md) opzione del compilatore.

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)
