---
description: 'Altre informazioni su: STACKSIZE'
title: STACKSIZE
ms.date: 11/04/2016
f1_keywords:
- STACKSIZE
helpviewer_keywords:
- STACKSIZE .def file statement
ms.assetid: 4d8c79bd-1cb4-4e4d-90f2-b5a7a4d20e7a
ms.openlocfilehash: b5d52bccc09979084b9023d380e86fe90e4def32
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97230341"
---
# <a name="stacksize"></a>STACKSIZE

Imposta le dimensioni in byte dello stack.

```
STACKSIZE reserve[,commit]
```

## <a name="remarks"></a>Commenti

Un modo equivalente per impostare lo stack è con l'opzione [allocazioni dello stack](stack-stack-allocations.md) (/stack). Per informazioni dettagliate sulla *riserva* e sugli argomenti, vedere la documentazione relativa a tale opzione `commit` .

Questa opzione non ha alcun effetto sulle dll.

## <a name="see-also"></a>Vedi anche

[Regole per Module-Definition istruzioni](rules-for-module-definition-statements.md)
