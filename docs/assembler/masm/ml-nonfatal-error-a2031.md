---
title: Errore ML non irreversibile A2031
ms.date: 08/30/2018
ms.topic: error-reference
f1_keywords:
- A2031
helpviewer_keywords:
- A2031
ms.assetid: d5b11f58-4a00-42be-9062-8fa8728e6306
ms.openlocfilehash: 794fb31fbc22bdefddf9f19e6efcb3c34bbc1861
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50431889"
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