---
title: Errore ML non irreversibile A2006
ms.date: 08/30/2018
ms.topic: error-reference
f1_keywords:
- A2006
helpviewer_keywords:
- A2006
ms.assetid: b8a8f096-95df-42b5-85ed-d2530560a84c
ms.openlocfilehash: 80283bde4dff36e32d276c998f6797b6eeed8160
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50490064"
---
# <a name="ml-nonfatal-error-a2006"></a>Errore ML non irreversibile A2006

**simbolo non definito: identificatore**

È stato effettuato il tentativo di utilizzare un simbolo che non è stato definito.

Potrebbe essersi verificato uno dei seguenti:

- Non è stato definito un simbolo.

- Un campo non è un membro della struttura specificata.

- È stato definito un simbolo in un file di inclusione che non è stato fornito.

- Un simbolo esterno è stato utilizzato senza un' [EXTERN](../../assembler/masm/extern-masm.md) oppure [EXTERNDEF](../../assembler/masm/externdef.md) direttiva.

- Un nome di simbolo è stato digitato correttamente.

- Un'etichetta del codice locale viene fatto riferimento all'esterno del relativo ambito.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>