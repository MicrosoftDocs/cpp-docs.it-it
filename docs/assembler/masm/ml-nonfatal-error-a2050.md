---
title: Errore ML non irreversibile A2050
ms.date: 12/17/2019
ms.custom: error-reference
f1_keywords:
- A2050
helpviewer_keywords:
- A2050
ms.assetid: 16f3a58f-4bde-48f1-b0e3-2ed9612780a5
ms.openlocfilehash: 311aedd0cc739fd862efb0a18cc444b3fb75b165
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75316980"
---
# <a name="ml-nonfatal-error-a2050"></a>Errore ML non irreversibile A2050

**numero reale o BCD non consentito**

È stato usato un numero a virgola mobile (reale) o una costante BCD (Binary Coded Decimal) diversa da un inizializzatore di dati.

Si è verificata una delle condizioni seguenti:

- In un'espressione è stato utilizzato un numero reale o un BCD.

- È stato usato un numero reale per inizializzare una direttiva diversa da [DWORD](dword.md), [QWORD](qword.md)o [Tbyte](tbyte.md).

- Un BCD è stato utilizzato per inizializzare una direttiva diversa da `TBYTE`.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](ml-error-messages.md)
