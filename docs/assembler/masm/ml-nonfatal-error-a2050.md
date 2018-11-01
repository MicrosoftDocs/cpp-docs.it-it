---
title: Errore ML non irreversibile A2050
ms.date: 08/30/2018
ms.topic: error-reference
f1_keywords:
- A2050
helpviewer_keywords:
- A2050
ms.assetid: 16f3a58f-4bde-48f1-b0e3-2ed9612780a5
ms.openlocfilehash: 59d08b9c2743a3b45633527bcc54b3e1c4d6a58c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50439715"
---
# <a name="ml-nonfatal-error-a2050"></a>Errore ML non irreversibile A2050

**reale o un numero di BCD non consentito**

Un numero a virgola mobile (VERO) o binary coded decimal (BCD) costante utilizzato diverso da come un inizializzatore di dati.

Si è verificata una delle operazioni seguenti:

- Un numero reale o un archivio BCD è stato usato in un'espressione.

- Un numero reale è stato utilizzato per inizializzare diverso da una direttiva [DWORD](../../assembler/masm/dword.md), [QWORD](../../assembler/masm/qword.md), o [TBYTE](../../assembler/masm/tbyte.md).

- Un archivio BCD è stato utilizzato per inizializzare diverso da una direttiva `TBYTE`.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>