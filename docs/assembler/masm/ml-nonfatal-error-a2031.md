---
title: Errore ML non irreversibile A2031
ms.date: 08/30/2018
ms.custom: error-reference
f1_keywords:
- A2031
helpviewer_keywords:
- A2031
ms.assetid: d5b11f58-4a00-42be-9062-8fa8728e6306
ms.openlocfilehash: f964c67ba7bf399e9a3761e4e201662a6a712a1b
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74856701"
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

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>