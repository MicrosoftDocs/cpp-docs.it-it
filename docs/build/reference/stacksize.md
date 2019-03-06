---
title: STACKSIZE
ms.date: 11/04/2016
f1_keywords:
- STACKSIZE
helpviewer_keywords:
- STACKSIZE .def file statement
ms.assetid: 4d8c79bd-1cb4-4e4d-90f2-b5a7a4d20e7a
ms.openlocfilehash: 5f0c23ad8b8d81f888616042ee5d6ba5bc63bd44
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57412874"
---
# <a name="stacksize"></a>STACKSIZE

Imposta le dimensioni in byte dello stack.

```
STACKSIZE reserve[,commit]
```

## <a name="remarks"></a>Note

Un modo equivalente per impostare lo stack è con il [allocazioni Stack](../../build/reference/stack-stack-allocations.md) (/stack) opzione. Vedere la documentazione relativa all'opzione per informazioni dettagliate *riservare* e `commit` argomenti.

Questa opzione ha effetto sulle DLL.

## <a name="see-also"></a>Vedere anche

[Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)
