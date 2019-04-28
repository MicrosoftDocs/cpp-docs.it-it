---
title: STACKSIZE
ms.date: 11/04/2016
f1_keywords:
- STACKSIZE
helpviewer_keywords:
- STACKSIZE .def file statement
ms.assetid: 4d8c79bd-1cb4-4e4d-90f2-b5a7a4d20e7a
ms.openlocfilehash: 2d27b4fd596098f4abc5bb0d804d87bd08f70a60
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62318356"
---
# <a name="stacksize"></a>STACKSIZE

Imposta le dimensioni in byte dello stack.

```
STACKSIZE reserve[,commit]
```

## <a name="remarks"></a>Note

Un modo equivalente per impostare lo stack è con il [allocazioni Stack](stack-stack-allocations.md) (/stack) opzione. Vedere la documentazione relativa all'opzione per informazioni dettagliate *riservare* e `commit` argomenti.

Questa opzione ha effetto sulle DLL.

## <a name="see-also"></a>Vedere anche

[Regole relative alle istruzioni di definizione dei moduli](rules-for-module-definition-statements.md)
