---
description: 'Altre informazioni su: ML errore non irreversibile A2050'
title: Errore ML non irreversibile A2050
ms.date: 12/17/2019
ms.custom: error-reference
f1_keywords:
- A2050
helpviewer_keywords:
- A2050
ms.assetid: 16f3a58f-4bde-48f1-b0e3-2ed9612780a5
ms.openlocfilehash: 9ae38353d3c2e2a2e25e3e5c4a87e3b3b6888781
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97128999"
---
# <a name="ml-nonfatal-error-a2050"></a>Errore ML non irreversibile A2050

**numero reale o BCD non consentito**

È stato usato un numero a virgola mobile (reale) o una costante BCD (Binary Coded Decimal) diversa da un inizializzatore di dati.

Si è verificata una delle condizioni seguenti:

- In un'espressione è stato utilizzato un numero reale o un BCD.

- È stato usato un numero reale per inizializzare una direttiva diversa da [DWORD](dword.md), [QWORD](qword.md)o [Tbyte](tbyte.md).

- Un BCD è stato utilizzato per inizializzare una direttiva diversa da `TBYTE` .

## <a name="see-also"></a>Vedi anche

[Messaggi di errore ML](ml-error-messages.md)
