---
title: Errore ML non irreversibile A2050
ms.date: 08/30/2018
ms.custom: error-reference
f1_keywords:
- A2050
helpviewer_keywords:
- A2050
ms.assetid: 16f3a58f-4bde-48f1-b0e3-2ed9612780a5
ms.openlocfilehash: 15c6449ff4207c92dee28120d4f61be641cf01c8
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74856577"
---
# <a name="ml-nonfatal-error-a2050"></a>Errore ML non irreversibile A2050

**numero reale o BCD non consentito**

È stato usato un numero a virgola mobile (reale) o una costante BCD (Binary Coded Decimal) diversa da un inizializzatore di dati.

Si è verificata una delle condizioni seguenti:

- In un'espressione è stato utilizzato un numero reale o un BCD.

- È stato usato un numero reale per inizializzare una direttiva diversa da [DWORD](../../assembler/masm/dword.md), [QWORD](../../assembler/masm/qword.md)o [Tbyte](../../assembler/masm/tbyte.md).

- Un BCD è stato utilizzato per inizializzare una direttiva diversa da `TBYTE`.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>