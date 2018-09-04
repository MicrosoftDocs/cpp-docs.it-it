---
title: Machine Learning errore non irreversibile A2031 | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: error-reference
f1_keywords:
- A2031
dev_langs:
- C++
helpviewer_keywords:
- A2031
ms.assetid: d5b11f58-4a00-42be-9062-8fa8728e6306
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bf6744224847e114e76df6e7ad6470696d3e8387
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43682658"
---
# <a name="ml-nonfatal-error-a2031"></a>Errore ML non irreversibile A2031

**deve essere registro dell'indice o di base**

Usare un registro che non è un registro base o un indice in un'espressione di memoria è stato effettuato il tentativo.

Questo errore è causato ad esempio, le espressioni seguenti:

```asm
[ax]
[bl]
```

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>