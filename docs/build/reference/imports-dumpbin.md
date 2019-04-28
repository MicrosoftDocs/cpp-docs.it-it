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
ms.openlocfilehash: c8b0f88b38eb657fe4d3916ef0df13972e985cbe
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62291840"
---
# <a name="imports-dumpbin"></a>/IMPORTS (DUMPBIN)

```
/IMPORTS[:file]
```

Questa opzione consente di visualizzare l'elenco di DLL (entrambi collegate staticamente e [caricata ritardato](linker-support-for-delay-loaded-dlls.md)) che vengono importati in un file eseguibile o DLL e tutte le importazioni singoli da ognuna di queste DLL.

L'opzione facoltativa `file` specification consente di specificare che verranno visualizzate le importazioni per solo tale DLL. Ad esempio:

```
dumpbin /IMPORTS:msvcrt.dll
```

## <a name="remarks"></a>Note

L'output restituito da questa opzione è simile al [/EXPORTS](dash-exports.md) output.

Solo le [/HEADERS](headers.md) (opzione dumpbin) è disponibile per l'uso con i file generati con la [/GL](gl-whole-program-optimization.md) opzione del compilatore.

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](dumpbin-options.md)
