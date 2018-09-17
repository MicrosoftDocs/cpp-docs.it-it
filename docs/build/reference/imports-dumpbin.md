---
title: -IMPORTS (DUMPBIN) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /imports
dev_langs:
- C++
helpviewer_keywords:
- IMPORTS dumpbin option
- /IMPORTS dumpbin option
- -IMPORTS dumpbin option
ms.assetid: 6a296216-2b1b-40f8-8736-cd4553a22456
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c5b3b1e3a74fea278bc142d02f793308b6b0e054
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45713570"
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