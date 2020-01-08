---
title: Errore ML non irreversibile A2031
ms.date: 12/17/2019
ms.custom: error-reference
f1_keywords:
- A2031
helpviewer_keywords:
- A2031
ms.assetid: d5b11f58-4a00-42be-9062-8fa8728e6306
ms.openlocfilehash: 4764f7296e28e2128fc4fc80e64f39ceb2a8ed8c
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75317071"
---
# <a name="ml-nonfatal-error-a2031"></a>Errore ML non irreversibile A2031

**deve essere un registro di indice o di base**

È stato effettuato un tentativo di utilizzare un registro che non era un registro di base o di indice in un'espressione di memoria.

Ad esempio, le seguenti espressioni generano questo errore:

```asm
[ax]
[bl]
```

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](ml-error-messages.md)
